//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003db8(void);
int64_t function_100003f74(int64_t a1);
int64_t * function_100003f80(int64_t * s, int32_t c, int32_t n);
int32_t function_100003f8c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003db8 - 0x100003ecc
int64_t function_100003db8(void) {
    // 0x100003db8
    int64_t v1; // 0x100003db8
    int32_t v2 = v1; // 0x100003dcc
    int32_t v3 = 1 - v2; // 0x100003de4
    if (v3 < 0 != (v3 & v2) < 0) {
        int32_t v4 = 1; // 0x100003e70
        int32_t v5 = *(int32_t *)(v1 + (int64_t)(4 * v4 - 4)); // 0x100003e00
        int64_t v6 = 4 * (int64_t)v4; // 0x100003e0c
        *(int32_t *)(v6 + v1) = *(int32_t *)(v6 + v1) + v5;
        _printf("%d%c", v1, (char)v1);
        v4++;
        while (v4 - v2 < 0 != ((v4 - v2 ^ v4) & (v4 ^ v2)) < 0) {
            // 0x100003df4
            v5 = *(int32_t *)(v1 + (int64_t)(4 * v4 - 4));
            v6 = 4 * (int64_t)v4;
            *(int32_t *)(v6 + v1) = *(int32_t *)(v6 + v1) + v5;
            _printf("%d%c", v1, (char)v1);
            v4++;
        }
    }
    int32_t v7 = 32 - v2; // 0x100003e84
    int64_t result = 0; // 0x100003e8c
    if (v7 != 0 && v7 < 0 == (v7 & v2) < 0) {
        // 0x100003e94
        result = function_100003db8() & 0xffffffff;
    }
    // 0x100003ebc
    return result;
}

// Address range: 0x100003ecc - 0x100003f74
int64_t entry_point(void) {
    // 0x100003ecc
    int64_t v1; // bp-168, 0x100003ecc
    _memset(&v1, 0, 128);
    int64_t v2; // bp-296, 0x100003ecc
    _memset(&v2, 0, 128);
    int64_t v3 = function_100003db8(); // 0x100003f34
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f48
    if (v4 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f5c
        ___stack_chk_fail(v3);
    }
    // 0x100003f60
    return v3 & 0xffffffff;
}

// Address range: 0x100003f74 - 0x100003f80
int64_t function_100003f74(int64_t a1) {
    // 0x100003f74
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f80 - 0x100003f8c
int64_t * function_100003f80(int64_t * s, int32_t c, int32_t n) {
    // 0x100003f80
    return _memset(s, c, n);
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

