//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000039f8(void);
int64_t function_100003a54(void);
int64_t function_100003b54(float128_t a1, int64_t a2, float128_t a3, int64_t a4);
int64_t function_100003bb8(void);
int64_t function_100003c1c(void);
int64_t function_100003c70(void);
int64_t function_100003cc4(void);
int64_t function_100003d44(void);
int64_t function_100003d68(void);
void function_100003f58(void);
int32_t function_100003f64(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

void _abort(void);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x1000039f8 - 0x100003a54
int64_t function_1000039f8(void) {
    // 0x1000039f8
    int64_t v1; // 0x1000039f8
    if (v1 == 0) {
        // 0x100003a48
        int64_t result; // 0x1000039f8
        return result;
    }
    int64_t v2; // 0x1000039f8
    int64_t result2 = v2;
    int64_t v3; // 0x1000039f8
    int64_t v4 = v3 % result2;
    v3 = result2;
    while (v4 != 0) {
        // 0x100003a1c
        result2 = v4;
        v4 = v3 % result2;
        v3 = result2;
    }
    // 0x100003a48
    return result2;
}

// Address range: 0x100003a54 - 0x100003b54
int64_t function_100003a54(void) {
    // 0x100003a54
    int64_t v1; // 0x100003a54
    if (v1 == 0) {
        // 0x100003a7c
        _printf("divide by zero: %lld/%lld\n", 0, v1);
        _abort();
    }
    int64_t v2 = function_1000039f8(); // 0x100003aa8
    if ((int32_t)v2 == 0) {
        // 0x100003afc
        return 0;
    }
    int64_t v3 = 0x100000000 * v2 >> 32; // 0x100003ac8
    int64_t v4 = v1 / v3; // 0x100003ad0
    return v1 / v3 < 0 ? -v4 : v4;
}

// Address range: 0x100003b54 - 0x100003bb8
int64_t function_100003b54(float128_t a1, int64_t a2, float128_t a3, int64_t a4) {
    // 0x100003b54
    return function_100003a54();
}

// Address range: 0x100003bb8 - 0x100003c1c
int64_t function_100003bb8(void) {
    // 0x100003bb8
    return function_100003a54();
}

// Address range: 0x100003c1c - 0x100003c70
int64_t function_100003c1c(void) {
    // 0x100003c1c
    return function_100003a54();
}

// Address range: 0x100003c70 - 0x100003cc4
int64_t function_100003c70(void) {
    // 0x100003c70
    return function_100003a54();
}

// Address range: 0x100003cc4 - 0x100003d44
int64_t function_100003cc4(void) {
    // 0x100003cc4
    int64_t v1; // 0x100003cc4
    int64_t v2 = v1 * v1; // 0x100003ce0
    int32_t v3 = v2; // 0x100003ce4
    int64_t v4 = v1 * v1; // 0x100003cf0
    int32_t v5 = v3 - (int32_t)v4; // 0x100003d00
    int64_t result = v5 < 0 == ((v5 ^ v3) & (int32_t)(v2 ^ v4)) < 0 ? (int64_t)(v5 != 0) : 0xffffffff;
    return result;
}

// Address range: 0x100003d44 - 0x100003d68
int64_t function_100003d44(void) {
    // 0x100003d44
    return 1;
}

// Address range: 0x100003d68 - 0x100003d90
int64_t function_100003d68(void) {
    // 0x100003d68
    int64_t result; // 0x100003d68
    return result;
}

// Address range: 0x100003d90 - 0x100003f58
int64_t entry_point(void) {
    int32_t v1 = 2;
    int64_t v2 = function_100003a54(); // 0x100003dc8
    int32_t v3 = 4 - v1; // 0x100003df8
    float128_t v4; // 0x100003d90
    float128_t v5; // 0x100003d90
    int64_t v6; // 0x100003e90
    int32_t v7; // 0x100003ed0
    int32_t v8; // 0x100003df0
    int64_t v9; // 0x100003d90
    int64_t v10; // 0x100003e60
    if (v3 < 0 != (v3 & v1) < 0) {
        // 0x100003e08
        v7 = 2;
        v4 = (int128_t)v2;
        v5 = v4;
        if (v1 % v7 == 0) {
            // 0x100003e30
            v10 = function_100003b54(v4, v9, (float128_t)(int128_t)function_100003a54(), v9);
            v6 = function_100003a54();
            v5 = (int128_t)function_100003b54((float128_t)(int128_t)v10, v9, (float128_t)(int128_t)v6, v9);
        }
        // 0x100003ecc
        v7++;
        v8 = v7 * v7;
        while (v8 - v1 < 0 != ((v8 - v1 ^ v8) & (v8 ^ v1)) < 0) {
            // 0x100003e08
            v4 = v5;
            v5 = v4;
            if (v1 % v7 == 0) {
                // 0x100003e30
                v10 = function_100003b54(v4, v9, (float128_t)(int128_t)function_100003a54(), v9);
                v6 = function_100003a54();
                v5 = (int128_t)function_100003b54((float128_t)(int128_t)v10, v9, (float128_t)(int128_t)v6, v9);
            }
            // 0x100003ecc
            v7++;
            v8 = v7 * v7;
        }
    }
    // 0x100003edc
    function_100003a54();
    if ((int32_t)function_100003cc4() == 0) {
        // 0x100003f14
        _printf("%d\n", v9);
    }
    int32_t v11 = v1 + 1; // 0x100003f3c
    while (v1 < 0x7ffff != (0x7fffe - v1 & v11) < 0) {
        // 0x100003dc0
        v1 = v11;
        v2 = function_100003a54();
        v3 = 4 - v1;
        if (v3 < 0 != (v3 & v1) < 0) {
            // 0x100003e08
            v7 = 2;
            v4 = (int128_t)v2;
            v5 = v4;
            if (v1 % v7 == 0) {
                // 0x100003e30
                v10 = function_100003b54(v4, v9, (float128_t)(int128_t)function_100003a54(), v9);
                v6 = function_100003a54();
                v5 = (int128_t)function_100003b54((float128_t)(int128_t)v10, v9, (float128_t)(int128_t)v6, v9);
            }
            // 0x100003ecc
            v7++;
            v8 = v7 * v7;
            while (v8 - v1 < 0 != ((v8 - v1 ^ v8) & (v8 ^ v1)) < 0) {
                // 0x100003e08
                v4 = v5;
                v5 = v4;
                if (v1 % v7 == 0) {
                    // 0x100003e30
                    v10 = function_100003b54(v4, v9, (float128_t)(int128_t)function_100003a54(), v9);
                    v6 = function_100003a54();
                    v5 = (int128_t)function_100003b54((float128_t)(int128_t)v10, v9, (float128_t)(int128_t)v6, v9);
                }
                // 0x100003ecc
                v7++;
                v8 = v7 * v7;
            }
        }
        // 0x100003edc
        function_100003a54();
        if ((int32_t)function_100003cc4() == 0) {
            // 0x100003f14
            _printf("%d\n", v9);
        }
        // 0x100003f38
        v11 = v1 + 1;
    }
    // 0x100003f48
    return 0;
}

// Address range: 0x100003f58 - 0x100003f64
void function_100003f58(void) {
    // 0x100003f58
    _abort();
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * format, ...) {
    // 0x100003f64
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12

