//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003cfc(void);
int64_t function_100003f64(void);
int32_t function_100003f70(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t * g1 = NULL; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003cfc - 0x100003e8c
int64_t function_100003cfc(void) {
    // 0x100003cfc
    int64_t v1; // 0x100003cfc
    char * v2 = (char *)v1;
    char v3 = *v2; // 0x100003d10
    if (v3 == 0) {
        // 0x100003e80
        return 0;
    }
    int32_t v4 = 0;
    int32_t v5 = *(int32_t *)((4 * (int64_t)(v3 & -33) + 0xfffffefc & 0xfffffffc) + (int64_t)&g1); // 0x100003d40
    char v6 = v3; // 0x100003d58
    char * v7 = v2;
    int32_t v8 = *(int32_t *)((4 * (int64_t)(v6 & -33) + 0xfffffefc & 0xfffffffc) + (int64_t)&g1); // 0x100003d70
    char * v9; // 0x100003d98
    char v10; // 0x100003d9c
    while (v8 - v5 == 0 || v8 - v5 < 0 != ((v8 - v5 ^ v8) & (v8 ^ v5)) < 0) {
        // 0x100003db0
        v9 = (char *)((int64_t)v7 + 1);
        v10 = *v9;
        if (v10 == 0) {
            goto lab_0x100003dd8;
        }
        v6 = v10;
        v7 = v9;
        v8 = *(int32_t *)((4 * (int64_t)(v6 & -33) + 0xfffffefc & 0xfffffffc) + (int64_t)&g1);
    }
    char v11; // 0x100003cfc
    char * v12; // 0x100003cfc
    int32_t v13; // 0x100003cfc
    int32_t v14; // 0x100003cfc
    char * v15; // 0x100003cfc
    int32_t v16; // 0x100003e58
    int32_t v17; // 0x100003e60
    int32_t v18; // 0x100003e10
    if (v6 == 0) {
        // 0x100003dd8
        v12 = v2;
        v13 = v5 + v4;
    } else {
        // 0x100003dec
        v18 = v8 + v4;
        v14 = v18;
        v12 = v2;
        v13 = v18;
        if (v2 < v7) {
            v15 = (char *)((int64_t)v2 + 1);
            v16 = *(int32_t *)((4 * (int64_t)(v3 & -33) + 0xfffffefc & 0xfffffffc) + (int64_t)&g1);
            v17 = v14 - v16;
            v12 = v15;
            v13 = v17;
            while (v7 > v15) {
                // 0x100003e34
                v11 = *v15;
                v15 = (char *)((int64_t)v15 + 1);
                v16 = *(int32_t *)((4 * (int64_t)(v11 & -33) + 0xfffffefc & 0xfffffffc) + (int64_t)&g1);
                v17 -= v16;
                v12 = v15;
                v13 = v17;
            }
        }
    }
    int32_t result = v13;
    char * v19 = (char *)((int64_t)v12 + 1);
    char v20 = *v19; // 0x100003d10
    while (v20 != 0) {
        // 0x100003d24
        v4 = result;
        char v21 = v20;
        char * v22 = v19; // 0x100003e1c
        v5 = *(int32_t *)((4 * (int64_t)(v21 & -33) + 0xfffffefc & 0xfffffffc) + (int64_t)&g1);
        v6 = v21;
        v7 = v22;
        v8 = *(int32_t *)((4 * (int64_t)(v6 & -33) + 0xfffffefc & 0xfffffffc) + (int64_t)&g1);
        while (v8 - v5 == 0 || v8 - v5 < 0 != ((v8 - v5 ^ v8) & (v8 ^ v5)) < 0) {
            // 0x100003db0
            v9 = (char *)((int64_t)v7 + 1);
            v10 = *v9;
            if (v10 == 0) {
                goto lab_0x100003dd8;
            }
            v6 = v10;
            v7 = v9;
            v8 = *(int32_t *)((4 * (int64_t)(v6 & -33) + 0xfffffefc & 0xfffffffc) + (int64_t)&g1);
        }
        if (v6 == 0) {
            // 0x100003dd8
            v12 = v22;
            v13 = v5 + v4;
        } else {
            // 0x100003dec
            v18 = v8 + v4;
            v11 = v21;
            char * v23 = v22; // 0x100003e2c
            v14 = v18;
            v12 = v22;
            v13 = v18;
            if (v22 < v7) {
                v15 = (char *)((int64_t)v23 + 1);
                v16 = *(int32_t *)((4 * (int64_t)(v11 & -33) + 0xfffffefc & 0xfffffffc) + (int64_t)&g1);
                v17 = v14 - v16;
                v12 = v15;
                v13 = v17;
                while (v7 > v15) {
                    // 0x100003e34
                    v11 = *v15;
                    v15 = (char *)((int64_t)v15 + 1);
                    v16 = *(int32_t *)((4 * (int64_t)(v11 & -33) + 0xfffffefc & 0xfffffffc) + (int64_t)&g1);
                    v17 -= v16;
                    v12 = v15;
                    v13 = v17;
                }
            }
        }
        // 0x100003e70
        result = v13;
        v19 = (char *)((int64_t)v12 + 1);
        v20 = *v19;
    }
    // 0x100003e80
    return result;
}

// Address range: 0x100003e8c - 0x100003f64
int64_t entry_point(void) {
    for (int32_t i = 0; i < 4; i++) {
        // 0x100003ee0
        function_100003cfc();
        int64_t v1; // 0x100003e8c
        _printf("%s\t%d\n", (char *)v1, v1);
    }
    int64_t v2 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f3c
    if (v2 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f50
        ___stack_chk_fail();
    }
    // 0x100003f54
    return 0;
}

// Address range: 0x100003f64 - 0x100003f70
int64_t function_100003f64(void) {
    // 0x100003f64
    return ___stack_chk_fail();
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(char * format, ...) {
    // 0x100003f70
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4

