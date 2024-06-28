SELECT
    *,
    uid AS item_uid,
    (name || char(10) || version) AS item_title
FROM
    SDKs
WHERE
    (SDKs.installed = 1) AND (SDKs.uid LIKE "%mikrosdk%")
