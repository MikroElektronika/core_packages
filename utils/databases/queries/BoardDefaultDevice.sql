SELECT
    COALESCE(dd.device_uid, btd.device_uid) AS device_uid
FROM
    BoardToDevice btd
LEFT JOIN
    DeviceDetails dd ON dd.uid = btd.device_uid
WHERE
    btd.board_uid = '%1'
ORDER BY
    CASE
        WHEN dd.is_mcu_card = 1 THEN 0
        ELSE 1
    END,
    COALESCE(dd.device_uid, btd.device_uid)
LIMIT
    1;
