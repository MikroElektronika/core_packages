SELECT
    *, uid AS item_uid, (name) AS item_title
FROM
    Displays
WHERE
    Displays.uid == (
        SELECT
            Boards.display
        FROM
            Boards
        WHERE
            Boards.uid == (SELECT
                    SelectedBoard.uid
                FROM
                    SelectedBoard
                LIMIT
                    1)
    )
    AND (
        Displays.uid IN (
            SELECT
                SDKToDisplay.display_uid
            FROM
                SDKToDisplay
            WHERE
                SDKToDisplay.sdk_uid == (
                SELECT
                    SelectedSDK.uid
                FROM
                    SelectedSDK
                LIMIT
                    1
            )
        )
    )
ORDER BY CASE WHEN Displays.uid = "NO_DISPLAY" THEN 1 ELSE 2 END, name DESC