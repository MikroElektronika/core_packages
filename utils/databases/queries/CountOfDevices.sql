-- Devices query
SELECT
    -- item_uid is used by NECTO to diferentiate between items, and item_title is used to display item title in
	COUNT(*) AS "count",
    (SUBSTR(package_uid,0, INSTR(package_uid, '/') )) AS pin_count
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
    AND (
        (Devices.name LIKE '%%2%')
        OR (Devices.uid LIKE '%%2%')
        OR (Devices.vendor LIKE '%%2%')
        OR (Devices.family_uid LIKE '%%2%')
        OR (Devices.ram LIKE '%%2%')
        OR (CAST(CAST(Devices.ram AS INTEGER) / 1024 AS TEXT)  LIKE '%%2%') 
        OR (CAST(CAST(Devices.ram AS INTEGER) / 1024 / 1024 AS TEXT)  LIKE '%%2%') 
        OR (CAST(CAST(Devices.ram AS INTEGER) / 1024 / 1024 /1024 AS TEXT)  LIKE '%%2%') 
        OR (Devices.flash LIKE '%%2%')
        OR (Devices.max_speed LIKE '%%2%')
        OR (pin_count LIKE '%%2%')

    ) --
