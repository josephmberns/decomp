//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003874(void);
int64_t function_10000397c(void);
int64_t function_100003b8c(void);
int64_t function_100003f3c(void);
int64_t * function_100003f48(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f54(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x100000cfeedfacf; // 0x100008000
int64_t g2 = 0x200000000; // 0x100008008
int64_t g3 = 0; // 0x1000081e8
int64_t g4 = 0; // 0x100008508

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003874 - 0x10000397c
int64_t function_100003874(void) {
    // 0x100003874
    g3 = 0;
    int64_t v1 = 1;
    *(int64_t *)(8 * v1 + (int64_t)&g3) = 1;
    v1++;
    int64_t v2 = 1; // 0x10000389c
    while (v1 != 10) {
        // 0x1000038a4
        *(int64_t *)(8 * v1 + (int64_t)&g3) = 1;
        v1++;
        v2 = 1;
    }
    int64_t v3; // 0x100003874
    for (int64_t i = 0; i < 10; i++) {
        // 0x100003908
        v3 = 8 * i + (int64_t)&g3 + 80 * v2;
        *(int64_t *)v3 = *(int64_t *)(v3 - 80) * i;
    }
    int64_t v4 = v2 + 1;
    v2 = v4;
    while (v4 != 10) {
        for (int64_t i = 0; i < 10; i++) {
            // 0x100003908
            v3 = 8 * i + (int64_t)&g3 + 80 * v2;
            *(int64_t *)v3 = *(int64_t *)(v3 - 80) * i;
        }
        // 0x100003964
        v4 = v2 + 1;
        v2 = v4;
    }
    // 0x100003974
    int64_t result; // 0x100003874
    return result;
}

// Address range: 0x10000397c - 0x100003b8c
int64_t function_10000397c(void) {
    // 0x10000397c
    int64_t v1; // 0x10000397c
    int32_t v2 = v1; // 0x100003980
    if (v2 < 3 != (2 - v2 & v2) < 0) {
        // 0x100003b80
        return 0;
    }
    int64_t v3 = 80 * (0x100000000 * v1 >> 32) + (int64_t)&g3;
    int64_t v4 = 0;
    int64_t v5 = 1;
    uint32_t v6 = *(int32_t *)(4 * v5 + v1); // 0x1000039d0
    int64_t v7 = v4; // 0x1000039dc
    int64_t v8; // 0x100003a00
    if (v6 >= 1) {
        // 0x1000039e4
        v8 = *(int64_t *)(v3 + 8 * v5);
        v7 = v8 * (int64_t)v6 + v4;
    }
    int64_t v9 = v7;
    int64_t v10 = v5 + 1;
    while (v10 != 10) {
        // 0x1000039c8
        v4 = v9;
        v5 = v10;
        v6 = *(int32_t *)(4 * v5 + v1);
        v7 = v4;
        if (v6 >= 1) {
            // 0x1000039e4
            v8 = *(int64_t *)(v3 + 8 * v5);
            v7 = v8 * (int64_t)v6 + v4;
        }
        // 0x100003a28
        v9 = v7;
        v10 = v5 + 1;
    }
    // 0x100003a38
    if (v9 == 0) {
        // 0x100003b80
        return 0;
    }
    int32_t v11 = v2; // 0x100003a44
    uint64_t v12 = v9;
    int64_t v13 = v12 / 10; // 0x100003a68
    int32_t * v14 = (int32_t *)(4 * (-10 * v13 + v12) + v1); // 0x100003a88
    *v14 = *v14 - 1;
    v11--;
    while (v12 >= 10) {
        // 0x100003a60
        v12 = v13;
        v13 = v12 / 10;
        v14 = (int32_t *)(4 * (-10 * v13 + v12) + v1);
        *v14 = *v14 - 1;
        v11--;
    }
    // 0x100003ac0
    if (v11 != 0) {
        // 0x100003b80
        return 0;
    }
    int32_t v15 = 1;
    while (*(int32_t *)(4 * (int64_t)v15 + v1) == 0) {
        int32_t v16 = v15 + 1; // 0x100003b30
        if (v15 < 9 == (8 - v15 & v16) < 0) {
            int32_t v17 = *(int32_t *)&g1; // 0x100003b58
            *(int32_t *)&g1 = v17 + 1;
            *(int64_t *)(8 * (int64_t)v17 + (int64_t)&g2) = v9;
            return 0;
        }
        v15 = v16;
    }
    // 0x100003b80
    return 0;
}

// Address range: 0x100003b8c - 0x100003d20
int64_t function_100003b8c(void) {
    // 0x100003b8c
    int64_t v1; // 0x100003b8c
    int32_t v2 = v1; // 0x100003ba8
    int32_t v3 = v1; // 0x100003bac
    int64_t v4; // 0x100003b8c
    if (v3 < 9 != (8 - v3 & v3) < 0) {
        if (v2 < 10 != (9 - v2 & v2) < 0) {
            int32_t * v5 = (int32_t *)((0x100000000 * v1 >> 30) + (int64_t)&g4); // 0x100003bf8
            int32_t v6 = v2;
            *v5 = *v5 + 1;
            int64_t v7 = function_100003b8c(); // 0x100003c10
            int32_t v8 = *v5 - 1; // 0x100003c24
            *v5 = v8;
            int32_t v9 = v6 + 1; // 0x100003c34
            v4 = v7;
            while (v6 < 9 != (8 - v6 & v9) < 0) {
                // 0x100003be4
                v6 = v9;
                *v5 = v8 + 1;
                v7 = function_100003b8c();
                v8 = *v5 - 1;
                *v5 = v8;
                v9 = v6 + 1;
                v4 = v7;
            }
        }
    }
    int32_t v10 = v2 == 0 ? 1 : v2;
    int64_t v11 = v4; // 0x100003c7c
    if (v10 < 10 != (9 - v10 & v10) < 0) {
        int32_t v12 = v10;
        int32_t * v13 = (int32_t *)(4 * (int64_t)v12 + (int64_t)&g4); // 0x100003c9c
        *v13 = *v13 + 1;
        int64_t v14; // bp-64, 0x100003b8c
        _memcpy(&v14, &g4, 40);
        int64_t v15 = function_10000397c(); // 0x100003cc0
        *v13 = *v13 - 1;
        int32_t v16 = v12 + 1; // 0x100003ce4
        v11 = v15;
        while (v12 < 9 != (8 - v12 & v16) < 0) {
            // 0x100003c84
            v12 = v16;
            v13 = (int32_t *)(4 * (int64_t)v12 + (int64_t)&g4);
            *v13 = *v13 + 1;
            _memcpy(&v14, &g4, 40);
            v15 = function_10000397c();
            *v13 = *v13 - 1;
            v16 = v12 + 1;
            v11 = v15;
        }
    }
    int64_t v17 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003cfc
    int64_t result = v11; // 0x100003d08
    if (v17 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003d10
        result = ___stack_chk_fail();
    }
    // 0x100003d14
    return result;
}

// Address range: 0x100003d20 - 0x100003f3c
int64_t entry_point(void) {
    // 0x100003d20
    function_100003874();
    function_100003b8c();
    int32_t v1 = *(int32_t *)&g1; // 0x100003d58
    int32_t v2 = 1 - v1;
    int32_t v3 = v2; // 0x100003d68
    int32_t v4 = v1; // 0x100003d68
    if (v2 < 0 != (v2 & v1 - 1) < 0) {
        int32_t v5 = 0;
        int32_t v6 = v4;
        int32_t v7 = v5 + 1;
        int32_t v8 = v7 - v6; // 0x100003d8c
        int32_t v9 = v6; // 0x100003d94
        int32_t v10; // 0x100003d20
        int32_t v11; // 0x100003d88
        int32_t v12; // 0x100003d20
        int64_t * v13; // 0x100003db0
        int64_t * v14; // 0x100003da8
        uint64_t v15; // 0x100003da8
        uint64_t v16; // 0x100003db0
        int32_t v17; // 0x100003d8c
        if (v8 < 0 != ((v8 ^ v7) & (v7 ^ v6)) < 0) {
            // 0x100003d9c
            v13 = (int64_t *)(8 * (int64_t)v5 + (int64_t)&g2);
            v12 = v7;
            v14 = (int64_t *)(8 * (int64_t)v12 + (int64_t)&g2);
            v15 = *v14;
            v16 = *v13;
            v10 = v6;
            if (v15 < v16) {
                // 0x100003dc4
                *v13 = v15;
                *v14 = v16;
                v10 = *(int32_t *)&g1;
            }
            // 0x100003dfc
            v11 = v10;
            v12++;
            v17 = v12 - v11;
            v9 = v10;
            while (v17 < 0 != ((v17 ^ v12) & (v11 ^ v12)) < 0) {
                // 0x100003d9c
                v14 = (int64_t *)(8 * (int64_t)v12 + (int64_t)&g2);
                v15 = *v14;
                v16 = *v13;
                v10 = v11;
                if (v15 < v16) {
                    // 0x100003dc4
                    *v13 = v15;
                    *v14 = v16;
                    v10 = *(int32_t *)&g1;
                }
                // 0x100003dfc
                v11 = v10;
                v12++;
                v17 = v12 - v11;
                v9 = v10;
            }
        }
        // 0x100003e10
        v4 = v9;
        int32_t v18 = v4 - 1; // 0x100003d5c
        while (v7 - v18 < 0 != ((v7 - v18 ^ v7) & (v18 ^ v7)) < 0) {
            // 0x100003d80
            v5 = v7;
            v6 = v4;
            v7 = v5 + 1;
            v8 = v7 - v6;
            v9 = v6;
            if (v8 < 0 != ((v8 ^ v7) & (v7 ^ v6)) < 0) {
                // 0x100003d9c
                v13 = (int64_t *)(8 * (int64_t)v5 + (int64_t)&g2);
                v12 = v7;
                v14 = (int64_t *)(8 * (int64_t)v12 + (int64_t)&g2);
                v15 = *v14;
                v16 = *v13;
                v10 = v6;
                if (v15 < v16) {
                    // 0x100003dc4
                    *v13 = v15;
                    *v14 = v16;
                    v10 = *(int32_t *)&g1;
                }
                // 0x100003dfc
                v11 = v10;
                v12++;
                v17 = v12 - v11;
                v9 = v10;
                while (v17 < 0 != ((v17 ^ v12) & (v11 ^ v12)) < 0) {
                    // 0x100003d9c
                    v14 = (int64_t *)(8 * (int64_t)v12 + (int64_t)&g2);
                    v15 = *v14;
                    v16 = *v13;
                    v10 = v11;
                    if (v15 < v16) {
                        // 0x100003dc4
                        *v13 = v15;
                        *v14 = v16;
                        v10 = *(int32_t *)&g1;
                    }
                    // 0x100003dfc
                    v11 = v10;
                    v12++;
                    v17 = v12 - v11;
                    v9 = v10;
                }
            }
            // 0x100003e10
            v4 = v9;
            v18 = v4 - 1;
        }
        // 0x100003d50
        v3 = 1 - v4;
    }
    int32_t v19 = v3;
    int32_t v20 = 1; // 0x100003e44
    int32_t v21 = 0; // 0x100003e44
    if (v19 < 0 != (v4 & v19) < 0) {
        int32_t v22 = 0;
        int64_t * v23 = (int64_t *)(8 * (int64_t)v20 + (int64_t)&g2); // 0x100003e58
        int64_t v24 = *v23; // 0x100003e58
        int64_t v25 = *(int64_t *)(8 * (int64_t)v22 + (int64_t)&g2); // 0x100003e60
        int32_t v26 = v4; // 0x100003e6c
        int32_t v27 = v22; // 0x100003e6c
        int64_t * v28; // 0x100003e98
        if (v24 != v25) {
            // 0x100003e74
            v27 = v22 + 1;
            v28 = (int64_t *)(8 * (int64_t)v27 + (int64_t)&g2);
            *v23 = *v28;
            *v28 = v24;
            v26 = *(int32_t *)&g1;
        }
        int32_t v29 = v27;
        int32_t v30 = v26; // 0x100003e38
        v20++;
        int32_t v31 = v20 - v30; // 0x100003e3c
        v21 = v29;
        while (v31 < 0 != ((v31 ^ v20) & (v30 ^ v20)) < 0) {
            // 0x100003e4c
            v22 = v29;
            v23 = (int64_t *)(8 * (int64_t)v20 + (int64_t)&g2);
            v24 = *v23;
            v25 = *(int64_t *)(8 * (int64_t)v22 + (int64_t)&g2);
            v26 = v30;
            v27 = v22;
            if (v24 != v25) {
                // 0x100003e74
                v27 = v22 + 1;
                v28 = (int64_t *)(8 * (int64_t)v27 + (int64_t)&g2);
                *v23 = *v28;
                *v28 = v24;
                v26 = *(int32_t *)&g1;
            }
            // 0x100003eb8
            v29 = v27;
            v30 = v26;
            v20++;
            v31 = v20 - v30;
            v21 = v29;
        }
    }
    int32_t v32 = v21;
    _printf("Own digits power sums for N = 3 to 9 inclusive:\n");
    int32_t v33 = -v32; // 0x100003ee4
    if (v32 != 0 && v33 < 0 == (v32 & v33) < 0) {
        // 0x100003f2c
        return 0;
    }
    int32_t v34 = 0; // 0x100003eec
    _printf("%lld\n", 0);
    v34++;
    while (v34 - v32 == 0 || v34 - v32 < 0 != ((v34 - v32 ^ v34) & (v34 ^ v32)) < 0) {
        // 0x100003ef4
        _printf("%lld\n", 0);
        v34++;
    }
    // 0x100003f2c
    return 0;
}

// Address range: 0x100003f3c - 0x100003f48
int64_t function_100003f3c(void) {
    // 0x100003f3c
    return ___stack_chk_fail();
}

// Address range: 0x100003f48 - 0x100003f54
int64_t * function_100003f48(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f48
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * format, ...) {
    // 0x100003f54
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

