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
int64_t function_100003e08(void);
int64_t function_100003f74(int64_t a1);
int64_t * function_100003f80(int64_t * s, int32_t c, int32_t n);
int32_t function_100003f8c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e08 - 0x100003e80
int64_t function_100003e08(void) {
    // 0x100003e08
    int64_t result; // 0x100003e08
    int32_t v1 = result; // 0x100003e10
    int32_t v2 = 0; // 0x100003e20
    while (v2 - v1 < 0 != ((v2 - v1 ^ v2) & (v2 ^ v1)) < 0) {
        // 0x100003e24
        v2++;
    }
    // 0x100003e74
    return result;
}

// Address range: 0x100003e80 - 0x100003f74
int64_t entry_point(void) {
    // 0x100003e80
    int64_t v1; // bp-72, 0x100003e80
    _memset(&v1, 0, 48);
    v1 = 0x4008000000000000;
    function_100003e08();
    int128_t v2; // 0x100003e80
    _printf("%lf\n", (float64_t)(int64_t)v2);
    function_100003e08();
    _printf("%lf\n", (float64_t)(int64_t)v2);
    function_100003e08();
    int32_t v3 = _printf("%lf\n", (float64_t)(int64_t)v2); // 0x100003f3c
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f4c
    if (v4 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f60
        ___stack_chk_fail((int64_t)v3);
    }
    // 0x100003f64
    return 0;
}

// Address range: 0x100003f74 - 0x100003f80
int64_t function_100003f74(int64_t a1) {
    // 0x100003f74
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f80 - 0x100003f8c
int64_t * function_100003f80(int64_t * s, int32_t c, int32_t n) {
    // 0x100003f80
    return _memset(s, c, n);
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

