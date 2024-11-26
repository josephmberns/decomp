//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ac8(void);
int64_t function_100003cd0(void);
int64_t function_100003e84(int64_t a1);
int64_t * function_100003e90(int32_t nmemb, int32_t size);
void function_100003e9c(int32_t status);
void function_100003ea8(int64_t * ptr);
int64_t * function_100003eb4(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003ec0(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x4039000000000000; // 0x100003ed8
int64_t g2 = 0x4032000000000000; // 0x100003f20
int32_t g3;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ac8 - 0x100003cd0
int64_t function_100003ac8(void) {
    // 0x100003ac8
    int64_t v1; // 0x100003ac8
    int32_t v2 = v1; // 0x100003ad8
    int64_t * v3 = _calloc(v2 * v2, 8); // 0x100003af4
    if (v3 == NULL) {
        // 0x100003b10
        _exit(1);
        // UNREACHABLE
    }
    int64_t result = (int64_t)v3; // 0x100003af4
    int32_t v4 = -v2; // 0x100003b28
    if (v4 < 0 == (v4 & v2) < 0) {
        // 0x100003cc0
        return result;
    }
    int32_t v5 = 0;
    int32_t v6 = v5 + 1; // 0x100003b48
    int64_t v7; // 0x100003ac8
    float64_t v8; // 0x100003ac8
    float64_t v9; // 0x100003ac8
    int32_t v10; // 0x100003ac8
    float64_t v11; // 0x100003ac8
    int32_t v12; // 0x100003ac8
    int64_t v13; // 0x100003ac8
    float64_t * v14; // 0x100003ac8
    int32_t v15; // 0x100003b74
    float64_t v16; // 0x100003c3c
    int64_t v17; // 0x100003ac8
    float64_t v18; // 0x100003bb8
    float64_t v19; // 0x100003bc0
    int32_t v20; // 0x100003bd0
    int32_t v21; // 0x100003b74
    int32_t v22; // 0x100003ca0
    if (v5 > -1 != (v6 & -v5) < 0) {
        // 0x100003b6c
        v12 = v5 * v2;
        v13 = 8 * (v12 + v5);
        v14 = (float64_t *)(v1 + v13);
        v10 = 0;
        v15 = -v10;
        v8 = 0.0;
        if (v15 < 0 != (v10 & v15) < 0) {
            // 0x100003b84
            v20 = 0;
            v19 = 0.0;
            v18 = *(float64_t *)((int64_t)(8 * (v20 + v10 * v2)) + result);
            v19 += *(float64_t *)((int64_t)(8 * (v20 + v12)) + result) * v18;
            v20++;
            v21 = v20 - v10;
            v8 = v19;
            while (v21 < 0 != ((v21 ^ v20) & (v20 ^ v10)) < 0) {
                // 0x100003b84
                v18 = *(float64_t *)((int64_t)(8 * (v20 + v10 * v2)) + result);
                v19 += *(float64_t *)((int64_t)(8 * (v20 + v12)) + result) * v18;
                v20++;
                v21 = v20 - v10;
                v8 = v19;
            }
        }
        // 0x100003bdc
        v9 = v8;
        if (v5 == v10) {
            // 0x100003bf4
            v7 = v13;
            v11 = sqrt(*v14 - v9);
        } else {
            // 0x100003c24
            v16 = *(float64_t *)((int64_t)(8 * (v10 * v2 + v10)) + result);
            v17 = 8 * (v10 + v12);
            v7 = v17;
            v11 = 1.0 / v16 * (*(float64_t *)(v1 + v17) - v9);
        }
        // 0x100003c78
        *(int64_t *)(v7 + result) = (int64_t)v11;
        v22 = v10 + 1;
        while (v22 - v6 < 0 != ((v22 - v6 ^ v22) & (v22 ^ v6)) < 0) {
            // 0x100003b6c
            v10 = v22;
            v15 = -v10;
            v8 = 0.0;
            if (v15 < 0 != (v10 & v15) < 0) {
                // 0x100003b84
                v20 = 0;
                v19 = 0.0;
                v18 = *(float64_t *)((int64_t)(8 * (v20 + v10 * v2)) + result);
                v19 += *(float64_t *)((int64_t)(8 * (v20 + v12)) + result) * v18;
                v20++;
                v21 = v20 - v10;
                v8 = v19;
                while (v21 < 0 != ((v21 ^ v20) & (v20 ^ v10)) < 0) {
                    // 0x100003b84
                    v18 = *(float64_t *)((int64_t)(8 * (v20 + v10 * v2)) + result);
                    v19 += *(float64_t *)((int64_t)(8 * (v20 + v12)) + result) * v18;
                    v20++;
                    v21 = v20 - v10;
                    v8 = v19;
                }
            }
            // 0x100003bdc
            v9 = v8;
            if (v5 == v10) {
                // 0x100003bf4
                v7 = v13;
                v11 = sqrt(*v14 - v9);
            } else {
                // 0x100003c24
                v16 = *(float64_t *)((int64_t)(8 * (v10 * v2 + v10)) + result);
                v17 = 8 * (v10 + v12);
                v7 = v17;
                v11 = 1.0 / v16 * (*(float64_t *)(v1 + v17) - v9);
            }
            // 0x100003c78
            *(int64_t *)(v7 + result) = (int64_t)v11;
            v22 = v10 + 1;
        }
    }
    while (v6 - v2 < 0 != ((v6 - v2 ^ v6) & (v6 ^ v2)) < 0) {
        // 0x100003b20
        v5 = v6;
        v6 = v5 + 1;
        if (v5 > -1 != (v6 & -v5) < 0) {
            // 0x100003b6c
            v12 = v5 * v2;
            v13 = 8 * (v12 + v5);
            v14 = (float64_t *)(v1 + v13);
            v10 = 0;
            v15 = -v10;
            v8 = 0.0;
            if (v15 < 0 != (v10 & v15) < 0) {
                // 0x100003b84
                v20 = 0;
                v19 = 0.0;
                v18 = *(float64_t *)((int64_t)(8 * (v20 + v10 * v2)) + result);
                v19 += *(float64_t *)((int64_t)(8 * (v20 + v12)) + result) * v18;
                v20++;
                v21 = v20 - v10;
                v8 = v19;
                while (v21 < 0 != ((v21 ^ v20) & (v20 ^ v10)) < 0) {
                    // 0x100003b84
                    v18 = *(float64_t *)((int64_t)(8 * (v20 + v10 * v2)) + result);
                    v19 += *(float64_t *)((int64_t)(8 * (v20 + v12)) + result) * v18;
                    v20++;
                    v21 = v20 - v10;
                    v8 = v19;
                }
            }
            // 0x100003bdc
            v9 = v8;
            if (v5 == v10) {
                // 0x100003bf4
                v7 = v13;
                v11 = sqrt(*v14 - v9);
            } else {
                // 0x100003c24
                v16 = *(float64_t *)((int64_t)(8 * (v10 * v2 + v10)) + result);
                v17 = 8 * (v10 + v12);
                v7 = v17;
                v11 = 1.0 / v16 * (*(float64_t *)(v1 + v17) - v9);
            }
            // 0x100003c78
            *(int64_t *)(v7 + result) = (int64_t)v11;
            v22 = v10 + 1;
            while (v22 - v6 < 0 != ((v22 - v6 ^ v22) & (v22 ^ v6)) < 0) {
                // 0x100003b6c
                v10 = v22;
                v15 = -v10;
                v8 = 0.0;
                if (v15 < 0 != (v10 & v15) < 0) {
                    // 0x100003b84
                    v20 = 0;
                    v19 = 0.0;
                    v18 = *(float64_t *)((int64_t)(8 * (v20 + v10 * v2)) + result);
                    v19 += *(float64_t *)((int64_t)(8 * (v20 + v12)) + result) * v18;
                    v20++;
                    v21 = v20 - v10;
                    v8 = v19;
                    while (v21 < 0 != ((v21 ^ v20) & (v20 ^ v10)) < 0) {
                        // 0x100003b84
                        v18 = *(float64_t *)((int64_t)(8 * (v20 + v10 * v2)) + result);
                        v19 += *(float64_t *)((int64_t)(8 * (v20 + v12)) + result) * v18;
                        v20++;
                        v21 = v20 - v10;
                        v8 = v19;
                    }
                }
                // 0x100003bdc
                v9 = v8;
                if (v5 == v10) {
                    // 0x100003bf4
                    v7 = v13;
                    v11 = sqrt(*v14 - v9);
                } else {
                    // 0x100003c24
                    v16 = *(float64_t *)((int64_t)(8 * (v10 * v2 + v10)) + result);
                    v17 = 8 * (v10 + v12);
                    v7 = v17;
                    v11 = 1.0 / v16 * (*(float64_t *)(v1 + v17) - v9);
                }
                // 0x100003c78
                *(int64_t *)(v7 + result) = (int64_t)v11;
                v22 = v10 + 1;
            }
        }
    }
    // 0x100003cc0
    return result;
}

// Address range: 0x100003cd0 - 0x100003d94
int64_t function_100003cd0(void) {
    // 0x100003cd0
    int64_t v1; // 0x100003cd0
    int32_t v2 = v1; // 0x100003ce0
    int32_t v3 = -v2;
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003d88
        int64_t result; // 0x100003cd0
        return result;
    }
    int32_t v4 = 0; // 0x100003d7c
    int32_t v5 = 0; // 0x100003d5c
    int128_t v6; // 0x100003cd0
    _printf("%2.5f ", (float64_t)(int64_t)v6);
    v5++;
    while (v5 - v2 < 0 != ((v5 - v2 ^ v5) & (v5 ^ v2)) < 0) {
        // 0x100003d24
        _printf("%2.5f ", (float64_t)(int64_t)v6);
        v5++;
    }
    int32_t result2 = _printf((char *)0x100003ed3); // 0x100003d70
    v4++;
    while (v4 - v2 < 0 != ((v4 - v2 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003d24
        v5 = 0;
        _printf("%2.5f ", (float64_t)(int64_t)v6);
        v5++;
        while (v5 - v2 < 0 != ((v5 - v2 ^ v5) & (v5 ^ v2)) < 0) {
            // 0x100003d24
            _printf("%2.5f ", (float64_t)(int64_t)v6);
            v5++;
        }
        // 0x100003d68
        result2 = _printf((char *)0x100003ed3);
        v4++;
    }
    // 0x100003d88
    return result2;
}

// Address range: 0x100003d94 - 0x100003e84
int64_t entry_point(void) {
    // 0x100003d94
    int64_t v1; // bp-112, 0x100003d94
    _memcpy(&v1, &g1, 72);
    int64_t v2 = function_100003ac8(); // 0x100003de0
    function_100003cd0();
    _printf("\n");
    _free((int64_t *)v2);
    int64_t v3; // bp-240, 0x100003d94
    _memcpy(&v3, &g2, 128);
    int64_t v4 = function_100003ac8(); // 0x100003e30
    function_100003cd0();
    _free((int64_t *)v4);
    int64_t v5 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003e58
    if (v5 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003e6c
        ___stack_chk_fail((int64_t)&g3);
    }
    // 0x100003e70
    return 0;
}

// Address range: 0x100003e84 - 0x100003e90
int64_t function_100003e84(int64_t a1) {
    // 0x100003e84
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003e90 - 0x100003e9c
int64_t * function_100003e90(int32_t nmemb, int32_t size) {
    // 0x100003e90
    return _calloc(nmemb, size);
}

// Address range: 0x100003e9c - 0x100003ea8
void function_100003e9c(int32_t status) {
    // 0x100003e9c
    _exit(status);
}

// Address range: 0x100003ea8 - 0x100003eb4
void function_100003ea8(int64_t * ptr) {
    // 0x100003ea8
    _free(ptr);
}

// Address range: 0x100003eb4 - 0x100003ec0
int64_t * function_100003eb4(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003eb4
    return _memcpy(dest, src, n);
}

// Address range: 0x100003ec0 - 0x100003ecc
int32_t function_100003ec0(char * format, ...) {
    // 0x100003ec0
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9
