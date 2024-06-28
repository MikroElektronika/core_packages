SELECT
    *, uid AS item_uid, (name) AS item_title
FROM
    Displays
WHERE
    Displays.uid == 'NO_DISPLAY'

ORDER BY CASE WHEN Displays.uid = "NO_DISPLAY" THEN 1 ELSE 2 END, name DESC