SELECT *,
    uid AS item_uid,
    (name) AS item_title
FROM Displays
WHERE (
        (
            (Displays.display_socket == '%2')
            OR (Displays.display_socket IS NULL)
            OR (Displays.display_socket == 'NO_DISPLAY')
        )
        AND (
            Displays.uid IN (
                SELECT SDKToDisplay.display_uid
                FROM SDKToDisplay
                WHERE SDKToDisplay.sdk_uid == (
                        SELECT SelectedSDK.uid
                        FROM SelectedSDK
                        LIMIT 1
                    )
            )
        )
        AND (
            (Displays.name LIKE '%%1%')
            OR (Displays.uid LIKE '%%1%')
        )
        AND (
            SELECT SelectedDevice.tft_socket
            FROM SelectedDevice
            WHERE SelectedDevice.tft_socket == 1
        )
    )
    OR (
        (Displays.display_socket IS NULL)
        OR (Displays.display_socket == 'NO_DISPLAY')
    )
ORDER BY CASE
        WHEN Displays.uid = "NO_DISPLAY" THEN 1
        ELSE 2
    END,
    name DESC
