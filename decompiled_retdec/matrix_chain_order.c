//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000039f0(void);
int64_t function_100003cc0(void);
int64_t function_100003dbc(void);
int64_t function_100003efc(char * a1, char * a2, int64_t a3, char * a4);
int64_t function_100003f08(int64_t a1);
void function_100003f14(int64_t * ptr);
int64_t * function_100003f20(int32_t size);
int32_t function_100003f2c(char * format, ...);
int32_t function_100003f38(int32_t c);

// --------------------- Global Variables ---------------------

float128_t g1 = 3.18299368817713823311143622691280402e-313L; // 0x100003f90

// ------- Dynamically Linked Functions Without Header --------

int64_t ___assert_rtn(char * a1, char * a2, int64_t a3, char * a4);
int64_t ___stack_chk_fail(int64_t a1);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x1000039f0 - 0x100003cc0
int64_t function_1000039f0(void) {
    // 0x1000039f0
    int64_t v1; // 0x1000039f0
    int32_t v2 = v1; // 0x1000039fc
    int64_t * v3 = _malloc(8 * v2); // 0x100003a10
    int64_t v4 = (int64_t)v3; // 0x100003a10
    int32_t v5 = -v2;
    if (v5 < 0 != (v5 & v2) < 0) {
        int32_t v6 = 0; // 0x100003a58
        *(int64_t *)(8 * (int64_t)v6 + v4) = (int64_t)_malloc(4 * v2);
        v6++;
        int32_t v7 = v6 - v2; // 0x100003a28
        int32_t v8 = 0; // 0x100003a30
        while (v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0) {
            // 0x100003a38
            *(int64_t *)(8 * (int64_t)v6 + v4) = (int64_t)_malloc(4 * v2);
            v6++;
            v7 = v6 - v2;
            v8 = 0;
        }
        int64_t v9 = v8; // 0x100003a88
        *(int32_t *)(4 * v9 + *(int64_t *)(8 * v9 + v4)) = 0;
        int32_t v10 = v8 + 1; // 0x100003aa4
        int32_t v11 = v10 - v2; // 0x100003a74
        v8 = v10;
        while (v11 < 0 != ((v11 ^ v10) & (v10 ^ v2)) < 0) {
            // 0x100003a84
            v9 = v8;
            *(int32_t *)(4 * v9 + *(int64_t *)(8 * v9 + v4)) = 0;
            v10 = v8 + 1;
            v11 = v10 - v2;
            v8 = v10;
        }
    }
    int32_t v12 = 1 - v2; // 0x100003ac4
    if (v12 < 0 != (v12 & v2) < 0) {
        int32_t v13 = 1;
        int32_t v14 = v2 - v13; // 0x100003ae8
        int32_t v15 = -v14; // 0x100003aec
        int32_t v16; // 0x1000039f0
        int32_t v17; // 0x1000039f0
        int32_t v18; // 0x100003b38
        int32_t v19; // 0x100003b04
        int64_t v20; // 0x100003b10
        int64_t * v21; // 0x100003b14
        int64_t v22; // 0x100003b20
        int32_t v23; // 0x100003c2c
        int32_t * v24; // 0x1000039f0
        int64_t v25; // 0x100003b50
        int64_t v26; // 0x100003b58
        int64_t v27; // 0x100003b68
        int32_t v28; // 0x100003b70
        int32_t v29; // 0x100003b80
        int32_t v30; // 0x100003b8c
        int32_t v31; // 0x100003b9c
        int32_t v32; // 0x100003ba4
        int32_t * v33; // 0x100003bc0
        int32_t v34; // 0x100003bc0
        int32_t v35; // 0x100003bc4
        int32_t v36; // 0x100003c18
        if (v15 < 0 != (v14 & v15) < 0) {
            // 0x100003afc
            v18 = -v13;
            v17 = 0;
            v19 = v17 + v13;
            v20 = v17;
            v21 = (int64_t *)(8 * v20 + v4);
            v22 = 4 * (int64_t)v19;
            *(int32_t *)(v22 + *v21) = 0x7fffffff;
            if (v18 < 0 != ((v19 ^ v17) & (v17 ^ v18)) < 0) {
                // 0x100003b48
                v24 = (int32_t *)(v1 + (int64_t)(4 * (v17 * v2 + v19)));
                v16 = v17;
                v25 = *v21;
                v26 = 4 * (int64_t)v16;
                v27 = *(int64_t *)((int64_t)(8 * v16 + 8) + v4);
                v28 = *(int32_t *)(v27 + v22);
                v29 = *(int32_t *)(4 * v20 + v1);
                v30 = *(int32_t *)(v26 + v1);
                v31 = *(int32_t *)(v22 + v1);
                v32 = v28 + *(int32_t *)(v26 + v25) + v30 * v29 * v31;
                v33 = (int32_t *)(v25 + v22);
                v34 = *v33;
                v35 = v32 - v34;
                if (v35 < 0 != ((v35 ^ v32) & (v32 ^ v34)) < 0) {
                    // 0x100003bd4
                    *v33 = v32;
                    *v24 = v16;
                }
                // 0x100003c14
                v36 = v16 + 1;
                while (v36 - v19 < 0 != ((v36 - v19 ^ v36) & (v36 ^ v19)) < 0) {
                    // 0x100003b48
                    v16 = v36;
                    v25 = *v21;
                    v26 = 4 * (int64_t)v16;
                    v27 = *(int64_t *)((int64_t)(8 * v16 + 8) + v4);
                    v28 = *(int32_t *)(v27 + v22);
                    v29 = *(int32_t *)(4 * v20 + v1);
                    v30 = *(int32_t *)(v26 + v1);
                    v31 = *(int32_t *)(v22 + v1);
                    v32 = v28 + *(int32_t *)(v26 + v25) + v30 * v29 * v31;
                    v33 = (int32_t *)(v25 + v22);
                    v34 = *v33;
                    v35 = v32 - v34;
                    if (v35 < 0 != ((v35 ^ v32) & (v32 ^ v34)) < 0) {
                        // 0x100003bd4
                        *v33 = v32;
                        *v24 = v16;
                    }
                    // 0x100003c14
                    v36 = v16 + 1;
                }
            }
            // 0x100003c28
            v23 = v17 + 1;
            while (v23 - v14 < 0 != ((v23 - v14 ^ v23) & (v23 ^ v14)) < 0) {
                // 0x100003afc
                v17 = v23;
                v19 = v17 + v13;
                v20 = v17;
                v21 = (int64_t *)(8 * v20 + v4);
                v22 = 4 * (int64_t)v19;
                *(int32_t *)(v22 + *v21) = 0x7fffffff;
                if (v18 < 0 != ((v19 ^ v17) & (v17 ^ v18)) < 0) {
                    // 0x100003b48
                    v24 = (int32_t *)(v1 + (int64_t)(4 * (v17 * v2 + v19)));
                    v16 = v17;
                    v25 = *v21;
                    v26 = 4 * (int64_t)v16;
                    v27 = *(int64_t *)((int64_t)(8 * v16 + 8) + v4);
                    v28 = *(int32_t *)(v27 + v22);
                    v29 = *(int32_t *)(4 * v20 + v1);
                    v30 = *(int32_t *)(v26 + v1);
                    v31 = *(int32_t *)(v22 + v1);
                    v32 = v28 + *(int32_t *)(v26 + v25) + v30 * v29 * v31;
                    v33 = (int32_t *)(v25 + v22);
                    v34 = *v33;
                    v35 = v32 - v34;
                    if (v35 < 0 != ((v35 ^ v32) & (v32 ^ v34)) < 0) {
                        // 0x100003bd4
                        *v33 = v32;
                        *v24 = v16;
                    }
                    // 0x100003c14
                    v36 = v16 + 1;
                    while (v36 - v19 < 0 != ((v36 - v19 ^ v36) & (v36 ^ v19)) < 0) {
                        // 0x100003b48
                        v16 = v36;
                        v25 = *v21;
                        v26 = 4 * (int64_t)v16;
                        v27 = *(int64_t *)((int64_t)(8 * v16 + 8) + v4);
                        v28 = *(int32_t *)(v27 + v22);
                        v29 = *(int32_t *)(4 * v20 + v1);
                        v30 = *(int32_t *)(v26 + v1);
                        v31 = *(int32_t *)(v22 + v1);
                        v32 = v28 + *(int32_t *)(v26 + v25) + v30 * v29 * v31;
                        v33 = (int32_t *)(v25 + v22);
                        v34 = *v33;
                        v35 = v32 - v34;
                        if (v35 < 0 != ((v35 ^ v32) & (v32 ^ v34)) < 0) {
                            // 0x100003bd4
                            *v33 = v32;
                            *v24 = v16;
                        }
                        // 0x100003c14
                        v36 = v16 + 1;
                    }
                }
                // 0x100003c28
                v23 = v17 + 1;
            }
        }
        int32_t v37 = v13 + 1; // 0x100003c40
        while (v37 - v2 < 0 != ((v37 - v2 ^ v37) & (v37 ^ v2)) < 0) {
            // 0x100003adc
            v13 = v37;
            v14 = v2 - v13;
            v15 = -v14;
            if (v15 < 0 != (v14 & v15) < 0) {
                // 0x100003afc
                v18 = -v13;
                v17 = 0;
                v19 = v17 + v13;
                v20 = v17;
                v21 = (int64_t *)(8 * v20 + v4);
                v22 = 4 * (int64_t)v19;
                *(int32_t *)(v22 + *v21) = 0x7fffffff;
                if (v18 < 0 != ((v19 ^ v17) & (v17 ^ v18)) < 0) {
                    // 0x100003b48
                    v24 = (int32_t *)(v1 + (int64_t)(4 * (v17 * v2 + v19)));
                    v16 = v17;
                    v25 = *v21;
                    v26 = 4 * (int64_t)v16;
                    v27 = *(int64_t *)((int64_t)(8 * v16 + 8) + v4);
                    v28 = *(int32_t *)(v27 + v22);
                    v29 = *(int32_t *)(4 * v20 + v1);
                    v30 = *(int32_t *)(v26 + v1);
                    v31 = *(int32_t *)(v22 + v1);
                    v32 = v28 + *(int32_t *)(v26 + v25) + v30 * v29 * v31;
                    v33 = (int32_t *)(v25 + v22);
                    v34 = *v33;
                    v35 = v32 - v34;
                    if (v35 < 0 != ((v35 ^ v32) & (v32 ^ v34)) < 0) {
                        // 0x100003bd4
                        *v33 = v32;
                        *v24 = v16;
                    }
                    // 0x100003c14
                    v36 = v16 + 1;
                    while (v36 - v19 < 0 != ((v36 - v19 ^ v36) & (v36 ^ v19)) < 0) {
                        // 0x100003b48
                        v16 = v36;
                        v25 = *v21;
                        v26 = 4 * (int64_t)v16;
                        v27 = *(int64_t *)((int64_t)(8 * v16 + 8) + v4);
                        v28 = *(int32_t *)(v27 + v22);
                        v29 = *(int32_t *)(4 * v20 + v1);
                        v30 = *(int32_t *)(v26 + v1);
                        v31 = *(int32_t *)(v22 + v1);
                        v32 = v28 + *(int32_t *)(v26 + v25) + v30 * v29 * v31;
                        v33 = (int32_t *)(v25 + v22);
                        v34 = *v33;
                        v35 = v32 - v34;
                        if (v35 < 0 != ((v35 ^ v32) & (v32 ^ v34)) < 0) {
                            // 0x100003bd4
                            *v33 = v32;
                            *v24 = v16;
                        }
                        // 0x100003c14
                        v36 = v16 + 1;
                    }
                }
                // 0x100003c28
                v23 = v17 + 1;
                while (v23 - v14 < 0 != ((v23 - v14 ^ v23) & (v23 ^ v14)) < 0) {
                    // 0x100003afc
                    v17 = v23;
                    v19 = v17 + v13;
                    v20 = v17;
                    v21 = (int64_t *)(8 * v20 + v4);
                    v22 = 4 * (int64_t)v19;
                    *(int32_t *)(v22 + *v21) = 0x7fffffff;
                    if (v18 < 0 != ((v19 ^ v17) & (v17 ^ v18)) < 0) {
                        // 0x100003b48
                        v24 = (int32_t *)(v1 + (int64_t)(4 * (v17 * v2 + v19)));
                        v16 = v17;
                        v25 = *v21;
                        v26 = 4 * (int64_t)v16;
                        v27 = *(int64_t *)((int64_t)(8 * v16 + 8) + v4);
                        v28 = *(int32_t *)(v27 + v22);
                        v29 = *(int32_t *)(4 * v20 + v1);
                        v30 = *(int32_t *)(v26 + v1);
                        v31 = *(int32_t *)(v22 + v1);
                        v32 = v28 + *(int32_t *)(v26 + v25) + v30 * v29 * v31;
                        v33 = (int32_t *)(v25 + v22);
                        v34 = *v33;
                        v35 = v32 - v34;
                        if (v35 < 0 != ((v35 ^ v32) & (v32 ^ v34)) < 0) {
                            // 0x100003bd4
                            *v33 = v32;
                            *v24 = v16;
                        }
                        // 0x100003c14
                        v36 = v16 + 1;
                        while (v36 - v19 < 0 != ((v36 - v19 ^ v36) & (v36 ^ v19)) < 0) {
                            // 0x100003b48
                            v16 = v36;
                            v25 = *v21;
                            v26 = 4 * (int64_t)v16;
                            v27 = *(int64_t *)((int64_t)(8 * v16 + 8) + v4);
                            v28 = *(int32_t *)(v27 + v22);
                            v29 = *(int32_t *)(4 * v20 + v1);
                            v30 = *(int32_t *)(v26 + v1);
                            v31 = *(int32_t *)(v22 + v1);
                            v32 = v28 + *(int32_t *)(v26 + v25) + v30 * v29 * v31;
                            v33 = (int32_t *)(v25 + v22);
                            v34 = *v33;
                            v35 = v32 - v34;
                            if (v35 < 0 != ((v35 ^ v32) & (v32 ^ v34)) < 0) {
                                // 0x100003bd4
                                *v33 = v32;
                                *v24 = v16;
                            }
                            // 0x100003c14
                            v36 = v16 + 1;
                        }
                    }
                    // 0x100003c28
                    v23 = v17 + 1;
                }
            }
            // 0x100003c3c
            v37 = v13 + 1;
        }
    }
    uint32_t result = *(int32_t *)(*v3 + (4 * v1 + 0xfffffffc & 0xfffffffc)); // 0x100003c5c
    int32_t v38 = 0; // 0x100003c7c
    if (v5 < 0 == (v5 & v2) < 0) {
        // 0x100003ca8
        _free(v3);
        return result;
    }
    _free((int64_t *)*(int64_t *)(8 * (int64_t)v38 + v4));
    v38++;
    while (v38 - v2 < 0 != ((v38 - v2 ^ v38) & (v38 ^ v2)) < 0) {
        // 0x100003c84
        _free((int64_t *)*(int64_t *)(8 * (int64_t)v38 + v4));
        v38++;
    }
    // 0x100003ca8
    _free(v3);
    return result;
}

// Address range: 0x100003cc0 - 0x100003d90
int64_t function_100003cc0(void) {
    // 0x100003cc0
    int32_t result; // 0x100003cc0
    int64_t v1; // 0x100003cc0
    if ((int32_t)v1 == (int32_t)v1) {
        // 0x100003cf4
        result = _printf("A%d", v1);
    } else {
        // 0x100003d14
        _putchar(40);
        function_100003cc0();
        function_100003cc0();
        result = _putchar(41);
    }
    // 0x100003d84
    return result;
}

// Address range: 0x100003d90 - 0x100003dbc
int64_t entry_point(void) {
    // 0x100003d90
    function_100003dbc();
    return 0;
}

// Address range: 0x100003dbc - 0x100003efc
int64_t function_100003dbc(void) {
    int64_t v1 = (float64_t)g1; // bp-48, 0x100003dec
    int64_t * v2 = _malloc(144); // 0x100003e18
    int64_t v3 = function_1000039f0(); // 0x100003e2c
    int64_t v4 = &v1; // 0x100003e50
    if ((int32_t)v3 != 0x48c1) {
        // 0x100003e58
        ___assert_rtn("test", "matrix_chain_order.c", 102, "r == 18625");
        v4 = (int64_t)"matrix_chain_order.c";
    }
    // 0x100003e7c
    _printf("Result : %d\n", v4);
    _printf("Optimal ordering : ");
    function_100003cc0();
    _free(v2);
    int64_t v5 = _printf("\n"); // 0x100003ec8
    int64_t v6 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003ed8
    int64_t result = v5; // 0x100003ee4
    if (v6 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003eec
        result = ___stack_chk_fail(v5);
    }
    // 0x100003ef0
    return result;
}

// Address range: 0x100003efc - 0x100003f08
int64_t function_100003efc(char * a1, char * a2, int64_t a3, char * a4) {
    // 0x100003efc
    return ___assert_rtn(a1, a2, a3, a4);
}

// Address range: 0x100003f08 - 0x100003f14
int64_t function_100003f08(int64_t a1) {
    // 0x100003f08
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f14 - 0x100003f20
void function_100003f14(int64_t * ptr) {
    // 0x100003f14
    _free(ptr);
}

// Address range: 0x100003f20 - 0x100003f2c
int64_t * function_100003f20(int32_t size) {
    // 0x100003f20
    return _malloc(size);
}

// Address range: 0x100003f2c - 0x100003f38
int32_t function_100003f2c(char * format, ...) {
    // 0x100003f2c
    return _printf(format);
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(int32_t c) {
    // 0x100003f38
    return _putchar(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10

