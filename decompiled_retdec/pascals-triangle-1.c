//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e34(void);
int32_t function_100003f90(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e34 - 0x100003f60
int64_t function_100003e34(void) {
    // 0x100003e34
    int64_t v1; // 0x100003e34
    int32_t v2 = v1; // 0x100003e40
    if (v2 == 0) {
        // 0x100003f54
        int64_t result; // 0x100003e34
        return result;
    }
    uint32_t v3 = 0;
    uint32_t v4 = 2 * ((v3 ^ 0x7fffffff) + v2); // 0x100003e8c
    int32_t v5; // 0x100003e34
    int32_t v6; // 0x100003eb4
    if (v4 != 0) {
        _printf(" ");
        v6 = 2;
        v5 = v6;
        while (v6 >= v4 != v6 != v4) {
            // 0x100003ea0
            _printf(" ");
            v6 = v5 + 1;
            v5 = v6;
        }
    }
    // 0x100003ec8
    int32_t v7; // 0x100003e34
    int32_t v8; // 0x100003f14
    if (v3 == 0 != v3 != 0) {
        _printf("%3d ", v1);
        v8 = 1;
        v7 = v8;
        while (v3 <= v8 != v3 != v8) {
            // 0x100003ee0
            _printf("%3d ", v1);
            v8 = v7 + 1;
            v7 = v8;
        }
    }
    int32_t result2 = _printf((char *)0x100003fa3); // 0x100003f3c
    int32_t v9 = v3 + 1; // 0x100003f48
    while (v9 != v2) {
        // 0x100003e74
        v3 = v9;
        v4 = 2 * ((v3 ^ 0x7fffffff) + v2);
        if (v4 != 0) {
            _printf(" ");
            v6 = 2;
            v5 = v6;
            while (v6 >= v4 != v6 != v4) {
                // 0x100003ea0
                _printf(" ");
                v6 = v5 + 1;
                v5 = v6;
            }
        }
        // 0x100003ec8
        if (v3 == 0 != v3 != 0) {
            _printf("%3d ", v1);
            v8 = 1;
            v7 = v8;
            while (v3 <= v8 != v3 != v8) {
                // 0x100003ee0
                _printf("%3d ", v1);
                v8 = v7 + 1;
                v7 = v8;
            }
        }
        // 0x100003f34
        result2 = _printf((char *)0x100003fa3);
        v9 = v3 + 1;
    }
    // 0x100003f54
    return result2;
}

// Address range: 0x100003f60 - 0x100003f90
int64_t entry_point(void) {
    // 0x100003f60
    function_100003e34();
    return 0;
}

// Address range: 0x100003f90 - 0x100003f9c
int32_t function_100003f90(char * format, ...) {
    // 0x100003f90
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

