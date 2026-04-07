-- Devices query (pure MCU list for devices-first setup flow)
SELECT
    Devices.*,
    Devices.uid AS item_uid,
    Devices.name AS item_title,
    (
        SELECT
            SUBSTR(dtp.package_uid, 0, INSTR(dtp.package_uid, '/'))
        FROM
            DeviceToPackage dtp
        WHERE
            dtp.device_uid = Devices.uid
        LIMIT
            1
    ) AS pin_count
FROM
    Devices
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
        OR (pin_count LIKE '%%2%')
    )
ORDER BY
    Devices.uid;
