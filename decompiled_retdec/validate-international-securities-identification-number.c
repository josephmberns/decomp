//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b38(void);
int64_t function_100003f20(int64_t a1);
int64_t * function_100003f2c(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f38(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003b38 - 0x100003e1c
int64_t function_100003b38(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003b4c
    int64_t v2; // bp-120, 0x100003b38
    int64_t v3 = &v2;
    int64_t v4 = 0;
    int64_t v5; // 0x100003b38
    char v6 = *(char *)v5;
    int32_t v7 = 0; // 0x100003b38
    int32_t v8 = 0;
    char v9; // 0x100003b38
    uint64_t v10; // 0x100003b38
    int64_t result; // 0x100003b38
    int32_t v11; // 0x100003b38
    int32_t v12; // 0x100003b38
    int32_t v13; // 0x100003b38
    int32_t v14; // 0x100003b80
    while (true) {
      lab_0x100003b78:
        // 0x100003b78
        v11 = v8;
        v13 = v7;
        v9 = v6;
        v10 = v4;
        v14 = v9;
        if (v9 < 48 == (47 - v14 & v14) < 0) {
            int32_t v15 = v14 - 57; // 0x100003ba0
            if (v15 == 0 || v15 < 0 != (56 - v14 & v14) < 0) {
                // 0x100003bb0
                result = 0;
                if (v10 < 2 != (1 - v13 & (int32_t)v10) < 0) {
                    // break -> 0x100003de0
                    break;
                }
                // 0x100003bcc
                *(int32_t *)(4 * (int64_t)v11 + v3) = v14 - 48;
                v12 = v11 + 1;
                goto lab_0x100003c9c;
            } else {
                goto lab_0x100003bf0;
            }
        } else {
            goto lab_0x100003bf0;
        }
    }
    goto lab_0x100003de0_3;
  lab_0x100003bf0:
    // 0x100003bf0
    if (v9 < 65 != (64 - v14 & v14) < 0) {
        // break -> 0x100003de0
        goto lab_0x100003de0_3;
    }
    int32_t v31 = v14 - 90; // 0x100003c08
    result = 0;
    if (v10 == 11 || v31 != 0 == v31 < 0 == (89 - v14 & v14) < 0) {
        // break -> 0x100003de0
        goto lab_0x100003de0_3;
    }
    int32_t v32 = v14 - 55; // 0x100003c38
    *(int32_t *)(4 * (int64_t)v11 + v3) = v32 / 10;
    *(int32_t *)(4 * (int64_t)(v11 + 1) + v3) = v32 % 10;
    v12 = v11 + 2;
    goto lab_0x100003c9c;
  lab_0x100003c9c:
    // 0x100003c9c
    v8 = v12;
    v4 = v10 + 1;
    v6 = *(char *)(v4 + v5);
    v7 = v13 + 1;
    int64_t v22; // 0x100003b38
    int32_t v25; // 0x100003b38
    int32_t v20; // 0x100003b38
    int32_t v27; // 0x100003b38
    if (v10 < 11 == (10 - v13 & (int32_t)v4) < 0) {
        // 0x100003cac
        result = 0;
        if (v6 == 0) {
            int32_t v33 = v8 - 2;
            v20 = 0;
            if (v33 < 0) {
                goto lab_0x100003d68;
            } else {
                // 0x100003cfc
                v22 = v33;
                v27 = v33;
                v25 = 0;
                goto lab_0x100003cfc_2;
            }
        } else {
            goto lab_0x100003de0_3;
        }
    }
    goto lab_0x100003b78;
  lab_0x100003de0_3:
    // 0x100003de0
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003e08
        ___stack_chk_fail(v5);
    }
    // 0x100003e0c
    return result;
  lab_0x100003d68:;
    int32_t v16 = v8 - 1; // 0x100003d6c
    int64_t v17; // 0x100003b38
    int32_t v18; // 0x100003b38
    int32_t v19; // 0x100003b38
    if (v16 < 0) {
        // 0x100003db8
        result = v20 % 10 == 0;
        goto lab_0x100003de0_3;
    } else {
        // 0x100003d8c
        v17 = v16;
        v19 = v16;
        v18 = v20;
        goto lab_0x100003d8c_2;
    }
  lab_0x100003cfc_2:;
    int32_t v21 = 2 * *(int32_t *)(4 * v22 + v3); // 0x100003d0c
    int32_t v23 = v21 - 9; // 0x100003d18
    int32_t v24 = (v23 < 0 == (8 - v21 & v21) < 0 ? v23 : v21) + v25; // 0x100003d4c
    int32_t v26 = v27 - 2;
    v22 -= 2;
    v27 = v26;
    v25 = v24;
    v20 = v24;
    if (v26 < 0) {
        goto lab_0x100003d68;
    } else {
        goto lab_0x100003cfc_2;
    }
  lab_0x100003d8c_2:;
    int32_t v28 = *(int32_t *)(4 * v17 + v3) + v18; // 0x100003d9c
    int32_t v29 = v19 - 2; // 0x100003dac
    v17 -= 2;
    v19 = v29;
    v18 = v28;
    int32_t v30 = v28; // 0x100003d84
    if (v29 < 0) {
        // 0x100003db8
        result = v30 % 10 == 0;
        goto lab_0x100003de0_3;
    } else {
        goto lab_0x100003d8c_2;
    }
}

// Address range: 0x100003e1c - 0x100003f20
int64_t entry_point(void) {
    // 0x100003e1c
    int64_t v1; // bp-80, 0x100003e1c
    _memcpy(&v1, (int64_t *)"D?", 56);
    int32_t v2; // 0x100003ed4
    for (int32_t i = 0; i < 7; i++) {
        // 0x100003e6c
        function_100003b38();
        v2 = _printf("%c%c", (char)"D?", 56);
    }
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ef8
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f0c
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003f10
    return 0;
}

// Address range: 0x100003f20 - 0x100003f2c
int64_t function_100003f20(int64_t a1) {
    // 0x100003f20
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f2c - 0x100003f38
int64_t * function_100003f2c(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f2c
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(char * format, ...) {
    // 0x100003f38
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5
