-- Mcu cards query
SELECT
    *,
    (uid) AS item_uid,
    (name) AS item_title,
    (SUBSTR(package_uid, 0, INSTR(package_uid, '/'))) AS pin_count
FROM
    Devices
    INNER JOIN DeviceToPackage ON Devices.uid == DeviceToPackage.device_uid
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
        WHEN 0 == %2 THEN (Devices.sdk_support == 1)
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
        WHEN 1 == %2 THEN 1
        WHEN (SELECT uid FROM SelectedCompiler) == "mchp_xc8" THEN (Devices.necto_config != "")
        ELSE 1
    END
    AND (
        (Devices.name LIKE '%%1%')
        OR (Devices.uid LIKE '%%1%')
        OR (Devices.vendor LIKE '%%1%')
        OR (Devices.family_uid LIKE '%%1%')
    ) --
