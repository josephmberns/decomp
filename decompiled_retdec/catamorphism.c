//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d8c(int64_t a1);
int64_t function_100003e14(void);
int64_t function_100003e34(void);
int64_t function_100003e54(void);
int64_t function_100003f70(int64_t a1);
int32_t function_100003f7c(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d8c - 0x100003e14
int64_t function_100003d8c(int64_t a1) {
    // 0x100003d8c
    int64_t v1; // 0x100003d8c
    return v1 & 0xffffffff;
}

// Address range: 0x100003e14 - 0x100003e34
int64_t function_100003e14(void) {
    // 0x100003e14
    int64_t v1; // 0x100003e14
    return 2 * v1 & 0xffffffff;
}

// Address range: 0x100003e34 - 0x100003e54
int64_t function_100003e34(void) {
    // 0x100003e34
    return 0;
}

// Address range: 0x100003e54 - 0x100003e74
int64_t function_100003e54(void) {
    // 0x100003e54
    int64_t v1; // 0x100003e54
    return v1 * v1 & 0xffffffff;
}

// Address range: 0x100003e74 - 0x100003f70
int64_t entry_point(void) {
    // 0x100003e74
    function_100003d8c(5);
    _printf("%d\n", 5);
    function_100003d8c((int64_t)&g1);
    _printf("%d\n", 5);
    function_100003d8c((int64_t)&g1);
    int32_t v1 = _printf("%d\n", 5); // 0x100003f38
    int64_t v2 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f48
    if (v2 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f5c
        ___stack_chk_fail((int64_t)v1);
    }
    // 0x100003f60
    return 0;
}

// Address range: 0x100003f70 - 0x100003f7c
int64_t function_100003f70(int64_t a1) {
    // 0x100003f70
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f7c - 0x100003f88
int32_t function_100003f7c(char * format, ...) {
    // 0x100003f7c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7
