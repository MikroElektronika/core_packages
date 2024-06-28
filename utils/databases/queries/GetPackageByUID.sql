SELECT Devices.uid, DeviceToPackage.package_uid
FROM
    Devices
    LEFT JOIN DeviceToPackage ON Devices.uid == DeviceToPackage.device_uid
    
WHERE 
	Devices.uid == '%1';
