//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f8c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003f04 - 0x100003f8c
int64_t entry_point(void) {
    int32_t v1 = 1;
    int64_t v2; // 0x100003f04
    _printf("%6d %6x %6o\n", v2, (int32_t)v2, (int32_t)v2);
    int32_t v3 = v1 + 1; // 0x100003f70
    while (v1 == 32 || v1 < 32 != (31 - v1 & v3) < 0) {
        // 0x100003f34
        v1 = v3;
        _printf("%6d %6x %6o\n", v2, (int32_t)v2, (int32_t)v2);
        v3 = v1 + 1;
    }
    // 0x100003f7c
    return 0;
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 2

