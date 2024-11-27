SELECT
    *,
    (uid) AS item_uid,
    (name) AS item_title
FROM
    Programmers
WHERE
    Programmers.uid IN (
        SELECT
            programer_uid
        FROM
            ProgrammerToDevice
        WHERE
            device_uid = (
                SELECT
                    SelectedDevice.uid
                FROM
                    SelectedDevice
                LIMIT
                    1
            )
    )
    AND Programmers.uid IN (
        SELECT
            programmer_uid
        FROM
            CompilerToProgrammer
        WHERE
            compiler_uid = (SELECT uid FROM SelectedCompiler)
    )
    AND Programmers.installed = 1
    AND Programmers.name LIKE '%%1%'
