//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100002fec(void);
int64_t function_100003058(void);
int64_t function_100003190(void);
int64_t function_1000034ec(void);
int64_t function_100003848(void);
int64_t function_100003f2c(void);
int32_t function_100003f38(char * nptr);
int64_t * function_100003f44(int32_t nmemb, int32_t size);
int32_t function_100003f50(char * format, ...);
int32_t function_100003f5c(int32_t c);
int32_t function_100003f68(void);
char * function_100003f74(int32_t category, char * locale);

// --------------------- Global Variables ---------------------

char * g1 = "\x1b[31m"; // 0x100003f80
float128_t g2 = 2.12199579096527231511138221486320883e-314L; // 0x100003f90
int32_t * g3 = (int32_t *)0xfffffffe; // 0x100008078
int32_t * g4 = (int32_t *)0x100000cfeedfacf; // 0x100008098
int64_t g5 = 0x200000000; // 0x1000080a0
int32_t * g6 = (int32_t *)0x55800000012; // 0x1000080a8
int32_t * g7; // 0x1000080ac

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _atoi(char * a1);
int64_t * _calloc(int32_t a1, int32_t a2);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _rand(void);
char * _setlocale(int32_t a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100002fec - 0x100003058
int64_t function_100002fec(void) {
    // 0x100002fec
    int64_t v1; // 0x100002fec
    int32_t v2 = v1; // 0x100002ff8
    int32_t v3 = _rand(); // 0x100003018
    while ((v3 - (0x7fffffff % v2 ^ 0x7fffffff)) < 0 == (v3 & -((v3 - (0x7fffffff % v2 ^ 0x7fffffff)))) < 0) {
        // 0x100003018
        v3 = _rand();
    }
    // 0x100003038
    return v3 / (0x7fffffff / v2);
}

// Address range: 0x100003058 - 0x100003190
int64_t function_100003058(void) {
    int32_t v1 = 2 * *(int32_t *)&g6; // 0x100003080
    int32_t v2 = -v1; // 0x100003084
    if (v1 != 0 && v2 < 0 == (v1 & v2) < 0) {
        // 0x100003184
        int64_t result; // 0x100003058
        return result;
    }
    // 0x10000309c
    int64_t v3; // 0x100003058
    char v4 = v3;
    int32_t v5 = 0;
    int32_t v6 = 2 * *(int32_t *)&g7; // 0x1000030b0
    int32_t v7 = -v6; // 0x1000030b4
    int64_t v8; // 0x1000030d4
    int32_t v9; // 0x10000315c
    int32_t v10; // 0x1000030b0
    if (v6 == 0 || v7 < 0 != (v6 & v7) < 0) {
        // 0x1000030c4
        v9 = 0;
        v8 = *(int64_t *)(g5 + 8 * (int64_t)v5);
        if (*(char *)(v8 + (int64_t)v9) < 17) {
            // 0x100003108
            _printf("%lc", v4);
        } else {
            // 0x100003144
            _printf((char *)&g1);
            _printf("%lc", v4);
            _printf((char *)0x100003f8a);
        }
        // 0x100003158
        v9++;
        v10 = 2 * *(int32_t *)&g7;
        while (v9 - v10 == 0 || v9 - v10 < 0 != ((v9 - v10 ^ v9) & (v10 ^ v9)) < 0) {
            // 0x1000030c4
            v8 = *(int64_t *)(g5 + 8 * (int64_t)v5);
            if (*(char *)(v8 + (int64_t)v9) < 17) {
                // 0x100003108
                _printf("%lc", v4);
            } else {
                // 0x100003144
                _printf((char *)&g1);
                _printf("%lc", v4);
                _printf((char *)0x100003f8a);
            }
            // 0x100003158
            v9++;
            v10 = 2 * *(int32_t *)&g7;
        }
    }
    int32_t result2 = _putchar(10); // 0x10000316c
    int32_t v11 = v5 + 1; // 0x100003178
    int32_t v12 = 2 * *(int32_t *)&g6; // 0x100003080
    while (v11 - v12 == 0 || v11 - v12 < 0 != ((v11 - v12 ^ v11) & (v12 ^ v11)) < 0) {
        // 0x10000309c
        v5 = v11;
        v6 = 2 * *(int32_t *)&g7;
        v7 = -v6;
        if (v6 == 0 || v7 < 0 != (v6 & v7) < 0) {
            // 0x1000030c4
            v9 = 0;
            v8 = *(int64_t *)(g5 + 8 * (int64_t)v5);
            if (*(char *)(v8 + (int64_t)v9) < 17) {
                // 0x100003108
                _printf("%lc", v4);
            } else {
                // 0x100003144
                _printf((char *)&g1);
                _printf("%lc", v4);
                _printf((char *)0x100003f8a);
            }
            // 0x100003158
            v9++;
            v10 = 2 * *(int32_t *)&g7;
            while (v9 - v10 == 0 || v9 - v10 < 0 != ((v9 - v10 ^ v9) & (v10 ^ v9)) < 0) {
                // 0x1000030c4
                v8 = *(int64_t *)(g5 + 8 * (int64_t)v5);
                if (*(char *)(v8 + (int64_t)v9) < 17) {
                    // 0x100003108
                    _printf("%lc", v4);
                } else {
                    // 0x100003144
                    _printf((char *)&g1);
                    _printf("%lc", v4);
                    _printf((char *)0x100003f8a);
                }
                // 0x100003158
                v9++;
                v10 = 2 * *(int32_t *)&g7;
            }
        }
        // 0x100003168
        result2 = _putchar(10);
        v11 = v5 + 1;
        v12 = 2 * *(int32_t *)&g6;
    }
    // 0x100003184
    return result2;
}

// Address range: 0x100003190 - 0x1000034ec
int64_t function_100003190(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x1000031a4
    float128_t v2 = g2; // bp-48, 0x1000031c0
    int64_t v3; // 0x100003190
    int64_t v4 = 0x100000000 * v3 >> 29; // 0x1000031d4
    int64_t v5 = 0x100000000 * v3;
    int64_t v6 = v5 >> 32; // 0x1000031d8
    char * v7 = (char *)(*(int64_t *)(g5 + v4) + v6); // 0x1000031e0
    *v7 = *v7 | 16;
    *(int32_t *)&g4 = *(int32_t *)&g4 - 1;
    int64_t v8 = &v2;
    int64_t v9 = 3;
    int64_t v10 = function_100002fec(); // 0x100003230
    int32_t * v11; // 0x100003254
    int32_t * v12; // 0x100003260
    if (v9 != (v10 & 0xffffffff)) {
        // 0x10000324c
        v11 = (int32_t *)(4 * v9 + v8);
        v12 = (int32_t *)((0x100000000 * v10 >> 30) + v8);
        *v11 = *v12;
        *v12 = *v11;
    }
    int64_t v13 = v9 - 1;
    while (v13 != 0) {
        // 0x100003220
        v9 = v13;
        v10 = function_100002fec();
        if (v9 != (v10 & 0xffffffff)) {
            // 0x10000324c
            v11 = (int32_t *)(4 * v9 + v8);
            v12 = (int32_t *)((0x100000000 * v10 >> 30) + v8);
            *v11 = *v12;
            *v12 = *v11;
        }
        // 0x100003280
        v13 = v9 - 1;
    }
    int32_t v14 = *(int32_t *)&g4; // 0x1000032a0
    int64_t v15 = v10; // 0x1000032b4
    if (v14 != 0) {
        int32_t v16 = v3; // 0x1000031ac
        int32_t v17 = v3; // 0x1000031b0
        int64_t v18 = 8 * v3;
        int32_t v19 = v14; // 0x1000032a0
        int32_t v20 = 0; // 0x100003190
        int64_t v21 = v10;
        uint64_t v22 = 0;
        v15 = v21;
        while (v22 < 4 != (3 - v20 & (int32_t)v22) < 0) {
            int64_t v23 = 8 * (int64_t)*(int32_t *)(4 * v22 + v8); // 0x1000032ec
            int32_t v24 = *(int32_t *)(v23 + (int64_t)&g3); // 0x1000032f8
            int32_t v25 = v24 + v16; // 0x1000032fc
            int32_t v26 = *(int32_t *)(v23 + (int64_t)&g3 + 4); // 0x100003314
            int32_t v27 = v26 + v17; // 0x100003318
            int64_t v28 = *(int64_t *)(8 * (int64_t)v27 + g5); // 0x100003330
            int32_t v29 = v19; // 0x100003344
            int64_t v30 = v21; // 0x100003344
            if ((*(char *)(v28 + (int64_t)v25) & 16) == 0) {
                if (v24 == 0) {
                    int64_t v31 = 8 * (int64_t)((v27 + v17) / 2); // 0x100003390
                    char * v32 = (char *)(*(int64_t *)(v31 + g5) + (v5 + 0x100000000 >> 32)); // 0x1000033a0
                    *v32 = *v32 & -5;
                    char * v33 = (char *)(*(int64_t *)(g5 + v31) + v6); // 0x1000033c0
                    *v33 = *v33 & -13;
                    char * v34 = (char *)(*(int64_t *)(g5 + v31) + (v5 - 0x100000000 >> 32)); // 0x1000033e4
                    *v34 = *v34 & -9;
                } else {
                    if (v26 == 0) {
                        int64_t v35 = (v25 + v16) / 2; // 0x10000343c
                        char * v36 = (char *)(*(int64_t *)(g5 + (v18 + 0xfffffff8 & 0xfffffff8)) + v35); // 0x100003444
                        *v36 = *v36 & -3;
                        char * v37 = (char *)(*(int64_t *)(g5 + v4) + v35); // 0x100003464
                        *v37 = *v37 & -4;
                        char * v38 = (char *)(*(int64_t *)(g5 + (v18 + 8 & 0xfffffff8)) + v35); // 0x100003488
                        *v38 = *v38 & -2;
                    }
                }
                // 0x10000349c
                v30 = function_100003190();
                v29 = *(int32_t *)&g4;
            }
            // 0x1000034ac
            v21 = v30;
            v19 = v29;
            v20++;
            v15 = v21;
            if (v19 == 0) {
                // break -> 0x1000034bc
                break;
            }
            v22++;
            v15 = v21;
        }
    }
    int64_t result = v15; // 0x1000034d4
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x1000034dc
        result = ___stack_chk_fail();
    }
    // 0x1000034e0
    return result;
}

// Address range: 0x1000034ec - 0x100003848
int64_t function_1000034ec(void) {
    // 0x1000034ec
    int64_t v1; // 0x1000034ec
    int32_t v2 = v1; // 0x1000034f8
    int32_t v3 = v1; // 0x1000034fc
    int64_t v4 = 0x100000000 * v1 >> 29; // 0x100003518
    int64_t v5 = 0x100000000 * v1 >> 32; // 0x10000351c
    char * v6 = (char *)(*(int64_t *)(g5 + v4) + v5); // 0x100003524
    *v6 = *v6 | 16;
    if (v3 == (int32_t)v1 == v2 == (int32_t)v1) {
        // 0x100003838
        return 1;
    }
    int32_t v7 = 0;
    int64_t v8 = 8 * (int64_t)v7; // 0x100003590
    int32_t v9 = *(int32_t *)(v8 + (int64_t)&g3); // 0x10000359c
    int32_t v10 = v9 + v2; // 0x1000035a0
    int32_t v11 = *(int32_t *)(v8 + (int64_t)&g3 + 4); // 0x1000035b4
    int32_t v12 = v11 + v3; // 0x1000035b8
    int64_t v13 = *(int64_t *)(8 * (int64_t)v12 + g5); // 0x1000035d0
    int32_t v14; // 0x10000361c
    int64_t v15; // 0x100003634
    int32_t v16; // 0x100003718
    int64_t v17; // 0x100003734
    int32_t v18; // 0x100003688
    int64_t v19; // 0x10000368c
    char * v20; // 0x100003698
    char * v21; // 0x1000036b8
    int64_t v22; // 0x1000036d4
    char * v23; // 0x1000036e0
    int64_t v24; // 0x100003784
    char * v25; // 0x100003794
    char * v26; // 0x1000037b4
    int64_t v27; // 0x1000037c8
    char * v28; // 0x1000037d8
    if (*(char *)(v13 + (int64_t)v10) == 0) {
        if (v9 == 0) {
            // 0x10000360c
            v14 = (v12 + v3) / 2;
            v15 = 8 * (int64_t)v14;
            if (*(char *)(*(int64_t *)(v15 + g5) + v5) == 0) {
                // 0x100003650
                if ((int32_t)function_1000034ec() != 0) {
                    // 0x100003678
                    v18 = 8 * v14;
                    v19 = *(int64_t *)(g5 + (int64_t)(v18 - 8));
                    v20 = (char *)(v19 + v5);
                    *v20 = *v20 | 2;
                    v21 = (char *)(*(int64_t *)(g5 + v15) + v5);
                    *v21 = *v21 | 19;
                    v22 = *(int64_t *)(g5 + (int64_t)(v18 + 8));
                    v23 = (char *)(v22 + v5);
                    *v23 = *v23 | 1;
                    return 1;
                }
            }
        } else {
            // 0x1000036f0
            if (v11 != 0) {
                // 0x100003838
                return 1;
            }
            // 0x100003708
            v16 = (v10 + v2) / 2;
            v17 = v16;
            if (*(char *)(*(int64_t *)(g5 + v4) + v17) == 0) {
                // 0x10000374c
                if ((int32_t)function_1000034ec() != 0) {
                    // 0x100003774
                    v24 = *(int64_t *)(g5 + v4);
                    v25 = (char *)(v24 + (int64_t)(v16 - 1));
                    *v25 = *v25 | 8;
                    v26 = (char *)(*(int64_t *)(g5 + v4) + v17);
                    *v26 = *v26 | 28;
                    v27 = *(int64_t *)(g5 + v4);
                    v28 = (char *)(v27 + (int64_t)(v16 + 1));
                    *v28 = *v28 | 4;
                    return 1;
                }
            }
        }
    }
    int32_t v29 = v7 + 1; // 0x1000037fc
    while (v7 == 2 || v7 < 2 != (1 - v7 & v29) < 0) {
        // 0x100003588
        v7 = v29;
        v8 = 8 * (int64_t)v7;
        v9 = *(int32_t *)(v8 + (int64_t)&g3);
        v10 = v9 + v2;
        v11 = *(int32_t *)(v8 + (int64_t)&g3 + 4);
        v12 = v11 + v3;
        v13 = *(int64_t *)(8 * (int64_t)v12 + g5);
        if (*(char *)(v13 + (int64_t)v10) == 0) {
            if (v9 == 0) {
                // 0x10000360c
                v14 = (v12 + v3) / 2;
                v15 = 8 * (int64_t)v14;
                if (*(char *)(*(int64_t *)(v15 + g5) + v5) == 0) {
                    // 0x100003650
                    if ((int32_t)function_1000034ec() != 0) {
                        // 0x100003678
                        v18 = 8 * v14;
                        v19 = *(int64_t *)(g5 + (int64_t)(v18 - 8));
                        v20 = (char *)(v19 + v5);
                        *v20 = *v20 | 2;
                        v21 = (char *)(*(int64_t *)(g5 + v15) + v5);
                        *v21 = *v21 | 19;
                        v22 = *(int64_t *)(g5 + (int64_t)(v18 + 8));
                        v23 = (char *)(v22 + v5);
                        *v23 = *v23 | 1;
                        return 1;
                    }
                }
            } else {
                // 0x1000036f0
                if (v11 != 0) {
                    // 0x100003838
                    return 1;
                }
                // 0x100003708
                v16 = (v10 + v2) / 2;
                v17 = v16;
                if (*(char *)(*(int64_t *)(g5 + v4) + v17) == 0) {
                    // 0x10000374c
                    if ((int32_t)function_1000034ec() != 0) {
                        // 0x100003774
                        v24 = *(int64_t *)(g5 + v4);
                        v25 = (char *)(v24 + (int64_t)(v16 - 1));
                        *v25 = *v25 | 8;
                        v26 = (char *)(*(int64_t *)(g5 + v4) + v17);
                        *v26 = *v26 | 28;
                        v27 = *(int64_t *)(g5 + v4);
                        v28 = (char *)(v27 + (int64_t)(v16 + 1));
                        *v28 = *v28 | 4;
                        return 1;
                    }
                }
            }
        }
        // 0x1000037f8
        v29 = v7 + 1;
    }
    char * v30 = (char *)(*(int64_t *)(g5 + v4) + v5); // 0x100003824
    *v30 = *v30 & -17;
    // 0x100003838
    return 0;
}

// Address range: 0x100003848 - 0x100003e4c
int64_t function_100003848(void) {
    int32_t v1 = *(int32_t *)&g6; // 0x10000385c
    int32_t v2 = 2 * v1; // 0x100003868
    int32_t v3 = v2 + 2; // 0x10000386c
    int32_t v4 = 2 * *(int32_t *)&g7; // 0x100003880
    int32_t v5 = v4 + 2; // 0x100003884
    int64_t * v6 = _calloc(16 * v1 + 32 + v5 * v3 | 1, 1); // 0x1000038bc
    int64_t v7 = (int64_t)v6; // 0x1000038bc
    int64_t v8 = 8 * (int64_t)v3 + v7; // 0x1000038d4
    int64_t v9 = v7 + 8; // 0x1000038dc
    *(int64_t *)v9 = v8 + 17;
    int32_t v10 = -v2; // 0x1000038f0
    if (v2 == 0 || v10 < 0 != (v3 & v10) < 0) {
        int32_t v11 = 2; // 0x10000392c
        int64_t v12 = *(int64_t *)((int64_t)(8 * v11 - 8) + v7); // 0x10000390c
        *(int64_t *)(8 * (int64_t)v11 + v7) = v12 + (int64_t)v5;
        v11++;
        while (v11 - v3 == 0 || v11 - v3 < 0 != ((v11 - v3 ^ v11) & (v11 ^ v3)) < 0) {
            // 0x100003900
            v12 = *(int64_t *)((int64_t)(8 * v11 - 8) + v7);
            *(int64_t *)(8 * (int64_t)v11 + v7) = v12 + (int64_t)v5;
            v11++;
        }
    }
    // 0x100003938
    *v6 = *(int64_t *)v8;
    g5 = v9;
    int32_t v13 = *(int32_t *)&g6; // 0x100003978
    int32_t v14 = v13; // 0x100003990
    if ((2 * v13 ^ -2) < 1) {
        int32_t v15 = -1; // 0x1000039dc
        int64_t v16 = 8 * (int64_t)v15; // 0x1000039a8
        *(char *)(*(int64_t *)(v16 + v9) + (int64_t)(v4 | 1)) = 16;
        *(char *)(*(int64_t *)(g5 + v16) - 1) = 16;
        v15++;
        int32_t v17 = *(int32_t *)&g6; // 0x100003978
        int32_t v18 = 2 * v17; // 0x100003980
        int32_t v19 = v15 - (v18 | 1); // 0x100003988
        v14 = v17;
        while (v19 == 0 || v19 < 0 != ((v19 ^ v15) & (v18 ^ v15)) < 0) {
            // 0x100003998
            v16 = 8 * (int64_t)v15;
            *(char *)(*(int64_t *)(v16 + g5) + (int64_t)(v4 | 1)) = 16;
            *(char *)(*(int64_t *)(g5 + v16) - 1) = 16;
            v15++;
            v17 = *(int32_t *)&g6;
            v18 = 2 * v17;
            v19 = v15 - (v18 | 1);
            v14 = v17;
        }
    }
    int32_t v20 = *(int32_t *)&g7; // 0x1000039fc
    int32_t v21 = 2 * v20; // 0x100003a04
    int32_t v22 = -v21; // 0x100003a08
    int32_t v23 = v20; // 0x100003a10
    int32_t v24 = v14; // 0x100003a10
    if (v21 == 0 || v22 < 0 != (v21 & v22) < 0) {
        int32_t v25 = 0; // 0x100003a5c
        int64_t v26 = *(int64_t *)(g5 + (int64_t)(8 * v3 - 8)); // 0x100003a2c
        int64_t v27 = v25; // 0x100003a30
        *(char *)(v26 + v27) = 16;
        *(char *)(*(int64_t *)(g5 - 8) + v27) = 16;
        v25++;
        v23 = *(int32_t *)&g7;
        int32_t v28 = 2 * v23; // 0x100003a04
        while (v25 - v28 == 0 || v25 - v28 < 0 != ((v25 - v28 ^ v25) & (v28 ^ v25)) < 0) {
            // 0x100003a18
            v26 = *(int64_t *)(g5 + (int64_t)(8 * v3 - 8));
            v27 = v25;
            *(char *)(v26 + v27) = 16;
            *(char *)(*(int64_t *)(g5 - 8) + v27) = 16;
            v25++;
            v23 = *(int32_t *)&g7;
            v28 = 2 * v23;
        }
        // 0x1000039f0
        v24 = *(int32_t *)&g6;
    }
    int32_t v29 = v24; // 0x100003a7c
    int32_t v30 = -v29; // 0x100003a80
    int32_t v31 = v23; // 0x100003a88
    int32_t v32 = v29; // 0x100003a88
    if (v29 == 0 || v30 < 0 != (v29 & v30) < 0) {
        int32_t v33 = 0;
        int32_t v34 = 2 * v23; // 0x100003aac
        int32_t v35 = -v34; // 0x100003ab0
        int32_t v36 = v29; // 0x100003ab8
        int32_t v37 = v23; // 0x100003ab8
        int64_t v38; // 0x100003ad8
        char * v39; // 0x100003ae4
        int32_t v40; // 0x100003af8
        int32_t v41; // 0x100003aa4
        int32_t v42; // 0x100003aac
        if (v34 == 0 || v35 < 0 != (v34 & v35) < 0) {
            // 0x100003ac0
            v40 = 0;
            v38 = *(int64_t *)(g5 + (int64_t)(16 * v33));
            v39 = (char *)(v38 + (int64_t)v40);
            *v39 = *v39 | 12;
            v40++;
            v41 = *(int32_t *)&g7;
            v42 = 2 * v41;
            while (v40 - v42 == 0 || v40 - v42 < 0 != ((v40 - v42 ^ v40) & (v42 ^ v40)) < 0) {
                // 0x100003ac0
                v38 = *(int64_t *)(g5 + (int64_t)(16 * v33));
                v39 = (char *)(v38 + (int64_t)v40);
                *v39 = *v39 | 12;
                v40++;
                v41 = *(int32_t *)&g7;
                v42 = 2 * v41;
            }
            // 0x100003a98
            v36 = *(int32_t *)&g6;
            v37 = v41;
        }
        int32_t v43 = v37;
        int32_t v44 = v36; // 0x100003a7c
        int32_t v45 = v33 + 1; // 0x100003b0c
        int32_t v46 = v45 - v44; // 0x100003a80
        v31 = v43;
        v32 = v44;
        while (v46 == 0 || v46 < 0 != ((v46 ^ v45) & (v44 ^ v45)) < 0) {
            // 0x100003a98
            v33 = v45;
            v34 = 2 * v43;
            v35 = -v34;
            v36 = v44;
            v37 = v43;
            if (v34 == 0 || v35 < 0 != (v34 & v35) < 0) {
                // 0x100003ac0
                v40 = 0;
                v38 = *(int64_t *)(g5 + (int64_t)(16 * v33));
                v39 = (char *)(v38 + (int64_t)v40);
                *v39 = *v39 | 12;
                v40++;
                v41 = *(int32_t *)&g7;
                v42 = 2 * v41;
                while (v40 - v42 == 0 || v40 - v42 < 0 != ((v40 - v42 ^ v40) & (v42 ^ v40)) < 0) {
                    // 0x100003ac0
                    v38 = *(int64_t *)(g5 + (int64_t)(16 * v33));
                    v39 = (char *)(v38 + (int64_t)v40);
                    *v39 = *v39 | 12;
                    v40++;
                    v41 = *(int32_t *)&g7;
                    v42 = 2 * v41;
                }
                // 0x100003a98
                v36 = *(int32_t *)&g6;
                v37 = v41;
            }
            // 0x100003b08
            v43 = v37;
            v44 = v36;
            v45 = v33 + 1;
            v46 = v45 - v44;
            v31 = v43;
            v32 = v44;
        }
    }
    int32_t v47 = 2 * v32; // 0x100003b34
    int32_t v48 = -v47; // 0x100003b38
    int32_t v49 = v32; // 0x100003b40
    int32_t v50 = v31; // 0x100003b40
    if (v47 == 0 || v48 < 0 != (v47 & v48) < 0) {
        int32_t v51 = 0;
        int32_t v52 = v31; // 0x100003b5c
        int32_t v53 = -v52; // 0x100003b60
        int32_t v54 = v32; // 0x100003b68
        int32_t v55 = v52; // 0x100003b68
        int64_t v56; // 0x100003b80
        char * v57; // 0x100003b94
        int32_t v58; // 0x100003ba8
        int32_t v59; // 0x100003b5c
        if (v52 == 0 || v53 < 0 != (v52 & v53) < 0) {
            // 0x100003b70
            v58 = 0;
            v56 = *(int64_t *)(g5 + 8 * (int64_t)v51);
            v57 = (char *)(v56 + (int64_t)(2 * v58));
            *v57 = *v57 | 3;
            v58++;
            v59 = *(int32_t *)&g7;
            while (v58 - v59 == 0 || v58 - v59 < 0 != ((v58 - v59 ^ v58) & (v59 ^ v58)) < 0) {
                // 0x100003b70
                v56 = *(int64_t *)(g5 + 8 * (int64_t)v51);
                v57 = (char *)(v56 + (int64_t)(2 * v58));
                *v57 = *v57 | 3;
                v58++;
                v59 = *(int32_t *)&g7;
            }
            // 0x100003b50
            v54 = *(int32_t *)&g6;
            v55 = v59;
        }
        int32_t v60 = v55;
        int32_t v61 = v54; // 0x100003b2c
        int32_t v62 = v51 + 1; // 0x100003bbc
        int32_t v63 = 2 * v61; // 0x100003b34
        int32_t v64 = v62 - v63; // 0x100003b38
        v49 = v61;
        v50 = v60;
        while (v64 == 0 || v64 < 0 != ((v64 ^ v62) & (v63 ^ v62)) < 0) {
            // 0x100003b50
            v51 = v62;
            v52 = v60;
            v53 = -v52;
            v54 = v61;
            v55 = v52;
            if (v52 == 0 || v53 < 0 != (v52 & v53) < 0) {
                // 0x100003b70
                v58 = 0;
                v56 = *(int64_t *)(g5 + 8 * (int64_t)v51);
                v57 = (char *)(v56 + (int64_t)(2 * v58));
                *v57 = *v57 | 3;
                v58++;
                v59 = *(int32_t *)&g7;
                while (v58 - v59 == 0 || v58 - v59 < 0 != ((v58 - v59 ^ v58) & (v59 ^ v58)) < 0) {
                    // 0x100003b70
                    v56 = *(int64_t *)(g5 + 8 * (int64_t)v51);
                    v57 = (char *)(v56 + (int64_t)(2 * v58));
                    *v57 = *v57 | 3;
                    v58++;
                    v59 = *(int32_t *)&g7;
                }
                // 0x100003b50
                v54 = *(int32_t *)&g6;
                v55 = v59;
            }
            // 0x100003bb8
            v60 = v55;
            v61 = v54;
            v62 = v51 + 1;
            v63 = 2 * v61;
            v64 = v62 - v63;
            v49 = v61;
            v50 = v60;
        }
    }
    int32_t v65 = 2 * v50; // 0x100003be4
    int32_t v66 = -v65; // 0x100003be8
    int32_t v67 = v50; // 0x100003bf0
    int32_t v68 = v49; // 0x100003bf0
    int32_t v69 = 0; // 0x100003bf0
    if (v65 == 0 || v66 < 0 != (v65 & v66) < 0) {
        int64_t v70 = v69; // 0x100003c08
        char * v71 = (char *)(*(int64_t *)g5 + v70); // 0x100003c10
        *v71 = *v71 & -2;
        int32_t v72 = *(int32_t *)&g6; // 0x100003c28
        int64_t v73 = *(int64_t *)(g5 + (int64_t)(16 * v72)); // 0x100003c34
        char * v74 = (char *)(v73 + v70); // 0x100003c40
        *v74 = *v74 & -3;
        v69++;
        v67 = *(int32_t *)&g7;
        int32_t v75 = 2 * v67; // 0x100003be4
        while (v69 - v75 == 0 || v69 - v75 < 0 != ((v69 - v75 ^ v69) & (v75 ^ v69)) < 0) {
            // 0x100003bf8
            v70 = v69;
            v71 = (char *)(*(int64_t *)g5 + v70);
            *v71 = *v71 & -2;
            v72 = *(int32_t *)&g6;
            v73 = *(int64_t *)(g5 + (int64_t)(16 * v72));
            v74 = (char *)(v73 + v70);
            *v74 = *v74 & -3;
            v69++;
            v67 = *(int32_t *)&g7;
            v75 = 2 * v67;
        }
        // 0x100003bd0
        v68 = *(int32_t *)&g6;
    }
    int32_t v76 = 2 * v68; // 0x100003c7c
    int32_t v77 = -v76; // 0x100003c80
    int32_t v78 = 0; // 0x100003c88
    int32_t v79 = v67; // 0x100003c88
    int32_t v80 = v68; // 0x100003c88
    if (v76 == 0 || v77 < 0 != (v76 & v77) < 0) {
        int64_t v81 = 8 * (int64_t)v78; // 0x100003ca0
        char * v82 = (char *)*(int64_t *)(v81 + g5); // 0x100003ca4
        *v82 = *v82 & -5;
        int64_t v83 = *(int64_t *)(g5 + v81); // 0x100003cb8
        char * v84 = (char *)(v83 + (int64_t)(2 * *(int32_t *)&g7)); // 0x100003cd4
        *v84 = *v84 & -9;
        v78++;
        v80 = *(int32_t *)&g6;
        int32_t v85 = 2 * v80; // 0x100003c7c
        while (v78 - v85 == 0 || v78 - v85 < 0 != ((v78 - v85 ^ v78) & (v85 ^ v78)) < 0) {
            // 0x100003c90
            v81 = 8 * (int64_t)v78;
            v82 = (char *)*(int64_t *)(v81 + g5);
            *v82 = *v82 & -5;
            v83 = *(int64_t *)(g5 + v81);
            v84 = (char *)(v83 + (int64_t)(2 * *(int32_t *)&g7));
            *v84 = *v84 & -9;
            v78++;
            v80 = *(int32_t *)&g6;
            v85 = 2 * v80;
        }
        // 0x100003c68
        v79 = *(int32_t *)&g7;
    }
    // 0x100003cf4
    *(int32_t *)&g4 = v80 * v79;
    function_100002fec();
    function_100002fec();
    function_100003190();
    int32_t v86 = *(int32_t *)&g6; // 0x100003d68
    int32_t v87 = 2 * v86; // 0x100003d70
    int32_t v88 = -v87; // 0x100003d74
    if (v87 != 0 && v88 < 0 == (v87 & v88) < 0) {
        // 0x100003e04
        function_1000034ec();
        return function_100003058();
    }
    int32_t v89 = *(int32_t *)&g7; // 0x100003848
    int32_t v90 = 0;
    int32_t v91 = 2 * v89; // 0x100003da0
    int32_t v92 = -v91; // 0x100003da4
    int32_t v93 = v86; // 0x100003dac
    int64_t v94; // 0x100003dc4
    char * v95; // 0x100003dd0
    int32_t v96; // 0x100003de4
    int32_t v97; // 0x100003d98
    int32_t v98; // 0x100003da0
    if (v91 == 0 || v92 < 0 != (v91 & v92) < 0) {
        // 0x100003db4
        v96 = 0;
        v94 = *(int64_t *)(g5 + 8 * (int64_t)v90);
        v95 = (char *)(v94 + (int64_t)v96);
        *v95 = *v95 & -17;
        v96++;
        v97 = *(int32_t *)&g7;
        v98 = 2 * v97;
        while (v96 - v98 == 0 || v96 - v98 < 0 != ((v96 - v98 ^ v96) & (v98 ^ v96)) < 0) {
            // 0x100003db4
            v94 = *(int64_t *)(g5 + 8 * (int64_t)v90);
            v95 = (char *)(v94 + (int64_t)v96);
            *v95 = *v95 & -17;
            v96++;
            v97 = *(int32_t *)&g7;
            v98 = 2 * v97;
        }
        // 0x100003d8c
        v93 = *(int32_t *)&g6;
        v89 = v97;
    }
    int32_t v99 = v93; // 0x100003d68
    int32_t v100 = v90 + 1; // 0x100003df8
    int32_t v101 = 2 * v99; // 0x100003d70
    while (v100 - v101 == 0 || v100 - v101 < 0 != ((v100 - v101 ^ v100) & (v101 ^ v100)) < 0) {
        // 0x100003d8c
        v90 = v100;
        v91 = 2 * v89;
        v92 = -v91;
        v93 = v99;
        if (v91 == 0 || v92 < 0 != (v91 & v92) < 0) {
            // 0x100003db4
            v96 = 0;
            v94 = *(int64_t *)(g5 + 8 * (int64_t)v90);
            v95 = (char *)(v94 + (int64_t)v96);
            *v95 = *v95 & -17;
            v96++;
            v97 = *(int32_t *)&g7;
            v98 = 2 * v97;
            while (v96 - v98 == 0 || v96 - v98 < 0 != ((v96 - v98 ^ v96) & (v98 ^ v96)) < 0) {
                // 0x100003db4
                v94 = *(int64_t *)(g5 + 8 * (int64_t)v90);
                v95 = (char *)(v94 + (int64_t)v96);
                *v95 = *v95 & -17;
                v96++;
                v97 = *(int32_t *)&g7;
                v98 = 2 * v97;
            }
            // 0x100003d8c
            v93 = *(int32_t *)&g6;
            v89 = v97;
        }
        // 0x100003df4
        v99 = v93;
        v100 = v90 + 1;
        v101 = 2 * v99;
    }
    // 0x100003e04
    function_1000034ec();
    return function_100003058();
}

// Address range: 0x100003e4c - 0x100003f2c
int64_t entry_point(void) {
    // 0x100003e4c
    int64_t v1; // 0x100003e4c
    int32_t v2 = v1; // 0x100003e64
    _setlocale(0, (char *)0x100003f8e);
    int32_t v3; // 0x100003e4c
    if (v2 < 2 == (1 - v2 & v2) < 0) {
        int32_t v4 = _atoi((char *)*(int64_t *)(v1 + 8)); // 0x100003e94
        v3 = v4;
        if (v4 < 1) {
            // 0x100003eb4
            v3 = 16;
            goto lab_0x100003ec8;
        } else {
            goto lab_0x100003ec8;
        }
    } else {
        // 0x100003eb4
        v3 = 16;
        goto lab_0x100003ec8;
    }
  lab_0x100003ec8:
    // 0x100003ec8
    *(int32_t *)&g7 = v3;
    if (v2 < 3 == (2 - v2 & v2) < 0) {
        int32_t v5 = _atoi((char *)*(int64_t *)(v1 + 16)); // 0x100003ee4
        if (v5 >= 1) {
            // 0x100003f18
            *(int32_t *)&g6 = v5;
            function_100003848();
            return 0;
        }
    }
    // 0x100003f18
    *(int32_t *)&g6 = 8;
    function_100003848();
    return 0;
}

// Address range: 0x100003f2c - 0x100003f38
int64_t function_100003f2c(void) {
    // 0x100003f2c
    return ___stack_chk_fail();
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(char * nptr) {
    // 0x100003f38
    return _atoi(nptr);
}

// Address range: 0x100003f44 - 0x100003f50
int64_t * function_100003f44(int32_t nmemb, int32_t size) {
    // 0x100003f44
    return _calloc(nmemb, size);
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(char * format, ...) {
    // 0x100003f50
    return _printf(format);
}

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(int32_t c) {
    // 0x100003f5c
    return _putchar(c);
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(void) {
    // 0x100003f68
    return _rand();
}

// Address range: 0x100003f74 - 0x100003f80
char * function_100003f74(int32_t category, char * locale) {
    // 0x100003f74
    return _setlocale(category, locale);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 13
