//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003f7c(void);
int32_t function_100003f88(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e5c - 0x100003f7c
int64_t entry_point(void) {
    char * v1 = "%d\n"; // bp-56, 0x100003e84
    int64_t v2 = (int64_t)&v1; // 0x100003f18
    int32_t v3 = 1;
    int64_t v4 = *(int64_t *)(8 * (2 * (int64_t)(v3 % 5 == 0) | (int64_t)(v3 % 3 == 0)) + v2); // 0x100003f1c
    _printf((char *)v4);
    int32_t v5 = v3 + 1; // 0x100003f3c
    while (v3 == 99 || v3 < 99 != (98 - v3 & v5) < 0) {
        // 0x100003ecc
        v3 = v5;
        v4 = *(int64_t *)(8 * (2 * (int64_t)(v3 % 5 == 0) | (int64_t)(v3 % 3 == 0)) + v2);
        _printf((char *)v4);
        v5 = v3 + 1;
    }
    int64_t v6 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f54
    if (v6 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f68
        ___stack_chk_fail();
    }
    // 0x100003f6c
    return 0;
}

// Address range: 0x100003f7c - 0x100003f88
int64_t function_100003f7c(void) {
    // 0x100003f7c
    return ___stack_chk_fail();
}

// Address range: 0x100003f88 - 0x100003f94
int32_t function_100003f88(char * format, ...) {
    // 0x100003f88
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3
