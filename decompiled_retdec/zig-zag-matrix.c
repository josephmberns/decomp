//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f74(char * nptr);
int64_t * function_100003f80(int32_t size);
int32_t function_100003f8c(char * format, ...);
int32_t function_100003f98(int32_t c);

// ------- Dynamically Linked Functions Without Header --------

int32_t _atoi(char * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003d08 - 0x100003f74
int64_t entry_point(void) {
    // 0x100003d08
    int64_t v1; // 0x100003d08
    int32_t v2 = v1; // 0x100003d18
    int32_t v3; // 0x100003d08
    if (v2 < 2 == (1 - v2 & v2) < 0) {
        int32_t v4 = _atoi((char *)*(int64_t *)(v1 + 8)); // 0x100003d3c
        v3 = v4;
        if (v4 < 1) {
            // 0x100003d54
            v3 = 5;
            goto lab_0x100003d60;
        } else {
            goto lab_0x100003d60;
        }
    } else {
        // 0x100003d54
        v3 = 5;
        goto lab_0x100003d60;
    }
  lab_0x100003d60:;
    int32_t v5 = v3;
    int64_t * v6 = _malloc(4 * v5 * v5); // 0x100003d74
    int32_t v7 = 2 * v5; // 0x100003d90
    int32_t v8 = -v7; // 0x100003d90
    if (v8 < 0 != (v7 & v8) < 0) {
        int32_t v9 = 0;
        uint32_t v10 = 0;
        int32_t v11 = v10 - v5; // 0x100003da8
        int32_t v12 = v11 < 0 == ((v11 ^ v10) & (v10 ^ v5)) < 0 ? v11 + 1 : 0;
        int32_t v13 = v12 - v10; // 0x100003df0
        int32_t v14 = v9; // 0x100003e00
        int32_t v15; // 0x100003d08
        int32_t v16; // 0x100003d08
        int32_t v17; // 0x100003d08
        int32_t v18; // 0x100003e10
        int32_t v19; // 0x100003e34
        int32_t v20; // 0x100003eb4
        int32_t v21; // 0x100003df0
        if (v13 == 0 || v13 < 0 != ((v13 ^ v12) & (v12 ^ v10)) < 0) {
            // 0x100003e20
            v15 = v9;
            v17 = v12;
            v18 = v17 - v5;
            v14 = v15;
            while (v18 < 0 != ((v18 ^ v17) & (v17 ^ v5)) < 0) {
                if (v10 % 2 == 0) {
                    // 0x100003e78
                    v16 = (v10 - v17) * v5 + v17;
                } else {
                    // 0x100003e58
                    v16 = v17 * (v5 - 1) + v10;
                }
                // 0x100003e9c
                v19 = v15 + 1;
                *(int32_t *)((int64_t)(4 * v16) + (int64_t)v6) = v15;
                v20 = v17 + 1;
                v21 = v20 - v10;
                v14 = v19;
                if (v21 != 0 && v21 < 0 == ((v21 ^ v20) & (v20 ^ v10)) < 0) {
                    // break -> 0x100003ec4
                    break;
                }
                v15 = v19;
                v17 = v20;
                v18 = v17 - v5;
                v14 = v15;
            }
        }
        int32_t v22 = v10 + 1; // 0x100003ec8
        while (v22 - v7 < 0 != ((v22 - v7 ^ v22) & (v22 ^ v7)) < 0) {
            // 0x100003da0
            v9 = v14;
            v10 = v22;
            v11 = v10 - v5;
            v12 = v11 < 0 == ((v11 ^ v10) & (v10 ^ v5)) < 0 ? v11 + 1 : 0;
            v13 = v12 - v10;
            v14 = v9;
            if (v13 == 0 || v13 < 0 != ((v13 ^ v12) & (v12 ^ v10)) < 0) {
                // 0x100003e20
                v15 = v9;
                v17 = v12;
                v18 = v17 - v5;
                v14 = v15;
                while (v18 < 0 != ((v18 ^ v17) & (v17 ^ v5)) < 0) {
                    if (v10 % 2 == 0) {
                        // 0x100003e78
                        v16 = (v10 - v17) * v5 + v17;
                    } else {
                        // 0x100003e58
                        v16 = v17 * (v5 - 1) + v10;
                    }
                    // 0x100003e9c
                    v19 = v15 + 1;
                    *(int32_t *)((int64_t)(4 * v16) + (int64_t)v6) = v15;
                    v20 = v17 + 1;
                    v21 = v20 - v10;
                    v14 = v19;
                    if (v21 != 0 && v21 < 0 == ((v21 ^ v20) & (v20 ^ v10)) < 0) {
                        // break -> 0x100003ec4
                        break;
                    }
                    v15 = v19;
                    v17 = v20;
                    v18 = v17 - v5;
                    v14 = v15;
                }
            }
            // 0x100003ec4
            v22 = v10 + 1;
        }
    }
    int32_t v23 = v5 * v5; // 0x100003ee8
    int32_t v24 = -v23; // 0x100003eec
    if (v24 < 0 == (v23 & v24) < 0) {
        // 0x100003f64
        return 0;
    }
    _printf("%3d", v1);
    int32_t v25 = 1; // 0x100003f28
    _putchar(v25 % v5 == 0 ? 10 : 32);
    int32_t v26 = v25 - v23; // 0x100003eec
    int32_t v27 = v25; // 0x100003ef4
    while (v26 < 0 != ((v26 ^ v25) & (v25 ^ v23)) < 0) {
        // 0x100003efc
        _printf("%3d", v1);
        v25 = v27 + 1;
        _putchar(v25 % v5 == 0 ? 10 : 32);
        v26 = v25 - v23;
        v27 = v25;
    }
    // 0x100003f64
    return 0;
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(char * nptr) {
    // 0x100003f74
    return _atoi(nptr);
}

// Address range: 0x100003f80 - 0x100003f8c
int64_t * function_100003f80(int32_t size) {
    // 0x100003f80
    return _malloc(size);
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// Address range: 0x100003f98 - 0x100003fa4
int32_t function_100003f98(int32_t c) {
    // 0x100003f98
    return _putchar(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

