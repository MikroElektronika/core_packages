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
    Boards.uid  AS item_uid,
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
AND
(
    Boards.name LIKE '%%1%'
    OR Boards.uid LIKE '%%1%'
    OR Boards.category LIKE '%%1%'
)
ORDER BY
    Boards.sort_order DESC,
    Boards.name;
