-- Boards query

SELECT
    *, uid AS item_uid, (name) AS item_title
FROM
    Boards
WHERE
    uid IN (
        SELECT
            DISTINCT board_uid
        FROM
            BoardToDevice
        WHERE
            device_uid IN (
                SELECT
                    device_uid
                FROM
                    BoardToDevice
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
        INTERSECT
        SELECT
            board_uid
        FROM
            SDKToBoard
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
        WHEN 1 == %2 THEN 1
        WHEN (SELECT uid FROM SelectedCompiler) == "mchp_xc8" THEN (Boards.uid IN (SELECT board_uid FROM BoardToDevice WHERE BoardToDevice.device_uid IN (SELECT Devices.uid FROM Devices WHERE Devices.necto_config != "")))        
        ELSE 1
    END
    AND (
        (Boards.name LIKE '%%1%')
        OR (Boards.category LIKE '%%1%')
        OR (Boards.default_device LIKE '%%1%')
        OR (Boards.soldered_device LIKE '%%1%')
        OR (Boards.mikrobus_count LIKE '%%1%')
        OR (Boards.display_socket LIKE '%%1%')
    )

ORDER BY CASE
		WHEN 
		EXISTS (SELECT uid FROM SelectedBoard WHERE SelectedBoard.uid = Boards.uid
			AND Boards.uid LIKE 'CUSTOM_BOARD_%') THEN 1
		WHEN Boards.uid LIKE 'CUSTOM_BOARD_%' THEN 2
		WHEN Boards.uid LIKE '%generic%' THEN 3 ELSE 4 END, sort_order DESC
    -- 
