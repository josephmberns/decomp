//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003bfc(void);
int64_t function_100003ce8(void);
int64_t function_100003de4(void);
int32_t function_100003f64(char * format, ...);

// --------------------- Global Variables ---------------------

char * g1; // 0x100008000
int64_t g2 = 0; // 0x100008001

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003bfc - 0x100003ce8
int64_t function_100003bfc(void) {
    // 0x100003bfc
    int64_t v1; // 0x100003bfc
    uint64_t v2 = v1;
    if (v2 == 1) {
        // 0x100003cdc
        return 0;
    }
    // 0x100003c4c
    if (v1 == 0) {
        // 0x100003cdc
        return 1;
    }
    int64_t v3 = 1;
    int64_t v4; // 0x100003bfc
    uint64_t v5 = v4;
    int64_t v6; // 0x100003bfc
    uint64_t v7 = v6 % v2;
    int64_t v8 = v3; // 0x100003c70
    if (v5 % 2 != 0) {
        // 0x100003c78
        v8 = v7 * v3 % v2;
    }
    int64_t result = v8;
    v6 = v7 * v7;
    v4 = v5 / 2;
    while (v5 >= 2) {
        // 0x100003c60
        v3 = result;
        v5 = v4;
        v7 = v6 % v2;
        v8 = v3;
        if (v5 % 2 != 0) {
            // 0x100003c78
            v8 = v7 * v3 % v2;
        }
        // 0x100003c9c
        result = v8;
        v6 = v7 * v7;
        v4 = v5 / 2;
    }
    // 0x100003cdc
    return result;
}

// Address range: 0x100003ce8 - 0x100003d9c
int64_t function_100003ce8(void) {
    int64_t v1 = 2;
    int64_t v2; // 0x100003ce8
    int64_t v3 = v2; // 0x100003d2c
    int64_t v4; // 0x100003d4c
    if (*(char *)(v1 + (int64_t)&g1) % 2 != 0) {
        // 0x100003d34
        v4 = function_100003bfc();
        v3 = v4;
        if (v4 == 1) {
            // 0x100003d60
            v3 = _printf("%lld\n", v1 - 1);
        }
    }
    int64_t result = v3;
    int64_t v5 = v1 + 1; // 0x100003d84
    while (v5 != 0x1388) {
        // 0x100003d18
        v1 = v5;
        v3 = result;
        if (*(char *)(v1 + (int64_t)&g1) % 2 != 0) {
            // 0x100003d34
            v4 = function_100003bfc();
            v3 = v4;
            if (v4 == 1) {
                // 0x100003d60
                v3 = _printf("%lld\n", v1 - 1);
            }
        }
        // 0x100003d80
        result = v3;
        v5 = v1 + 1;
    }
    // 0x100003d90
    return result;
}

// Address range: 0x100003d9c - 0x100003de4
int64_t entry_point(void) {
    // 0x100003d9c
    function_100003de4();
    int64_t v1; // 0x100003d9c
    _printf("Wieferich primes less than %d:\n", v1);
    function_100003ce8();
    return 0;
}

// Address range: 0x100003de4 - 0x100003f64
int64_t function_100003de4(void) {
    // 0x100003de4
    *(char *)&g1 = 0;
    *(char *)&g2 = 0;
    int32_t v1 = 2;
    *(char *)((int64_t)v1 + (int64_t)&g1) = 1;
    int32_t v2 = v1 + 1; // 0x100003e40
    while (v1 < 0x1387 != (0x1386 - v1 & v2) < 0) {
        // 0x100003e20
        v1 = v2;
        *(char *)((int64_t)v1 + (int64_t)&g1) = 1;
        v2 = v1 + 1;
    }
    int32_t v3 = 4;
    *(char *)((int64_t)v3 + (int64_t)&g1) = 0;
    int32_t v4 = v3 + 2; // 0x100003e8c
    while (v3 < 0x1386 != (0x1385 - v3 & v4) < 0) {
        // 0x100003e70
        v3 = v4;
        *(char *)((int64_t)v3 + (int64_t)&g1) = 0;
        v4 = v3 + 2;
    }
    int64_t v5 = 3;
    if (*(char *)(v5 + (int64_t)&g1) % 2 != 0) {
        for (int64_t i = 9; i < 0x1388; i += 2 * v5) {
            // 0x100003f18
            *(char *)(i + (int64_t)&g1) = 0;
        }
    }
    int64_t v6 = v5 + 2; // 0x100003f50
    int64_t v7 = v6 * v6; // 0x100003eac
    while (v7 < 0x1388) {
        // 0x100003ed0
        v5 = v6;
        if (*(char *)(v5 + (int64_t)&g1) % 2 != 0) {
            for (int64_t i = v7; i < 0x1388; i += 2 * v5) {
                // 0x100003f18
                *(char *)(i + (int64_t)&g1) = 0;
            }
        }
        // 0x100003f4c
        v6 = v5 + 2;
        v7 = v6 * v6;
    }
    // 0x100003f5c
    int64_t result; // 0x100003de4
    return result;
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * format, ...) {
    // 0x100003f64
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5
