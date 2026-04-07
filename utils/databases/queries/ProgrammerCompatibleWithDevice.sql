SELECT
    1
FROM
    ProgrammerToDevice ptd
JOIN
    CompilerToProgrammer ctp ON ctp.programmer_uid = ptd.programer_uid
WHERE
    ptd.programer_uid = '%1'
    AND ptd.device_uid = '%3'
    AND ptd.device_support_package != '[""]'
    AND ctp.compiler_uid = '%2'
LIMIT
    1;
