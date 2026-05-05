-- Boards listing with optional filters applied before an MCU is selected.
-- %1 = search text (empty string = no search filter)
-- %2 = vendor IN clause values (SQL-quoted, comma separated)
-- %3 = category IN clause values
-- %4 = display_socket IN clause values
-- %5 = vendor filter active flag (0 = ignore vendor clause, 1 = apply)
-- %6 = category filter active flag (0 = ignore, 1 = apply)
-- %7 = display_socket filter active flag
-- %8 = mikrobus_count minimum (ignored when %10 = 0)
-- %9 = mikrobus_count maximum (ignored when %10 = 0)
-- %10 = mikrobus_count filter active flag (0 = ignore, 1 = apply)
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
AND (%5 = 0 OR Boards.vendor IN (%2))
AND (%6 = 0 OR Boards.category IN (%3))
AND (%7 = 0 OR Boards.display_socket IN (%4))
AND (
    %10 = 0
    OR COALESCE(Boards.mikrobus_count, 0) BETWEEN %8 AND %9
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
