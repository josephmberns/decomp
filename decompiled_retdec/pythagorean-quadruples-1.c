//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003f7c(int64_t a1);
void function_100003f88(int64_t * s, int32_t n);
int32_t function_100003f94(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int64_t ___stack_chk_fail(int64_t a1);
void _bzero(int64_t * a1, int32_t a2);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d10 - 0x100003d2c
int64_t entry_point(void) {
    // 0x100003d10
    return ___chkstk_darwin();
}

// Address range: 0x100003d2c - 0x100003f7c
int64_t function_100003d2c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003d2c
    int64_t v1; // 0x100003d2c
    int64_t * v2 = (int64_t *)(v1 - 24); // 0x100003d40
    *v2 = *(int64_t *)*(int64_t *)0x100004010;
    int64_t v3; // bp-8812, 0x100003d2c
    _bzero(&v3, 0x2264);
    int64_t v4 = &v3;
    int32_t v5 = 1;
    int32_t v6 = v5 - 2200; // 0x100003d8c
    int32_t v7; // 0x100003d2c
    int32_t v8; // 0x100003d2c
    int32_t v9; // 0x100003d2c
    int32_t v10; // 0x100003de0
    int32_t v11; // 0x100003df8
    int32_t v12; // 0x100003e9c
    int32_t v13; // 0x100003e18
    int32_t v14; // 0x100003e30
    int32_t v15; // 0x100003e5c
    int32_t v16; // 0x100003e88
    int32_t v17; // 0x100003df8
    int32_t v18; // 0x100003d2c
    if (v6 == 0 || v6 < 0 != (2199 - v5 & v5) < 0) {
        // 0x100003d9c
        v18 = v5 * v5;
        v9 = v5;
        if ((v5 % 2 & v9) == 0) {
            // 0x100003dc8
            v10 = v9 * v9 + v18;
            v11 = v9 - 2200;
            v7 = v9;
            if (v11 == 0 || v11 < 0 != (2199 - v9 & v9) < 0) {
                v8 = v7;
                v13 = v10 + v8 * v8;
                v14 = sqrt((float64_t)(float32_t)v13);
                if (v13 == v14 * v14) {
                    // 0x100003e58
                    v15 = v14 - 2200;
                    if (v15 == 0 || v15 < 0 != (2199 - v14 & v14) < 0) {
                        // 0x100003e6c
                        *(int32_t *)(4 * (int64_t)v14 + v4) = 1;
                    }
                }
                // 0x100003e84
                v16 = v8 + 1;
                v17 = v8 - 2199;
                while (v17 == 0 || v17 < 0 != (2198 - v8 & v16) < 0) {
                    // 0x100003e08
                    v8 = v16;
                    v13 = v10 + v8 * v8;
                    v14 = sqrt((float64_t)(float32_t)v13);
                    if (v13 == v14 * v14) {
                        // 0x100003e58
                        v15 = v14 - 2200;
                        if (v15 == 0 || v15 < 0 != (2199 - v14 & v14) < 0) {
                            // 0x100003e6c
                            *(int32_t *)(4 * (int64_t)v14 + v4) = 1;
                        }
                    }
                    // 0x100003e84
                    v16 = v8 + 1;
                    v17 = v8 - 2199;
                }
            }
        }
        // 0x100003e98
        v12 = v9 + 1;
        while (v9 == 2199 || v9 < 2199 != (2198 - v9 & v12) < 0) {
            // 0x100003d9c
            v9 = v12;
            if ((v5 % 2 & v9) == 0) {
                // 0x100003dc8
                v10 = v9 * v9 + v18;
                v11 = v9 - 2200;
                v7 = v9;
                if (v11 == 0 || v11 < 0 != (2199 - v9 & v9) < 0) {
                    v8 = v7;
                    v13 = v10 + v8 * v8;
                    v14 = sqrt((float64_t)(float32_t)v13);
                    if (v13 == v14 * v14) {
                        // 0x100003e58
                        v15 = v14 - 2200;
                        if (v15 == 0 || v15 < 0 != (2199 - v14 & v14) < 0) {
                            // 0x100003e6c
                            *(int32_t *)(4 * (int64_t)v14 + v4) = 1;
                        }
                    }
                    // 0x100003e84
                    v16 = v8 + 1;
                    v17 = v8 - 2199;
                    while (v17 == 0 || v17 < 0 != (2198 - v8 & v16) < 0) {
                        // 0x100003e08
                        v8 = v16;
                        v13 = v10 + v8 * v8;
                        v14 = sqrt((float64_t)(float32_t)v13);
                        if (v13 == v14 * v14) {
                            // 0x100003e58
                            v15 = v14 - 2200;
                            if (v15 == 0 || v15 < 0 != (2199 - v14 & v14) < 0) {
                                // 0x100003e6c
                                *(int32_t *)(4 * (int64_t)v14 + v4) = 1;
                            }
                        }
                        // 0x100003e84
                        v16 = v8 + 1;
                        v17 = v8 - 2199;
                    }
                }
            }
            // 0x100003e98
            v12 = v9 + 1;
        }
    }
    int32_t v19 = v5 + 1; // 0x100003eb0
    int32_t v20 = v5 - 2199; // 0x100003d6c
    while (v20 == 0 || v20 < 0 != (2198 - v5 & v19) < 0) {
        // 0x100003d88
        v5 = v19;
        v6 = v5 - 2200;
        if (v6 == 0 || v6 < 0 != (2199 - v5 & v5) < 0) {
            // 0x100003d9c
            v18 = v5 * v5;
            v9 = v5;
            if ((v5 % 2 & v9) == 0) {
                // 0x100003dc8
                v10 = v9 * v9 + v18;
                v11 = v9 - 2200;
                v7 = v9;
                if (v11 == 0 || v11 < 0 != (2199 - v9 & v9) < 0) {
                    v8 = v7;
                    v13 = v10 + v8 * v8;
                    v14 = sqrt((float64_t)(float32_t)v13);
                    if (v13 == v14 * v14) {
                        // 0x100003e58
                        v15 = v14 - 2200;
                        if (v15 == 0 || v15 < 0 != (2199 - v14 & v14) < 0) {
                            // 0x100003e6c
                            *(int32_t *)(4 * (int64_t)v14 + v4) = 1;
                        }
                    }
                    // 0x100003e84
                    v16 = v8 + 1;
                    v17 = v8 - 2199;
                    while (v17 == 0 || v17 < 0 != (2198 - v8 & v16) < 0) {
                        // 0x100003e08
                        v8 = v16;
                        v13 = v10 + v8 * v8;
                        v14 = sqrt((float64_t)(float32_t)v13);
                        if (v13 == v14 * v14) {
                            // 0x100003e58
                            v15 = v14 - 2200;
                            if (v15 == 0 || v15 < 0 != (2199 - v14 & v14) < 0) {
                                // 0x100003e6c
                                *(int32_t *)(4 * (int64_t)v14 + v4) = 1;
                            }
                        }
                        // 0x100003e84
                        v16 = v8 + 1;
                        v17 = v8 - 2199;
                    }
                }
            }
            // 0x100003e98
            v12 = v9 + 1;
            while (v9 == 2199 || v9 < 2199 != (2198 - v9 & v12) < 0) {
                // 0x100003d9c
                v9 = v12;
                if ((v5 % 2 & v9) == 0) {
                    // 0x100003dc8
                    v10 = v9 * v9 + v18;
                    v11 = v9 - 2200;
                    v7 = v9;
                    if (v11 == 0 || v11 < 0 != (2199 - v9 & v9) < 0) {
                        v8 = v7;
                        v13 = v10 + v8 * v8;
                        v14 = sqrt((float64_t)(float32_t)v13);
                        if (v13 == v14 * v14) {
                            // 0x100003e58
                            v15 = v14 - 2200;
                            if (v15 == 0 || v15 < 0 != (2199 - v14 & v14) < 0) {
                                // 0x100003e6c
                                *(int32_t *)(4 * (int64_t)v14 + v4) = 1;
                            }
                        }
                        // 0x100003e84
                        v16 = v8 + 1;
                        v17 = v8 - 2199;
                        while (v17 == 0 || v17 < 0 != (2198 - v8 & v16) < 0) {
                            // 0x100003e08
                            v8 = v16;
                            v13 = v10 + v8 * v8;
                            v14 = sqrt((float64_t)(float32_t)v13);
                            if (v13 == v14 * v14) {
                                // 0x100003e58
                                v15 = v14 - 2200;
                                if (v15 == 0 || v15 < 0 != (2199 - v14 & v14) < 0) {
                                    // 0x100003e6c
                                    *(int32_t *)(4 * (int64_t)v14 + v4) = 1;
                                }
                            }
                            // 0x100003e84
                            v16 = v8 + 1;
                            v17 = v8 - 2199;
                        }
                    }
                }
                // 0x100003e98
                v12 = v9 + 1;
            }
        }
        // 0x100003eac
        v19 = v5 + 1;
        v20 = v5 - 2199;
    }
    int32_t v21 = 1;
    if (*(int32_t *)(4 * (int64_t)v21 + v4) == 0) {
        // 0x100003ef8
        _printf("%d ", 0x2264);
    }
    int32_t v22 = v21 + 1; // 0x100003f20
    int32_t v23 = v21 - 2199; // 0x100003ecc
    while (v23 == 0 || v23 < 0 != (2198 - v21 & v22) < 0) {
        // 0x100003edc
        v21 = v22;
        if (*(int32_t *)(4 * (int64_t)v21 + v4) == 0) {
            // 0x100003ef8
            _printf("%d ", 0x2264);
        }
        // 0x100003f1c
        v22 = v21 + 1;
        v23 = v21 - 2199;
    }
    int32_t v24 = _printf((char *)0x100003fa4); // 0x100003f34
    if (*(int64_t *)*(int64_t *)0x100004010 != *v2) {
        // 0x100003f60
        ___stack_chk_fail((int64_t)v24);
    }
    // 0x100003f64
    return 0;
}

// Address range: 0x100003f7c - 0x100003f88
int64_t function_100003f7c(int64_t a1) {
    // 0x100003f7c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f88 - 0x100003f94
void function_100003f88(int64_t * s, int32_t n) {
    // 0x100003f88
    _bzero(s, n);
}

// Address range: 0x100003f94 - 0x100003fa0
int32_t function_100003f94(char * format, ...) {
    // 0x100003f94
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

