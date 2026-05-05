-- Boards compatible with the selected MCU, with additional filter parameters.
-- Parameters:
--   %1 = search text (empty = no text filter)
--   %2 = selected device uid
--   %3 = is bare metal flag (0 or 1)
--   %4 = vendor IN clause values, SQL-quoted comma-separated ('' when inactive)
--   %5 = category IN clause values, SQL-quoted comma-separated ('' when inactive)
--   %6 = display_socket IN clause values, SQL-quoted comma-separated ('' when inactive)
--   %7 = vendor filter active (1 = apply, 0 = skip)
--   %8 = category filter active (1 = apply, 0 = skip)
--   %9 = display_socket filter active (1 = apply, 0 = skip)
--   %10 = mikrobus_count minimum
--   %11 = mikrobus_count maximum
--   %12 = mikrobus_count filter active (1 = apply, 0 = skip)

WITH selected_device AS (
    SELECT '%2' AS uid
),
selected_mcu_cards AS (
    SELECT dd.uid
    FROM DeviceDetails dd
    WHERE dd.is_mcu_card = 1
      AND dd.device_uid = (SELECT uid FROM selected_device)
)
SELECT DISTINCT
    Boards.*,
    Boards.uid AS item_uid,
    Boards.name AS item_title
FROM Boards
WHERE
(
    /* 1) Boards with soldered MCU */
    Boards.soldered_device = (SELECT uid FROM selected_device)

    /* 2) Boards directly supporting the selected MCU */
    OR EXISTS (
        SELECT 1
        FROM BoardToDevice btd
        WHERE btd.board_uid = Boards.uid
          AND btd.device_uid = (SELECT uid FROM selected_device)
    )

    /* 3) Boards supporting MCU-card variant(s) of selected MCU */
    OR EXISTS (
        SELECT 1
        FROM BoardToDevice btd
        WHERE btd.board_uid = Boards.uid
          AND btd.device_uid IN (SELECT uid FROM selected_mcu_cards)
    )

    /* 4) Family generic board */
    OR Boards.uid = (
        CASE
            WHEN (
                SELECT family_uid FROM Devices WHERE uid = (SELECT uid FROM selected_device)
            ) LIKE '%ARM%' THEN 'GENERIC_ARM_BOARD'
            WHEN (
                SELECT family_uid FROM Devices WHERE uid = (SELECT uid FROM selected_device)
            ) LIKE '%PIC%' THEN 'GENERIC_PIC_BOARD'
            WHEN (
                SELECT family_uid FROM Devices WHERE uid = (SELECT uid FROM selected_device)
            ) LIKE '%DSPIC%' THEN 'GENERIC_DSPIC_BOARD'
            WHEN (
                SELECT family_uid FROM Devices WHERE uid = (SELECT uid FROM selected_device)
            ) LIKE '%AVR%' THEN 'GENERIC_AVR_BOARD'
            WHEN (
                SELECT family_uid FROM Devices WHERE uid = (SELECT uid FROM selected_device)
            ) LIKE '%RISCV%' THEN 'GENERIC_RISCV_BOARD'
            ELSE NULL
        END
    )
)
AND CASE
    WHEN (
        SELECT SelectedSDK.uid
        FROM SelectedSDK
        LIMIT 1
    ) LIKE '%legacy%' THEN 1
    WHEN 0 == %3 THEN EXISTS (
        SELECT 1
        FROM BoardToDevice btd
        JOIN Devices d ON btd.device_uid = d.uid
        WHERE btd.board_uid = Boards.uid AND d.sdk_support = 1
    )
    ELSE 1
END
-- Text search (empty string passes all)
AND (
    '%1' = ''
    OR Boards.name LIKE '%%1%'
    OR Boards.uid LIKE '%%1%'
    OR Boards.category LIKE '%%1%'
)
-- Vendor filter: %7=0 skips; %4 always has at least '' to keep IN() syntactically valid
AND (%7 = 0 OR Boards.vendor IN (%4))
-- Category filter: %8=0 skips; %5 always has at least '' to keep IN() syntactically valid
AND (%8 = 0 OR Boards.category IN (%5))
-- Display socket filter: %9=0 skips; %6 always has at least '' to keep IN() syntactically valid
AND (%9 = 0 OR Boards.display_socket IN (%6))
-- MikroBUS count range filter
AND (
    %12 = 0
    OR COALESCE(Boards.mikrobus_count, 0) BETWEEN %10 AND %11
)
ORDER BY
    Boards.sort_order DESC,
    Boards.name;
