//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003be8(void);
int64_t function_100003d90(void);
int64_t function_100003f44(int64_t a1);
int32_t function_100003f50(char * format, ...);
int32_t function_100003f5c(int32_t c);
int32_t function_100003f68(char * s);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003be8 - 0x100003d90
int64_t function_100003be8(void) {
    // 0x100003be8
    int64_t result; // 0x100003be8
    int32_t v1 = result; // 0x100003bf0
    int32_t v2 = result; // 0x100003bf4
    int32_t v3 = v1 * v2; // 0x100003c0c
    int32_t v4 = v3 - 1; // 0x100003c10
    int32_t v5 = 1 - v3; // 0x100003c14
    if (v5 != 0 && v5 < 0 == (v5 & v4) < 0) {
        // 0x100003d88
        return result;
    }
    int32_t v6 = 0;
    int32_t v7 = 0;
    int32_t v8 = v6;
    int32_t v9 = v8 % v2 * v1 + v8 / v2; // 0x100003c68
    int32_t v10 = v9 - v6; // 0x100003c7c
    int32_t v11 = v7 + 1; // 0x100003c84
    while (v10 != 0 && v10 < 0 == ((v10 ^ v9) & (v9 ^ v6)) < 0) {
        // 0x100003c34
        v7 = v11;
        v8 = v9;
        v9 = v8 % v2 * v1 + v8 / v2;
        v10 = v9 - v6;
        v11 = v7 + 1;
    }
    int64_t * v12; // 0x100003be8
    int32_t v13; // 0x100003be8
    float64_t v14; // bp-40, 0x100003be8
    int32_t v15; // 0x100003d00
    int32_t v16; // 0x100003d64
    if (v7 != 0 && v10 < 0 == ((v10 ^ v9) & (v9 ^ v6)) < 0) {
        // 0x100003cbc
        v14 = (float64_t)*(int64_t *)(8 * (int64_t)v6 + result);
        v13 = v6;
        v15 = v13 % v2 * v1 + v13 / v2;
        v12 = (int64_t *)&v14;
        if (v15 != v6) {
            // 0x100003d2c
            v12 = (int64_t *)(8 * (int64_t)v15 + result);
        }
        // 0x100003d40
        *(int64_t *)(8 * (int64_t)v13 + result) = *v12;
        v16 = v15 - v6;
        while (v16 != 0 && v16 < 0 == ((v16 ^ v15) & (v15 ^ v6)) < 0) {
            // 0x100003cd8
            v13 = v15;
            v15 = v13 % v2 * v1 + v13 / v2;
            v12 = (int64_t *)&v14;
            if (v15 != v6) {
                // 0x100003d2c
                v12 = (int64_t *)(8 * (int64_t)v15 + result);
            }
            // 0x100003d40
            *(int64_t *)(8 * (int64_t)v13 + result) = *v12;
            v16 = v15 - v6;
        }
    }
    int32_t v17 = v6 + 1; // 0x100003d7c
    while (v17 - v4 == 0 || v17 - v4 < 0 != ((v17 - v4 ^ v17) & (v17 ^ v4)) < 0) {
        // 0x100003c34
        v6 = v17;
        v7 = 0;
        v8 = v6;
        v9 = v8 % v2 * v1 + v8 / v2;
        v10 = v9 - v6;
        v11 = v7 + 1;
        while (v10 != 0 && v10 < 0 == ((v10 ^ v9) & (v9 ^ v6)) < 0) {
            // 0x100003c34
            v7 = v11;
            v8 = v9;
            v9 = v8 % v2 * v1 + v8 / v2;
            v10 = v9 - v6;
            v11 = v7 + 1;
        }
        if (v7 != 0 && v10 < 0 == ((v10 ^ v9) & (v9 ^ v6)) < 0) {
            // 0x100003cbc
            v14 = (float64_t)*(int64_t *)(8 * (int64_t)v6 + result);
            v13 = v6;
            v15 = v13 % v2 * v1 + v13 / v2;
            v12 = (int64_t *)&v14;
            if (v15 != v6) {
                // 0x100003d2c
                v12 = (int64_t *)(8 * (int64_t)v15 + result);
            }
            // 0x100003d40
            *(int64_t *)(8 * (int64_t)v13 + result) = *v12;
            v16 = v15 - v6;
            while (v16 != 0 && v16 < 0 == ((v16 ^ v15) & (v15 ^ v6)) < 0) {
                // 0x100003cd8
                v13 = v15;
                v15 = v13 % v2 * v1 + v13 / v2;
                v12 = (int64_t *)&v14;
                if (v15 != v6) {
                    // 0x100003d2c
                    v12 = (int64_t *)(8 * (int64_t)v15 + result);
                }
                // 0x100003d40
                *(int64_t *)(8 * (int64_t)v13 + result) = *v12;
                v16 = v15 - v6;
            }
        }
        // 0x100003d78
        v17 = v6 + 1;
    }
    // 0x100003d88
    return result;
}

// Address range: 0x100003d90 - 0x100003e54
int64_t function_100003d90(void) {
    // 0x100003d90
    int64_t v1; // 0x100003d90
    int32_t v2 = v1; // 0x100003da4
    int32_t v3 = -v2; // 0x100003db8
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003e48
        int64_t result; // 0x100003d90
        return result;
    }
    int32_t v4 = v1; // 0x100003da0
    int32_t v5 = -v4; // 0x100003dd8
    int32_t v6 = 0; // 0x100003e3c
    int32_t v7; // 0x100003d90
    int32_t v8; // 0x100003e20
    int32_t v9; // 0x100003dd8
    int128_t v10; // 0x100003d90
    if (v5 < 0 != (v5 & v4) < 0) {
        _printf("%2g ", (float64_t)(int64_t)v10);
        v8 = 1;
        v9 = v8 - v4;
        v7 = v8;
        while (v9 < 0 != ((v9 ^ v8) & (v8 ^ v4)) < 0) {
            // 0x100003de8
            _printf("%2g ", (float64_t)(int64_t)v10);
            v8 = v7 + 1;
            v9 = v8 - v4;
            v7 = v8;
        }
    }
    int32_t result2 = _putchar(10); // 0x100003e30
    v6++;
    while (v6 - v2 < 0 != ((v6 - v2 ^ v6) & (v6 ^ v2)) < 0) {
        // 0x100003dd0
        if (v5 < 0 != (v5 & v4) < 0) {
            _printf("%2g ", (float64_t)(int64_t)v10);
            v8 = 1;
            v9 = v8 - v4;
            v7 = v8;
            while (v9 < 0 != ((v9 ^ v8) & (v8 ^ v4)) < 0) {
                // 0x100003de8
                _printf("%2g ", (float64_t)(int64_t)v10);
                v8 = v7 + 1;
                v9 = v8 - v4;
                v7 = v8;
            }
        }
        // 0x100003e2c
        result2 = _putchar(10);
        v6++;
    }
    // 0x100003e48
    return result2;
}

// Address range: 0x100003e54 - 0x100003f44
int64_t entry_point(void) {
    // 0x100003e54
    int64_t v1; // bp-144, 0x100003e54
    int64_t v2 = &v1; // 0x100003ea0
    int64_t v3 = 0;
    int64_t v4 = v3 + 1;
    *(float64_t *)(8 * v3 + v2) = (float64_t)(int32_t)v4;
    while (v4 != 15) {
        // 0x100003e90
        v3 = v4;
        v4 = v3 + 1;
        *(float64_t *)(8 * v3 + v2) = (float64_t)(int32_t)v4;
    }
    // 0x100003ebc
    _puts("before transpose:");
    function_100003d90();
    function_100003be8();
    _puts("\nafter transpose:");
    int64_t v5 = function_100003d90(); // 0x100003f0c
    int64_t v6 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f1c
    if (v6 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f30
        ___stack_chk_fail(v5);
    }
    // 0x100003f34
    return 0;
}

// Address range: 0x100003f44 - 0x100003f50
int64_t function_100003f44(int64_t a1) {
    // 0x100003f44
    return ___stack_chk_fail(a1);
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
int32_t function_100003f68(char * s) {
    // 0x100003f68
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

