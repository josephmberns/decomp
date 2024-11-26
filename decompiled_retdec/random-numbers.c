//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e18(int64_t a1);
int64_t function_100003e44(void);
int64_t function_100003eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003f60(void);
float64_t function_100003f6c(float64_t a1);
float64_t function_100003f78(float64_t a1);
int32_t function_100003f84(void);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int64_t ___stack_chk_fail(void);
float64_t _cos(float64_t a1);
float64_t _log(float64_t a1);
int32_t _rand(void);

// ------------------------ Functions -------------------------

// Address range: 0x100003e18 - 0x100003e44
int64_t function_100003e18(int64_t a1) {
    // 0x100003e18
    return _rand();
}

// Address range: 0x100003e44 - 0x100003e9c
int64_t function_100003e44(void) {
    // 0x100003e44
    int64_t v1; // 0x100003e44
    function_100003e18(v1);
    int128_t v2; // 0x100003e44
    float64_t v3 = _log((float64_t)(int64_t)v2); // 0x100003e54
    float64_t v4; // 0x100003e44
    function_100003e18((int64_t)sqrt(-2.0 * v4));
    return _cos(v3);
}

// Address range: 0x100003e9c - 0x100003eb8
int64_t entry_point(void) {
    // 0x100003e9c
    return ___chkstk_darwin();
}

// Address range: 0x100003eb8 - 0x100003f60
int64_t function_100003eb8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003eb8
    int64_t v1; // 0x100003eb8
    int64_t * v2 = (int64_t *)(v1 - 24); // 0x100003ecc
    *v2 = *(int64_t *)*(int64_t *)0x100004010;
    int64_t v3; // bp-8008, 0x100003eb8
    int64_t v4 = &v3;
    int32_t v5 = 0;
    function_100003e44();
    float64_t v6; // 0x100003eb8
    float64_t v7 = 0.5 * v6 + 1.0; // 0x100003f00
    *(float64_t *)(8 * (int64_t)v5 + v4) = v7;
    int32_t v8 = v5 + 1; // 0x100003f18
    while (v5 < 999 != (998 - v5 & v8) < 0) {
        // 0x100003ef0
        v5 = v8;
        function_100003e44();
        v7 = 0.5 * v7 + 1.0;
        *(float64_t *)(8 * (int64_t)v5 + v4) = v7;
        v8 = v5 + 1;
    }
    // 0x100003f24
    if (*(int64_t *)*(int64_t *)0x100004010 != *v2) {
        // 0x100003f44
        ___stack_chk_fail();
    }
    // 0x100003f48
    return 0;
}

// Address range: 0x100003f60 - 0x100003f6c
int64_t function_100003f60(void) {
    // 0x100003f60
    return ___stack_chk_fail();
}

// Address range: 0x100003f6c - 0x100003f78
float64_t function_100003f6c(float64_t a1) {
    // 0x100003f6c
    return _cos(a1);
}

// Address range: 0x100003f78 - 0x100003f84
float64_t function_100003f78(float64_t a1) {
    // 0x100003f78
    return _log(a1);
}

// Address range: 0x100003f84 - 0x100003f90
int32_t function_100003f84(void) {
    // 0x100003f84
    return _rand();
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8
