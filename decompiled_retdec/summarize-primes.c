//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c80(void);
int32_t function_100003f28(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c80 - 0x100003e0c
int64_t function_100003c80(void) {
    // 0x100003c80
    int64_t v1; // 0x100003c80
    int32_t v2 = v1; // 0x100003c84
    if (v2 < 2 != (1 - v2 & v2) < 0) {
        // 0x100003dfc
        return false;
    }
    if (2 * v2 / 2 == v2) {
        // 0x100003dfc
        return v2 == 2;
    }
    if (v2 % 3 == 0) {
        // 0x100003dfc
        return v2 == 3;
    }
    int32_t v3 = 25 - v2; // 0x100003d4c
    if (v3 != 0 && v3 < 0 == (v3 & v2) < 0) {
        // 0x100003dfc
        return true;
    }
    int32_t v4 = 5; // 0x100003d54
    bool result = false; // 0x100003d78
    while (v2 % v4 != 0) {
        // 0x100003d94
        result = false;
        if (v2 % (v4 + 2) == 0) {
            // break -> 0x100003dfc
            break;
        }
        // 0x100003d3c
        v4 += 6;
        int32_t v5 = v4 * v4; // 0x100003d44
        int32_t v6 = v5 - v2; // 0x100003d4c
        result = true;
        if (v6 != 0 && v6 < 0 == ((v6 ^ v5) & (v5 ^ v2)) < 0) {
            // break -> 0x100003dfc
            break;
        }
        result = false;
    }
    // 0x100003dfc
    return result;
}

// Address range: 0x100003e0c - 0x100003f28
int64_t entry_point(void) {
    int32_t v1 = 1;
    int64_t v2; // 0x100003e0c
    if (function_100003c80() % 2 != 0) {
        // 0x100003e64
        if (function_100003c80() % 2 != 0) {
            // 0x100003e90
            _printf("The sum of %3d primes in [2, %3d] is %5d which is also prime\n", v2, v2, v2);
        }
    }
    int32_t v3 = v1 + 1; // 0x100003ee0
    while (v1 < 999 != (998 - v1 & v3) < 0) {
        // 0x100003e54
        v1 = v3;
        if (function_100003c80() % 2 != 0) {
            // 0x100003e64
            if (function_100003c80() % 2 != 0) {
                // 0x100003e90
                _printf("The sum of %3d primes in [2, %3d] is %5d which is also prime\n", v2, v2, v2);
            }
        }
        // 0x100003edc
        v3 = v1 + 1;
    }
    // 0x100003eec
    _printf("There are %d summerized primes in [%d, %d)\n", v2, v2, v2);
    return 0;
}

// Address range: 0x100003f28 - 0x100003f34
int32_t function_100003f28(char * format, ...) {
    // 0x100003f28
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

