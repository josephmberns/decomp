//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d5c(void);
int32_t function_100003f58(char * format, ...);
int32_t function_100003f64(char * s);

// --------------------- Global Variables ---------------------

int32_t * g1 = NULL; // 0x100008000
int64_t g2; // 0x100008400

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003d5c - 0x100003eec
int64_t function_100003d5c(void) {
    // 0x100003d5c
    if (*(int32_t *)((int64_t)&g1 + 1024) == 0) {
        int32_t v1 = 0;
        int32_t v2 = 0; // 0x100003e14
        uint32_t v3 = v1 / 2;
        int32_t v4 = v1 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v2++;
        int32_t v5 = v4; // 0x100003dbc
        while (v2 != 8) {
            // 0x100003dc4
            v3 = v5 / 2;
            v4 = v5 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v2++;
            v5 = v4;
        }
        // 0x100003e20
        *(int32_t *)(4 * (int64_t)v1 + (int64_t)&g1) = v4;
        int32_t v6 = v1 + 1; // 0x100003e3c
        while (v1 < 255 != (254 - v1 & v6) < 0) {
            // 0x100003db0
            v1 = v6;
            v2 = 0;
            v3 = v1 / 2;
            v4 = v1 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v2++;
            v5 = v4;
            while (v2 != 8) {
                // 0x100003dc4
                v3 = v5 / 2;
                v4 = v5 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
                v2++;
                v5 = v4;
            }
            // 0x100003e20
            *(int32_t *)(4 * (int64_t)v1 + (int64_t)&g1) = v4;
            v6 = v1 + 1;
        }
        // 0x100003e48
        *(int32_t *)&g2 = 1;
    }
    // 0x100003e58
    int64_t v7; // 0x100003d5c
    int32_t v8 = -1 - (int32_t)v7;
    uint64_t v9 = 2 * v7;
    if (v9 <= v7) {
        // 0x100003edc
        return -1 - v8;
    }
    int32_t v10 = v8; // 0x100003e90
    int64_t v11; // 0x100003d5c
    unsigned char v12 = *(char *)v11; // 0x100003e9c
    int32_t v13 = *(int32_t *)((int64_t)(4 * (v10 % 256 ^ (int32_t)v12)) + (int64_t)&g1); // 0x100003ebc
    v10 = v13 ^ v10 / 256;
    int64_t v14 = v11 + 1; // 0x100003ed0
    while (v14 != v9) {
        // 0x100003e98
        v12 = *(char *)v14;
        v13 = *(int32_t *)((int64_t)(4 * (v10 % 256 ^ (int32_t)v12)) + (int64_t)&g1);
        v10 = v13 ^ v10 / 256;
        v14++;
    }
    // 0x100003edc
    return -1 - v10;
}

// Address range: 0x100003eec - 0x100003f58
int64_t entry_point(void) {
    // 0x100003eec
    _strlen("The quick brown fox jumps over the lazy dog");
    function_100003d5c();
    _printf("%X\n", (int32_t)"The quick brown fox jumps over the lazy dog");
    return 0;
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(char * format, ...) {
    // 0x100003f58
    return _printf(format);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * s) {
    // 0x100003f64
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4

