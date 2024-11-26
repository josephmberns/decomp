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
float64_t function_100003f8c(float64_t a1, float64_t a2);
int32_t function_100003f98(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

float64_t _pow(float64_t a1, float64_t a2);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e64 - 0x100003f8c
int64_t entry_point(void) {
    int32_t v1 = 1;
    int32_t v2 = v1; // 0x100003eb4
    int32_t v3 = 0; // 0x100003eb4
    float64_t v4; // 0x100003e64
    float64_t v5 = v4; // 0x100003eb4
    uint32_t v6; // 0x100003e64
    int128_t v7; // 0x100003edc
    if (v1 >= 1) {
        v6 = v2;
        v7 = __asm_sshll(0.0f, 0);
        _pow((float64_t)(int64_t)v7, (float64_t)(int64_t)__asm_sshll(0.0f, 0));
        __asm_sshll(0.0f, 0);
        v5 = 2 * v4;
        v2 = v6 / 10;
        while (v6 >= 10) {
            // 0x100003ebc
            v6 = v2;
            v7 = __asm_sshll(0.0f, 0);
            _pow((float64_t)(int64_t)v7, (float64_t)(int64_t)__asm_sshll(0.0f, 0));
            __asm_sshll(0.0f, 0);
            v5 *= 2;
            v2 = v6 / 10;
        }
        // 0x100003ea8
        v3 = v5;
    }
    // 0x100003f30
    int64_t v8; // 0x100003e64
    if (v3 == v1) {
        // 0x100003f48
        _printf("%i\n", v8);
    }
    int32_t v9 = v1 + 1; // 0x100003f70
    float64_t v10 = v5; // 0x100003e90
    while (v1 < 0x1387 != (0x1386 - v1 & v9) < 0) {
        // 0x100003ea8
        v1 = v9;
        v2 = v1;
        float64_t v11 = v10; // 0x100003eb4
        v3 = 0;
        if (v1 >= 1) {
            v6 = v2;
            v7 = __asm_sshll(0.0f, 0);
            _pow((float64_t)(int64_t)v7, (float64_t)(int64_t)__asm_sshll(0.0f, 0));
            __asm_sshll(0.0f, 0);
            v5 = 2 * v11;
            v2 = v6 / 10;
            while (v6 >= 10) {
                // 0x100003ebc
                v6 = v2;
                v7 = __asm_sshll(0.0f, 0);
                _pow((float64_t)(int64_t)v7, (float64_t)(int64_t)__asm_sshll(0.0f, 0));
                __asm_sshll(0.0f, 0);
                v5 *= 2;
                v2 = v6 / 10;
            }
            // 0x100003ea8
            v3 = v5;
            v10 = v5;
        }
        // 0x100003f30
        if (v3 == v1) {
            // 0x100003f48
            _printf("%i\n", v8);
        }
        // 0x100003f6c
        v9 = v1 + 1;
    }
    // 0x100003f7c
    return 0;
}

// Address range: 0x100003f8c - 0x100003f98
float64_t function_100003f8c(float64_t a1, float64_t a2) {
    // 0x100003f8c
    return _pow(a1, a2);
}

// Address range: 0x100003f98 - 0x100003fa4
int32_t function_100003f98(char * format, ...) {
    // 0x100003f98
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3
