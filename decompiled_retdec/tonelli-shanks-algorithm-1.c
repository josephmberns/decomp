//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000039d8(void);
int64_t function_100003aa8(void);
int64_t function_100003ae8(void);
int64_t function_100003e1c(void);
int32_t function_100003f44(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x1000039d8 - 0x100003aa8
int64_t function_1000039d8(void) {
    // 0x1000039d8
    int64_t v1; // 0x1000039d8
    uint64_t v2 = v1;
    if (v1 == 0) {
        // 0x100003a8c
        return 1 % v2;
    }
    int64_t v3; // 0x1000039d8
    int64_t v4 = v3;
    int64_t v5 = 1;
    int64_t v6; // 0x1000039d8
    uint64_t v7 = v6;
    int64_t v8 = v7 / 2; // 0x100003a18
    int64_t v9 = v5; // 0x100003a2c
    if (v7 == (2 * v8 || 1)) {
        // 0x100003a34
        v9 = v4 * v5 % v2;
    }
    int64_t v10 = v9;
    v3 = v4 * v4 % v2;
    while (v7 >= 2) {
        // 0x100003a10
        v4 = v3;
        v5 = v10;
        v7 = v8;
        v8 = v7 / 2;
        v9 = v5;
        if (v7 == (2 * v8 || 1)) {
            // 0x100003a34
            v9 = v4 * v5 % v2;
        }
        // 0x100003a58
        v10 = v9;
        v3 = v4 * v4 % v2;
    }
    // 0x100003a8c
    return v10 % v2;
}

// Address range: 0x100003aa8 - 0x100003ae8
int64_t function_100003aa8(void) {
    // 0x100003aa8
    int64_t result; // 0x100003aa8
    *(char *)(result + 16) = (char)result % 2;
    return result;
}

// Address range: 0x100003ae8 - 0x100003e1c
int64_t function_100003ae8(void) {
    // 0x100003ae8
    int64_t v1; // 0x100003ae8
    uint64_t v2 = v1;
    if (function_1000039d8() != 1) {
        // 0x100003e10
        return function_100003aa8();
    }
    int64_t v3 = v2 - 1; // 0x100003b04
    uint64_t v4 = v3; // 0x100003b6c
    int64_t v5 = 0; // 0x100003b6c
    if (v3 % 2 == 0) {
        int64_t v6 = v5;
        v5 = v6 + 1;
        while ((v4 & 2) == 0) {
            // 0x100003b74
            v4 /= 2;
            v6 = v5;
            v5 = v6 + 1;
        }
        // 0x100003b90
        if (v6 == 0) {
            // 0x100003ba4
            function_1000039d8();
            // 0x100003e10
            return function_100003aa8();
        }
    }
    // 0x100003bec
    while (function_1000039d8() != v3) {
        // continue -> 0x100003bec
    }
    int64_t v7 = function_1000039d8(); // 0x100003c3c
    function_1000039d8();
    int64_t v8 = function_1000039d8(); // 0x100003c70
    int64_t v9 = v8; // 0x100003ca4
    if (v8 != 1) {
        int64_t v10 = v9;
        int64_t v11 = 0;
        int64_t v12 = v11; // 0x100003d10
        int64_t v13; // 0x100003ae8
        int64_t v14; // 0x100003d3c
        while (v11 < v5 - 1) {
            // 0x100003d18
            v13 = v10;
            v10 = v13 * v13 % v2;
            v14 = v11 + 1;
            v12 = v14;
            if (v10 == 1) {
                // break -> 0x100003d48
                break;
            }
            v11 = v14;
            v12 = v11;
        }
        int64_t v15 = v12;
        int64_t v16 = v5 + -1 - v15; // 0x100003d54
        int64_t v17 = v16; // 0x100003d6c
        int64_t v18 = v7; // 0x100003d6c
        int64_t v19; // 0x100003ae8
        int64_t v20; // 0x100003ae8
        int64_t v21; // 0x100003d98
        if (v16 != 0) {
            v19 = v7;
            v20 = v19 * v19 % v2;
            v21 = v17 - 1;
            v17 = v21;
            v18 = v20;
            while (v21 != 0) {
                // 0x100003d74
                v19 = v20;
                v20 = v19 * v19 % v2;
                v21 = v17 - 1;
                v17 = v21;
                v18 = v20;
            }
        }
        int64_t v22 = v18;
        int64_t v23 = v22 * v22 % v2;
        v9 = v23 * v9 % v2;
        while (v9 != 1) {
            int64_t v24 = v15;
            v10 = v9;
            v11 = 0;
            v12 = v11;
            while (v11 < v24 - 1) {
                // 0x100003d18
                v13 = v10;
                v10 = v13 * v13 % v2;
                v14 = v11 + 1;
                v12 = v14;
                if (v10 == 1) {
                    // break -> 0x100003d48
                    break;
                }
                v11 = v14;
                v12 = v11;
            }
            // 0x100003d48
            v15 = v12;
            v16 = v24 + -1 - v15;
            v17 = v16;
            int64_t v25 = v23; // 0x100003d6c
            v18 = v23;
            if (v16 != 0) {
                v19 = v25;
                v20 = v19 * v19 % v2;
                v21 = v17 - 1;
                v17 = v21;
                v18 = v20;
                while (v21 != 0) {
                    // 0x100003d74
                    v19 = v20;
                    v20 = v19 * v19 % v2;
                    v21 = v17 - 1;
                    v17 = v21;
                    v18 = v20;
                }
            }
            // 0x100003da4
            v22 = v18;
            v23 = v22 * v22 % v2;
            v9 = v23 * v9 % v2;
        }
    }
    // 0x100003e10
    return function_100003aa8();
}

// Address range: 0x100003e1c - 0x100003ed8
int64_t function_100003e1c(void) {
    // 0x100003e1c
    function_100003ae8();
    int64_t v1; // 0x100003e1c
    _printf("n = %llu\n", v1);
    _printf("p = %llu\n", v1);
    int32_t v2; // 0x100003e1c
    if (v2 % 2 == 0) {
        // 0x100003eb0
        _printf("No solution exists\n");
    } else {
        // 0x100003e7c
        _printf("root1 = %llu\n", v1);
        _printf("root2 = %llu\n", v1);
    }
    // 0x100003ec0
    return _printf((char *)0x100003f94);
}

// Address range: 0x100003ed8 - 0x100003f44
int64_t entry_point(void) {
    // 0x100003ed8
    function_100003e1c();
    function_100003e1c();
    function_100003e1c();
    function_100003e1c();
    function_100003e1c();
    return 0;
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(char * format, ...) {
    // 0x100003f44
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

