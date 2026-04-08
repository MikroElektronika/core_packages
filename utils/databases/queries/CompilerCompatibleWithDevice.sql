SELECT
    1
FROM
    CompilerToDevice
WHERE
    compiler_uid = '%1'
    AND device_uid = '%2'
LIMIT
    1;
