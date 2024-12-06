SELECT
    *,
    uid AS item_uid,
    (name || char(10) || version) AS item_title
FROM
    SDKs
WHERE
    SDKs.uid IN (
        SELECT
            sdk_uid
        FROM
            SDKToCompiler
        WHERE
            compiler_uid = "%1"
    )