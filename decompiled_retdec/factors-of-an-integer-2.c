//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000038b8(void);
int64_t function_100003a2c(void);
int64_t function_100003bb4(void);
int64_t function_100003c1c(void);
int64_t function_100003df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003f30(int64_t a1);
int64_t * function_100003f3c(int64_t * s, int32_t c, int32_t n);
int32_t function_100003f48(char * format, ...);
void function_100003f54(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));

// --------------------- Global Variables ---------------------

int64_t g1 = 0x100000cfeedfacf; // 0x100008000
int64_t g2 = 0x100000cfeedfa; // 0x100008001
int64_t g3 = 0; // 0x100018000
int64_t g4 = 0; // 0x100018008
int32_t g5;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));

// ------------------------ Functions -------------------------

// Address range: 0x1000038b8 - 0x100003a2c
int64_t function_1000038b8(void) {
    int64_t * v1 = _memset(&g1, 1, 0x10000); // 0x1000038d8
    *(char *)&g2 = 0;
    *(char *)&g1 = 0;
    int32_t v2 = 0;
    char v3 = *(char *)((int64_t)v2 + (int64_t)&g1); // 0x100003914
    int32_t v4; // 0x1000038b8
    int32_t v5; // 0x100003930
    int32_t v6; // 0x100003970
    if (v3 != 0) {
        // 0x100003928
        v5 = v2 * v2;
        v4 = v5;
        if (v5 < 0x10000 != (0xffff - v5 & v5) < 0) {
            *(char *)((int64_t)v4 + (int64_t)&g1) = 0;
            v6 = v4 + v2;
            v4 = v6;
            while (v6 < 0x10000 != (0xffff - v6 & v6) < 0) {
                // 0x100003950
                *(char *)((int64_t)v4 + (int64_t)&g1) = 0;
                v6 = v4 + v2;
                v4 = v6;
            }
        }
    }
    int32_t v7 = v2 + 1; // 0x100003988
    while (v2 < 255 != (254 - v2 & v7) < 0) {
        // 0x100003904
        v2 = v7;
        v3 = *(char *)((int64_t)v2 + (int64_t)&g1);
        if (v3 != 0) {
            // 0x100003928
            v5 = v2 * v2;
            v4 = v5;
            if (v5 < 0x10000 != (0xffff - v5 & v5) < 0) {
                *(char *)((int64_t)v4 + (int64_t)&g1) = 0;
                v6 = v4 + v2;
                v4 = v6;
                while (v6 < 0x10000 != (0xffff - v6 & v6) < 0) {
                    // 0x100003950
                    *(char *)((int64_t)v4 + (int64_t)&g1) = 0;
                    v6 = v4 + v2;
                    v4 = v6;
                }
            }
        }
        // 0x100003984
        v7 = v2 + 1;
    }
    int32_t v8 = 0;
    int32_t v9 = 0;
    int64_t v10 = v9; // 0x1000039b4
    int32_t v11 = v8; // 0x1000039d0
    if (*(char *)(v10 + (int64_t)&g1) != 0) {
        // 0x1000039d8
        *(int64_t *)(8 * (int64_t)v8 + (int64_t)&g4) = v10;
        v11 = v8 + 1;
    }
    int32_t v12 = v11;
    int32_t v13 = v9 + 1; // 0x100003a04
    while (v9 < 0xffff != (0xfffe - v9 & v13) < 0) {
        // 0x1000039b4
        v8 = v12;
        v9 = v13;
        v10 = v9;
        v11 = v8;
        if (*(char *)(v10 + (int64_t)&g1) != 0) {
            // 0x1000039d8
            *(int64_t *)(8 * (int64_t)v8 + (int64_t)&g4) = v10;
            v11 = v8 + 1;
        }
        // 0x100003a00
        v12 = v11;
        v13 = v9 + 1;
    }
    // 0x100003a10
    g3 = v12;
    return (int64_t)v1;
}

// Address range: 0x100003a2c - 0x100003bb4
int64_t function_100003a2c(void) {
    int64_t v1 = g3; // 0x100003a5c
    int64_t v2 = 0; // 0x100003a5c
    int32_t v3 = 0; // 0x100003a5c
    int64_t v4; // 0x100003a2c
    int64_t v5; // 0x100003a2c
    if (g3 != 0) {
        int32_t v6 = 0;
        int64_t v7; // 0x100003a2c
        int64_t v8 = v7;
        uint64_t v9 = *(int64_t *)(8 * v2 + (int64_t)&g4); // 0x100003a70
        uint64_t v10 = v9 * v9; // 0x100003a80
        v3 = v6;
        v4 = v8;
        while (v10 == v8 || v10 < v8) {
            int64_t v11 = v1;
            int64_t v12 = v8; // 0x100003ac0
            int64_t v13 = v8; // 0x100003ac0
            int64_t v14 = v11; // 0x100003ac0
            int32_t v15 = v6; // 0x100003ac0
            if (v8 % v9 == 0) {
                int64_t v16 = v12 / v9; // 0x100003ad4
                int64_t v17 = 1; // 0x100003ae0
                int64_t v18 = v17; // 0x100003ac0
                v12 = v16;
                while (v16 % v9 == 0) {
                    // 0x100003acc
                    v16 = v12 / v9;
                    v17 = v18 + 1;
                    v18 = v17;
                    v12 = v16;
                }
                // 0x100003aec
                v13 = v16;
                v14 = v11;
                v15 = v6;
                if (v17 != 0) {
                    int64_t v19 = 16 * (int64_t)v6 + v5; // 0x100003b10
                    *(int64_t *)v19 = v9;
                    *(int64_t *)(v19 + 8) = v17;
                    v13 = v16;
                    v14 = g3;
                    v15 = v6 + 1;
                }
            }
            // 0x100003b3c
            v1 = v14;
            v2++;
            v3 = v15;
            v4 = v13;
            if (v2 >= v1) {
                // break -> 0x100003b4c
                break;
            }
            v6 = v15;
            v8 = v13;
            v9 = *(int64_t *)(8 * v2 + (int64_t)&g4);
            v10 = v9 * v9;
            v3 = v6;
            v4 = v8;
        }
    }
    int32_t result = v3; // 0x100003b58
    if (v4 != 1) {
        int64_t v20 = 16 * (int64_t)v3 + v5; // 0x100003b7c
        *(int64_t *)v20 = v4;
        *(int64_t *)(v20 + 8) = 1;
        result = v3 + 1;
    }
    // 0x100003ba8
    return result;
}

// Address range: 0x100003bb4 - 0x100003c1c
int64_t function_100003bb4(void) {
    // 0x100003bb4
    int64_t v1; // 0x100003bb4
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    return v3 < v2 ? 0xffffffff : (int64_t)(v3 != v2);
}

// Address range: 0x100003c1c - 0x100003dd0
int64_t function_100003c1c(void) {
    int32_t v1 = function_100003a2c(); // 0x100003c50
    int64_t v2; // 0x100003c1c
    int64_t * v3 = (int64_t *)v2; // 0x100003c5c
    *v3 = 1;
    int32_t v4 = -v1; // 0x100003c7c
    int32_t result = 1; // 0x100003c84
    if (v4 < 0 != (v4 & v1) < 0) {
        int32_t v5 = 0; // 0x100003d64
        int32_t v6 = 1;
        int64_t v7; // bp-1632, 0x100003c1c
        int64_t v8 = 16 * (int64_t)v5 + (int64_t)&v7; // 0x100003c9c
        int64_t * v9 = (int64_t *)(v8 + 8); // 0x100003cb8
        int64_t v10 = *v9; // 0x100003cb8
        int32_t v11 = v6; // 0x100003cc4
        int64_t v12; // 0x100003c1c
        int64_t v13; // 0x100003c1c
        int64_t v14; // 0x100003cb8
        int64_t v15; // 0x100003d48
        int32_t v16; // 0x100003c1c
        int32_t v17; // 0x100003c1c
        int32_t v18; // 0x100003c1c
        int32_t v19; // 0x100003c1c
        int32_t v20; // 0x100003c1c
        int32_t v21; // 0x100003c1c
        int64_t * v22; // 0x100003c9c
        int64_t v23; // 0x100003c9c
        int32_t v24; // 0x100003cdc
        int32_t v25; // 0x100003d34
        int64_t v26; // 0x100003cf4
        int32_t v27; // 0x100003d0c
        int32_t v28; // 0x100003d20
        int32_t v29; // 0x100003cdc
        if (v10 != 0) {
            // 0x100003cd4
            v22 = (int64_t *)v8;
            v23 = *v22;
            v24 = -v6;
            v25 = 0;
            v16 = v6;
            v21 = v23;
            v12 = v10;
            v13 = v23;
            v18 = v16;
            if (v24 < 0 != (v6 & v24) < 0) {
                // 0x100003cec
                v28 = 0;
                v26 = *(int64_t *)(8 * (int64_t)v28 + v2);
                v27 = v16 + 1;
                *(int64_t *)(8 * (int64_t)v16 + v2) = v26 * (int64_t)v21;
                v28++;
                v29 = v28 - v6;
                v17 = v27;
                while (v29 < 0 != ((v29 ^ v28) & (v28 ^ v6)) < 0) {
                    // 0x100003cec
                    v26 = *(int64_t *)(8 * (int64_t)v28 + v2);
                    v27 = v17 + 1;
                    *(int64_t *)(8 * (int64_t)v17 + v2) = v26 * (int64_t)v21;
                    v28++;
                    v29 = v28 - v6;
                    v17 = v27;
                }
                // 0x100003cd4
                v12 = *v9;
                v13 = *v22;
                v18 = v27;
            }
            // 0x100003d30
            v19 = v18;
            v15 = v13;
            v14 = v12;
            v25++;
            v20 = v21 * (int32_t)v15;
            v11 = v19;
            while (v14 > (int64_t)v25) {
                // 0x100003cd4
                v16 = v19;
                v21 = v20;
                v12 = v14;
                v13 = v15;
                v18 = v16;
                if (v24 < 0 != (v6 & v24) < 0) {
                    // 0x100003cec
                    v28 = 0;
                    v26 = *(int64_t *)(8 * (int64_t)v28 + v2);
                    v27 = v16 + 1;
                    *(int64_t *)(8 * (int64_t)v16 + v2) = v26 * (int64_t)v21;
                    v28++;
                    v29 = v28 - v6;
                    v17 = v27;
                    while (v29 < 0 != ((v29 ^ v28) & (v28 ^ v6)) < 0) {
                        // 0x100003cec
                        v26 = *(int64_t *)(8 * (int64_t)v28 + v2);
                        v27 = v17 + 1;
                        *(int64_t *)(8 * (int64_t)v17 + v2) = v26 * (int64_t)v21;
                        v28++;
                        v29 = v28 - v6;
                        v17 = v27;
                    }
                    // 0x100003cd4
                    v12 = *v9;
                    v13 = *v22;
                    v18 = v27;
                }
                // 0x100003d30
                v19 = v18;
                v15 = v13;
                v14 = v12;
                v25++;
                v20 = v21 * (int32_t)v15;
                v11 = v19;
            }
        }
        int32_t v30 = v11;
        v5++;
        int32_t v31 = v5 - v1; // 0x100003c7c
        result = v30;
        while (v31 < 0 != ((v31 ^ v5) & (v5 ^ v1)) < 0) {
            // 0x100003c8c
            v6 = v30;
            v8 = 16 * (int64_t)v5 + (int64_t)&v7;
            v9 = (int64_t *)(v8 + 8);
            v10 = *v9;
            v11 = v6;
            if (v10 != 0) {
                // 0x100003cd4
                v22 = (int64_t *)v8;
                v23 = *v22;
                v24 = -v6;
                v25 = 0;
                v16 = v6;
                v21 = v23;
                v12 = v10;
                v13 = v23;
                v18 = v16;
                if (v24 < 0 != (v6 & v24) < 0) {
                    // 0x100003cec
                    v28 = 0;
                    v26 = *(int64_t *)(8 * (int64_t)v28 + v2);
                    v27 = v16 + 1;
                    *(int64_t *)(8 * (int64_t)v16 + v2) = v26 * (int64_t)v21;
                    v28++;
                    v29 = v28 - v6;
                    v17 = v27;
                    while (v29 < 0 != ((v29 ^ v28) & (v28 ^ v6)) < 0) {
                        // 0x100003cec
                        v26 = *(int64_t *)(8 * (int64_t)v28 + v2);
                        v27 = v17 + 1;
                        *(int64_t *)(8 * (int64_t)v17 + v2) = v26 * (int64_t)v21;
                        v28++;
                        v29 = v28 - v6;
                        v17 = v27;
                    }
                    // 0x100003cd4
                    v12 = *v9;
                    v13 = *v22;
                    v18 = v27;
                }
                // 0x100003d30
                v19 = v18;
                v15 = v13;
                v14 = v12;
                v25++;
                v20 = v21 * (int32_t)v15;
                v11 = v19;
                while (v14 > (int64_t)v25) {
                    // 0x100003cd4
                    v16 = v19;
                    v21 = v20;
                    v12 = v14;
                    v13 = v15;
                    v18 = v16;
                    if (v24 < 0 != (v6 & v24) < 0) {
                        // 0x100003cec
                        v28 = 0;
                        v26 = *(int64_t *)(8 * (int64_t)v28 + v2);
                        v27 = v16 + 1;
                        *(int64_t *)(8 * (int64_t)v16 + v2) = v26 * (int64_t)v21;
                        v28++;
                        v29 = v28 - v6;
                        v17 = v27;
                        while (v29 < 0 != ((v29 ^ v28) & (v28 ^ v6)) < 0) {
                            // 0x100003cec
                            v26 = *(int64_t *)(8 * (int64_t)v28 + v2);
                            v27 = v17 + 1;
                            *(int64_t *)(8 * (int64_t)v17 + v2) = v26 * (int64_t)v21;
                            v28++;
                            v29 = v28 - v6;
                            v17 = v27;
                        }
                        // 0x100003cd4
                        v12 = *v9;
                        v13 = *v22;
                        v18 = v27;
                    }
                    // 0x100003d30
                    v19 = v18;
                    v15 = v13;
                    v14 = v12;
                    v25++;
                    v20 = v21 * (int32_t)v15;
                    v11 = v19;
                }
            }
            // 0x100003d60
            v30 = v11;
            v5++;
            v31 = v5 - v1;
            result = v30;
        }
    }
    // 0x100003d78
    _qsort(v3, result, 8, (int32_t (*)(int64_t *, int64_t *))0x100003bb4);
    int64_t v32 = *(int64_t *)0x100004010; // 0x100003da0
    if (*(int64_t *)v32 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003db8
        ___stack_chk_fail((int64_t)&g5);
    }
    // 0x100003dbc
    return result;
}

// Address range: 0x100003dd0 - 0x100003df0
int64_t entry_point(void) {
    // 0x100003dd0
    return ___chkstk_darwin();
}

// Address range: 0x100003df0 - 0x100003f30
int64_t function_100003df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003df0
    int64_t v1; // 0x100003df0
    int64_t * v2 = (int64_t *)(v1 - 24); // 0x100003e04
    *v2 = *(int64_t *)*(int64_t *)0x100004010;
    function_1000038b8();
    int64_t v3; // bp-80008, 0x100003df0
    int32_t v4 = &v3;
    int32_t v5; // 0x100003edc
    for (int32_t i = 0; i < 4; i++) {
        int32_t v6 = function_100003c1c(); // 0x100003e60
        _printf("%lu:", v4);
        int32_t v7 = -v6; // 0x100003e90
        if (v7 < 0 != (v7 & v6) < 0) {
            _printf(" %lu", v4);
            int32_t v8 = 1; // 0x100003ec8
            int32_t v9 = v8 - v6; // 0x100003e90
            int32_t v10 = v8; // 0x100003e98
            while (v9 < 0 != ((v9 ^ v8) & (v8 ^ v6)) < 0) {
                // 0x100003ea0
                _printf(" %lu", v4);
                v8 = v10 + 1;
                v9 = v8 - v6;
                v10 = v8;
            }
        }
        // 0x100003ed4
        v5 = _printf((char *)0x100003f8a);
    }
    // 0x100003ef4
    if (*(int64_t *)*(int64_t *)0x100004010 != *v2) {
        // 0x100003f14
        ___stack_chk_fail((int64_t)v5);
    }
    // 0x100003f18
    return 0;
}

// Address range: 0x100003f30 - 0x100003f3c
int64_t function_100003f30(int64_t a1) {
    // 0x100003f30
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f3c - 0x100003f48
int64_t * function_100003f3c(int64_t * s, int32_t c, int32_t n) {
    // 0x100003f3c
    return _memset(s, c, n);
}

// Address range: 0x100003f48 - 0x100003f54
int32_t function_100003f48(char * format, ...) {
    // 0x100003f48
    return _printf(format);
}

// Address range: 0x100003f54 - 0x100003f60
void function_100003f54(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003f54
    _qsort(base, nmemb, size, compar);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10

