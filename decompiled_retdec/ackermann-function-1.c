//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e10(void);
int32_t function_100003f8c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e10 - 0x100003eb4
int64_t function_100003e10(void) {
    // 0x100003e10
    int64_t v1; // 0x100003e10
    if ((int32_t)v1 == 0) {
        // 0x100003ea4
        return v1 + 1 & 0xffffffff;
    }
    int64_t v2 = function_100003e10(); // 0x100003e54
    if ((int32_t)v1 != 0) {
        // 0x100003e74
        v2 = function_100003e10();
    }
    // 0x100003ea4
    return v2 & 0xffffffff;
}

// Address range: 0x100003eb4 - 0x100003f8c
int64_t entry_point(void) {
    int32_t v1 = 0;
    int32_t v2 = 6 - v1; // 0x100003ef4
    int32_t v3 = -v2; // 0x100003ef8
    int32_t v4 = 0; // 0x100003f00
    int64_t v5; // 0x100003eb4
    int32_t v6; // 0x100003f5c
    int32_t v7; // 0x100003ef8
    if (v3 < 0 != (v2 & v3) < 0) {
        function_100003e10();
        _printf("A(%d, %d) = %d\n", (int64_t)v4, v5, v5);
        v6 = v4 + 1;
        v7 = v6 - v2;
        v4 = v6;
        while (v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0) {
            // 0x100003f08
            function_100003e10();
            _printf("A(%d, %d) = %d\n", (int64_t)v4, v5, v5);
            v6 = v4 + 1;
            v7 = v6 - v2;
            v4 = v6;
        }
    }
    int32_t v8 = v1 + 1; // 0x100003f70
    while (v1 == 3 || v1 < 3 != (2 - v1 & v8) < 0) {
        // 0x100003ee8
        v1 = v8;
        v2 = 6 - v1;
        v3 = -v2;
        v4 = 0;
        if (v3 < 0 != (v2 & v3) < 0) {
            function_100003e10();
            _printf("A(%d, %d) = %d\n", (int64_t)v4, v5, v5);
            v6 = v4 + 1;
            v7 = v6 - v2;
            v4 = v6;
            while (v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0) {
                // 0x100003f08
                function_100003e10();
                _printf("A(%d, %d) = %d\n", (int64_t)v4, v5, v5);
                v6 = v4 + 1;
                v7 = v6 - v2;
                v4 = v6;
            }
        }
        // 0x100003f6c
        v8 = v1 + 1;
    }
    // 0x100003f7c
    return 0;
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

