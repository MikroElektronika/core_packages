WITH selected_mcu_cards AS (
    SELECT
        dd.uid
    FROM
        DeviceDetails dd
    WHERE
        dd.is_mcu_card = 1
        AND dd.device_uid = '%2'
)
SELECT
    EXISTS(
        SELECT
            1
        FROM
            Boards
        WHERE
            Boards.uid = '%1'
            AND (
                Boards.soldered_device = '%2'
                OR EXISTS (
                    SELECT
                        1
                    FROM
                        BoardToDevice btd
                    WHERE
                        btd.board_uid = Boards.uid
                        AND btd.device_uid = '%2'
                )
                OR EXISTS (
                    SELECT
                        1
                    FROM
                        BoardToDevice btd
                    WHERE
                        btd.board_uid = Boards.uid
                        AND btd.device_uid IN (SELECT uid FROM selected_mcu_cards)
                )
                OR Boards.uid = (
                    CASE
                        WHEN (
                            SELECT
                                family_uid
                            FROM
                                Devices
                            WHERE
                                uid = '%2'
                        ) LIKE '%ARM%' THEN 'GENERIC_ARM_BOARD'
                        WHEN (
                            SELECT
                                family_uid
                            FROM
                                Devices
                            WHERE
                                uid = '%2'
                        ) LIKE '%PIC%' THEN 'GENERIC_PIC_BOARD'
                        WHEN (
                            SELECT
                                family_uid
                            FROM
                                Devices
                            WHERE
                                uid = '%2'
                        ) LIKE '%DSPIC%' THEN 'GENERIC_DSPIC_BOARD'
                        WHEN (
                            SELECT
                                family_uid
                            FROM
                                Devices
                            WHERE
                                uid = '%2'
                        ) LIKE '%AVR%' THEN 'GENERIC_AVR_BOARD'
                        WHEN (
                            SELECT
                                family_uid
                            FROM
                                Devices
                            WHERE
                                uid = '%2'
                        ) LIKE '%RISCV%' THEN 'GENERIC_RISCV_BOARD'
                        ELSE NULL
                    END
                )
            )
    ) AS supported;
