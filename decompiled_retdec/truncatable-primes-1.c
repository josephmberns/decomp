//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b98(void);
int64_t function_100003cf0(void);
int64_t function_100003ddc(void);
int64_t function_100003f64(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t * function_100003f70(int32_t size);
int32_t function_100003f7c(char * format, ...);

// --------------------- Global Variables ---------------------

char * g1; // 0x100008008

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memset_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003b98 - 0x100003cf0
int64_t function_100003b98(void) {
    int64_t v1 = (int64_t)_malloc(0xf4240); // 0x100003bbc
    *(int64_t *)&g1 = v1;
    int64_t result = ___memset_chk(v1, 1, 0xf4240, -1); // 0x100003be0
    *(char *)((int64_t)g1 + 1) = 0;
    *g1 = 0;
    int32_t v2 = 2;
    int32_t v3 = 2 * v2; // 0x100003c28
    int32_t v4 = v3; // 0x100003c44
    int32_t v5; // 0x100003c70
    if (v3 < 0xf4240 != (0xf423f - v3 & v3) < 0) {
        *(char *)((int64_t)g1 + (int64_t)v4) = 0;
        v5 = v4 + v2;
        v4 = v5;
        while (v5 < 0xf4240 != (0xf423f - v5 & v5) < 0) {
            // 0x100003c4c
            *(char *)((int64_t)g1 + (int64_t)v4) = 0;
            v5 = v4 + v2;
            v4 = v5;
        }
    }
    int32_t v6 = v2;
    int32_t v7 = v6 + 1; // 0x100003c88
    int32_t v8; // 0x100003b98
    while (v6 < 0xf423f != (v7 & 0xf423e - v6) < 0) {
        // 0x100003cd0
        v8 = v7;
        if (*(char *)((int64_t)v7 + (int64_t)g1) != 0) {
            // break -> 0x100003c04
            break;
        }
        v6 = v8;
        v7 = v6 + 1;
    }
    while (v7 * v7 < 0xf4240 != (0xf423f - v7 * v7 & v7 * v7) < 0) {
        // 0x100003c04
        v2 = v7;
        v3 = 2 * v2;
        v4 = v3;
        if (v3 < 0xf4240 != (0xf423f - v3 & v3) < 0) {
            *(char *)((int64_t)g1 + (int64_t)v4) = 0;
            v5 = v4 + v2;
            v4 = v5;
            while (v5 < 0xf4240 != (0xf423f - v5 & v5) < 0) {
                // 0x100003c4c
                *(char *)((int64_t)g1 + (int64_t)v4) = 0;
                v5 = v4 + v2;
                v4 = v5;
            }
        }
        // 0x100003c80
        v6 = v2;
        v7 = v6 + 1;
        while (v6 < 0xf423f != (v7 & 0xf423e - v6) < 0) {
            // 0x100003cd0
            v8 = v7;
            if (*(char *)((int64_t)v7 + (int64_t)g1) != 0) {
                // break -> 0x100003c04
                break;
            }
            v6 = v8;
            v7 = v6 + 1;
        }
    }
    // 0x100003ce4
    return result;
}

// Address range: 0x100003cf0 - 0x100003ddc
int64_t function_100003cf0(void) {
    // 0x100003cf0
    int64_t v1; // 0x100003cf0
    int32_t v2 = v1; // 0x100003cf4
    int32_t v3 = 1 - v2; // 0x100003d0c
    int32_t v4 = 1; // 0x100003d14
    int32_t v5 = 1; // 0x100003d14
    if (v3 < 0 != (v3 & v2) < 0) {
        v5 *= 10;
        int32_t v6 = v5 - v2; // 0x100003d0c
        v4 = v5;
        while (v6 < 0 != ((v6 ^ v5) & (v5 ^ v2)) < 0) {
            // 0x100003d1c
            v5 *= 10;
            v6 = v5 - v2;
            v4 = v5;
        }
    }
    // 0x100003d34
    if (v2 == 0) {
        // 0x100003dd0
        return 1;
    }
    int32_t v7 = v4; // 0x100003d80
    int32_t v8 = v2;
    int64_t result = 0; // 0x100003d68
    while (*(char *)((int64_t)v8 + (int64_t)g1) != 0) {
        // 0x100003d78
        v7 /= 10;
        int32_t v9 = v8 - v7; // 0x100003d90
        result = 0;
        if (v9 < 0 != ((v9 ^ v8) & (v7 ^ v8)) < 0) {
            // break -> 0x100003dd0
            break;
        }
        // 0x100003da8
        v8 %= v7;
        result = 1;
        if (v8 == 0) {
            // break -> 0x100003dd0
            break;
        }
        result = 0;
    }
    // 0x100003dd0
    return result;
}

// Address range: 0x100003ddc - 0x100003e58
int64_t function_100003ddc(void) {
    // 0x100003ddc
    int64_t v1; // 0x100003ddc
    int32_t v2 = v1; // 0x100003de0
    if (v2 == 0) {
        // 0x100003e4c
        return 1;
    }
    int32_t v3 = v2;
    int64_t result = 0; // 0x100003e1c
    while (*(char *)((int64_t)v3 + (int64_t)g1) != 0) {
        // 0x100003e2c
        result = 1;
        if (v3 < 10) {
            // break -> 0x100003e4c
            break;
        }
        v3 /= 10;
        result = 0;
    }
    // 0x100003e4c
    return result;
}

// Address range: 0x100003e58 - 0x100003f64
int64_t entry_point(void) {
    // 0x100003e58
    function_100003b98();
    int32_t v1 = 0xf423f;
    int32_t v2 = v1 - 2; // 0x100003e90
    int32_t v3 = 0xf423f; // 0x100003e90
    while (v1 == 0 | (int32_t)function_100003cf0() == 0) {
        // 0x100003e98
        v1 = v2;
        v2 = v1 - 2;
        v3 = 0xf423f;
    }
    while (v3 == 0 | (int32_t)function_100003ddc() == 0) {
        // 0x100003ef4
        v3 -= 2;
    }
    // 0x100003f2c
    int64_t v4; // 0x100003e58
    _printf("Left: %d; right: %d\n", v4, v4);
    return 0;
}

// Address range: 0x100003f64 - 0x100003f70
int64_t function_100003f64(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003f64
    return ___memset_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f70 - 0x100003f7c
int64_t * function_100003f70(int32_t size) {
    // 0x100003f70
    return _malloc(size);
}

// Address range: 0x100003f7c - 0x100003f88
int32_t function_100003f7c(char * format, ...) {
    // 0x100003f7c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

