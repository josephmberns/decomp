//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c00(void);
int64_t function_100003ef8(void);
int64_t function_100003f5c(int64_t a1);
int32_t function_100003f68(int32_t x);
int32_t function_100003f74(char * nptr);
int32_t function_100003f80(char * format, ...);
int32_t function_100003f8c(int32_t c);

// --------------------- Global Variables ---------------------

int32_t g1 = -0x1120531; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int64_t ___stack_chk_fail(int64_t a1);
int32_t _abs(int32_t a1);
int32_t _atoi(char * a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003c00 - 0x100003e68
int64_t function_100003c00(void) {
    // 0x100003c00
    int64_t v1; // 0x100003c00
    int32_t v2 = v1; // 0x100003c0c
    int32_t v3 = v1; // 0x100003c10
    if (v3 == v2) {
        // 0x100003c30
        g1++;
        int32_t v4 = -v2;
        int32_t result = _printf("\nNo. %d\n-----\n", v1); // 0x100003c70
        if (v4 < 0 != (v4 & v2) < 0) {
            int32_t v5 = 0;
            int32_t v6 = 0;
            int32_t v7 = 81; // 0x100003cb0
            if (v6 != *(int32_t *)(4 * (int64_t)v5 + v1)) {
                // 0x100003cc4
                v7 = (v6 + v5) % 2 == 0 ? 46 : 32;
            }
            // 0x100003cf4
            _putchar(v7);
            int32_t v8 = v6 + 1; // 0x100003d04
            while (v8 - v2 < 0 != ((v8 - v2 ^ v8) & (v8 ^ v2)) < 0) {
                // 0x100003c98
                v6 = v8;
                v7 = 81;
                if (v6 != *(int32_t *)(4 * (int64_t)v5 + v1)) {
                    // 0x100003cc4
                    v7 = (v6 + v5) % 2 == 0 ? 46 : 32;
                }
                // 0x100003cf4
                _putchar(v7);
                v8 = v6 + 1;
            }
            int32_t v9 = v5 + 1; // 0x100003d18
            int32_t v10 = v9 - v2; // 0x100003c68
            int32_t v11 = v9; // 0x100003c70
            result = _putchar(10);
            while (v10 < 0 != ((v10 ^ v9) & (v9 ^ v2)) < 0) {
                // 0x100003c98
                v5 = v11;
                v6 = 0;
                v7 = 81;
                if (v6 != *(int32_t *)(4 * (int64_t)v5 + v1)) {
                    // 0x100003cc4
                    v7 = (v6 + v5) % 2 == 0 ? 46 : 32;
                }
                // 0x100003cf4
                _putchar(v7);
                v8 = v6 + 1;
                while (v8 - v2 < 0 != ((v8 - v2 ^ v8) & (v8 ^ v2)) < 0) {
                    // 0x100003c98
                    v6 = v8;
                    v7 = 81;
                    if (v6 != *(int32_t *)(4 * (int64_t)v5 + v1)) {
                        // 0x100003cc4
                        v7 = (v6 + v5) % 2 == 0 ? 46 : 32;
                    }
                    // 0x100003cf4
                    _putchar(v7);
                    v8 = v6 + 1;
                }
                // 0x100003d14
                v9 = v5 + 1;
                v10 = v9 - v2;
                v11 = v9;
                result = _putchar(10);
            }
        }
        // 0x100003e5c
        return result;
    }
    int32_t v12 = -v2; // 0x100003d44
    if (v12 < 0 == (v12 & v2) < 0) {
        // 0x100003e5c
        int64_t result2; // 0x100003c00
        return result2;
    }
    int32_t v13 = -v3; // 0x100003d64
    int32_t v14 = 0;
    int32_t v15; // 0x100003c00
    int32_t v16; // 0x100003c00
    int32_t v17; // 0x100003c00
    int32_t v18; // 0x100003d84
    int32_t v19; // 0x100003db8
    int64_t v20; // 0x100003db8
    int32_t v21; // 0x100003dfc
    int32_t v22; // 0x100003d64
    int32_t v23; // 0x100003d84
    int64_t v24; // 0x100003c00
    int64_t result3; // 0x100003c00
    if (v13 < 0 == (v13 & v3) < 0) {
        // 0x100003e24
        *(int32_t *)((0x100000000 * v1 >> 30) + v1) = v14;
        result3 = function_100003c00();
    } else {
        // 0x100003d7c
        v18 = *(int32_t *)v1;
        v15 = v18;
        result3 = v24;
        if (v18 != v14) {
            v17 = 0;
            v19 = _abs(v15 - v14);
            v20 = v19;
            result3 = v20;
            while (v19 != v3 - v17) {
                // 0x100003d5c
                v21 = v17 + 1;
                v22 = v21 - v3;
                if (v22 < 0 == ((v22 ^ v21) & (v21 ^ v3)) < 0) {
                    goto lab_0x100003e24;
                }
                // 0x100003d7c
                v23 = *(int32_t *)(4 * (int64_t)v21 + v1);
                v15 = v23;
                v16 = v21;
                result3 = v20;
                if (v23 == v14) {
                    // break -> 0x100003e4c
                    break;
                }
                v17 = v16;
                v19 = _abs(v15 - v14);
                v20 = v19;
                result3 = v20;
            }
        }
    }
    int32_t v25 = v14 + 1; // 0x100003e50
    int32_t v26 = v25 - v2; // 0x100003d44
    v24 = result3;
    while (v26 < 0 != ((v26 ^ v25) & (v25 ^ v2)) < 0) {
        // 0x100003d5c
        v14 = v25;
        if (v13 < 0 == (v13 & v3) < 0) {
            // 0x100003e24
            *(int32_t *)((0x100000000 * v1 >> 30) + v1) = v14;
            result3 = function_100003c00();
        } else {
            // 0x100003d7c
            v18 = *(int32_t *)v1;
            v15 = v18;
            result3 = v24;
            if (v18 != v14) {
                v17 = 0;
                v19 = _abs(v15 - v14);
                v20 = v19;
                result3 = v20;
                while (v19 != v3 - v17) {
                    // 0x100003d5c
                    v21 = v17 + 1;
                    v22 = v21 - v3;
                    if (v22 < 0 == ((v22 ^ v21) & (v21 ^ v3)) < 0) {
                        goto lab_0x100003e24;
                    }
                    // 0x100003d7c
                    v23 = *(int32_t *)(4 * (int64_t)v21 + v1);
                    v15 = v23;
                    v16 = v21;
                    result3 = v20;
                    if (v23 == v14) {
                        // break -> 0x100003e4c
                        break;
                    }
                    v17 = v16;
                    v19 = _abs(v15 - v14);
                    v20 = v19;
                    result3 = v20;
                }
            }
        }
        // 0x100003e4c
        v25 = v14 + 1;
        v26 = v25 - v2;
        v24 = result3;
    }
    // 0x100003e5c
    return result3;
}

// Address range: 0x100003e68 - 0x100003ef8
int64_t entry_point(void) {
    // 0x100003e68
    int64_t v1; // 0x100003e68
    int32_t v2 = v1; // 0x100003e88
    int32_t v3 = v2 - 1; // 0x100003e94
    if (v3 != 0 && v3 < 0 == (v2 & -v2) < 0) {
        // 0x100003ea4
        _atoi((char *)*(int64_t *)(v1 + 8));
    }
    // 0x100003ed0
    return ___chkstk_darwin();
}

// Address range: 0x100003ef8 - 0x100003f5c
int64_t function_100003ef8(void) {
    int64_t v1 = function_100003c00(); // 0x100003f14
    int64_t v2; // 0x100003ef8
    int32_t v3 = *(int32_t *)(v2 - 12); // 0x100003f20
    int32_t * v4 = (int32_t *)(v2 - 44); // 0x100003f24
    *v4 = v3;
    int32_t result = v3; // 0x100003f40
    if (*(int64_t *)*(int64_t *)0x100004010 != *(int64_t *)(v2 - 8)) {
        // 0x100003f48
        ___stack_chk_fail(v1);
        result = *v4;
    }
    // 0x100003f4c
    return result;
}

// Address range: 0x100003f5c - 0x100003f68
int64_t function_100003f5c(int64_t a1) {
    // 0x100003f5c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(int32_t x) {
    // 0x100003f68
    return _abs(x);
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(char * nptr) {
    // 0x100003f74
    return _atoi(nptr);
}

// Address range: 0x100003f80 - 0x100003f8c
int32_t function_100003f80(char * format, ...) {
    // 0x100003f80
    return _printf(format);
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(int32_t c) {
    // 0x100003f8c
    return _putchar(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

