//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000039b0(void);
int64_t function_100003abc(void);
int64_t function_100003da8(void);
int64_t function_100003f08(int64_t a1);
int32_t function_100003f14(char * format, ...);
int32_t function_100003f20(int32_t c);
int32_t function_100003f2c(char * s);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x1000039b0 - 0x100003abc
int64_t function_1000039b0(void) {
    int32_t result; // 0x100003a98
    for (int32_t i = 0; i < 9; i++) {
        // 0x1000039dc
        if (i % 3 == 0) {
            // 0x100003a00
            _putchar(10);
        }
        for (int32_t j = 0; j < 9; j++) {
            // 0x100003a28
            _printf(j % 3 == 0 ? "%3d" : "%2d");
        }
        // 0x100003a94
        result = _putchar(10);
    }
    // 0x100003ab0
    return result;
}

// Address range: 0x100003abc - 0x100003da8
int64_t function_100003abc(void) {
    // 0x100003abc
    int64_t v1; // 0x100003abc
    int32_t v2 = v1; // 0x100003acc
    if (v2 == 81) {
        // 0x100003d98
        return 1;
    }
    int32_t v3 = v2 / 9; // 0x100003ad8
    int32_t v4 = v2 % 9;
    int32_t * v5 = (int32_t *)((0x100000000 * v1 >> 30) + v1); // 0x100003b20
    int64_t v6 = 0; // 0x100003b2c
    int32_t v7 = 0; // 0x100003b2c
    int64_t result; // 0x100003abc
    if (*v5 != 0) {
        // 0x100003b34
        result = function_100003abc() & 0xffffffff;
      lab_0x100003d98:
        // 0x100003d98
        return result;
    }
    int32_t v8 = *(int32_t *)(v1 + (int64_t)(4 * (9 * (int32_t)v6 + v4))); // 0x100003b80
    v7 |= 1 << v8 - 1;
    v6++;
    while (v6 != 9) {
        // 0x100003b68
        v8 = *(int32_t *)(v1 + (int64_t)(4 * (9 * (int32_t)v6 + v4)));
        v7 |= 1 << v8 - 1;
        v6++;
    }
    int32_t v9 = 9 * v3; // 0x100003bd8
    int64_t v10 = 0;
    int32_t v11 = *(int32_t *)(v1 + (int64_t)(4 * (v9 + (int32_t)v10))); // 0x100003be4
    int32_t v12 = 1 << v11 - 1 | v7; // 0x100003bf8
    v10++;
    int32_t v13 = v12; // 0x100003bc4
    while (v10 != 9) {
        // 0x100003bcc
        v11 = *(int32_t *)(v1 + (int64_t)(4 * (v9 + (int32_t)v10)));
        v12 = 1 << v11 - 1 | v13;
        v10++;
        v13 = v12;
    }
    int32_t v14 = v3 - v3 % 3; // 0x100003c20
    int32_t v15 = v14 + 3; // 0x100003c4c
    int32_t v16 = v12; // 0x100003c58
    if (((v15 ^ v14) & -v14) >= 0) {
        int32_t v17 = v4 - v4 % 3; // 0x100003c30
        int32_t v18 = v17 + 3; // 0x100003c74
        int32_t v19 = v12; // 0x100003c80
        int32_t v20; // 0x100003cb4
        int32_t v21; // 0x100003cc4
        int32_t v22; // 0x100003c78
        if (((v18 ^ v17) & -v17) >= 0) {
            // 0x100003c88
            v21 = v17;
            v20 = v12;
            v20 |= 1 << *(int32_t *)(v1 + (int64_t)(4 * (v21 + 9 * v14))) - 1;
            v21++;
            v22 = v21 - v18;
            v19 = v20;
            while (v22 < 0 != ((v22 ^ v21) & (v21 ^ v18)) < 0) {
                // 0x100003c88
                v20 |= 1 << *(int32_t *)(v1 + (int64_t)(4 * (v21 + 9 * v14))) - 1;
                v21++;
                v22 = v21 - v18;
                v19 = v20;
            }
        }
        int32_t v23 = v19;
        int32_t v24 = v14 + 1; // 0x100003cd8
        int32_t v25 = v24 - v15; // 0x100003c50
        v16 = v23;
        while (v25 < 0 != ((v25 ^ v24) & (v24 ^ v15)) < 0) {
            int32_t v26 = v23;
            int32_t v27 = v24;
            v19 = v26;
            if (((v18 ^ v17) & -v17) >= 0) {
                // 0x100003c88
                v21 = v17;
                v20 = v26;
                int32_t v28 = *(int32_t *)(v1 + (int64_t)(4 * (v21 + 9 * v27))); // 0x100003ca0
                v20 |= 1 << v28 - 1;
                v21++;
                v22 = v21 - v18;
                v19 = v20;
                while (v22 < 0 != ((v22 ^ v21) & (v21 ^ v18)) < 0) {
                    // 0x100003c88
                    v28 = *(int32_t *)(v1 + (int64_t)(4 * (v21 + 9 * v27)));
                    v20 |= 1 << v28 - 1;
                    v21++;
                    v22 = v21 - v18;
                    v19 = v20;
                }
            }
            // 0x100003cd4
            v23 = v19;
            v24 = v27 + 1;
            v25 = v24 - v15;
            v16 = v23;
        }
    }
    // 0x100003d14
    *v5 = 1;
    int32_t v29 = 1; // 0x100003d68
    int32_t v30 = v16; // 0x100003abc
    while (true) {
        int32_t v31 = v29; // 0x100003d20
        if (v30 % 2 == 0) {
            // 0x100003d28
            if ((int32_t)function_100003abc() != 0) {
                // break -> 0x100003d98
                break;
            }
            // 0x100003d28
            v31 = *v5;
        }
        // 0x100003d58
        v29 = v31 + 1;
        *v5 = v29;
        int32_t v32 = v31 - 8; // 0x100003d04
        v30 >>= 1;
        if (v32 != 0 && v32 < 0 == (7 - v31 & v29) < 0) {
            // 0x100003d80
            *v5 = 0;
            result = 0;
            return result;
        }
    }
    // 0x100003d98
    return 1;
}

// Address range: 0x100003da8 - 0x100003ed4
int64_t function_100003da8(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003dc0
    for (int64_t i = 0; i < 81; i++) {
        // 0x100003de8
        int64_t v2; // 0x100003da8
        char v3 = *(char *)(i + v2); // 0x100003df0
        int32_t v4 = v3; // 0x100003df0
        int32_t v5 = 0; // 0x100003dfc
        if (v3 < 49 == (48 - v4 & v4) < 0) {
            int32_t v6 = v4 - 57; // 0x100003e10
            v5 = v6 == 0 | v6 < 0 != (56 - v4 & v4) < 0 ? v4 - 48 : 0;
        }
        // 0x100003e44
        int64_t v7; // bp-364, 0x100003da8
        *(int32_t *)(4 * i + (int64_t)&v7) = v5;
    }
    // 0x100003e68
    int64_t v8; // 0x100003da8
    if ((int32_t)function_100003abc() == 0) {
        // 0x100003e90
        v8 = _puts("no solution");
    } else {
        // 0x100003e84
        v8 = function_1000039b0();
    }
    int64_t result = v8; // 0x100003eb8
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003ec0
        result = ___stack_chk_fail(v8);
    }
    // 0x100003ec4
    return result;
}

// Address range: 0x100003ed4 - 0x100003f08
int64_t entry_point(void) {
    // 0x100003ed4
    function_100003da8();
    return 0;
}

// Address range: 0x100003f08 - 0x100003f14
int64_t function_100003f08(int64_t a1) {
    // 0x100003f08
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f14 - 0x100003f20
int32_t function_100003f14(char * format, ...) {
    // 0x100003f14
    return _printf(format);
}

// Address range: 0x100003f20 - 0x100003f2c
int32_t function_100003f20(int32_t c) {
    // 0x100003f20
    return _putchar(c);
}

// Address range: 0x100003f2c - 0x100003f38
int32_t function_100003f2c(char * s) {
    // 0x100003f2c
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

