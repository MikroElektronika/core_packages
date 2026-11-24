# MISRA C:2012 deviation record - core_packages

Follows the MISRA Compliance:2020 process: an Advisory rule may be disapplied and a Required rule
deviated only with a written reason, scope and approver. The matching suppression lines live in
`suppressions.txt`; single-line deviations use `// cppcheck-suppress misra-c2012-X.Y` with a
comment naming the deviation id.

## Scope and adopted code

| Path | Owner | In scope | Status |
| --- | --- | --- | --- |
| everything not listed below | MikroE | yes | analysed, rule by rule |
| `*/mikroC/` | MikroE | yes, phase 2 | excluded in phase 1 (GCC only); analysis mapping for the def files is ready (`path_defines.txt`, `path_rewrites.txt`), see D-01..D-03 |
| `thirdparty/` (any depth) | vendors (ST, NXP, Microchip, ...) | no, adopted code | not analysed; vendor MISRA statements apply where published |
| `CMSIS/` (any depth) | Arm | no, adopted code | not analysed; Arm's CMSIS MISRA deviation notes apply |

## Deviations

Status: **Proposed** until the approver column is filled in a reviewed PR.

| Id | Rule | Category | Scope | Reason | Approved by | Date |
| --- | --- | --- | --- | --- | --- | --- |
| D-01 | 1.2 | Advisory | `*/mikroC/def/*` | The mikroC compilers need their language extensions to place SFRs and bits at fixed addresses (`sfr`, `sbit ... at`, `absolute`, `rx`, `far`, `data`, `atomic`, `io`, `#pragma setintsize`). There is no standard C way to do this with these compilers. The extensions only appear in definition files, never in other code. | Proposed | 2026-11-24 |
| D-02 | 8.4 | Required | `*/mikroC/def/*` | A definition file is the unit the mikroC compiler links for SFRs and constants; there is no header by design, and application code sees the objects through the compiler, not through a declaration. Adding a header for millions of objects would not be used by any compiler. | Proposed | 2026-11-24 |
| D-03 | 8.7 | Advisory | `*/mikroC/def/*` | Objects are defined for use by application code, which the analysis does not see; they must keep external linkage. | Proposed | 2026-11-24 |
