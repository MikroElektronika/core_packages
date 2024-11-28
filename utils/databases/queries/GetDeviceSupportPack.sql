SELECT
    device_support_package
FROM
    ProgrammerToDevice
WHERE
    programer_uid = "%1"
    AND device_uid = "%2"