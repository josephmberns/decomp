//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003f64(int64_t a1);
int32_t function_100003f70(char * format, ...);
int32_t function_100003f7c(void);
void function_100003f88(int32_t seed);
int32_t function_100003f94(int32_t * timer);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003d80 - 0x100003f64
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003d98
    _srand(_time(NULL));
    int64_t v2; // bp-440, 0x100003d80
    int64_t v3 = &v2;
    int64_t v4 = 0;
    for (int64_t i = 0; i < 10; i++) {
        // 0x100003de8
        *(int32_t *)(40 * v4 + v3 + 4 * i) = _rand() % 20 + 1;
    }
    // 0x100003e34
    v4++;
    while (v4 != 10) {
        for (int64_t i = 0; i < 10; i++) {
            // 0x100003de8
            *(int32_t *)(40 * v4 + v3 + 4 * i) = _rand() % 20 + 1;
        }
        // 0x100003e34
        v4++;
    }
    int32_t v5 = 0;
    int64_t v6 = 40 * (int64_t)v5 + v3;
    int32_t v7 = 0;
    int64_t v8; // 0x100003d80
    _printf(" %d", v8);
    if (*(int32_t *)(v6 + 4 * (int64_t)v7) == 20) {
        // break (via goto) -> 0x100003f20
        goto lab_0x100003f20;
    }
    int32_t v9 = v7 + 1; // 0x100003ef0
    while (v7 < 9 != (8 - v7 & v9) < 0) {
        // 0x100003e7c
        v7 = v9;
        _printf(" %d", v8);
        if (*(int32_t *)(v6 + 4 * (int64_t)v7) == 20) {
            // break (via goto) -> 0x100003f20
            goto lab_0x100003f20;
        }
        // 0x100003e68
        v9 = v7 + 1;
    }
    // 0x100003efc
    _printf((char *)0x100003fa4);
    int32_t v10 = v5 + 1; // 0x100003f10
    while (v5 < 9 != (8 - v5 & v10) < 0) {
        // 0x100003e68
        v5 = v10;
        v6 = 40 * (int64_t)v5 + v3;
        v7 = 0;
        _printf(" %d", v8);
        if (*(int32_t *)(v6 + 4 * (int64_t)v7) == 20) {
            // break (via goto) -> 0x100003f20
            goto lab_0x100003f20;
        }
        // 0x100003e68
        v9 = v7 + 1;
        while (v7 < 9 != (8 - v7 & v9) < 0) {
            // 0x100003e7c
            v7 = v9;
            _printf(" %d", v8);
            if (*(int32_t *)(v6 + 4 * (int64_t)v7) == 20) {
                // break (via goto) -> 0x100003f20
                goto lab_0x100003f20;
            }
            // 0x100003e68
            v9 = v7 + 1;
        }
        // 0x100003efc
        _printf((char *)0x100003fa4);
        v10 = v5 + 1;
    }
  lab_0x100003f20:;
    int32_t v11 = _printf("\n"); // 0x100003f28
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003f4c
        ___stack_chk_fail((int64_t)v11);
    }
    // 0x100003f50
    return 0;
}

// Address range: 0x100003f64 - 0x100003f70
int64_t function_100003f64(int64_t a1) {
    // 0x100003f64
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(char * format, ...) {
    // 0x100003f70
    return _printf(format);
}

// Address range: 0x100003f7c - 0x100003f88
int32_t function_100003f7c(void) {
    // 0x100003f7c
    return _rand();
}

// Address range: 0x100003f88 - 0x100003f94
void function_100003f88(int32_t seed) {
    // 0x100003f88
    _srand(seed);
}

// Address range: 0x100003f94 - 0x100003fa0
int32_t function_100003f94(int32_t * timer) {
    // 0x100003f94
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

