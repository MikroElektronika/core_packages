SELECT DISTINCT
    Devices.family_uid
FROM
    Devices
WHERE
    Devices.uid IN (SELECT device_uid FROM SDKToDevice WHERE sdk_uid = '%1')