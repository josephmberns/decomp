//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c1c(void);
int64_t function_100003f04(int64_t a1);
int64_t * function_100003f10(int32_t nmemb, int32_t size);
void function_100003f1c(int64_t * ptr);
int64_t * function_100003f28(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f34(char * format, ...);
int32_t function_100003f40(int32_t c);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x800000000; // 0x100003f68
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003c1c - 0x100003e60
int64_t function_100003c1c(void) {
    // 0x100003c1c
    int64_t v1; // 0x100003c1c
    int32_t v2 = v1; // 0x100003c2c
    int64_t * v3 = _calloc(v2, 16); // 0x100003c38
    int64_t v4 = (int64_t)v3; // 0x100003c38
    int32_t v5 = -v2;
    int32_t v6 = 0; // 0x100003c58
    if (v5 < 0 != (v5 & v2) < 0) {
        int64_t v7 = v6; // 0x100003c64
        *(int32_t *)(16 * v7 + v4) = *(int32_t *)(4 * v7 + v1);
        v6++;
        while (v6 - v2 < 0 != ((v6 - v2 ^ v6) & (v6 ^ v2)) < 0) {
            // 0x100003c60
            v7 = v6;
            *(int32_t *)(16 * v7 + v4) = *(int32_t *)(4 * v7 + v1);
            v6++;
        }
    }
    if (v2 != 0) {
        uint64_t v8 = (0x100000000 * v1 >> 28) + v4; // 0x100003ce4
        int32_t v9 = v2;
        v9--;
        int64_t v10 = 16 * (int64_t)v9 + v4; // 0x100003cc0
        int64_t v11; // 0x100003c1c
        int64_t v12; // 0x100003c1c
        int32_t * v13; // 0x100003c1c
        int64_t * v14; // 0x100003c1c
        int32_t v15; // 0x100003cfc
        int32_t v16; // 0x100003d0c
        int32_t v17; // 0x100003d10
        int32_t * v18; // 0x100003d24
        int32_t v19; // 0x100003d24
        int32_t v20; // 0x100003d34
        int32_t v21; // 0x100003d38
        if (v8 > v10) {
            // 0x100003cf8
            v13 = (int32_t *)(v10 + 4);
            v14 = (int64_t *)(v10 + 8);
            v12 = v10;
            v11 = v12 + 16;
            v15 = *(int32_t *)v11;
            v16 = *(int32_t *)v10;
            v17 = v15 - v16;
            if (v17 != 0 && v17 < 0 == ((v17 ^ v15) & (v16 ^ v15)) < 0) {
                // 0x100003d20
                v18 = (int32_t *)(v12 + 20);
                v19 = *v18;
                v20 = *v13;
                v21 = v19 - v20;
                if (v21 < 0 == ((v21 ^ v19) & (v20 ^ v19)) < 0) {
                    // 0x100003d48
                    *v14 = v11;
                    *v13 = *v18 + 1;
                }
            }
            // 0x100003d7c
            while (v8 > v11) {
                // 0x100003cf8
                v12 = v11;
                v11 = v12 + 16;
                v15 = *(int32_t *)v11;
                v16 = *(int32_t *)v10;
                v17 = v15 - v16;
                if (v17 != 0 && v17 < 0 == ((v17 ^ v15) & (v16 ^ v15)) < 0) {
                    // 0x100003d20
                    v18 = (int32_t *)(v12 + 20);
                    v19 = *v18;
                    v20 = *v13;
                    v21 = v19 - v20;
                    if (v21 < 0 == ((v21 ^ v19) & (v20 ^ v19)) < 0) {
                        // 0x100003d48
                        *v14 = v11;
                        *v13 = *v18 + 1;
                    }
                }
            }
        }
        while (v9 != 0) {
            // 0x100003cb8
            v9--;
            v10 = 16 * (int64_t)v9 + v4;
            if (v8 > v10) {
                // 0x100003cf8
                v13 = (int32_t *)(v10 + 4);
                v14 = (int64_t *)(v10 + 8);
                v12 = v10;
                v11 = v12 + 16;
                v15 = *(int32_t *)v11;
                v16 = *(int32_t *)v10;
                v17 = v15 - v16;
                if (v17 != 0 && v17 < 0 == ((v17 ^ v15) & (v16 ^ v15)) < 0) {
                    // 0x100003d20
                    v18 = (int32_t *)(v12 + 20);
                    v19 = *v18;
                    v20 = *v13;
                    v21 = v19 - v20;
                    if (v21 < 0 == ((v21 ^ v19) & (v20 ^ v19)) < 0) {
                        // 0x100003d48
                        *v14 = v11;
                        *v13 = *v18 + 1;
                    }
                }
                // 0x100003d7c
                while (v8 > v11) {
                    // 0x100003cf8
                    v12 = v11;
                    v11 = v12 + 16;
                    v15 = *(int32_t *)v11;
                    v16 = *(int32_t *)v10;
                    v17 = v15 - v16;
                    if (v17 != 0 && v17 < 0 == ((v17 ^ v15) & (v16 ^ v15)) < 0) {
                        // 0x100003d20
                        v18 = (int32_t *)(v12 + 20);
                        v19 = *v18;
                        v20 = *v13;
                        v21 = v19 - v20;
                        if (v21 < 0 == ((v21 ^ v19) & (v20 ^ v19)) < 0) {
                            // 0x100003d48
                            *v14 = v11;
                            *v13 = *v18 + 1;
                        }
                    }
                }
            }
        }
    }
    int32_t * v22 = (int32_t *)v3; // 0x100003da4
    int32_t * v23 = (int32_t *)v3; // 0x100003da4
    int32_t v24 = 0; // 0x100003da4
    if (v5 < 0 != (v5 & v2) < 0) {
        int64_t v25 = 16 * (int64_t)v24 + v4; // 0x100003db4
        int32_t v26 = *(int32_t *)(v25 + 4); // 0x100003db8
        int32_t v27 = *(int32_t *)((int64_t)v23 + 4); // 0x100003dc0
        int32_t v28 = v26 - v27; // 0x100003dc4
        v23 = v28 == 0 | v28 < 0 != ((v28 ^ v26) & (v27 ^ v26)) < 0 ? v23 : (int32_t *)v25;
        v24++;
        int32_t v29 = v24 - v2; // 0x100003d9c
        v22 = v23;
        while (v29 < 0 != ((v29 ^ v24) & (v24 ^ v2)) < 0) {
            // 0x100003dac
            v25 = 16 * (int64_t)v24 + v4;
            v26 = *(int32_t *)(v25 + 4);
            v27 = *(int32_t *)((int64_t)v23 + 4);
            v28 = v26 - v27;
            v23 = v28 == 0 | v28 < 0 != ((v28 ^ v26) & (v27 ^ v26)) < 0 ? v23 : (int32_t *)v25;
            v24++;
            v29 = v24 - v2;
            v22 = v23;
        }
    }
    int64_t v30 = v22; // 0x100003e28
    _printf(" %d", 16);
    while (v30 != 0) {
        // 0x100003e00
        v30 = (int32_t *)v30;
        _printf(" %d", 16);
    }
    // 0x100003e44
    _putchar(10);
    _free(v3);
    return &g2;
}

// Address range: 0x100003e60 - 0x100003f04
int64_t entry_point(void) {
    // 0x100003e60
    int64_t v1; // bp-112, 0x100003e60
    _memcpy(&v1, &g1, 64);
    function_100003c1c();
    int64_t v2 = function_100003c1c(); // 0x100003ecc
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003edc
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003ef0
        ___stack_chk_fail(v2);
    }
    // 0x100003ef4
    return 0;
}

// Address range: 0x100003f04 - 0x100003f10
int64_t function_100003f04(int64_t a1) {
    // 0x100003f04
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f10 - 0x100003f1c
int64_t * function_100003f10(int32_t nmemb, int32_t size) {
    // 0x100003f10
    return _calloc(nmemb, size);
}

// Address range: 0x100003f1c - 0x100003f28
void function_100003f1c(int64_t * ptr) {
    // 0x100003f1c
    _free(ptr);
}

// Address range: 0x100003f28 - 0x100003f34
int64_t * function_100003f28(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f28
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _printf(format);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(int32_t c) {
    // 0x100003f40
    return _putchar(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

