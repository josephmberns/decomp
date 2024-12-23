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
int64_t function_100003d54(void);
int64_t function_100003e8c(void);
float64_t function_100003f68(float64_t a1, float64_t a2);
float64_t function_100003f74(float64_t a1);
float64_t function_100003f80(float64_t a1, float64_t a2);
int32_t function_100003f8c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

float64_t _fmod(float64_t a1, float64_t a2);
float64_t _log(float64_t a1);
float64_t _pow(float64_t a1, float64_t a2);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d54 - 0x100003e8c
int64_t function_100003d54(void) {
    // 0x100003d54
    int128_t v1; // 0x100003d54
    int128_t v2 = v1;
    int64_t v3; // 0x100003d54
    int32_t v4 = v3; // 0x100003d60
    _log(_log((float64_t)(int64_t)v1));
    int32_t v5 = v4 - 10; // 0x100003da8
    int32_t v6 = v4; // 0x100003db0
    if (v5 != 0 && v5 < 0 == (9 - v4 & v4) < 0) {
        v6 /= 10;
        while (v6 != 10 && v6 < 10 == (9 - v6 & v6) < 0) {
            // 0x100003db8
            v6 /= 10;
        }
    }
    int32_t v7 = v3; // 0x100003d64
    if (v7 < 1) {
        // 0x100003e7c
        return 0;
    }
    float64_t v8 = 0.2; // 0x100003e44
    int32_t result = 0; // 0x100003df4
    for (int32_t i = v7; i >= 1; i += (int32_t)(v4 == (int32_t)v8)) {
        // 0x100003df0
        result++;
        __asm_sshll(0.0f, 0);
        int128_t v9 = __asm_sshll(0.0f, 0); // 0x100003e18
        _pow(_fmod((float64_t)(int64_t)v9, (float64_t)(int64_t)v2), (float64_t)(int64_t)v2);
        v8 *= 10.0;
    }
    // 0x100003e7c
    return result;
}

// Address range: 0x100003e8c - 0x100003ef8
int64_t function_100003e8c(void) {
    // 0x100003e8c
    function_100003d54();
    int64_t v1; // 0x100003e8c
    return _printf("p(%d, %d) = %d\n", v1 & 0xffffffff, v1, v1);
}

// Address range: 0x100003ef8 - 0x100003f68
int64_t entry_point(void) {
    // 0x100003ef8
    function_100003e8c();
    function_100003e8c();
    function_100003e8c();
    function_100003e8c();
    function_100003e8c();
    return 0;
}

// Address range: 0x100003f68 - 0x100003f74
float64_t function_100003f68(float64_t a1, float64_t a2) {
    // 0x100003f68
    return _fmod(a1, a2);
}

// Address range: 0x100003f74 - 0x100003f80
float64_t function_100003f74(float64_t a1) {
    // 0x100003f74
    return _log(a1);
}

// Address range: 0x100003f80 - 0x100003f8c
float64_t function_100003f80(float64_t a1, float64_t a2) {
    // 0x100003f80
    return _pow(a1, a2);
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

