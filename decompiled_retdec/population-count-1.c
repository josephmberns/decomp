//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003f78(int64_t a1);
int32_t function_100003f84(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d38 - 0x100003f78
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003d4c
    int64_t v2; // 0x100003d38
    for (int32_t i = 0; i < 30; i++) {
        // 0x100003d7c
        __asm_cnt(0);
        __asm_uaddlv(0);
        _printf("%d ", v2);
    }
    // 0x100003dd0
    _printf("\n");
    _printf("evil  : ");
    int64_t v3; // bp-144, 0x100003d38
    int64_t v4 = &v3;
    int32_t v5 = 0;
    int32_t v6 = 0;
    int32_t v7 = 0;
    __asm_cnt(0);
    __asm_uaddlv(0);
    int32_t v8; // 0x100003d38
    int32_t v9; // 0x100003d38
    float32_t v10; // 0x100003d38
    if ((int32_t)v10 % 2 == 0) {
        // 0x100003e3c
        v8 = v5;
        v9 = v6;
        if (v5 < 30 != (29 - v5 & v5) < 0) {
            // 0x100003e50
            _printf("%d ", v2);
            v8 = v5 + 1;
            v9 = v6;
        }
    } else {
        // 0x100003e80
        v8 = v5;
        v9 = v6;
        if (v6 < 30 != (29 - v6 & v6) < 0) {
            // 0x100003e94
            *(int32_t *)(4 * (int64_t)v6 + v4) = v7;
            v8 = v5;
            v9 = v6 + 1;
        }
    }
    int32_t v11 = v9;
    int32_t v12 = v8;
    int32_t v13 = v11 + v12; // 0x100003e00
    int32_t v14 = v7 + 1; // 0x100003e0c
    while (v13 < 60 != (59 - v13 & v13) < 0) {
        // 0x100003e14
        v5 = v12;
        v6 = v11;
        v7 = v14;
        __asm_cnt(0);
        __asm_uaddlv(0);
        if ((int32_t)v10 % 2 == 0) {
            // 0x100003e3c
            v8 = v5;
            v9 = v6;
            if (v5 < 30 != (29 - v5 & v5) < 0) {
                // 0x100003e50
                _printf("%d ", v2);
                v8 = v5 + 1;
                v9 = v6;
            }
        } else {
            // 0x100003e80
            v8 = v5;
            v9 = v6;
            if (v6 < 30 != (29 - v6 & v6) < 0) {
                // 0x100003e94
                *(int32_t *)(4 * (int64_t)v6 + v4) = v7;
                v8 = v5;
                v9 = v6 + 1;
            }
        }
        // 0x100003ebc
        v11 = v9;
        v12 = v8;
        v13 = v11 + v12;
        v14 = v7 + 1;
    }
    // 0x100003ecc
    _printf("\n");
    _printf("odious: ");
    for (int32_t i = 0; i < 30; i++) {
        // 0x100003f00
        _printf("%d ", v2);
    }
    int32_t v15 = _printf("\n"); // 0x100003f40
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003f64
        ___stack_chk_fail((int64_t)v15);
    }
    // 0x100003f68
    return 0;
}

// Address range: 0x100003f78 - 0x100003f84
int64_t function_100003f78(int64_t a1) {
    // 0x100003f78
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f84 - 0x100003f90
int32_t function_100003f84(char * format, ...) {
    // 0x100003f84
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3
