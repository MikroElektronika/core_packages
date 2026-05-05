-- Filtered MCU list for device-first setup flow
-- Parameters:
--   %1  = search text (empty = no text filter)
--   %2  = vendor IN clause values, SQL-quoted comma-separated e.g. 'STMicroelectronics','NXP' ('') when inactive)
--   %3  = core_name IN clause values, SQL-quoted comma-separated ('') when inactive)
--   %4  = flash min bytes (0 = no lower bound)
--   %5  = flash max bytes (0 = no upper bound)
--   %6  = ram min bytes  (0 = no lower bound)
--   %7  = ram max bytes  (0 = no upper bound)
--   %8  = pin_count min  (0 = no lower bound)
--   %9  = pin_count max  (0 = no upper bound)
--   %10 = vendor filter active (1 = apply, 0 = skip)
--   %11 = core filter active (1 = apply, 0 = skip)
--   %12 = package_type IN clause values, SQL-quoted comma-separated ('') when inactive)
--   %13 = package filter active (1 = apply, 0 = skip)
--   %14 = software_support IN clause values, SQL-quoted comma-separated ('') when inactive)
--   %15 = software filter active (1 = apply, 0 = skip)
--   %16 = architecture IN clause values, SQL-quoted comma-separated ('') when inactive)
--   %17 = architecture filter active (1 = apply, 0 = skip)
--   %18 = max_speed min (MHz) (0 = no min bound)
--   %19 = max_speed max (MHz) (0 = no max bound)

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
    Devices.*,
    Devices.uid AS item_uid,
    Devices.name AS item_title,
    COALESCE(device_pin_counts.pin_count, 0) AS pin_count
FROM
    Devices
    LEFT JOIN device_pin_counts ON Devices.uid = device_pin_counts.device_uid
WHERE
    Devices.uid NOT IN (
        SELECT uid FROM DeviceDetails WHERE is_mcu_card = 1
    )
    -- Text search (empty string passes all)
    AND (
        '%1' = ''
        OR Devices.name LIKE '%%1%'
        OR Devices.uid LIKE '%%1%'
        OR Devices.vendor LIKE '%%1%'
        OR (
            COALESCE(
                JSON_EXTRACT(Devices.sdk_config, '$.CORE_NAME'),
                ''
            ) LIKE '%%1%'
        )
        OR CAST(CAST(Devices.ram AS INTEGER) / 1024 AS TEXT) LIKE '%%1%'
        OR CAST(CAST(Devices.flash AS INTEGER) / 1024 AS TEXT) LIKE '%%1%'
        OR Devices.max_speed LIKE '%%1%'
        OR CAST(COALESCE(device_pin_counts.pin_count, 0) AS TEXT) LIKE '%%1%'
    )
    -- Vendor filter: %10=0 skips; %2 always has at least '' to keep IN() syntactically valid
    AND (%10 = 0 OR Devices.vendor IN (%2))
    -- Core filter: %11=0 skips; %3 always has at least '' to keep IN() syntactically valid
    AND (
        %11 = 0
        OR COALESCE(JSON_EXTRACT(Devices.sdk_config, '$.CORE_NAME'), '') IN (%3)
    )
    -- Flash range filter (both 0 = no filter)
    AND (
        (%4 = 0 AND %5 = 0)
        OR CAST(Devices.flash AS INTEGER) BETWEEN %4 AND %5
    )
    -- RAM range filter (both 0 = no filter)
    AND (
        (%6 = 0 AND %7 = 0)
        OR CAST(Devices.ram AS INTEGER) BETWEEN %6 AND %7
    )
    -- Pin count range filter (both 0 = no filter)
    AND (
        (%8 = 0 AND %9 = 0)
        OR COALESCE(device_pin_counts.pin_count, 0) BETWEEN %8 AND %9
    )
    -- Max speed range filter (both 0 = no filter)
    AND (
        (%18 = 0 AND %19 = 0)
        OR COALESCE(CAST(TRIM(Devices.max_speed) AS INTEGER), 0) BETWEEN %18 AND %19
    )
    -- Package filter: %13=0 skips; %12 always has at least '' to keep IN() syntactically valid
    AND (
        %13 = 0
        OR EXISTS (
            SELECT
                1
            FROM
                device_package_types dpt
            WHERE
                dpt.device_uid = Devices.uid
                AND dpt.package_type IN (%12)
        )
    )
    -- Software support filter: %15=0 skips; %14 always has at least '' to keep IN() syntactically valid
    AND (
        %15 = 0
        OR EXISTS (
            SELECT
                1
            FROM
                device_software_support dss
            WHERE
                dss.uid = Devices.uid
                AND dss.software_support IN (%14)
        )
    )
    -- Architecture filter: %17=0 skips; %16 always has at least '' to keep IN() syntactically valid
    AND (
        %17 = 0
        OR EXISTS (
            SELECT
                1
            FROM
                device_architecture da
            WHERE
                da.uid = Devices.uid
                AND da.architecture IN (%16)
        )
    )
ORDER BY
    Devices.uid;
