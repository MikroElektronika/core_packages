-- Returns distinct filter option values and ranges for the MCU page filter panel.
-- filter_type values:
--   'vendor'        -> one row per distinct vendor, filter_value = vendor name
--   'core_name'     -> one row per distinct core, filter_value = core name
--   'software_support' -> one row per software type, filter_value = readable label
--   'architecture'     -> one row per architecture, filter_value = readable label
--   'flash_range'   -> single row, filter_value = 'min,max' in bytes
--   'ram_range'     -> single row, filter_value = 'min,max' in bytes
--   'pin_count_range' -> single row, filter_value = 'min,max'
--   'max_speed_range' -> single row, filter_value = 'min,max' in MHz

WITH device_pin_counts AS (
    SELECT
        dtp.device_uid,
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
),
device_cores AS (
    SELECT
        uid,
        JSON_EXTRACT(sdk_config, '$.CORE_NAME') AS core_name
    FROM
        Devices
),
device_package_types AS (
    SELECT
        dtp.device_uid,
        TRIM(
            COALESCE(
                JSON_EXTRACT(pkg.sdk_config, '$._MSDK_PACKAGE_NAME_'),
                JSON_EXTRACT(pkg.sdk_config, '$._MSDK_DIP_SOCKET_TYPE_'),
                ''
            )
        ) AS package_type
    FROM
        DeviceToPackage dtp
        JOIN Packages pkg ON pkg.uid = dtp.package_uid
),
device_software_support AS (
    SELECT
        uid,
        CASE
            WHEN sdk_support = 1 THEN 'mikroSDK'
            ELSE 'Bare metal'
        END AS software_support
    FROM
        Devices
),
device_architecture AS (
    SELECT
        uid,
        'Dual Core' AS architecture
    FROM
        Devices
    WHERE
        TRIM(COALESCE(core_info, '')) != ''
)

SELECT
    'vendor' AS filter_type,
    vendor AS filter_value,
    COUNT(*) AS item_count
FROM Devices
WHERE uid NOT IN (SELECT uid FROM DeviceDetails WHERE is_mcu_card = 1)
  AND vendor != ''
GROUP BY vendor

UNION ALL

SELECT
    'core_name' AS filter_type,
    device_cores.core_name AS filter_value,
    COUNT(*) AS item_count
FROM
    device_cores
    JOIN Devices ON Devices.uid = device_cores.uid
WHERE
    Devices.uid NOT IN (SELECT uid FROM DeviceDetails WHERE is_mcu_card = 1)
    AND device_cores.core_name IS NOT NULL
    AND device_cores.core_name != ''
GROUP BY
    device_cores.core_name

UNION ALL

SELECT
    'software_support' AS filter_type,
    device_software_support.software_support AS filter_value,
    COUNT(*) AS item_count
FROM
    device_software_support
    JOIN Devices ON Devices.uid = device_software_support.uid
WHERE
    Devices.uid NOT IN (SELECT uid FROM DeviceDetails WHERE is_mcu_card = 1)
GROUP BY
    device_software_support.software_support

UNION ALL

SELECT
    'architecture' AS filter_type,
    device_architecture.architecture AS filter_value,
    COUNT(*) AS item_count
FROM
    device_architecture
    JOIN Devices ON Devices.uid = device_architecture.uid
WHERE
    Devices.uid NOT IN (SELECT uid FROM DeviceDetails WHERE is_mcu_card = 1)
GROUP BY
    device_architecture.architecture

UNION ALL

SELECT
    'package_type' AS filter_type,
    device_package_types.package_type AS filter_value,
    COUNT(*) AS item_count
FROM
    device_package_types
    JOIN Devices ON Devices.uid = device_package_types.device_uid
WHERE
    Devices.uid NOT IN (SELECT uid FROM DeviceDetails WHERE is_mcu_card = 1)
    AND device_package_types.package_type != ''
GROUP BY
    device_package_types.package_type

UNION ALL

SELECT
    'flash_range' AS filter_type,
    CAST(MIN(CAST(flash AS INTEGER)) AS TEXT) || ',' || CAST(MAX(CAST(flash AS INTEGER)) AS TEXT) AS filter_value,
    COUNT(*) AS item_count
FROM Devices
WHERE uid NOT IN (SELECT uid FROM DeviceDetails WHERE is_mcu_card = 1)

UNION ALL

SELECT
    'ram_range' AS filter_type,
    CAST(MIN(CAST(ram AS INTEGER)) AS TEXT) || ',' || CAST(MAX(CAST(ram AS INTEGER)) AS TEXT) AS filter_value,
    COUNT(*) AS item_count
FROM Devices
WHERE uid NOT IN (SELECT uid FROM DeviceDetails WHERE is_mcu_card = 1)

UNION ALL

SELECT
    'pin_count_range' AS filter_type,
    CAST(MIN(device_pin_counts.pin_count) AS TEXT) || ',' || CAST(MAX(device_pin_counts.pin_count) AS TEXT) AS filter_value,
    COUNT(*) AS item_count
FROM
    device_pin_counts
    JOIN Devices ON Devices.uid = device_pin_counts.device_uid
WHERE
    Devices.uid NOT IN (SELECT uid FROM DeviceDetails WHERE is_mcu_card = 1)
    AND device_pin_counts.pin_count > 0

UNION ALL

SELECT
    'max_speed_range' AS filter_type,
    CAST(MIN(CAST(TRIM(Devices.max_speed) AS INTEGER)) AS TEXT) || ',' ||
        CAST(MAX(CAST(TRIM(Devices.max_speed) AS INTEGER)) AS TEXT) AS filter_value,
    COUNT(*) AS item_count
FROM Devices
WHERE uid NOT IN (SELECT uid FROM DeviceDetails WHERE is_mcu_card = 1)
  AND TRIM(COALESCE(Devices.max_speed, '')) != '';
