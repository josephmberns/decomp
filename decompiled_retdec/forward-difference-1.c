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
int64_t function_100003ca4(void);
int64_t function_100003efc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003f08(int64_t a1);
int64_t * function_100003f14(int32_t size);
int64_t * function_100003f20(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f2c(char * format, ...);
int32_t function_100003f38(int32_t c);
int64_t * function_100003f44(int64_t * ptr, int32_t size);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x4056800000000000; // 0x100003f50

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memcpy_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t ___stack_chk_fail(int64_t a1);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int64_t * _realloc(int64_t * a1, int32_t a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003ca4 - 0x100003e14
int64_t function_100003ca4(void) {
    // 0x100003ca4
    int64_t v1; // 0x100003ca4
    int32_t v2 = v1; // 0x100003cb4
    uint32_t v3 = (int32_t)v1; // 0x100003cb8
    if (v2 <= v3) {
        // 0x100003e04
        return 0;
    }
    int64_t * v4 = _malloc(8 * v2); // 0x100003cec
    int64_t result = (int64_t)v4; // 0x100003cec
    int32_t v5 = v2; // 0x100003d00
    int32_t v6 = 0; // 0x100003d00
    if (v3 == 0) {
        // 0x100003d08
        ___memcpy_chk(result, v1, 8 * v1 & 0x7fffffff8, -1);
        // 0x100003e04
        return result;
    }
    v5--;
    int64_t v7; // 0x100003ca4
    int64_t v8; // 0x100003d88
    float64_t v9; // 0x100003d8c
    if (v5 != 0) {
        // 0x100003d80
        v7 = 0;
        v8 = 8 * v7;
        int64_t v10; // 0x100003ca4
        v9 = *(float64_t *)((v8 + 8 & 0xfffffff8) + v10);
        *(float64_t *)(v8 + result) = v9 - *(float64_t *)(v8 + v10);
        v7++;
        while (v7 != (int64_t)v5) {
            // 0x100003d80
            v8 = 8 * v7;
            v9 = *(float64_t *)((v8 + 8 & 0xfffffff8) + v10);
            *(float64_t *)(v8 + result) = v9 - *(float64_t *)(v8 + v10);
            v7++;
        }
    }
    // 0x100003dc4
    v6++;
    while (v6 != v3) {
        // 0x100003d54
        v5--;
        if (v5 != 0) {
            // 0x100003d80
            v7 = 0;
            v8 = 8 * v7;
            v9 = *(float64_t *)((v8 + 8 & 0xfffffff8) + result);
            *(float64_t *)(v8 + result) = v9 - *(float64_t *)(v8 + result);
            v7++;
            while (v7 != (int64_t)v5) {
                // 0x100003d80
                v8 = 8 * v7;
                v9 = *(float64_t *)((v8 + 8 & 0xfffffff8) + result);
                *(float64_t *)(v8 + result) = v9 - *(float64_t *)(v8 + result);
                v7++;
            }
        }
        // 0x100003dc4
        v6++;
    }
    // 0x100003e04
    return (int64_t)_realloc(v4, 8 * (v2 - v3));
}

// Address range: 0x100003e14 - 0x100003efc
int64_t entry_point(void) {
    // 0x100003e14
    int64_t v1; // bp-104, 0x100003e14
    _memcpy(&v1, &g1, 80);
    function_100003ca4();
    for (int32_t i = 0; i < 9; i++) {
        // 0x100003e8c
        int128_t v2; // 0x100003e14
        _printf("%g ", (float64_t)(int64_t)v2);
    }
    int32_t v3 = _putchar(10); // 0x100003ec4
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003ed4
    if (v4 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003ee8
        ___stack_chk_fail((int64_t)v3);
    }
    // 0x100003eec
    return 0;
}

// Address range: 0x100003efc - 0x100003f08
int64_t function_100003efc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003efc
    return ___memcpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f08 - 0x100003f14
int64_t function_100003f08(int64_t a1) {
    // 0x100003f08
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f14 - 0x100003f20
int64_t * function_100003f14(int32_t size) {
    // 0x100003f14
    return _malloc(size);
}

// Address range: 0x100003f20 - 0x100003f2c
int64_t * function_100003f20(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f20
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f2c - 0x100003f38
int32_t function_100003f2c(char * format, ...) {
    // 0x100003f2c
    return _printf(format);
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(int32_t c) {
    // 0x100003f38
    return _putchar(c);
}

// Address range: 0x100003f44 - 0x100003f50
int64_t * function_100003f44(int64_t * ptr, int32_t size) {
    // 0x100003f44
    return _realloc(ptr, size);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9

