//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b44(int64_t a1, int32_t a2);
int64_t function_100003ba4(void);
int64_t function_100003d20(void);
int64_t function_100003f18(int64_t a1);
void function_100003f24(int64_t * s, int32_t n);
int32_t function_100003f30(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int64_t ___stack_chk_fail(int64_t a1);
void _bzero(int64_t * a1, int32_t a2);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003b44 - 0x100003ba4
int64_t function_100003b44(int64_t a1, int32_t a2) {
    // 0x100003b44
    *(char *)(a1 + 2) = 1;
    *(char *)(a1 + 3) = 1;
    return ___chkstk_darwin();
}

// Address range: 0x100003ba4 - 0x100003d20
int64_t function_100003ba4(void) {
    // 0x100003ba4
    int64_t v1; // 0x100003ba4
    int64_t v2 = v1;
    int64_t v3; // 0x100003ba4
    int64_t v4 = (int64_t)&v3 - *(int64_t *)(v2 - 80); // 0x100003bac
    int64_t * v5 = (int64_t *)(v2 - 72); // 0x100003bb4
    *v5 = v4;
    *(int32_t *)v4 = 3;
    int32_t * v6 = (int32_t *)(v2 - 44); // 0x100003bc8
    *v6 = 1;
    int32_t * v7 = (int32_t *)(v2 - 48); // 0x100003bd0
    *v7 = 5;
    int32_t * v8 = (int32_t *)(v2 - 20); // 0x100003bdc
    int32_t v9 = *v8; // 0x100003bdc
    int32_t v10 = 5 - v9; // 0x100003be0
    if (v10 < 0 != (v10 & v9) < 0) {
        char * v11 = (char *)(v2 - 49); // 0x100003bf4
        int32_t * v12 = (int32_t *)(v2 - 56); // 0x100003bf8
        *v11 = 1;
        *v12 = 0;
        int32_t v13 = *v6; // 0x100003c04
        int32_t v14 = -v13; // 0x100003c08
        int32_t v15; // 0x100003c20
        int32_t v16; // 0x100003c28
        int32_t v17; // 0x100003ca0
        int32_t v18; // 0x100003c5c
        int32_t v19; // 0x100003c64
        int32_t v20; // 0x100003c80
        int32_t v21; // 0x100003c04
        int32_t v22; // 0x100003c08
        if (v14 < 0 == (v13 & v14) < 0) {
            // 0x100003c8c
            if (*v11 % 2 != 0) {
                // 0x100003c98
                v17 = *v6;
                *v6 = v17 + 1;
                *(int32_t *)(4 * (int64_t)v17 + *v5) = *v7;
                *(char *)(*(int64_t *)(v2 - 16) + (int64_t)*v7) = 1;
            }
        } else {
            v15 = *(int32_t *)*v5;
            *(int32_t *)(v2 - 60) = v15;
            v16 = *v7;
            while (v16 % v15 != 0) {
                // 0x100003c54
                v18 = v15 * v15;
                v19 = v18 - v16;
                if (v19 != 0 && v19 < 0 == ((v19 ^ v18) & (v16 ^ v18)) < 0) {
                    goto lab_0x100003c8c_2;
                }
                // 0x100003c7c
                v20 = *v12 + 1;
                *v12 = v20;
                v21 = *v6;
                v22 = v20 - v21;
                if (v22 < 0 == ((v22 ^ v20) & (v21 ^ v20)) < 0) {
                    goto lab_0x100003c8c_2;
                }
                v15 = *(int32_t *)(4 * (int64_t)v20 + *v5);
                *(int32_t *)(v2 - 60) = v15;
                v16 = *v7;
            }
            // 0x100003c8c
            *v11 = 0;
        }
        int32_t v23 = *v7 + 2; // 0x100003cd4
        *v7 = v23;
        int32_t v24 = *v8; // 0x100003bdc
        while (v23 - v24 < 0 != ((v23 - v24 ^ v23) & (v24 ^ v23)) < 0) {
            // 0x100003bf0
            *v11 = 1;
            *v12 = 0;
            v13 = *v6;
            v14 = -v13;
            if (v14 < 0 == (v13 & v14) < 0) {
                // 0x100003c8c
                if (*v11 % 2 != 0) {
                    // 0x100003c98
                    v17 = *v6;
                    *v6 = v17 + 1;
                    *(int32_t *)(4 * (int64_t)v17 + *v5) = *v7;
                    *(char *)(*(int64_t *)(v2 - 16) + (int64_t)*v7) = 1;
                }
            } else {
                v15 = *(int32_t *)*v5;
                *(int32_t *)(v2 - 60) = v15;
                v16 = *v7;
                while (v16 % v15 != 0) {
                    // 0x100003c54
                    v18 = v15 * v15;
                    v19 = v18 - v16;
                    if (v19 != 0 && v19 < 0 == ((v19 ^ v18) & (v16 ^ v18)) < 0) {
                        goto lab_0x100003c8c_2;
                    }
                    // 0x100003c7c
                    v20 = *v12 + 1;
                    *v12 = v20;
                    v21 = *v6;
                    v22 = v20 - v21;
                    if (v22 < 0 == ((v22 ^ v20) & (v21 ^ v20)) < 0) {
                        goto lab_0x100003c8c_2;
                    }
                    v15 = *(int32_t *)(4 * (int64_t)v20 + *v5);
                    *(int32_t *)(v2 - 60) = v15;
                    v16 = *v7;
                }
                // 0x100003c8c
                *v11 = 0;
            }
            // 0x100003cd0
            v23 = *v7 + 2;
            *v7 = v23;
            v24 = *v8;
        }
    }
    // 0x100003ce0
    *(int64_t *)(v2 - 88) = *(int64_t *)(v2 - 32);
    int64_t result; // 0x100003ba4
    if (*(int64_t *)*(int64_t *)0x100004010 != *(int64_t *)(v2 - 8)) {
        // 0x100003d08
        result = ___stack_chk_fail(v1);
    }
    // 0x100003d0c
    return result;
}

// Address range: 0x100003d20 - 0x100003d80
int64_t function_100003d20(void) {
    // 0x100003d20
    int64_t v1; // 0x100003d20
    int32_t v2 = v1; // 0x100003d24
    uint32_t v3 = v2; // 0x100003d3c
    if (v2 < 1) {
        // 0x100003d74
        return 0;
    }
    int32_t result = 0; // 0x100003d3c
    result += v3 % 10;
    while (v3 >= 10) {
        // 0x100003d44
        v3 /= 10;
        result += v3 % 10;
    }
    // 0x100003d74
    return result;
}

// Address range: 0x100003d80 - 0x100003f18
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003d98
    int64_t v2; // 0x100003d80
    _printf("Rosetta Code: additive primes less than %d:\n", v2);
    int64_t v3; // bp-532, 0x100003d80
    int64_t v4 = &v3; // 0x100003dd4
    _bzero(&v3, 500);
    function_100003b44(v4, 500);
    _printf("   2");
    int32_t v5 = 1;
    int32_t v6 = 3;
    int32_t v7 = v5; // 0x100003e2c
    int32_t v8; // 0x100003e70
    unsigned char v9; // 0x100003e44
    if (*(char *)((int64_t)v6 + v4) % 2 != 0) {
        // 0x100003e34
        v9 = *(char *)((0x100000000 * function_100003d20() >> 32) + v4);
        v7 = v5;
        if (v9 % 2 != 0) {
            // 0x100003e50
            _printf("%4d", 500);
            v8 = v5 + 1;
            v7 = v8;
            if (v8 % 10 == 0) {
                // 0x100003e9c
                _printf("\n");
                v7 = v8;
            }
        }
    }
    int32_t v10 = v6 + 2; // 0x100003eb8
    while (v6 < 498 != (497 - v6 & v10) < 0) {
        // 0x100003e1c
        v5 = v7;
        v6 = v10;
        v7 = v5;
        if (*(char *)((int64_t)v6 + v4) % 2 != 0) {
            // 0x100003e34
            v9 = *(char *)((0x100000000 * function_100003d20() >> 32) + v4);
            v7 = v5;
            if (v9 % 2 != 0) {
                // 0x100003e50
                _printf("%4d", 500);
                v8 = v5 + 1;
                v7 = v8;
                if (v8 % 10 == 0) {
                    // 0x100003e9c
                    _printf("\n");
                    v7 = v8;
                }
            }
        }
        // 0x100003eb4
        v10 = v6 + 2;
    }
    int32_t v11 = _printf("\nThose were %d additive primes.\n", 500); // 0x100003edc
    if (*(int64_t *)*(int64_t *)0x100004010 != v1) {
        // 0x100003f00
        ___stack_chk_fail((int64_t)v11);
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
void function_100003f24(int64_t * s, int32_t n) {
    // 0x100003f24
    _bzero(s, n);
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(char * format, ...) {
    // 0x100003f30
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

