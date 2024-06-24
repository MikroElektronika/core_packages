-- Devices query
SELECT
    -- item_uid is used by NECTO to diferentiate between items, and item_title is used to display item title in
    *,
    (uid || '|' || replace(package_uid, '/', '|')) AS item_uid,
    (uid || '|' || replace(package_uid, '/', '|')) AS item_title,
    (SUBSTR(package_uid, 0, INSTR(package_uid, '/'))) AS pin_count
FROM
    Devices
    LEFT JOIN DeviceToPackage ON Devices.uid == DeviceToPackage.device_uid
    AND DeviceToPackage.package_uid LIKE '%%1%'
WHERE
    uid IN (
        SELECT
            device_uid
        FROM
            BoardToDevice
        WHERE
            board_uid = (
                SELECT
                    SelectedBoard.uid
                FROM
                    SelectedBoard
                LIMIT
                    1
            )
        INTERSECT
        SELECT
            device_uid
        FROM
            CompilerToDevice
        WHERE
            compiler_uid = (
                SELECT
                    SelectedCompiler.uid
                FROM
                    SelectedCompiler
                LIMIT
                    1
            )
        INTERSECT
        SELECT
            device_uid
        FROM
            SDKToDevice
        WHERE
            sdk_uid = (
                SELECT
                    SelectedSDK.uid
                FROM
                    SelectedSDK
                LIMIT
                    1
            )
    )
    AND CASE
        WHEN (
            SELECT
                SelectedSDK.uid
            FROM
                SelectedSDK
            LIMIT
                1
        ) LIKE '%legacy%' THEN 1
        WHEN 0 == %3 THEN (Devices.sdk_support == 1)
        ELSE 1
    END
    AND CASE
        WHEN (
            SELECT
                SelectedSDK.uid
            FROM
                SelectedSDK
            LIMIT
                1
        ) LIKE '%legacy%' THEN 1
        WHEN 1 == %3 THEN 1
        WHEN (SELECT uid FROM SelectedCompiler) == "mchp_xc8" THEN (Devices.necto_config != "")
        ELSE 1
    END
    AND (
        (Devices.name LIKE '%%2%')
        OR (Devices.uid LIKE '%%2%')
        OR (Devices.vendor LIKE '%%2%')
        OR (Devices.family_uid LIKE '%%2%')
        OR (Devices.ram LIKE '%%2%')
        OR (
            CAST(CAST(Devices.ram AS INTEGER) / 1024 AS TEXT) LIKE '%%2%'
        )
        OR (
            CAST(
                CAST(Devices.ram AS INTEGER) / 1024 / 1024 AS TEXT
            ) LIKE '%%2%'
        )
        OR (
            CAST(
                CAST(Devices.ram AS INTEGER) / 1024 / 1024 / 1024 AS TEXT
            ) LIKE '%%2%'
        )
        OR (Devices.flash LIKE '%%2%')
        OR (Devices.max_speed LIKE '%%2%')
        OR (pin_count LIKE '%%2%')
    ) --
