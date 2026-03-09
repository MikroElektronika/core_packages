SELECT
    *
FROM
    DebuggerToDevice
WHERE
    device_uid = (
        SELECT
            SelectedDevice.uid
        FROM
            SelectedDevice
        LIMIT
            1
    )
