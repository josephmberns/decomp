//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b18(void);
int64_t function_100003c14(void);
int64_t function_100003f34(void);
void function_100003f40(int64_t * ptr);
int64_t * function_100003f4c(int32_t size);
int32_t function_100003f58(char * format, ...);
int64_t * function_100003f64(int64_t * ptr, int32_t size);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int64_t * _realloc(int64_t * a1, int32_t a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003b18 - 0x100003c14
int64_t function_100003b18(void) {
    // 0x100003b18
    int64_t v1; // 0x100003b18
    int32_t v2 = v1; // 0x100003b2c
    int16_t * v3 = (int16_t *)(v1 + 8); // 0x100003b34
    int16_t v4 = *v3; // 0x100003b34
    int32_t v5 = v4; // 0x100003b34
    int32_t v6 = v5 + v2; // 0x100003b3c
    int32_t v7 = 4 * v6;
    int64_t result; // 0x100003b18
    if (v4 == 0 || v4 < 0 != ((v6 ^ v2) & (v6 ^ v5)) < 0) {
        int64_t v8 = (int64_t)_malloc(v7); // 0x100003b84
        *(int64_t *)v1 = v8;
        result = v8;
    } else {
        int64_t * v9 = (int64_t *)v1; // 0x100003b6c
        int64_t v10 = (int64_t)_realloc(v9, v7); // 0x100003b6c
        *v9 = v10;
        result = v10;
    }
    int32_t v11 = (int32_t)*v3; // 0x100003b9c
    int32_t v12 = v11 - v6; // 0x100003bb0
    int32_t v13 = v11; // 0x100003bb8
    int32_t v14 = 0; // 0x100003bb8
    if (v12 < 0 == ((v12 ^ v11) & (v6 ^ v11)) < 0) {
        // 0x100003bfc
        *v3 = (int16_t)v6;
        return result;
    }
    int32_t v15 = *(int32_t *)(4 * (int64_t)v14 + v1); // 0x100003bc8
    *(int32_t *)(4 * (int64_t)v13 + result) = v15;
    v13++;
    int32_t v16 = v13 - v6; // 0x100003bb0
    v14++;
    while (v16 < 0 != ((v16 ^ v13) & (v13 ^ v6)) < 0) {
        // 0x100003bc0
        v15 = *(int32_t *)(4 * (int64_t)v14 + v1);
        *(int32_t *)(4 * (int64_t)v13 + result) = v15;
        v13++;
        v16 = v13 - v6;
        v14++;
    }
    // 0x100003bfc
    *v3 = (int16_t)v6;
    return result;
}

// Address range: 0x100003c14 - 0x100003dd4
int64_t function_100003c14(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003c2c
    int64_t result; // 0x100003c14
    int32_t v2 = result; // 0x100003c34
    *(int16_t *)(result + 8) = 0;
    int64_t * v3 = (int64_t *)result; // 0x100003c50
    _free(v3);
    *v3 = 0;
    int32_t v4 = 1 - v2; // 0x100003c78
    int32_t v5 = 0; // 0x100003c80
    int32_t v6 = 1; // 0x100003c80
    int32_t v7 = 1; // 0x100003c80
    int64_t v8; // bp-1236, 0x100003c14
    if (v4 < 0 != (v4 & v2) < 0) {
        int64_t v9 = &v8;
        int32_t v10 = 0;
        int32_t v11 = 1;
        int32_t v12 = v10; // 0x100003ca4
        int32_t v13; // 0x100003c14
        if (v2 % v11 == 0) {
            // 0x100003cb0
            v13 = v10;
            if (v10 == 300) {
                // 0x100003cc4
                function_100003b18();
                v13 = 0;
            }
            // 0x100003cdc
            *(int32_t *)(4 * (int64_t)v13 + v9) = v11;
            *(int32_t *)(4 * (int64_t)(v13 + 1) + v9) = v2 / v11;
            v12 = v13 + 2;
        }
        int32_t v14 = v12;
        int32_t v15 = v11 + 1; // 0x100003d20
        int32_t v16 = v15 * v15; // 0x100003c70
        int32_t v17 = v16 - v2; // 0x100003c78
        v5 = v14;
        v6 = v15;
        v7 = v16;
        while (v17 < 0 != ((v17 ^ v16) & (v16 ^ v2)) < 0) {
            // 0x100003c88
            v10 = v14;
            v11 = v15;
            v12 = v10;
            if (v2 % v11 == 0) {
                // 0x100003cb0
                v13 = v10;
                if (v10 == 300) {
                    // 0x100003cc4
                    function_100003b18();
                    v13 = 0;
                }
                // 0x100003cdc
                *(int32_t *)(4 * (int64_t)v13 + v9) = v11;
                *(int32_t *)(4 * (int64_t)(v13 + 1) + v9) = v2 / v11;
                v12 = v13 + 2;
            }
            // 0x100003d1c
            v14 = v12;
            v15 = v11 + 1;
            v16 = v15 * v15;
            v17 = v16 - v2;
            v5 = v14;
            v6 = v15;
            v7 = v16;
        }
    }
    int32_t v18 = v5; // 0x100003d44
    if (v7 == v2) {
        // 0x100003d4c
        *(int32_t *)(4 * (int64_t)v5 + (int64_t)&v8) = v6;
        v18 = v5 + 1;
    }
    // 0x100003d6c
    if (v18 >= 1) {
        // 0x100003d80
        function_100003b18();
    }
    // 0x100003d94
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003dbc
        ___stack_chk_fail();
    }
    // 0x100003dc0
    return result;
}

// Address range: 0x100003dd4 - 0x100003f34
int64_t entry_point(void) {
    int64_t v1 = 0; // bp-80, 0x100003e0c
    for (int32_t i = 0; i < 4; i++) {
        // 0x100003ee0
        function_100003c14();
        _printf("\nfactors of %d are:\n  ", (int64_t)&v1);
        _printf((char *)0x100003f9d);
    }
    int64_t v2 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f0c
    if (v2 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f20
        ___stack_chk_fail();
    }
    // 0x100003f24
    return 0;
}

// Address range: 0x100003f34 - 0x100003f40
int64_t function_100003f34(void) {
    // 0x100003f34
    return ___stack_chk_fail();
}

// Address range: 0x100003f40 - 0x100003f4c
void function_100003f40(int64_t * ptr) {
    // 0x100003f40
    _free(ptr);
}

// Address range: 0x100003f4c - 0x100003f58
int64_t * function_100003f4c(int32_t size) {
    // 0x100003f4c
    return _malloc(size);
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(char * format, ...) {
    // 0x100003f58
    return _printf(format);
}

// Address range: 0x100003f64 - 0x100003f70
int64_t * function_100003f64(int64_t * ptr, int32_t size) {
    // 0x100003f64
    return _realloc(ptr, size);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

