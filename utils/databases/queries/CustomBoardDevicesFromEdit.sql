-- Devices query
SELECT
    -- item_uid is used by NECTO to diferentiate between items, and item_title is used to display item title in
    *,
    (uid || '|' || replace(package_uid, '/', '|')) AS item_uid,
    (uid || '|' || replace(package_uid, '/', '|')) AS item_title,
    (SUBSTR(package_uid, 0, INSTR(package_uid, '/'))) AS pin_count
FROM
CompilerToDevice
    JOIN Devices ON Devices.uid = CompilerToDevice.device_uid  
    LEFT JOIN DeviceToPackage ON Devices.uid == DeviceToPackage.device_uid
    AND DeviceToPackage.package_uid LIKE '%%1%'
WHERE
    (CompilerToDevice.compiler_uid = '%2' OR '%2' = '')
    AND
    uid NOT IN (
        SELECT
            device_uid
        FROM
            DeviceToSocket
        WHERE
            (socket_uid == 'SIBRAIN_SOCKET')
            OR (socket_uid == 'MCU_CARD_V7')
            OR (socket_uid == 'M2_SOCKET')
    )
    AND (
        uid IN (
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
    )
    AND
    (
        (Devices.name LIKE '%%3%')
        OR (Devices.uid LIKE '%%3%')
        OR (Devices.vendor LIKE '%%3%')
        OR (Devices.family_uid LIKE '%%3%')
        OR (Devices.ram LIKE '%%2%')
        OR (CAST(CAST(Devices.ram AS INTEGER) / 1024 AS TEXT)  LIKE '%%2%') 
        OR (CAST(CAST(Devices.ram AS INTEGER) / 1024 / 1024 AS TEXT)  LIKE '%%2%') 
        OR (CAST(CAST(Devices.ram AS INTEGER) / 1024 / 1024 /1024 AS TEXT)  LIKE '%%2%') 
        OR (Devices.flash LIKE '%%2%')
        OR (Devices.max_speed LIKE '%%2%')
        OR (pin_count LIKE '%%2%')
    )
ORDER BY CASE
		WHEN 
		EXISTS (SELECT uid FROM SelectedDevice WHERE SelectedDevice.uid = Devices.uid) THEN 2 ELSE 1 END DESC