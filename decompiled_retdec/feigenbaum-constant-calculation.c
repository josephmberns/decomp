//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d78(void);
int32_t function_100003f74(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d78 - 0x100003f48
int64_t function_100003d78(void) {
    // 0x100003d78
    _printf(" i       d\n");
    uint32_t v1 = 2;
    int32_t v2 = 1 << v1; // 0x100003e48
    int32_t v3 = 1 - v2; // 0x100003e4c
    int32_t v4 = 1;
    int32_t v5; // 0x100003d78
    int32_t v6; // 0x100003e94
    int32_t v7; // 0x100003e4c
    if (v3 == 0 || v3 < 0 != (v3 & v2) < 0) {
        v6 = 2;
        v7 = v6 - v2;
        v5 = v6;
        while (v7 == 0 || v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0) {
            // 0x100003e5c
            v6 = v5 + 1;
            v7 = v6 - v2;
            v5 = v6;
        }
    }
    int32_t v8 = v4 + 1; // 0x100003ec0
    while (v4 == 9 || v4 < 9 != (8 - v4 & v8) < 0) {
        // 0x100003e3c
        v4 = v8;
        if (v3 == 0 || v3 < 0 != (v3 & v2) < 0) {
            v6 = 2;
            v7 = v6 - v2;
            v5 = v6;
            while (v7 == 0 || v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0) {
                // 0x100003e5c
                v6 = v5 + 1;
                v7 = v6 - v2;
                v5 = v6;
            }
        }
        // 0x100003ea0
        v8 = v4 + 1;
    }
    // 0x100003ecc
    int64_t v9; // 0x100003d78
    int128_t v10; // 0x100003d78
    int32_t result = _printf("%2d    %.8f\n", v9, (float64_t)(int64_t)v10); // 0x100003f0c
    int32_t v11 = v1 + 1; // 0x100003f30
    while (v1 == 12 || v1 < 12 != (11 - v1 & v11) < 0) {
        // 0x100003de0
        v1 = v11;
        v2 = 1 << v1;
        v3 = 1 - v2;
        v4 = 1;
        if (v3 == 0 || v3 < 0 != (v3 & v2) < 0) {
            v6 = 2;
            v7 = v6 - v2;
            v5 = v6;
            while (v7 == 0 || v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0) {
                // 0x100003e5c
                v6 = v5 + 1;
                v7 = v6 - v2;
                v5 = v6;
            }
        }
        // 0x100003ea0
        v8 = v4 + 1;
        while (v4 == 9 || v4 < 9 != (8 - v4 & v8) < 0) {
            // 0x100003e3c
            v4 = v8;
            if (v3 == 0 || v3 < 0 != (v3 & v2) < 0) {
                v6 = 2;
                v7 = v6 - v2;
                v5 = v6;
                while (v7 == 0 || v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0) {
                    // 0x100003e5c
                    v6 = v5 + 1;
                    v7 = v6 - v2;
                    v5 = v6;
                }
            }
            // 0x100003ea0
            v8 = v4 + 1;
        }
        // 0x100003ecc
        result = _printf("%2d    %.8f\n", v9, (float64_t)(int64_t)v10);
        v11 = v1 + 1;
    }
    // 0x100003f3c
    return result;
}

// Address range: 0x100003f48 - 0x100003f74
int64_t entry_point(void) {
    // 0x100003f48
    function_100003d78();
    return 0;
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(char * format, ...) {
    // 0x100003f74
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3
