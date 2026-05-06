SELECT
    Boards.*,
    Boards.uid AS item_uid,
    Boards.name AS item_title
FROM Boards
WHERE
(
    Boards.uid NOT LIKE '%%generic%%'
    AND (Boards.name LIKE '%%1%'
    OR Boards.uid LIKE '%%1%'
    OR Boards.category LIKE '%%1%'
    OR Boards.default_device LIKE '%%1%'
    OR Boards.soldered_device LIKE '%%1%'
    OR Boards.vendor LIKE '%%1%')
)
ORDER BY
    CASE
        WHEN EXISTS (
            SELECT 1
            FROM SelectedBoard
            WHERE SelectedBoard.uid = Boards.uid
              AND Boards.uid LIKE 'CUSTOM_BOARD_%%'
        ) THEN 1
        WHEN Boards.uid LIKE 'CUSTOM_BOARD_%%' THEN 2
        WHEN Boards.uid LIKE '%%generic%%' THEN 3
        ELSE 4
    END,
    Boards.sort_order DESC,
    Boards.name;
