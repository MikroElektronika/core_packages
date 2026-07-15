-- Devices query (pure MCU list for devices-first setup flow)
WITH device_pin_counts AS (
    SELECT
        dtp.device_uid,
        dtp.package_uid,
        CAST(
            SUBSTR(dtp.package_uid, 0, INSTR(dtp.package_uid, '/'))
            AS INTEGER
        ) AS pin_count
    FROM
        DeviceToPackage dtp
    WHERE
        dtp.rowid = (
            SELECT
                MIN(dtp2.rowid)
            FROM
                DeviceToPackage dtp2
            WHERE
                dtp2.device_uid = dtp.device_uid
        )
)
SELECT
    Devices.*,
    Devices.uid AS item_uid,
    Devices.name AS item_title,
    device_pin_counts.package_uid AS package_uid,
    COALESCE(device_pin_counts.pin_count, 0) AS pin_count
FROM
    Devices
    LEFT JOIN device_pin_counts ON Devices.uid = device_pin_counts.device_uid
WHERE
    -- Exclude MCU-card wrapper entries (e.g. MCU_CARD_*, SIBRAIN_*), keep standalone MCU rows.
    Devices.uid NOT IN (
        SELECT uid
        FROM DeviceDetails
        WHERE is_mcu_card = 1
    )
    AND (
        (Devices.name LIKE '%%2%')
        OR (Devices.uid LIKE '%%2%')
        OR (Devices.vendor LIKE '%%2%')
        OR (Devices.family_uid LIKE '%%2%')
        OR (Devices.ram LIKE '%%2%')
        OR (CAST(CAST(Devices.ram AS INTEGER) / 1024 AS TEXT) LIKE '%%2%')
        OR (CAST(CAST(Devices.ram AS INTEGER) / 1024 / 1024 AS TEXT) LIKE '%%2%')
        OR (CAST(CAST(Devices.ram AS INTEGER) / 1024 / 1024 / 1024 AS TEXT) LIKE '%%2%')
        OR (Devices.flash LIKE '%%2%')
        OR (Devices.max_speed LIKE '%%2%')
        OR (
            CAST(
                COALESCE(device_pin_counts.pin_count, 0)
                AS TEXT
            ) LIKE '%%2%'
        )
    )
ORDER BY
    Devices.uid;
