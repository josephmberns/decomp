//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003cfc(void);
int64_t function_100003d90(void);
int64_t function_100003e34(void);
int64_t function_100003f5c(int64_t a1);
int32_t function_100003f68(char * format, ...);
int32_t function_100003f74(void);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
int32_t _rand(void);

// ------------------------ Functions -------------------------

// Address range: 0x100003cfc - 0x100003d90
int64_t function_100003cfc(void) {
    // 0x100003cfc
    int64_t v1; // 0x100003cfc
    int32_t v2 = v1;
    int32_t v3 = v2 - 1; // 0x100003d10
    int64_t result = 1; // 0x100003d20
    while (v2 < 2 == (v3 & 1 - v2) < 0) {
        int32_t v4 = *(int32_t *)(4 * (int64_t)v3 + v1); // 0x100003d30
        int32_t v5 = *(int32_t *)(v1 + (int64_t)(4 * v3 - 4)); // 0x100003d40
        int32_t v6 = v4 - v5; // 0x100003d44
        result = 0;
        if (v6 < 0 != ((v6 ^ v4) & (v5 ^ v4)) < 0) {
            // break -> 0x100003d80
            break;
        }
        v2 = v3;
        v3 = v2 - 1;
        result = 1;
    }
    // 0x100003d80
    return result;
}

// Address range: 0x100003d90 - 0x100003e34
int64_t function_100003d90(void) {
    // 0x100003d90
    int64_t v1; // 0x100003d90
    int32_t v2 = v1; // 0x100003da0
    int32_t v3 = -v2; // 0x100003db4
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003e28
        int64_t result; // 0x100003d90
        return result;
    }
    int32_t v4 = 0; // 0x100003dbc
    int32_t * v5 = (int32_t *)(4 * (int64_t)v4 + v1); // 0x100003dcc
    int32_t result2 = _rand(); // 0x100003dd4
    int32_t * v6 = (int32_t *)(4 * (int64_t)(result2 % v2) + v1); // 0x100003df4
    *v5 = *v6;
    *v6 = *v5;
    v4++;
    while (v4 - v2 < 0 != ((v4 - v2 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003dc4
        v5 = (int32_t *)(4 * (int64_t)v4 + v1);
        result2 = _rand();
        v6 = (int32_t *)(4 * (int64_t)(result2 % v2) + v1);
        *v5 = *v6;
        *v6 = *v5;
        v4++;
    }
    // 0x100003e28
    return result2;
}

// Address range: 0x100003e34 - 0x100003e7c
int64_t function_100003e34(void) {
    int64_t result = function_100003cfc(); // 0x100003e54
    if (result % 2 != 0) {
        // 0x100003e70
        return result;
    }
    function_100003d90();
    int64_t result2 = function_100003cfc(); // 0x100003e54
    while (result2 % 2 == 0) {
        // 0x100003e60
        function_100003d90();
        result2 = function_100003cfc();
    }
    // 0x100003e70
    return result2;
}

// Address range: 0x100003e7c - 0x100003f5c
int64_t entry_point(void) {
    // 0x100003e7c
    function_100003e34();
    for (int32_t i = 0; i < 6; i++) {
        // 0x100003edc
        _printf("%d ", 6);
    }
    int32_t v1 = _printf((char *)0x100003f9c); // 0x100003f1c
    int64_t v2 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f34
    if (v2 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f48
        ___stack_chk_fail((int64_t)v1);
    }
    // 0x100003f4c
    return 0;
}

// Address range: 0x100003f5c - 0x100003f68
int64_t function_100003f5c(int64_t a1) {
    // 0x100003f5c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(char * format, ...) {
    // 0x100003f68
    return _printf(format);
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(void) {
    // 0x100003f74
    return _rand();
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

