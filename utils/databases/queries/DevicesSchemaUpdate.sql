-- Schema migration: add filter-related columns to Devices table
-- Run once against the necto_db.db database

ALTER TABLE Devices ADD COLUMN eeprom TEXT DEFAULT '0';
ALTER TABLE Devices ADD COLUMN security_features TEXT DEFAULT '';
ALTER TABLE Devices ADD COLUMN pin_count INTEGER DEFAULT 0;

-- Backfill pin_count from DeviceToPackage (pin count is the prefix before '/' in package_uid)
UPDATE Devices SET pin_count = (
    SELECT CAST(SUBSTR(dtp.package_uid, 0, INSTR(dtp.package_uid, '/')) AS INTEGER)
    FROM DeviceToPackage dtp
    WHERE dtp.device_uid = Devices.uid
    LIMIT 1
) WHERE EXISTS (
    SELECT 1 FROM DeviceToPackage dtp WHERE dtp.device_uid = Devices.uid
);

-- Normalize Boards.category casing inconsistencies
UPDATE Boards SET category = 'Development Systems' WHERE category = 'Development System';
UPDATE Boards SET category = 'Starter Boards' WHERE category = 'Starter boards';
