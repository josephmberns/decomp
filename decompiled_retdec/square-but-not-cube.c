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
float64_t function_100003f74(float64_t a1);
int32_t function_100003f80(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

float64_t _cbrt(float64_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e7c - 0x100003f74
int64_t entry_point(void) {
    // 0x100003e7c
    float64_t v1; // 0x100003e7c
    int32_t v2 = v1;
    int32_t v3 = 0;
    int32_t v4 = 1;
    _cbrt((float64_t)(int64_t)__asm_sshll(0.0f, 0));
    int32_t v5; // 0x100003e7c
    int64_t v6; // 0x100003e7c
    if (v2 * v2 * v2 == v4 * v4) {
        // 0x100003f30
        _printf("%d is square and cube\n", v6);
        v5 = v3;
    } else {
        // 0x100003f04
        _printf("%d\n", v6);
        v5 = v3 + 1;
    }
    int32_t v7 = v4 + 1; // 0x100003ea8
    while (v5 < 30 != (29 - v5 & v5) < 0) {
        // 0x100003eb0
        v3 = v5;
        v4 = v7;
        _cbrt((float64_t)(int64_t)__asm_sshll(0.0f, 0));
        if (v2 * v2 * v2 == v4 * v4) {
            // 0x100003f30
            _printf("%d is square and cube\n", v6);
            v5 = v3;
        } else {
            // 0x100003f04
            _printf("%d\n", v6);
            v5 = v3 + 1;
        }
        // 0x100003f54
        v7 = v4 + 1;
    }
    // 0x100003f64
    return 0;
}

// Address range: 0x100003f74 - 0x100003f80
float64_t function_100003f74(float64_t a1) {
    // 0x100003f74
    return _cbrt(a1);
}

// Address range: 0x100003f80 - 0x100003f8c
int32_t function_100003f80(char * format, ...) {
    // 0x100003f80
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3
