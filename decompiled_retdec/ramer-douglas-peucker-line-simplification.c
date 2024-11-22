//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000039e0(void);
int64_t function_100003a80(void);
int64_t function_100003d04(void);
int64_t function_100003e68(char * a1, char * a2, int64_t a3, char * a4);
int64_t function_100003e74(int64_t a1);
int64_t * function_100003e80(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003e8c(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x100003ef8

// ------- Dynamically Linked Functions Without Header --------

int64_t ___assert_rtn(char * a1, char * a2, int64_t a3, char * a4);
int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x1000039e0 - 0x100003a80
int64_t function_1000039e0(void) {
    // 0x1000039e0
    int64_t result; // 0x1000039e0
    return result;
}

// Address range: 0x100003a80 - 0x100003d04
int64_t function_100003a80(void) {
    // 0x100003a80
    float64_t v1; // 0x100003a80
    float64_t v2 = v1;
    int64_t v3; // 0x100003a80
    if (v3 < 2) {
        // 0x100003ac0
        ___assert_rtn("douglas_peucker", "ramer-douglas-peucker-line-simplification.c", 22, "n >= 2");
    }
    if (v2 != 0.0) {
        if (v2 > 0.0 != (v2 >= 0.0 == v2 <= 0.0)) {
            // 0x100003b04
            ___assert_rtn("douglas_peucker", "ramer-douglas-peucker-line-simplification.c", 23, "epsilon >= 0");
        }
    }
    float64_t v4 = 0.0; // 0x100003b54
    if (v3 > 2) {
        int64_t v5 = 2;
        float64_t v6 = 0.0; // 0x100003ba0
        float64_t v7 = 0.0;
        float64_t v8 = *(float64_t *)(16 + v3); // 0x100003b7c
        function_1000039e0();
        float64_t v9 = v7; // 0x100003ba4
        float64_t v10 = v6; // 0x100003ba4
        if (v8 != v6) {
            v9 = v8 > v6 == v8 >= v6 == v8 <= v6 ? v8 : v7;
            v10 = v8 > v6 == v8 >= v6 == v8 <= v6 ? v8 : v6;
        }
        float64_t v11 = v9;
        int64_t v12 = v5 + 1; // 0x100003b44
        v4 = v11;
        while (v12 != v3) {
            int64_t v13 = v5;
            v5 = v12;
            v6 = v10;
            v7 = v11;
            v8 = *(float64_t *)(16 * v13 + v3);
            function_1000039e0();
            v9 = v7;
            v10 = v6;
            if (v8 != v6) {
                v9 = v8 > v6 == v8 >= v6 == v8 <= v6 ? v8 : v7;
                v10 = v8 > v6 == v8 >= v6 == v8 <= v6 ? v8 : v6;
            }
            // 0x100003bcc
            v11 = v9;
            v12 = v5 + 1;
            v4 = v11;
        }
    }
    float64_t v14 = v4; // 0x100003bdc
    if (v14 != v2) {
        if (v14 > v2 == v14 >= v2 == v14 <= v2) {
            int64_t v15 = function_100003a80(); // 0x100003c0c
            // 0x100003cf4
            return v15 - 1 + function_100003a80();
        }
    }
    // 0x100003ca8
    if ((uint64_t)v3 >= 2) {
        // 0x100003cbc
        int64_t v16; // 0x100003a80
        *(float128_t *)v3 = *(float128_t *)&v16;
        *(float128_t *)(v3 + 16) = *(float128_t *)(16 * v3 - 16 + v3);
    }
    // 0x100003cf4
    return 2;
}

// Address range: 0x100003d04 - 0x100003dc0
int64_t function_100003d04(void) {
    // 0x100003d04
    int64_t v1; // 0x100003d04
    if (v1 == 0) {
        // 0x100003da8
        return _printf((char *)0x100003ef3);
    }
    int64_t v2 = 0; // 0x100003d9c
    if (v2 != 0) {
        // 0x100003d4c
        _printf(" ");
    }
    // 0x100003d5c
    int128_t v3; // 0x100003d04
    _printf("(%g, %g)", (float64_t)(int64_t)v3, (float64_t)(int64_t)v3);
    v2++;
    while (v2 != v1) {
        // 0x100003d38
        if (v2 != 0) {
            // 0x100003d4c
            _printf(" ");
        }
        // 0x100003d5c
        _printf("(%g, %g)", (float64_t)(int64_t)v3, (float64_t)(int64_t)v3);
        v2++;
    }
    // 0x100003da8
    return _printf((char *)0x100003ef3);
}

// Address range: 0x100003dc0 - 0x100003e68
int64_t entry_point(void) {
    // 0x100003dc0
    int64_t v1; // bp-200, 0x100003dc0
    _memcpy(&v1, &g1, 160);
    function_100003a80();
    int64_t v2 = function_100003d04(); // 0x100003e2c
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003e3c
    if (v3 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003e50
        ___stack_chk_fail(v2);
    }
    // 0x100003e54
    return 0;
}

// Address range: 0x100003e68 - 0x100003e74
int64_t function_100003e68(char * a1, char * a2, int64_t a3, char * a4) {
    // 0x100003e68
    return ___assert_rtn(a1, a2, a3, a4);
}

// Address range: 0x100003e74 - 0x100003e80
int64_t function_100003e74(int64_t a1) {
    // 0x100003e74
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003e80 - 0x100003e8c
int64_t * function_100003e80(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003e80
    return _memcpy(dest, src, n);
}

// Address range: 0x100003e8c - 0x100003e98
int32_t function_100003e8c(char * format, ...) {
    // 0x100003e8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

