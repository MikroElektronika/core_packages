SELECT
    Devices.*, 
    (Devices.uid || '|' || replace(package_uid, '/', '|')) AS item_uid, 
    (Devices.uid || '|' || replace(package_uid, '/', '|')) AS item_title,
    (SUBSTR(package_uid,0, INSTR(package_uid, '/') )) AS pin_count,
    SelectedBoard.soldered_device, 
    SelectedBoard.package_uid, 
    Packages.stm_sdk_config AS package_stm_sdk_config, 
    Packages.sdk_config AS package_sdk_config
FROM
    SelectedBoard
    
INNER JOIN Packages ON SelectedBoard.package_uid = Packages.uid
INNER JOIN Devices ON SelectedBoard.soldered_device = Devices.uid
            