//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c84(void);
int64_t function_100003cf4(void);
int64_t function_100003f6c(int64_t a1);
int32_t function_100003f78(char * format, ...);
int32_t function_100003f84(void);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
int32_t _rand(void);

// ------------------------ Functions -------------------------

// Address range: 0x100003c84 - 0x100003cf4
int64_t function_100003c84(void) {
    // 0x100003c84
    int64_t v1; // 0x100003c84
    int32_t v2 = v1; // 0x100003c90
    int32_t v3 = 0x7fffffff % v2 ^ 0x7fffffff; // 0x100003ca0
    int32_t v4 = _rand(); // 0x100003cb4
    while ((v4 - v3) < 0 == (v4 & -((v4 - v3))) < 0) {
        // 0x100003cb4
        v4 = _rand();
    }
    // 0x100003cd4
    return v4 / (v3 / v2);
}

// Address range: 0x100003cf4 - 0x100003dac
int64_t function_100003cf4(void) {
    // 0x100003cf4
    int64_t v1; // 0x100003cf4
    if (v1 == 0) {
        // 0x100003da0
        int64_t result; // 0x100003cf4
        return result;
    }
    int64_t result2 = function_100003c84(); // 0x100003d28
    int64_t v2 = 0x100000000 * result2;
    int64_t v3; // 0x100003cf4
    int64_t v4 = v3 - 1; // 0x100003d38
    int32_t * v5; // 0x100003d54
    int32_t * v6; // 0x100003d68
    if (v2 >> 32 != v4) {
        // 0x100003d4c
        v5 = (int32_t *)((v2 >> 30) + v1);
        v6 = (int32_t *)(v1 - 4 + 4 * v3);
        *v5 = *v6;
        *v6 = *v5;
    }
    // 0x100003d20
    while (v4 != 0) {
        int64_t v7 = v4;
        result2 = function_100003c84();
        v2 = 0x100000000 * result2;
        v4 = v7 - 1;
        if (v2 >> 32 != v4) {
            // 0x100003d4c
            v5 = (int32_t *)((v2 >> 30) + v1);
            v6 = (int32_t *)(v1 - 4 + 4 * v7);
            *v5 = *v6;
            *v6 = *v5;
        }
    }
    // 0x100003da0
    return result2;
}

// Address range: 0x100003dac - 0x100003f6c
int64_t entry_point(void) {
    // 0x100003dac
    int64_t v1; // bp-104, 0x100003dac
    int64_t v2 = &v1; // 0x100003df0
    int64_t v3 = 0;
    *(int32_t *)(4 * v3 + v2) = (int32_t)v3;
    int64_t v4 = v3 + 1;
    while (v4 != 20) {
        // 0x100003de8
        v3 = v4;
        *(int32_t *)(4 * v3 + v2) = (int32_t)v3;
        v4 = v3 + 1;
    }
    // 0x100003e0c
    _printf("before:");
    int32_t v5 = 0; // 0x100003e1c
    while (true) {
        int32_t v6 = v5;
        if (v6 < 20 == (19 - v6 & v6) < 0) {
            // 0x100003e58
            if (_printf("\n") != 0) {
                // break -> 0x100003e9c
                break;
            }
        }
        // 0x100003e64
        int64_t v7; // 0x100003dac
        _printf(" %d", v7);
        v5 = v6 + 1;
    }
    // 0x100003e9c
    function_100003cf4();
    _printf("after: ");
    int32_t v8 = 0; // 0x100003eb8
    int32_t v9; // 0x100003ee0
    while (true) {
        int32_t v10 = v8;
        if (v10 < 20 == (19 - v10 & v10) < 0) {
            // 0x100003ef4
            v9 = _printf("\n");
            if (v9 != 0) {
                // break -> 0x100003f38
                break;
            }
        }
        // 0x100003f00
        _printf(" %d", 20);
        v8 = v10 + 1;
    }
    int64_t v11 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f44
    if (v11 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f58
        ___stack_chk_fail((int64_t)v9);
    }
    // 0x100003f5c
    return 0;
}

// Address range: 0x100003f6c - 0x100003f78
int64_t function_100003f6c(int64_t a1) {
    // 0x100003f6c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(char * format, ...) {
    // 0x100003f78
    return _printf(format);
}

// Address range: 0x100003f84 - 0x100003f90
int32_t function_100003f84(void) {
    // 0x100003f84
    return _rand();
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

