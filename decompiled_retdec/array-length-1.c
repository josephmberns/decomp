//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003f7c(int64_t a1);
int32_t function_100003f88(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ef4 - 0x100003f7c
int64_t entry_point(void) {
    // 0x100003ef4
    int64_t v1; // 0x100003ef4
    int32_t v2 = _printf("%d\n", v1); // 0x100003f44
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f54
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f68
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003f6c
    return 0;
}

// Address range: 0x100003f7c - 0x100003f88
int64_t function_100003f7c(int64_t a1) {
    // 0x100003f7c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f88 - 0x100003f94
int32_t function_100003f88(char * format, ...) {
    // 0x100003f88
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3
