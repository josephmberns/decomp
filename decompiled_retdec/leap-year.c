//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003de4(void);
int64_t function_100003f3c(int64_t a1);
int64_t * function_100003f48(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f54(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x7ca0000076c; // 0x100003f60

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003de4 - 0x100003e34
int64_t function_100003de4(void) {
    // 0x100003de4
    int64_t v1; // 0x100003de4
    uint32_t v2 = (int32_t)v1; // 0x100003de8
    return ((v2 % 100 == 0 ? 15 : 3) & v2) == 0;
}

// Address range: 0x100003e34 - 0x100003f3c
int64_t entry_point(void) {
    // 0x100003e34
    int64_t v1; // bp-60, 0x100003e34
    _memcpy(&v1, &g1, 36);
    int32_t v2; // 0x100003ef0
    for (int32_t i = 0; i < 9; i++) {
        // 0x100003e8c
        function_100003de4();
        v2 = _printf("%u is %sa leap year.\n", (int32_t)&g1, (char *)36);
    }
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f14
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f28
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003f2c
    return 0;
}

// Address range: 0x100003f3c - 0x100003f48
int64_t function_100003f3c(int64_t a1) {
    // 0x100003f3c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f48 - 0x100003f54
int64_t * function_100003f48(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f48
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * format, ...) {
    // 0x100003f54
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

