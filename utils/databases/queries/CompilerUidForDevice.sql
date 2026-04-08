SELECT DISTINCT
    c.uid
FROM
    CompilerToDevice ctd
JOIN
    Compilers c ON c.uid = ctd.compiler_uid
WHERE
    ctd.device_uid = '%1'
ORDER BY
    CASE c.uid
        WHEN 'gcc_arm_none_eabi' THEN 0
        WHEN 'clang-llvm' THEN 1
        WHEN 'xpack-riscv-none-embed-gcc' THEN 2
        WHEN 'clang-llvm-riscv' THEN 3
        WHEN 'mchp_xc32' THEN 4
        WHEN 'mchp_xc16' THEN 5
        WHEN 'mchp_xc8' THEN 6
        WHEN 'mikrocarm' THEN 7
        WHEN 'mikrocpic32' THEN 8
        WHEN 'mikrocdspic' THEN 9
        WHEN 'mikrocpic' THEN 10
        WHEN 'mikrocavr' THEN 11
        ELSE 50
    END,
    c.uid
LIMIT
    1;
