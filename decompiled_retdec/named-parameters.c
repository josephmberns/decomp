//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c18(void);
int64_t function_100003cb0(int64_t a1, int32_t a2, int32_t a3);
int64_t function_100003efc(void);
int64_t function_100003f70(int64_t a1);
int32_t function_100003f7c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c18 - 0x100003cb0
int64_t function_100003c18(void) {
    // 0x100003c18
    int64_t v1; // 0x100003c18
    int64_t v2 = _printf("x: %d, y: %d, z: %d\n", v1, v1, v1); // 0x100003c7c
    int64_t v3 = *(int64_t *)0x100004008; // 0x100003c88
    int64_t result = v2; // 0x100003c98
    if (*(int64_t *)v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003ca0
        result = ___stack_chk_fail(v2);
    }
    // 0x100003ca4
    return result;
}

// Address range: 0x100003cb0 - 0x100003d08
int64_t function_100003cb0(int64_t a1, int32_t a2, int32_t a3) {
    // 0x100003cb0
    int64_t v1; // 0x100003cb0
    return _printf("x: %d, y: %d, z: %d\n", (int64_t)a2, (int64_t)a3, v1);
}

// Address range: 0x100003d08 - 0x100003efc
int64_t entry_point(void) {
    // 0x100003d08
    int64_t v1; // bp-120, 0x100003d08
    int64_t v2 = &v1; // 0x100003d1c
    function_100003c18();
    *(int64_t *)(v2 + 48) = 0;
    function_100003c18();
    *(int64_t *)(v2 + 32) = 42;
    function_100003c18();
    *(int64_t *)(v2 + 16) = 142;
    function_100003c18();
    v1 = 142;
    function_100003c18();
    function_100003efc();
    int64_t v3 = function_100003efc(); // 0x100003ec0
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ed0
    if (v4 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003ee4
        ___stack_chk_fail(v3);
    }
    // 0x100003ee8
    return 0;
}

// Address range: 0x100003efc - 0x100003f70
int64_t function_100003efc(void) {
    // 0x100003efc
    int64_t v1; // 0x100003efc
    int32_t v2; // 0x100003efc
    int64_t v3 = function_100003cb0(v1 & 0xffffffff, v2, (int32_t)v1); // 0x100003f3c
    int64_t v4 = *(int64_t *)0x100004008; // 0x100003f48
    int64_t result = v3; // 0x100003f58
    if (*(int64_t *)v4 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f60
        result = ___stack_chk_fail(v3);
    }
    // 0x100003f64
    return result;
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

// Detected functions: 6
