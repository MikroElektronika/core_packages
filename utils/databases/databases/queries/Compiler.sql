SELECT
    *,
    uid AS item_uid,
    (name || char(10) || version) AS item_title
FROM
    Compilers
WHERE
    (
        (Compilers.name LIKE '%%1%')
        OR (Compilers.version LIKE '%%1%')
    )
ORDER BY
    CASE uid
        WHEN 'gcc_arm_none_eabi' THEN 1
        WHEN 'clang-llvm' THEN 2
        WHEN 'xpack-riscv-none-embed-gcc' THEN 3
        WHEN 'clang-llvm-riscv' THEN 4
        WHEN 'mchp_xc32' THEN 5
        WHEN 'mchp_xc16' THEN 6
        ELSE 7
    END,
    uid;
