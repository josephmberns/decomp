//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d80(void);
int64_t * function_100003f74(int32_t size);
int32_t function_100003f80(char * format, ...);
int64_t * function_100003f8c(int64_t * ptr, int32_t size);

// ------- Dynamically Linked Functions Without Header --------

int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int64_t * _realloc(int64_t * a1, int32_t a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003d80 - 0x100003ecc
int64_t function_100003d80(void) {
    // 0x100003d80
    int64_t v1; // 0x100003d80
    int32_t v2 = v1; // 0x100003d90
    int64_t * v3 = _malloc(4 * v2); // 0x100003db0
    int64_t * v4 = (int64_t *)v1; // 0x100003db8
    *v4 = (int64_t)v3;
    int32_t v5 = -v2;
    int32_t v6 = 0; // 0x100003dd4
    int32_t v7 = 0; // 0x100003dd4
    if (v5 < 0 == (v5 & v2) < 0) {
        uint32_t result = 0;
        *v4 = (int64_t)_realloc(v4, 4 * result);
        return result;
    }
    v7 += *(int32_t *)(4 * (int64_t)v6 + v1);
    v6++;
    int32_t v8 = v6 - v2; // 0x100003dcc
    int32_t v9 = 0; // 0x100003dd4
    while (v8 < 0 != ((v8 ^ v6) & (v6 ^ v2)) < 0) {
        // 0x100003ddc
        v7 += *(int32_t *)(4 * (int64_t)v6 + v1);
        v6++;
        v8 = v6 - v2;
        v9 = 0;
    }
    int32_t v10 = 0;
    int32_t v11 = 0;
    int32_t * v12 = (int32_t *)(4 * (int64_t)v11 + v1); // 0x100003e34
    int32_t v13 = *v12; // 0x100003e34
    int32_t v14 = v13; // 0x100003e48
    int32_t v15 = v10; // 0x100003e48
    if (v13 + 2 * v9 == v7) {
        // 0x100003e50
        *(int32_t *)(4 * (int64_t)v10 + v1) = v11;
        v14 = *v12;
        v15 = v10 + 1;
    }
    int32_t v16 = v11 + 1; // 0x100003e94
    int32_t v17 = v16 - v2; // 0x100003e18
    v9 += v14;
    int32_t result2 = v15; // 0x100003e20
    while (v17 < 0 != ((v17 ^ v16) & (v16 ^ v2)) < 0) {
        // 0x100003e28
        v10 = v15;
        v11 = v16;
        v12 = (int32_t *)(4 * (int64_t)v11 + v1);
        v13 = *v12;
        v14 = v13;
        v15 = v10;
        if (v13 + 2 * v9 == v7) {
            // 0x100003e50
            *(int32_t *)(4 * (int64_t)v10 + v1) = v11;
            v14 = *v12;
            v15 = v10 + 1;
        }
        // 0x100003e74
        v16 = v11 + 1;
        v17 = v16 - v2;
        v9 += v14;
        result2 = v15;
    }
    // 0x100003ea0
    *v4 = (int64_t)_realloc(v4, 4 * result2);
    return result2;
}

// Address range: 0x100003ecc - 0x100003f74
int64_t entry_point(void) {
    int32_t v1 = function_100003d80(); // 0x100003ef0
    _printf("Found:");
    int32_t v2 = -v1; // 0x100003f10
    int32_t v3 = 0; // 0x100003f18
    if (v2 < 0 == (v2 & v1) < 0) {
        // 0x100003f58
        _printf((char *)0x100003fa3);
        return 0;
    }
    _printf(" %d", 7);
    v3++;
    while (v3 - v1 < 0 != ((v3 - v1 ^ v3) & (v3 ^ v1)) < 0) {
        // 0x100003f20
        _printf(" %d", 7);
        v3++;
    }
    // 0x100003f58
    _printf((char *)0x100003fa3);
    return 0;
}

// Address range: 0x100003f74 - 0x100003f80
int64_t * function_100003f74(int32_t size) {
    // 0x100003f74
    return _malloc(size);
}

// Address range: 0x100003f80 - 0x100003f8c
int32_t function_100003f80(char * format, ...) {
    // 0x100003f80
    return _printf(format);
}

// Address range: 0x100003f8c - 0x100003f98
int64_t * function_100003f8c(int64_t * ptr, int32_t size) {
    // 0x100003f8c
    return _realloc(ptr, size);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

