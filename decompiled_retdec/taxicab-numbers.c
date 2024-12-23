//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000038a4(void);
int64_t function_100003ad0(void);
int64_t function_100003d3c(void);
int64_t function_100003f5c(void);
int32_t function_100003f68(char * format, ...);
int32_t function_100003f74(int32_t c);
int64_t * function_100003f80(int64_t * ptr, int32_t size);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x100000cfeedfacf; // 0x100008000
int32_t * g2 = (int32_t *)0x200000000; // 0x100008008
int64_t g3 = 0x4b800000012; // 0x100008010
int32_t * g4 = (int32_t *)0x200085; // 0x100008018
int32_t * g5; // 0x10000801c

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int64_t * _realloc(int64_t * a1, int32_t a2);

// ------------------------ Functions -------------------------

// Address range: 0x1000038a4 - 0x100003ad0
int64_t function_1000038a4(void) {
    uint32_t v1 = *(int32_t *)&g2; // 0x1000038bc
    *(int32_t *)&g2 = v1 + 1;
    int64_t result = (int64_t)_realloc((int64_t *)g1, 8 * v1 + 16); // 0x1000038f4
    g1 = result;
    int64_t v2 = (int64_t)*(int32_t *)&g2; // 0x100003904
    *(int64_t *)(8 * v2 + result) = v2 * v2 * v2;
    if (v1 < 2) {
        // 0x100003ac4
        return result;
    }
    int32_t v3 = *(int32_t *)&g5 + 1; // 0x100003948
    *(int32_t *)&g5 = v3;
    uint32_t v4 = *(int32_t *)&g4; // 0x100003958
    int64_t v5; // 0x1000038a4
    int32_t v6; // 0x1000038a4
    int64_t result2; // 0x1000038a4
    if (v3 < v4) {
        // 0x10000393c
        v5 = g3;
        v6 = v3;
        result2 = result;
    } else {
        int32_t v7 = 2 * v4; // 0x100003978
        int32_t v8 = v7 == 0 ? 2 : v7;
        *(int32_t *)&g4 = v8;
        int64_t v9 = (int64_t)_realloc((int64_t *)g3, 16 * v8); // 0x1000039cc
        g3 = v9;
        v5 = v9;
        v6 = *(int32_t *)&g5;
        result2 = v9;
    }
    uint64_t v10 = *(int64_t *)(g1 + 8 * (int64_t)v1) + 1; // 0x100003a00
    if (v6 == 0) {
        // 0x100003aa8
        *(float128_t *)v5 = (float128_t)(int128_t)v1;
        // 0x100003ac4
        return result2;
    }
    uint32_t v11 = v6;
    uint32_t v12 = v11 / 2; // 0x100003a48
    int64_t v13 = 16 * (int64_t)v12 + v5;
    uint64_t v14 = *(int64_t *)(v13 + 8); // 0x100003a54
    int64_t v15 = v11;
    while (v14 >= v10 == (v14 != v10)) {
        // 0x100003a78
        *(float128_t *)(16 * v15 + v5) = *(float128_t *)v13;
        if (v11 < 2) {
            // 0x100003aa8
            *(float128_t *)v5 = (float128_t)(int128_t)v1;
            // 0x100003ac4
            return result2;
        }
        v11 = v12;
        v12 = v11 / 2;
        v13 = 16 * (int64_t)v12 + v5;
        v14 = *(int64_t *)(v13 + 8);
        v15 = v11;
    }
    // 0x100003aa8
    *(float128_t *)(16 * v15 + v5) = (float128_t)(int128_t)v1;
    // 0x100003ac4
    return result2;
}

// Address range: 0x100003ad0 - 0x100003d3c
int64_t function_100003ad0(void) {
    int64_t v1; // 0x100003ad0
    int64_t v2 = v1; // 0x100003ae0
    uint64_t v3; // 0x100003b30
    while (true) {
        // 0x100003ae4
        if (*(int32_t *)&g5 != 0) {
            // 0x100003b44
            v3 = *(int64_t *)(8 * (int64_t)*(int32_t *)&g2 + g1);
            if (*(int64_t *)(g3 + 24) < v3) {
                // break -> 0x100003b58
                break;
            }
        }
        // 0x100003b50
        v2 = function_1000038a4();
    }
    int64_t result = v2;
    float128_t v4 = *(float128_t *)(g3 + 16); // 0x100003b68
    *(float128_t *)g3 = v4;
    int32_t v5; // 0x100003ad0
    uint32_t v6 = v5 + 1; // 0x100003b7c
    // 0x100003ad0
    int32_t v7; // 0x100003bb4
    float128_t v8; // 0x100003bbc
    while (v6 >= (int32_t)(float32_t)v4) {
        uint32_t v9 = *(int32_t *)&g5; // 0x100003bac
        v7 = v9 - 1;
        *(int32_t *)&g5 = v7;
        if (v7 != 0) {
            // 0x100003c18
            v8 = *(float128_t *)(16 * (int64_t)v9 + g3);
            goto lab_0x100003c18_2;
        }
        v2 = result;
        while (true) {
            // 0x100003ae4
            if (*(int32_t *)&g5 != 0) {
                // 0x100003b44
                v3 = *(int64_t *)(8 * (int64_t)*(int32_t *)&g2 + g1);
                if (*(int64_t *)(g3 + 24) < v3) {
                    // break -> 0x100003b58
                    break;
                }
            }
            // 0x100003b50
            v2 = function_1000038a4();
        }
        // 0x100003b58
        result = v2;
        v4 = *(float128_t *)(g3 + 16);
        *(float128_t *)g3 = v4;
        v6++;
    }
    int64_t v10 = *(int64_t *)(g1 + (int64_t)(8 * v6 - 8)); // 0x100003c00
    v7 = *(int32_t *)&g5;
    v8 = v4;
    int64_t v11; // 0x100003ad0
    int64_t v12 = *(int64_t *)(g1 + 8 * (int64_t)v6) + v11 - v10; // 0x100003c14
    goto lab_0x100003c18_2;
  lab_0x100003c18_2:;
    uint32_t v13 = v7; // 0x100003c38
    if (v13 <= 2 == (v13 != 2)) {
        // 0x100003d18
        *(float128_t *)(16 + g3) = v8;
        return result;
    }
    int64_t v14 = g3 + 8;
    int32_t v15 = 1; // 0x100003ad0
    int32_t v16 = 2;
    int32_t v17 = v16; // 0x100003c64
    uint32_t v18; // 0x100003c7c
    uint64_t v19; // 0x100003c84
    uint64_t v20; // 0x100003c94
    if (v13 > 2) {
        // 0x100003c6c
        v18 = v16 | 1;
        v19 = *(int64_t *)(16 * (int64_t)v18 + v14);
        v20 = *(int64_t *)(16 * (int64_t)v16 + v14);
        v17 = v19 < v20 ? v18 : v16;
    }
    int64_t v21 = 16 * (int64_t)v17 + g3; // 0x100003cc8
    int32_t v22 = v15; // 0x100003cdc
    while (*(int64_t *)(v21 + 8) < v12) {
        // 0x100003cec
        *(float128_t *)(16 * (int64_t)v15 + g3) = *(float128_t *)v21;
        uint32_t v23 = 2 * v17; // 0x100003c28
        uint32_t v24 = *(int32_t *)&g5; // 0x100003c38
        v15 = v17;
        v22 = v17;
        if (v23 >= v24 == (v23 != v24)) {
            // break -> 0x100003d18
            break;
        }
        v16 = v23;
        v17 = v16;
        if (v23 < v24) {
            // 0x100003c6c
            v18 = v16 | 1;
            v19 = *(int64_t *)(16 * (int64_t)v18 + v14);
            v20 = *(int64_t *)(16 * (int64_t)v16 + v14);
            v17 = v19 < v20 ? v18 : v16;
        }
        // 0x100003cb8
        v21 = 16 * (int64_t)v17 + g3;
        v22 = v15;
    }
    // 0x100003d18
    *(float128_t *)(16 * (int64_t)v22 + g3) = v8;
    return result;
}

// Address range: 0x100003d3c - 0x100003e0c
int64_t function_100003d3c(void) {
    function_100003ad0();
    int64_t v1 = g3;
    // 0x100003d3c
    while (*(int64_t *)(v1 + 8) != *(int64_t *)(v1 + 24)) {
        // 0x100003d50
        function_100003ad0();
        v1 = g3;
    }
    // 0x100003d80
    int64_t v2; // 0x100003d3c
    *(float128_t *)v2 = *(float128_t *)v1;
    uint32_t v3 = 1;
    int32_t result = v3 + 1; // 0x100003db0
    float128_t v4 = *(float128_t *)(v1 + 16); // 0x100003dc4
    *(float128_t *)(16 * (int64_t)v3 + v2) = v4;
    function_100003ad0();
    int64_t v5 = g3;
    while (*(int64_t *)(v5 + 8) == *(int64_t *)(v5 + 24)) {
        // 0x100003da4
        v3 = result;
        result = v3 + 1;
        v4 = *(float128_t *)(v5 + 16);
        *(float128_t *)(16 * (int64_t)v3 + v2) = v4;
        function_100003ad0();
        v5 = g3;
    }
    // 0x100003dfc
    return result;
}

// Address range: 0x100003e0c - 0x100003f5c
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003e20
    int64_t v2; // 0x100003e0c
    int32_t v3 = v2;
    int32_t v4 = 1; // 0x100003f1c
    int64_t v5 = function_100003d3c(); // 0x100003e50
    int32_t v6; // 0x100003e0c
    int32_t v7; // 0x100003e54
    int32_t v8; // 0x100003eb4
    if (v4 >= 2000) {
        // 0x100003e88
        v7 = v5;
        _printf("%4u:%10llu", v3, v2);
        v6 = v7;
        if (v7 != 0) {
            v8 = v6 - 1;
            _printf(" = %4u^3 + %4u^3", v3, (int32_t)v2);
            v6 = v8;
            while (v8 != 0) {
                // 0x100003ecc
                v8 = v6 - 1;
                _printf(" = %4u^3 + %4u^3", v3, (int32_t)v2);
                v6 = v8;
            }
        }
        // 0x100003f0c
        _putchar(10);
    }
    // 0x100003f18
    v4++;
    while (v4 >= 2006 != v4 != 2006) {
        // 0x100003e4c
        v5 = function_100003d3c();
        if (v4 >= 2000) {
            // 0x100003e88
            v7 = v5;
            _printf("%4u:%10llu", v3, v2);
            v6 = v7;
            if (v7 != 0) {
                v8 = v6 - 1;
                _printf(" = %4u^3 + %4u^3", v3, (int32_t)v2);
                v6 = v8;
                while (v8 != 0) {
                    // 0x100003ecc
                    v8 = v6 - 1;
                    _printf(" = %4u^3 + %4u^3", v3, (int32_t)v2);
                    v6 = v8;
                }
            }
            // 0x100003f0c
            _putchar(10);
        }
        // 0x100003f18
        v4++;
    }
    // 0x100003f28
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003f48
        ___stack_chk_fail();
    }
    // 0x100003f4c
    return 0;
}

// Address range: 0x100003f5c - 0x100003f68
int64_t function_100003f5c(void) {
    // 0x100003f5c
    return ___stack_chk_fail();
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(char * format, ...) {
    // 0x100003f68
    return _printf(format);
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(int32_t c) {
    // 0x100003f74
    return _putchar(c);
}

// Address range: 0x100003f80 - 0x100003f8c
int64_t * function_100003f80(int64_t * ptr, int32_t size) {
    // 0x100003f80
    return _realloc(ptr, size);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

