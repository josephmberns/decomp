//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003cb4(void);
int64_t function_100003f48(int64_t a1);
int64_t * function_100003f54(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f60(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x4100000004; // 0x100003f6c

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003cb4 - 0x100003db4
int64_t function_100003cb4(void) {
    // 0x100003cb4
    int64_t result; // 0x100003cb4
    int32_t v1 = result; // 0x100003cb4
    int32_t v2 = 1 - v1; // 0x100003d00
    int32_t v3 = 1; // 0x100003d08
    while (v2 < 0 != (v2 & v1) < 0) {
        int32_t * v4 = (int32_t *)(4 * (int64_t)v3 + result); // 0x100003d18
        int32_t v5 = *v4; // 0x100003d18
        int32_t * v6 = (int32_t *)(result + (int64_t)(4 * v3 - 4)); // 0x100003d28
        int32_t v7 = *v6; // 0x100003d28
        int32_t v8 = v5 - v7; // 0x100003d2c
        int32_t v9 = 0; // 0x100003d34
        if (v8 < 0 != ((v8 ^ v5) & (v7 ^ v5)) < 0) {
            // 0x100003d3c
            *v4 = v7;
            *v6 = v5;
            v9 = 1;
        }
        int32_t v10 = v9;
        v3++;
        int32_t v11 = v3 - v1; // 0x100003d00
        while (v11 < 0 != ((v11 ^ v3) & (v3 ^ v1)) < 0) {
            // 0x100003d10
            v4 = (int32_t *)(4 * (int64_t)v3 + result);
            v5 = *v4;
            v6 = (int32_t *)(result + (int64_t)(4 * v3 - 4));
            v7 = *v6;
            v8 = v5 - v7;
            v9 = v10;
            if (v8 < 0 != ((v8 ^ v5) & (v7 ^ v5)) < 0) {
                // 0x100003d3c
                *v4 = v7;
                *v6 = v5;
                v9 = 1;
            }
            // 0x100003d8c
            v10 = v9;
            v3++;
            v11 = v3 - v1;
        }
        // 0x100003d9c
        v1--;
        if (v10 == 0) {
            // break -> 0x100003dac
            break;
        }
        v2 = 1 - v1;
        v3 = 1;
    }
    // 0x100003dac
    return result;
}

// Address range: 0x100003db4 - 0x100003f48
int64_t entry_point(void) {
    // 0x100003db4
    int64_t v1; // bp-64, 0x100003db4
    _memcpy(&v1, &g1, 40);
    for (int32_t i = 0; i < 10; i++) {
        // 0x100003e10
        _printf("%d%s", (int64_t)&g1, (char *)40);
    }
    // 0x100003e7c
    function_100003cb4();
    int32_t v2; // 0x100003efc
    for (int32_t i = 0; i < 10; i++) {
        // 0x100003ea8
        v2 = _printf("%d%s", 10, (char *)40);
    }
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f20
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f34
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003f38
    return 0;
}

// Address range: 0x100003f48 - 0x100003f54
int64_t function_100003f48(int64_t a1) {
    // 0x100003f48
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f54 - 0x100003f60
int64_t * function_100003f54(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f54
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(char * format, ...) {
    // 0x100003f60
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

