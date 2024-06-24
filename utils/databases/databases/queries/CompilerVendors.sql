select
    distinct vendor
from
    Devices
where
    uid in(
        select
            CompilerToDevice.device_uid
        from
            CompilerToDevice
        where
            CompilerToDevice.compiler_uid = "%1"
    )