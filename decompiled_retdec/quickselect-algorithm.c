//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003cbc(void);
int64_t function_100003f54(int64_t a1);
int64_t * function_100003f60(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f6c(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x800000009; // 0x100003f78

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003cbc - 0x100003e6c
int64_t function_100003cbc(void) {
    // 0x100003cbc
    int64_t v1; // 0x100003cbc
    int32_t v2 = v1; // 0x100003ccc
    int32_t v3 = v2 - 1; // 0x100003ce8
    int32_t v4 = 1 - v2; // 0x100003cec
    int32_t * v5 = (int32_t *)((4 * v1 + 0xfffffffc & 0xfffffffc) + v1);
    int32_t v6 = 0; // 0x100003cf4
    int32_t v7 = 0; // 0x100003cf4
    if (v4 < 0 != (v4 & v3) < 0) {
        int32_t v8 = 0;
        int32_t * v9 = (int32_t *)(4 * (int64_t)v6 + v1); // 0x100003d04
        int32_t v10 = *v9; // 0x100003d04
        int32_t v11 = *v5; // 0x100003d14
        int32_t v12 = v10 - v11; // 0x100003d18
        int32_t v13 = v8; // 0x100003d20
        int32_t * v14; // 0x100003d44
        if (v12 == 0 || v12 < 0 != ((v12 ^ v10) & (v11 ^ v10)) < 0) {
            // 0x100003d2c
            v14 = (int32_t *)(4 * (int64_t)v8 + v1);
            *v9 = *v14;
            *v14 = v10;
            v13 = v8 + 1;
        }
        int32_t v15 = v13;
        v6++;
        int32_t v16 = v6 - v3; // 0x100003cec
        v7 = v15;
        while (v16 < 0 != ((v16 ^ v6) & (v6 ^ v3)) < 0) {
            // 0x100003cfc
            v8 = v15;
            v9 = (int32_t *)(4 * (int64_t)v6 + v1);
            v10 = *v9;
            v11 = *v5;
            v12 = v10 - v11;
            v13 = v8;
            if (v12 == 0 || v12 < 0 != ((v12 ^ v10) & (v11 ^ v10)) < 0) {
                // 0x100003d2c
                v14 = (int32_t *)(4 * (int64_t)v8 + v1);
                *v9 = *v14;
                *v14 = v10;
                v13 = v8 + 1;
            }
            // 0x100003d74
            v15 = v13;
            v6++;
            v16 = v6 - v3;
            v7 = v15;
        }
    }
    int32_t v17 = *v5; // 0x100003d90
    int32_t * v18 = (int32_t *)(4 * (int64_t)v7 + v1); // 0x100003da0
    *v5 = *v18;
    *v18 = v17;
    int32_t result = v17; // 0x100003dd4
    if (v7 != (int32_t)v1) {
        // 0x100003df0
        result = function_100003cbc();
    }
    // 0x100003e5c
    return result;
}

// Address range: 0x100003e6c - 0x100003f54
int64_t entry_point(void) {
    // 0x100003e6c
    int64_t v1; // bp-64, 0x100003e6c
    _memcpy(&v1, &g1, 40);
    int32_t v2; // 0x100003f08
    for (int64_t i = 0; i < 10; i++) {
        // 0x100003ebc
        int64_t v3; // bp-104, 0x100003e6c
        _memcpy(&v3, &v1, 40);
        function_100003cbc();
        v2 = _printf("%d: %d\n", 10, i);
    }
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f2c
    if (v4 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f40
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003f44
    return 0;
}

// Address range: 0x100003f54 - 0x100003f60
int64_t function_100003f54(int64_t a1) {
    // 0x100003f54
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f60 - 0x100003f6c
int64_t * function_100003f60(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f60
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(char * format, ...) {
    // 0x100003f6c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5
