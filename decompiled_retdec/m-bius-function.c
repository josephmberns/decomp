//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
void function_100003f34(int64_t * ptr);
int64_t * function_100003f40(int32_t size);
int32_t function_100003f4c(char * format, ...);

// --------------------- Global Variables ---------------------

float64_t g1 = 1.0e+6; // 0x100003f58
char * g2 = "First 199 terms of the m\xc3\xb6\x62ius function are as follows:\n    "; // 0x100003f60

// ------- Dynamically Linked Functions Without Header --------

void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003be0 - 0x100003f34
int64_t entry_point(void) {
    int64_t * v1 = _malloc(0x3d0904); // 0x100003c1c
    int64_t v2 = (int64_t)v1; // 0x100003c1c
    int32_t v3 = 0;
    *(int32_t *)(4 * (int64_t)v3 + v2) = 1;
    int32_t v4 = v3 + 1; // 0x100003c5c
    while (v3 < 0xf423f != (0xf423e - v3 & v4) < 0) {
        // 0x100003c44
        v3 = v4;
        *(int32_t *)(4 * (int64_t)v3 + v2) = 1;
        v4 = v3 + 1;
    }
    int32_t v5 = sqrt(g1); // 0x100003c0c
    int32_t v6 = 2 - v5; // 0x100003c7c
    if (v6 == 0 || v6 < 0 != (v6 & v5) < 0) {
        int32_t v7 = 2;
        int32_t v8; // 0x100003be0
        int32_t v9; // 0x100003cbc
        int32_t v10; // 0x100003d08
        int32_t v11; // 0x100003d1c
        int32_t * v12; // 0x100003cdc
        int32_t v13; // 0x100003cf4
        int32_t v14; // 0x100003d50
        int32_t v15; // 0x100003d1c
        if (*(int32_t *)(4 * (int64_t)v7 + v2) == 1) {
            // 0x100003cb4
            v9 = v7 - 0xf4240;
            if (v9 == 0 || v9 < 0 != (0xf423f - v7 & v7) < 0) {
                // 0x100003ccc
                v13 = v7;
                v12 = (int32_t *)(4 * (int64_t)v13 + v2);
                *v12 = -1 * v7 * *v12;
                v13 += v7;
                while (v13 == 0xf4240 || v13 < 0xf4240 != (0xf423f - v13 & v13) < 0) {
                    // 0x100003ccc
                    v12 = (int32_t *)(4 * (int64_t)v13 + v2);
                    *v12 = -1 * v7 * *v12;
                    v13 += v7;
                }
            }
            // 0x100003d00
            v10 = v7 * v7;
            v11 = v10 - 0xf4240;
            v8 = v10;
            if (v11 == 0 || v11 < 0 != (0xf423f - v10 & v10) < 0) {
                *(int32_t *)(4 * (int64_t)v8 + v2) = 0;
                v14 = v8 + v10;
                v15 = v14 - 0xf4240;
                v8 = v14;
                while (v15 == 0 || v15 < 0 != (0xf423f - v14 & v14) < 0) {
                    // 0x100003d2c
                    *(int32_t *)(4 * (int64_t)v8 + v2) = 0;
                    v14 = v8 + v10;
                    v15 = v14 - 0xf4240;
                    v8 = v14;
                }
            }
        }
        int32_t v16 = v7 + 1; // 0x100003d68
        while (v16 - v5 == 0 || v16 - v5 < 0 != ((v16 - v5 ^ v16) & (v16 ^ v5)) < 0) {
            // 0x100003c8c
            v7 = v16;
            if (*(int32_t *)(4 * (int64_t)v7 + v2) == 1) {
                // 0x100003cb4
                v9 = v7 - 0xf4240;
                if (v9 == 0 || v9 < 0 != (0xf423f - v7 & v7) < 0) {
                    // 0x100003ccc
                    v13 = v7;
                    v12 = (int32_t *)(4 * (int64_t)v13 + v2);
                    *v12 = -1 * v7 * *v12;
                    v13 += v7;
                    while (v13 == 0xf4240 || v13 < 0xf4240 != (0xf423f - v13 & v13) < 0) {
                        // 0x100003ccc
                        v12 = (int32_t *)(4 * (int64_t)v13 + v2);
                        *v12 = -1 * v7 * *v12;
                        v13 += v7;
                    }
                }
                // 0x100003d00
                v10 = v7 * v7;
                v11 = v10 - 0xf4240;
                v8 = v10;
                if (v11 == 0 || v11 < 0 != (0xf423f - v10 & v10) < 0) {
                    *(int32_t *)(4 * (int64_t)v8 + v2) = 0;
                    v14 = v8 + v10;
                    v15 = v14 - 0xf4240;
                    v8 = v14;
                    while (v15 == 0 || v15 < 0 != (0xf423f - v14 & v14) < 0) {
                        // 0x100003d2c
                        *(int32_t *)(4 * (int64_t)v8 + v2) = 0;
                        v14 = v8 + v10;
                        v15 = v14 - 0xf4240;
                        v8 = v14;
                    }
                }
            }
            // 0x100003d64
            v16 = v7 + 1;
        }
    }
    int32_t v17 = 2;
    int32_t * v18 = (int32_t *)(4 * (int64_t)v17 + v2); // 0x100003da0
    int32_t v19 = *v18; // 0x100003da0
    if (v19 == v17) {
        // 0x100003db8
        *v18 = 1;
    } else {
        if (v19 == -v17) {
            // 0x100003dec
            *v18 = -1;
        } else {
            if (v19 < 0) {
                // 0x100003e1c
                *v18 = 1;
            } else {
                if (v19 != 0) {
                    // 0x100003e4c
                    *v18 = -1;
                }
            }
        }
    }
    int32_t v20 = v17 + 1; // 0x100003e74
    while (v17 == 0xf423f || v17 < 0xf423f != (0xf423e - v17 & v20) < 0) {
        // 0x100003d98
        v17 = v20;
        v18 = (int32_t *)(4 * (int64_t)v17 + v2);
        v19 = *v18;
        if (v19 == v17) {
            // 0x100003db8
            *v18 = 1;
        } else {
            if (v19 == -v17) {
                // 0x100003dec
                *v18 = -1;
            } else {
                if (v19 < 0) {
                    // 0x100003e1c
                    *v18 = 1;
                } else {
                    if (v19 != 0) {
                        // 0x100003e4c
                        *v18 = -1;
                    }
                }
            }
        }
        // 0x100003e70
        v20 = v17 + 1;
    }
    // 0x100003e80
    _printf((char *)&g2);
    int32_t v21 = 1;
    int64_t v22; // 0x100003be0
    _printf("%2d  ", v22);
    int32_t v23 = v21 + 1; // 0x100003ed4
    if (v23 % 20 == 0) {
        // 0x100003ef8
        _printf((char *)0x100003fa3);
    }
    while (v21 < 199 != (198 - v21 & v23) < 0) {
        // 0x100003eac
        v21 = v23;
        _printf("%2d  ", v22);
        v23 = v21 + 1;
        if (v23 % 20 == 0) {
            // 0x100003ef8
            _printf((char *)0x100003fa3);
        }
    }
    // 0x100003f1c
    _free(v1);
    return 0;
}

// Address range: 0x100003f34 - 0x100003f40
void function_100003f34(int64_t * ptr) {
    // 0x100003f34
    _free(ptr);
}

// Address range: 0x100003f40 - 0x100003f4c
int64_t * function_100003f40(int32_t size) {
    // 0x100003f40
    return _malloc(size);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(char * format, ...) {
    // 0x100003f4c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4

