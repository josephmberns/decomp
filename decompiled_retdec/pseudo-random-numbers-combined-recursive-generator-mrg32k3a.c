//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b48(void);
int64_t function_100003bd4(void);
int64_t function_100003c1c(void);
int64_t function_100003d50(int64_t a1);
int64_t function_100003f38(void);
int32_t function_100003f44(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x100008000
int64_t g2 = 0; // 0x100008008
int64_t g3 = 0; // 0x100008010
int64_t g4 = 0; // 0x100008018
int64_t g5 = 0; // 0x100008020
int64_t g6 = 0; // 0x100008028

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003b48 - 0x100003bd4
int64_t function_100003b48(void) {
    // 0x100003b48
    int64_t v1; // 0x100003b48
    int64_t result = v1 % v1;
    if (result >= 0) {
        // 0x100003bc8
        return result;
    }
    int64_t result2; // 0x100003b48
    if (v1 < 0) {
        // 0x100003b94
        result2 = result - v1;
    } else {
        // 0x100003ba8
        result2 = result + v1;
    }
    // 0x100003bc8
    return result2;
}

// Address range: 0x100003bd4 - 0x100003c1c
int64_t function_100003bd4(void) {
    // 0x100003bd4
    g2 = 0;
    g3 = 0;
    g5 = 0;
    g6 = 0;
    int64_t result; // 0x100003bd4
    return result;
}

// Address range: 0x100003c1c - 0x100003d50
int64_t function_100003c1c(void) {
    int64_t v1 = function_100003b48(); // 0x100003c80
    int64_t v2 = function_100003b48(); // 0x100003cdc
    int64_t v3 = function_100003b48(); // 0x100003cf4
    g3 = g2;
    g2 = g1;
    g1 = v1;
    g6 = g5;
    g5 = g4;
    g4 = v2;
    return v3 + 1;
}

// Address range: 0x100003d50 - 0x100003d74
int64_t function_100003d50(int64_t a1) {
    // 0x100003d50
    return function_100003c1c();
}

// Address range: 0x100003d74 - 0x100003f38
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003d88
    int64_t v2 = 0; // bp-48, 0x100003d94
    function_100003bd4();
    function_100003c1c();
    int64_t v3; // 0x100003d74
    _printf("%lld\n", v3);
    function_100003c1c();
    _printf("%lld\n", v3);
    function_100003c1c();
    _printf("%lld\n", v3);
    function_100003c1c();
    _printf("%lld\n", v3);
    function_100003c1c();
    _printf("%lld\n", v3);
    _printf("\n");
    function_100003bd4();
    int32_t v4 = 0;
    function_100003d50((int64_t)v4);
    float64_t v5; // 0x100003d74
    float64_t v6 = 5.0 * v5; // 0x100003e6c
    int32_t * v7 = (int32_t *)(4 * __asm_fcvtms(v6) + (int64_t)&v2); // 0x100003e84
    *v7 = *v7 + 1;
    int32_t v8 = v4 + 1; // 0x100003e98
    int32_t v9 = 0; // 0x100003e5c
    while (v4 < 0x1869f != (0x1869e - v4 & v8) < 0) {
        // 0x100003e64
        v4 = v8;
        function_100003d50((int64_t)v4);
        v6 *= 5.0;
        v7 = (int32_t *)(4 * __asm_fcvtms(v6) + (int64_t)&v2);
        *v7 = *v7 + 1;
        v8 = v4 + 1;
        v9 = 0;
    }
    _printf("%d: %d\n", v3, v3);
    int32_t v10 = v9 + 1; // 0x100003ef8
    v9 = v10;
    while (v10 != 5) {
        // 0x100003ec0
        _printf("%d: %d\n", v3, v3);
        v10 = v9 + 1;
        v9 = v10;
    }
    // 0x100003f04
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003f24
        ___stack_chk_fail();
    }
    // 0x100003f28
    return 0;
}

// Address range: 0x100003f38 - 0x100003f44
int64_t function_100003f38(void) {
    // 0x100003f38
    return ___stack_chk_fail();
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(char * format, ...) {
    // 0x100003f44
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

