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
int64_t function_1000037b8(void);
int64_t function_100003968(void);
int64_t function_100003c84(void);
int64_t function_100003f18(int64_t a1);
int64_t * function_100003f24(int32_t nmemb, int32_t size);
void function_100003f30(int64_t * ptr);
int64_t * function_100003f3c(int32_t size);
int64_t * function_100003f48(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f54(int32_t c);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x64000000c8; // 0x100003f7c

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _putchar(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x1000037b8 - 0x100003968
int64_t function_1000037b8(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x1000037cc
    int64_t v2; // 0x1000037b8
    int32_t v3 = v2; // bp-40, 0x1000037e0
    int64_t v4 = &v3;
    int64_t v5; // bp-140, 0x1000037b8
    int64_t v6 = &v5;
    int32_t v7 = 0;
    int32_t v8 = 4;
    v8--;
    int32_t * v9 = (int32_t *)(4 * (int64_t)v8 + v4); // 0x10000384c
    uint64_t v10 = (int64_t)*v9; // 0x100003850
    *v9 = (int32_t)(v10 / 10);
    int64_t v11 = v10 % 10;
    while (v8 != 0) {
        // 0x100003840
        v8--;
        v9 = (int32_t *)(4 * (int64_t)v8 + v4);
        v10 = 0x100000000 * v11 | (int64_t)*v9;
        *v9 = (int32_t)(v10 / 10);
        v11 = v10 % 10;
    }
    // 0x100003884
    *(char *)((int64_t)v7 + v6) = (char)v11 | 48;
    int32_t v12 = 4;
    int32_t v13 = v12 - 1; // 0x1000038c8
    while (*(int32_t *)((int64_t)(4 * v12 - 4) + v4) == 0) {
        // 0x1000038b0
        v12 = v13;
        v13 = v12 - 1;
    }
    int32_t v14 = v7 + 1; // 0x100003894
    while (v12 != 0) {
        // 0x100003840
        v7 = v14;
        v8 = v12;
        v8--;
        v9 = (int32_t *)(4 * (int64_t)v8 + v4);
        v10 = (int64_t)*v9;
        *v9 = (int32_t)(v10 / 10);
        v11 = v10 % 10;
        while (v8 != 0) {
            // 0x100003840
            v8--;
            v9 = (int32_t *)(4 * (int64_t)v8 + v4);
            v10 = 0x100000000 * v11 | (int64_t)*v9;
            *v9 = (int32_t)(v10 / 10);
            v11 = v10 % 10;
        }
        // 0x100003884
        *(char *)((int64_t)v7 + v6) = (char)v11 | 48;
        v12 = 4;
        v13 = v12 - 1;
        while (*(int32_t *)((int64_t)(4 * v12 - 4) + v4) == 0) {
            // 0x1000038b0
            v12 = v13;
            v13 = v12 - 1;
        }
        // 0x1000038e8
        v14 = v7 + 1;
    }
    int32_t v15 = v7; // 0x100003914
    if (v14 != 0) {
        _putchar((int32_t)*(char *)((int64_t)v15 + v6));
        while (v15 != 0) {
            // 0x10000391c
            v15--;
            _putchar((int32_t)*(char *)((int64_t)v15 + v6));
        }
    }
    int64_t v16 = _putchar(10); // 0x100003934
    int64_t result = v16; // 0x100003950
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003958
        result = ___stack_chk_fail(v16);
    }
    // 0x10000395c
    return result;
}

// Address range: 0x100003968 - 0x100003c84
int64_t function_100003968(void) {
    int32_t v1 = 0; // 0x100003980
    int64_t v2; // 0x100003968
    while (*(int32_t *)(4 * (int64_t)v1 + v2) != 0) {
        // 0x100003984
        v1++;
    }
    int32_t v3 = 8 * v1; // 0x1000039bc
    int64_t * v4 = _malloc(v3); // 0x1000039c0
    int64_t v5 = (int64_t)v4; // 0x1000039c0
    int32_t v6 = 4 * v1; // 0x1000039d0
    int64_t * v7 = _malloc(v6); // 0x1000039d4
    int64_t v8 = (int64_t)v7; // 0x1000039d4
    int32_t v9 = -v1;
    int32_t v10 = 0; // 0x1000039f4
    int32_t v11 = v2; // 0x1000039f4
    if (v9 < 0 != (v1 & v9) < 0) {
        int64_t v12 = v10; // 0x100003a00
        int64_t v13 = 4 * v12; // 0x100003a04
        int32_t * v14 = (int32_t *)(v13 + v2); // 0x100003a04
        *(int32_t *)(v13 + v8) = *v14;
        *(int64_t *)(8 * v12 + v5) = (int64_t)_calloc(16, *v14);
        v10++;
        while (v10 - v1 < 0 != ((v10 - v1 ^ v10) & (v10 ^ v1)) < 0) {
            // 0x1000039fc
            v12 = v10;
            v13 = 4 * v12;
            v14 = (int32_t *)(v13 + v2);
            *(int32_t *)(v13 + v8) = *v14;
            *(int64_t *)(8 * v12 + v5) = (int64_t)_calloc(16, *v14);
            v10++;
        }
        // 0x1000039e4
        int64_t v15; // 0x100003968
        v11 = *(int32_t *)&v15;
    }
    int32_t v16 = v2; // 0x100003974
    int64_t v17 = *v4; // 0x100003a4c
    *(float128_t *)(v17 + (int64_t)(16 * v11 - 16)) = 6.47517511943802511092443895822764655e-4966L;
    int32_t v18 = -v16; // 0x100003a80
    if (v16 == 0 || v18 < 0 != (v18 & v16) < 0) {
        int32_t v19 = 1 - v1; // 0x100003b38
        int32_t v20 = 0; // 0x100003be8
        int32_t v21 = 0; // 0x100003aa8
        int64_t v22; // 0x100003ab8
        int32_t * v23; // 0x100003abc
        int32_t v24; // 0x100003abc
        int32_t v25; // 0x100003b00
        int32_t v26; // 0x100003aa0
        if (v9 < 0 != (v1 & v9) < 0) {
            v22 = 4 * (int64_t)v21;
            v23 = (int32_t *)(v22 + v8);
            v24 = *v23;
            *v23 = v24 - 1;
            if (v24 == 0) {
                // 0x100003ad8
                *v23 = *(int32_t *)(v22 + v2) - 1;
            }
            // 0x100003afc
            v25 = v21 + 1;
            v26 = v25 - v1;
            v21 = v25;
            while (v26 < 0 != ((v26 ^ v25) & (v25 ^ v1)) < 0) {
                // 0x100003ab0
                v22 = 4 * (int64_t)v21;
                v23 = (int32_t *)(v22 + v8);
                v24 = *v23;
                *v23 = v24 - 1;
                if (v24 == 0) {
                    // 0x100003ad8
                    *v23 = *(int32_t *)(v22 + v2) - 1;
                }
                // 0x100003afc
                v25 = v21 + 1;
                v26 = v25 - v1;
                v21 = v25;
            }
        }
        float128_t v27; // 0x100003968
        int64_t v28; // 0x100003b4c
        int32_t v29; // 0x100003b5c
        int64_t v30; // 0x100003b60
        int64_t * v31; // 0x100003b70
        int64_t * v32; // 0x100003b84
        int64_t v33; // 0x100003b88
        int32_t v34; // 0x100003bd4
        if (v19 < 0 != (v19 & v1) < 0) {
            // 0x100003b48
            v34 = 1;
            v27 = *(float128_t *)(16 * (int64_t)*(int32_t *)v7 + *v4);
            v28 = v34;
            v29 = *(int32_t *)(4 * v28 + v8);
            v30 = 16 * (int64_t)v29 + *(int64_t *)(8 * v28 + v5);
            v31 = (int64_t *)v30;
            *v31 = *v31 + (int64_t)(float64_t)v27;
            v32 = (int64_t *)(v30 + 8);
            v33 = *v32 + v2;
            *v32 = v33;
            if (*v31 < (int64_t)(float64_t)v27) {
                // 0x100003bac
                *v32 = v33 + 1;
            }
            // 0x100003bc0
            v34++;
            while (v34 - v1 < 0 != ((v34 - v1 ^ v34) & (v34 ^ v1)) < 0) {
                // 0x100003b48
                v27 = *(float128_t *)v30;
                v28 = v34;
                v29 = *(int32_t *)(4 * v28 + v8);
                v30 = 16 * (int64_t)v29 + *(int64_t *)(8 * v28 + v5);
                v31 = (int64_t *)v30;
                *v31 = *v31 + (int64_t)(float64_t)v27;
                v32 = (int64_t *)(v30 + 8);
                v33 = *v32 + v2;
                *v32 = v33;
                if (*v31 < (int64_t)(float64_t)v27) {
                    // 0x100003bac
                    *v32 = v33 + 1;
                }
                // 0x100003bc0
                v34++;
            }
        }
        // 0x100003be4
        v20++;
        while (v20 - v16 == 0 || v20 - v16 < 0 != ((v20 - v16 ^ v20) & (v20 ^ v16)) < 0) {
            // 0x100003a98
            v21 = 0;
            if (v9 < 0 != (v1 & v9) < 0) {
                v22 = 4 * (int64_t)v21;
                v23 = (int32_t *)(v22 + v8);
                v24 = *v23;
                *v23 = v24 - 1;
                if (v24 == 0) {
                    // 0x100003ad8
                    *v23 = *(int32_t *)(v22 + v2) - 1;
                }
                // 0x100003afc
                v25 = v21 + 1;
                v26 = v25 - v1;
                v21 = v25;
                while (v26 < 0 != ((v26 ^ v25) & (v25 ^ v1)) < 0) {
                    // 0x100003ab0
                    v22 = 4 * (int64_t)v21;
                    v23 = (int32_t *)(v22 + v8);
                    v24 = *v23;
                    *v23 = v24 - 1;
                    if (v24 == 0) {
                        // 0x100003ad8
                        *v23 = *(int32_t *)(v22 + v2) - 1;
                    }
                    // 0x100003afc
                    v25 = v21 + 1;
                    v26 = v25 - v1;
                    v21 = v25;
                }
            }
            if (v19 < 0 != (v19 & v1) < 0) {
                // 0x100003b48
                v34 = 1;
                v27 = *(float128_t *)(16 * (int64_t)*(int32_t *)v7 + *v4);
                v28 = v34;
                v29 = *(int32_t *)(4 * v28 + v8);
                v30 = 16 * (int64_t)v29 + *(int64_t *)(8 * v28 + v5);
                v31 = (int64_t *)v30;
                *v31 = *v31 + (int64_t)(float64_t)v27;
                v32 = (int64_t *)(v30 + 8);
                v33 = *v32 + v2;
                *v32 = v33;
                if (*v31 < (int64_t)(float64_t)v27) {
                    // 0x100003bac
                    *v32 = v33 + 1;
                }
                // 0x100003bc0
                v34++;
                while (v34 - v1 < 0 != ((v34 - v1 ^ v34) & (v34 ^ v1)) < 0) {
                    // 0x100003b48
                    v27 = *(float128_t *)v30;
                    v28 = v34;
                    v29 = *(int32_t *)(4 * v28 + v8);
                    v30 = 16 * (int64_t)v29 + *(int64_t *)(8 * v28 + v5);
                    v31 = (int64_t *)v30;
                    *v31 = *v31 + (int64_t)(float64_t)v27;
                    v32 = (int64_t *)(v30 + 8);
                    v33 = *v32 + v2;
                    *v32 = v33;
                    if (*v31 < (int64_t)(float64_t)v27) {
                        // 0x100003bac
                        *v32 = v33 + 1;
                    }
                    // 0x100003bc0
                    v34++;
                }
            }
            // 0x100003be4
            v20++;
        }
    }
    int64_t v35 = *(int64_t *)(v5 + (int64_t)(v3 - 8)); // 0x100003c00
    int32_t v36 = *(int32_t *)(v8 + (int64_t)(v6 - 4)); // 0x100003c10
    float128_t v37 = *(float128_t *)(16 * (int64_t)v36 + v35); // 0x100003c14
    int32_t v38 = 0; // 0x100003c34
    if (v9 < 0 == (v1 & v9) < 0) {
        // 0x100003c60
        _free(v4);
        _free(v7);
        return (float64_t)v37;
    }
    _free((int64_t *)*(int64_t *)(8 * (int64_t)v38 + v5));
    v38++;
    while (v38 - v1 < 0 != ((v38 - v1 ^ v38) & (v38 ^ v1)) < 0) {
        // 0x100003c3c
        _free((int64_t *)*(int64_t *)(8 * (int64_t)v38 + v5));
        v38++;
    }
    // 0x100003c60
    _free(v4);
    _free(v7);
    return (float64_t)v37;
}

// Address range: 0x100003c84 - 0x100003d3c
int64_t function_100003c84(void) {
    // 0x100003c84
    int64_t v1; // 0x100003c84
    int32_t v2 = v1; // 0x100003c90
    if ((int32_t)v1 == 0 || v2 < 0) {
        // 0x100003d2c
        return 0;
    }
    int64_t result = 1; // 0x100003cd8
    if (v2 != 0) {
        int64_t v3 = function_100003c84(); // 0x100003d00
        result = function_100003c84() + v3 & 0xffffffff;
    }
    // 0x100003d2c
    return result;
}

// Address range: 0x100003d3c - 0x100003f18
int64_t entry_point(void) {
    // 0x100003d3c
    int64_t v1; // bp-116, 0x100003d3c
    _memcpy(&v1, &g1, 36);
    function_100003968();
    function_1000037b8();
    function_100003968();
    function_1000037b8();
    function_100003968();
    function_1000037b8();
    function_100003968();
    function_1000037b8();
    function_100003968();
    function_1000037b8();
    _putchar(10);
    function_100003968();
    function_1000037b8();
    function_100003968();
    function_1000037b8();
    function_100003968();
    function_1000037b8();
    function_100003968();
    int64_t v2 = function_1000037b8(); // 0x100003edc
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003eec
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f00
        ___stack_chk_fail(v2);
    }
    // 0x100003f04
    return 0;
}

// Address range: 0x100003f18 - 0x100003f24
int64_t function_100003f18(int64_t a1) {
    // 0x100003f18
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f24 - 0x100003f30
int64_t * function_100003f24(int32_t nmemb, int32_t size) {
    // 0x100003f24
    return _calloc(nmemb, size);
}

// Address range: 0x100003f30 - 0x100003f3c
void function_100003f30(int64_t * ptr) {
    // 0x100003f30
    _free(ptr);
}

// Address range: 0x100003f3c - 0x100003f48
int64_t * function_100003f3c(int32_t size) {
    // 0x100003f3c
    return _malloc(size);
}

// Address range: 0x100003f48 - 0x100003f54
int64_t * function_100003f48(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f48
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(int32_t c) {
    // 0x100003f54
    return _putchar(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10

