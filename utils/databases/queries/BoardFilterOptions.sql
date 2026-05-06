-- Returns distinct filter option values for the Board page filter panel.
-- filter_type values:
--   'vendor'         -> one row per distinct vendor, filter_value = vendor name
--   'category'       -> one row per distinct category
--   'display_socket' -> one row per distinct display socket type

SELECT
    'vendor' AS filter_type,
    vendor AS filter_value,
    COUNT(*) AS item_count
FROM Boards
WHERE vendor != ''
GROUP BY vendor

UNION ALL

SELECT
    'category' AS filter_type,
    category AS filter_value,
    COUNT(*) AS item_count
FROM Boards
WHERE category != ''
GROUP BY category

UNION ALL

SELECT
    'display_socket' AS filter_type,
    display_socket AS filter_value,
    COUNT(*) AS item_count
FROM Boards
WHERE display_socket != ''
GROUP BY display_socket

UNION ALL

SELECT
    'mikrobus_range' AS filter_type,
    printf('%d,%d',
           COALESCE(MIN(COALESCE(mikrobus_count, 0)), 0),
           COALESCE(MAX(COALESCE(mikrobus_count, 0)), 0)) AS filter_value,
    COUNT(*) AS item_count
FROM Boards;
