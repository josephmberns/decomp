//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b74(void);
int64_t function_100003f10(void);
int64_t * function_100003f1c(int64_t * dest, int64_t * src, int32_t n);
float64_t function_100003f28(float64_t a1, float64_t a2);
int32_t function_100003f34(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x100000000; // 0x100003f40
int32_t * g2 = (int32_t *)0x100000cfeedfacf; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
float64_t _pow(float64_t a1, float64_t a2);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003b74 - 0x100003be0
int64_t function_100003b74(void) {
    // 0x100003b74
    int64_t result; // 0x100003b74
    int32_t v1 = result; // 0x100003b78
    if (v1 < 1) {
        // 0x100003bd8
        return result;
    }
    int32_t v2 = 0; // 0x100003b90
    uint32_t v3 = v1;
    *(int32_t *)(4 * (int64_t)v2 + (int64_t)&g2) = v3 % 10;
    int32_t v4 = v3 / 10; // 0x100003b90
    v2++;
    while (v3 >= 10) {
        // 0x100003b98
        v3 = v4;
        *(int32_t *)(4 * (int64_t)v2 + (int64_t)&g2) = v3 % 10;
        v4 = v3 / 10;
        v2++;
    }
    // 0x100003bd8
    return result;
}

// Address range: 0x100003be0 - 0x100003f10
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003bf4
    int64_t v2; // bp-64, 0x100003be0
    _memcpy(&v2, &g1, 40);
    _printf("Own digits power sums for N = 3 to 9 inclusive:\n");
    int64_t v3 = &v2;
    int32_t v4 = 3;
    int32_t * v5; // 0x100003c70
    for (int64_t i = 2; i < 10; i++) {
        // 0x100003c60
        v5 = (int32_t *)(4 * i + v3);
        *v5 = *v5 * (int32_t)i;
    }
    // 0x100003c90
    int128_t v6; // 0x100003be0
    float64_t v7 = _pow((float64_t)(int64_t)v6, (float64_t)(int64_t)v6); // 0x100003ca0
    int32_t v8 = 10;
    int32_t v9 = 0;
    int32_t v10 = 1; // 0x100003be0
    int32_t v11; // 0x100003be0
    int32_t v12; // 0x100003d98
    int32_t v13; // 0x100003d28
    int32_t v14; // 0x100003d40
    int32_t v15; // 0x100003d50
    int32_t v16; // 0x100003d0c
    switch (v9) {
        case 0: {
            // 0x100003d1c
            function_100003b74();
            v15 = 0;
            v14 = 0;
            v13 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g2);
            v14 += *(int32_t *)(4 * (int64_t)v13 + v3);
            v15++;
            v16 = v15 - v4;
            v11 = v14;
            while (v16 < 0 != (v15 & -v16) < 0) {
                // 0x100003d1c
                v13 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g2);
                v14 += *(int32_t *)(4 * (int64_t)v13 + v3);
                v15++;
                v16 = v15 - v4;
                v11 = v14;
            }
            // break -> 0x100003db4
            break;
        }
        default: {
            // 0x100003d84
            v12 = *(int32_t *)((int64_t)(4 * v9 - 4) + v3);
            v10 = *(int32_t *)(4 * (int64_t)v9 + v3) - v12;
        }
        case 1: {
            // 0x100003db0
            int32_t v17; // 0x100003be0
            v11 = v10 + v17;
            // break -> 0x100003db4
            break;
        }
    }
    int32_t v18 = v11;
    int32_t v19; // 0x100003be0
    int32_t v20; // 0x100003be0
    int32_t v21; // 0x100003be0
    int32_t v22; // 0x100003e48
    if (v18 == v8) {
        // 0x100003dcc
        _printf("%d\n", (int64_t)&g1);
        if (v9 == 0) {
            // 0x100003dfc
            _printf("%d\n", (int64_t)&g1);
        }
        // 0x100003e20
        v19 = 10 - v9;
        v21 = 0;
    } else {
        // 0x100003e40
        v22 = v18 - v8;
        if (v22 == 0 || v22 < 0 != ((v22 ^ v18) & (v18 ^ v8)) < 0) {
            // 0x100003e78
            v20 = v9 < 9 == (8 - v9 & v9) < 0 ? 0 : v9 + 1;
            v19 = 1;
            v21 = v20;
        } else {
            // 0x100003e58
            v19 = 10 - v9;
            v21 = 0;
        }
    }
    int32_t v23 = v19 + v8;
    int32_t v24; // 0x100003be0
    while (v23 < 100 != (99 - v23 & v23) < 0) {
        // 0x100003cdc
        v8 = v23;
        v24 = v18;
        v9 = v21;
        v10 = 1;
        switch (v9) {
            case 0: {
                // 0x100003d1c
                function_100003b74();
                v15 = 0;
                v14 = 0;
                v13 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g2);
                v14 += *(int32_t *)(4 * (int64_t)v13 + v3);
                v15++;
                v16 = v15 - v4;
                v11 = v14;
                while (v16 < 0 != (v15 & -v16) < 0) {
                    // 0x100003d1c
                    v13 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g2);
                    v14 += *(int32_t *)(4 * (int64_t)v13 + v3);
                    v15++;
                    v16 = v15 - v4;
                    v11 = v14;
                }
                // break -> 0x100003db4
                break;
            }
            default: {
                // 0x100003d84
                v12 = *(int32_t *)((int64_t)(4 * v9 - 4) + v3);
                v10 = *(int32_t *)(4 * (int64_t)v9 + v3) - v12;
            }
            case 1: {
                // 0x100003db0
                v11 = v10 + v24;
                // break -> 0x100003db4
                break;
            }
        }
        // 0x100003db4
        v18 = v11;
        if (v18 == v8) {
            // 0x100003dcc
            _printf("%d\n", (int64_t)&g1);
            if (v9 == 0) {
                // 0x100003dfc
                _printf("%d\n", (int64_t)&g1);
            }
            // 0x100003e20
            v19 = 10 - v9;
            v21 = 0;
        } else {
            // 0x100003e40
            v22 = v18 - v8;
            if (v22 == 0 || v22 < 0 != ((v22 ^ v18) & (v18 ^ v8)) < 0) {
                // 0x100003e78
                v20 = v9 < 9 == (8 - v9 & v9) < 0 ? 0 : v9 + 1;
                v19 = 1;
                v21 = v20;
            } else {
                // 0x100003e58
                v19 = 10 - v9;
                v21 = 0;
            }
        }
        // 0x100003ec4
        v23 = v19 + v8;
    }
    int32_t v25 = v4 + 1; // 0x100003ed0
    int64_t v26 = (float32_t)v7; // 0x100003c38
    while (v25 != 10) {
        // 0x100003c4c
        v4 = v25;
        for (int64_t i = 2; i < 10; i++) {
            // 0x100003c60
            v5 = (int32_t *)(4 * i + v3);
            *v5 = *v5 * (int32_t)i;
        }
        // 0x100003c90
        v7 = _pow((float64_t)v26, (float64_t)(int64_t)v6);
        v8 = 10;
        v24 = v18;
        v9 = 0;
        v10 = 1;
        switch (v9) {
            case 0: {
                // 0x100003d1c
                function_100003b74();
                v15 = 0;
                v14 = 0;
                v13 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g2);
                v14 += *(int32_t *)(4 * (int64_t)v13 + v3);
                v15++;
                v16 = v15 - v4;
                v11 = v14;
                while (v16 < 0 != (v15 & -v16) < 0) {
                    // 0x100003d1c
                    v13 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g2);
                    v14 += *(int32_t *)(4 * (int64_t)v13 + v3);
                    v15++;
                    v16 = v15 - v4;
                    v11 = v14;
                }
                // break -> 0x100003db4
                break;
            }
            default: {
                // 0x100003d84
                v12 = *(int32_t *)((int64_t)(4 * v9 - 4) + v3);
                v10 = *(int32_t *)(4 * (int64_t)v9 + v3) - v12;
            }
            case 1: {
                // 0x100003db0
                v11 = v10 + v24;
                // break -> 0x100003db4
                break;
            }
        }
        // 0x100003db4
        v18 = v11;
        if (v18 == v8) {
            // 0x100003dcc
            _printf("%d\n", (int64_t)&g1);
            if (v9 == 0) {
                // 0x100003dfc
                _printf("%d\n", (int64_t)&g1);
            }
            // 0x100003e20
            v19 = 10 - v9;
            v21 = 0;
        } else {
            // 0x100003e40
            v22 = v18 - v8;
            if (v22 == 0 || v22 < 0 != ((v22 ^ v18) & (v18 ^ v8)) < 0) {
                // 0x100003e78
                v20 = v9 < 9 == (8 - v9 & v9) < 0 ? 0 : v9 + 1;
                v19 = 1;
                v21 = v20;
            } else {
                // 0x100003e58
                v19 = 10 - v9;
                v21 = 0;
            }
        }
        // 0x100003ec4
        v23 = v19 + v8;
        while (v23 < 100 != (99 - v23 & v23) < 0) {
            // 0x100003cdc
            v8 = v23;
            v24 = v18;
            v9 = v21;
            v10 = 1;
            switch (v9) {
                case 0: {
                    // 0x100003d1c
                    function_100003b74();
                    v15 = 0;
                    v14 = 0;
                    v13 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g2);
                    v14 += *(int32_t *)(4 * (int64_t)v13 + v3);
                    v15++;
                    v16 = v15 - v4;
                    v11 = v14;
                    while (v16 < 0 != (v15 & -v16) < 0) {
                        // 0x100003d1c
                        v13 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g2);
                        v14 += *(int32_t *)(4 * (int64_t)v13 + v3);
                        v15++;
                        v16 = v15 - v4;
                        v11 = v14;
                    }
                    // break -> 0x100003db4
                    break;
                }
                default: {
                    // 0x100003d84
                    v12 = *(int32_t *)((int64_t)(4 * v9 - 4) + v3);
                    v10 = *(int32_t *)(4 * (int64_t)v9 + v3) - v12;
                }
                case 1: {
                    // 0x100003db0
                    v11 = v10 + v24;
                    // break -> 0x100003db4
                    break;
                }
            }
            // 0x100003db4
            v18 = v11;
            if (v18 == v8) {
                // 0x100003dcc
                _printf("%d\n", (int64_t)&g1);
                if (v9 == 0) {
                    // 0x100003dfc
                    _printf("%d\n", (int64_t)&g1);
                }
                // 0x100003e20
                v19 = 10 - v9;
                v21 = 0;
            } else {
                // 0x100003e40
                v22 = v18 - v8;
                if (v22 == 0 || v22 < 0 != ((v22 ^ v18) & (v18 ^ v8)) < 0) {
                    // 0x100003e78
                    v20 = v9 < 9 == (8 - v9 & v9) < 0 ? 0 : v9 + 1;
                    v19 = 1;
                    v21 = v20;
                } else {
                    // 0x100003e58
                    v19 = 10 - v9;
                    v21 = 0;
                }
            }
            // 0x100003ec4
            v23 = v19 + v8;
        }
        // 0x100003ecc
        v25 = v4 + 1;
        v26 = (float32_t)v7;
    }
    // 0x100003edc
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003efc
        ___stack_chk_fail();
    }
    // 0x100003f00
    return 0;
}

// Address range: 0x100003f10 - 0x100003f1c
int64_t function_100003f10(void) {
    // 0x100003f10
    return ___stack_chk_fail();
}

// Address range: 0x100003f1c - 0x100003f28
int64_t * function_100003f1c(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f1c
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f28 - 0x100003f34
float64_t function_100003f28(float64_t a1, float64_t a2) {
    // 0x100003f28
    return _pow(a1, a2);
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6
