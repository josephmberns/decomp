//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c78(void);
int64_t function_100003f48(int64_t a1);
int32_t function_100003f54(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c78 - 0x100003dd8
int64_t function_100003c78(void) {
    // 0x100003c78
    int64_t v1; // 0x100003c78
    int32_t v2 = v1; // 0x100003c84
    if (v1 < 3 || v2 < 2 != (1 - v2 & v2) < 0) {
        // 0x100003cc0
        int64_t result; // 0x100003c78
        if (v1 == 0) {
            // 0x100003dcc
            return result;
        }
        int32_t v3 = 0; // 0x100003cd0
        *(int32_t *)v1 = 1;
        v3++;
        int64_t v4 = v3; // 0x100003cc0
        while (v1 > v4) {
            // 0x100003cd8
            *(int32_t *)(4 * v4 + v1) = 1;
            v3++;
            v4 = v3;
        }
        // 0x100003dcc
        return result;
    }
    int64_t result2 = function_100003c78(); // 0x100003d10
    int32_t v5 = v2 + 1;
    int64_t v6 = v5; // 0x100003d24
    if (v1 <= v6) {
        // 0x100003dcc
        return result2;
    }
    int32_t v7 = v2 - 1;
    int32_t v8 = v5;
    int32_t * v9 = (int32_t *)(4 * v6 + v1); // 0x100003d48
    *v9 = 0;
    int32_t v10 = v2 - 1;
    int32_t v11 = 0; // 0x100003d6c
    int32_t v12 = v10; // 0x100003d78
    int32_t v13; // 0x100003c78
    int32_t v14; // 0x100003c78
    int32_t v15; // 0x100003d9c
    int32_t v16; // 0x100003d70
    if (v7 < 0 == ((v10 ^ v7) & (v10 ^ v11)) < 0) {
        v15 = *(int32_t *)(4 * (int64_t)v12 + v1);
        *v9 = v15;
        v14 = v12 - 1;
        v16 = v14 - v11;
        v13 = v15;
        v12 = v14;
        while (v16 < 0 == ((v16 ^ v14) & (v14 ^ v11)) < 0) {
            // 0x100003d80
            v15 = *(int32_t *)(4 * (int64_t)v12 + v1) + v13;
            *v9 = v15;
            v14 = v12 - 1;
            v16 = v14 - v11;
            v13 = v15;
            v12 = v14;
        }
    }
    int32_t v17 = v8 + 1;
    int64_t v18 = v17; // 0x100003d24
    while (v1 > v18) {
        int32_t v19 = v8;
        v8 = v17;
        v9 = (int32_t *)(4 * v18 + v1);
        *v9 = 0;
        v10 = v19 - 1;
        v11 = v19 - v2;
        v12 = v10;
        if (v7 < 0 == ((v10 ^ v7) & (v10 ^ v11)) < 0) {
            v15 = *(int32_t *)(4 * (int64_t)v12 + v1);
            *v9 = v15;
            v14 = v12 - 1;
            v16 = v14 - v11;
            v13 = v15;
            v12 = v14;
            while (v16 < 0 == ((v16 ^ v14) & (v14 ^ v11)) < 0) {
                // 0x100003d80
                v15 = *(int32_t *)(4 * (int64_t)v12 + v1) + v13;
                *v9 = v15;
                v14 = v12 - 1;
                v16 = v14 - v11;
                v13 = v15;
                v12 = v14;
            }
        }
        // 0x100003d24
        v17 = v8 + 1;
        v18 = v17;
    }
    // 0x100003dcc
    return result2;
}

// Address range: 0x100003dd8 - 0x100003f48
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003dec
    int64_t v2; // 0x100003dd8
    _printf("First %ld terms of the Padovan n-step number sequences:\n", (int32_t)v2);
    int32_t v3 = 2;
    int64_t v4; // bp-84, 0x100003dd8
    for (int64_t i = 0; i < 15; i++) {
        // 0x100003e50
        *(int32_t *)(4 * i + (int64_t)&v4) = 0;
    }
    // 0x100003e74
    function_100003c78();
    _printf("%d: ", 15);
    for (int32_t i = 0; i < 15; i++) {
        // 0x100003ebc
        _printf("%3d ", 15);
    }
    int32_t v5 = _printf((char *)0x100003fa3); // 0x100003efc
    int32_t v6 = v3 + 1; // 0x100003f08
    while (v3 == 7 || v3 < 7 != (6 - v3 & v6) < 0) {
        // 0x100003e3c
        v3 = v6;
        for (int64_t i = 0; i < 15; i++) {
            // 0x100003e50
            *(int32_t *)(4 * i + (int64_t)&v4) = 0;
        }
        // 0x100003e74
        function_100003c78();
        _printf("%d: ", 15);
        for (int32_t i = 0; i < 15; i++) {
            // 0x100003ebc
            _printf("%3d ", 15);
        }
        // 0x100003ef4
        v5 = _printf((char *)0x100003fa3);
        v6 = v3 + 1;
    }
    // 0x100003f14
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003f34
        ___stack_chk_fail((int64_t)v5);
    }
    // 0x100003f38
    return 0;
}

// Address range: 0x100003f48 - 0x100003f54
int64_t function_100003f48(int64_t a1) {
    // 0x100003f48
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * format, ...) {
    // 0x100003f54
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4
