//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003cd8(void);
int64_t function_100003d6c(void);
int64_t function_100003e90(void);
int32_t function_100003f8c(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x100000cfeedfacf; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003cd8 - 0x100003d6c
int64_t function_100003cd8(void) {
    for (int64_t i = 0; i < 5; i++) {
        int64_t v1 = 81 * i + (int64_t)&g1; // 0x100003d28
        for (int64_t j = 0; j < 81; j++) {
            // 0x100003d14
            *(char *)(v1 + j) = 42;
        }
    }
    // 0x100003d64
    int64_t result; // 0x100003cd8
    return result;
}

// Address range: 0x100003d6c - 0x100003e90
int64_t function_100003d6c(void) {
    // 0x100003d6c
    int64_t v1; // 0x100003d6c
    int32_t v2 = v1; // 0x100003d7c
    if (v2 < 3) {
        // 0x100003e84
        int64_t result; // 0x100003d6c
        return result;
    }
    int32_t v3 = v1; // 0x100003d80
    if (v3 < 5 != (4 - v3 & v3) < 0) {
        int32_t v4 = v1; // 0x100003d78
        int32_t v5 = v2 / 3; // 0x100003d8c
        int32_t v6 = v5 + v4; // 0x100003dd4
        int32_t v7 = 2 * v5 + v4; // 0x100003dec
        int32_t v8 = v6 - v7; // 0x100003df0
        int32_t v9 = v3;
        int64_t v10; // 0x100003e14
        int32_t v11; // 0x100003e30
        if (v8 < 0 != ((v8 ^ v6) & (v7 ^ v6)) < 0) {
            // 0x100003e00
            v10 = 81 * (int64_t)v9 + (int64_t)&g1;
            v11 = v6;
            *(char *)(v10 + (int64_t)v11) = 32;
            v11++;
            while (v11 - v7 < 0 != ((v11 - v7 ^ v11) & (v11 ^ v7)) < 0) {
                // 0x100003e00
                *(char *)(v10 + (int64_t)v11) = 32;
                v11++;
            }
        }
        int32_t v12 = v9 + 1; // 0x100003e44
        while (v9 < 4 != (3 - v9 & v12) < 0) {
            // 0x100003dcc
            v9 = v12;
            if (v8 < 0 != ((v8 ^ v6) & (v7 ^ v6)) < 0) {
                // 0x100003e00
                v10 = 81 * (int64_t)v9 + (int64_t)&g1;
                v11 = v6;
                *(char *)(v10 + (int64_t)v11) = 32;
                v11++;
                while (v11 - v7 < 0 != ((v11 - v7 ^ v11) & (v11 ^ v7)) < 0) {
                    // 0x100003e00
                    *(char *)(v10 + (int64_t)v11) = 32;
                    v11++;
                }
            }
            // 0x100003e40
            v12 = v9 + 1;
        }
    }
    // 0x100003e50
    function_100003d6c();
    // 0x100003e84
    return function_100003d6c();
}

// Address range: 0x100003e90 - 0x100003f4c
int64_t function_100003e90(void) {
    int32_t result; // 0x100003f28
    for (int32_t i = 0; i < 5; i++) {
        for (int32_t j = 0; j < 81; j++) {
            // 0x100003ed4
            int64_t v1; // 0x100003e90
            _printf("%c", (char)v1);
        }
        // 0x100003f20
        result = _printf((char *)0x100003f9b);
    }
    // 0x100003f40
    return result;
}

// Address range: 0x100003f4c - 0x100003f8c
int64_t entry_point(void) {
    // 0x100003f4c
    function_100003cd8();
    function_100003d6c();
    function_100003e90();
    return 0;
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5
