//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d5c(void);
int32_t function_100003f7c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d5c - 0x100003e6c
int64_t function_100003d5c(void) {
    // 0x100003d5c
    int64_t result; // 0x100003d5c
    int32_t v1 = result; // 0x100003d60
    int32_t v2 = result; // 0x100003d64
    int32_t * v3 = (int32_t *)result; // 0x100003d68
    int32_t * v4 = (int32_t *)result; // 0x100003d6c
    int32_t v5 = 1; // 0x100003d8c
    int32_t v6 = v1; // 0x100003d8c
    int32_t v7 = 0; // 0x100003d8c
    int32_t v8; // 0x100003d5c
    if (v1 == 0) {
        // 0x100003de0
        *v3 = 0;
        *v4 = 1;
        v8 = 1;
    } else {
        v7 = v6 % v2 + v7 * v2;
        v5 *= v2;
        v6 /= v2;
        while (v6 != 0) {
            // 0x100003d94
            v7 = v6 % v2 + v7 * v2;
            v5 *= v2;
            v6 /= v2;
        }
        // 0x100003de0
        *v3 = v7;
        *v4 = v5;
        v8 = v5;
        if (v7 != 0) {
            int32_t v9 = v5 % v7;
            int32_t v10 = v7; // 0x100003e08
            v8 = v7;
            while (v9 != 0) {
                int32_t v11 = v9;
                v9 = v10 % v11;
                v10 = v11;
                v8 = v11;
            }
        }
    }
    // 0x100003e3c
    int64_t v12; // 0x100003d5c
    *v3 = *(int32_t *)&v12 / v8;
    int64_t v13; // 0x100003d5c
    *v4 = *(int32_t *)&v13 / v8;
    return result;
}

// Address range: 0x100003e6c - 0x100003f7c
int64_t entry_point(void) {
    int64_t v1 = 2;
    int64_t v2; // 0x100003e6c
    _printf("base %d:", v2);
    int32_t v3; // bp-28, 0x100003e6c
    for (int32_t i = 0; i < 10; i++) {
        // 0x100003ed4
        function_100003d5c();
        if (v3 == 0) {
            // 0x100003f28
            _printf("  0");
        } else {
            // 0x100003efc
            _printf("  %d/%d", v1, (int64_t)&v3);
        }
    }
    // 0x100003f4c
    _printf((char *)0x100003f9d);
    int64_t v4 = v1 + 1;
    v2 = v1;
    while (v4 != 6) {
        // 0x100003e9c
        v1 = v4;
        _printf("base %d:", v2);
        for (int32_t i = 0; i < 10; i++) {
            // 0x100003ed4
            function_100003d5c();
            if (v3 == 0) {
                // 0x100003f28
                _printf("  0");
            } else {
                // 0x100003efc
                _printf("  %d/%d", v1, (int64_t)&v3);
            }
        }
        // 0x100003f4c
        _printf((char *)0x100003f9d);
        v4 = v1 + 1;
        v2 = v1;
    }
    // 0x100003f6c
    return 0;
}

// Address range: 0x100003f7c - 0x100003f88
int32_t function_100003f7c(char * format, ...) {
    // 0x100003f7c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3
