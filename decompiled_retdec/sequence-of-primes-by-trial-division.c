//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d68(void);
int32_t function_100003f34(char * format, ...);
int32_t function_100003f40(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _scanf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d68 - 0x100003e34
int64_t function_100003d68(void) {
    // 0x100003d68
    int64_t v1; // 0x100003d68
    uint32_t v2 = (int32_t)v1; // 0x100003d6c
    if (v2 < 2 || v2 % 2 == 0) {
        // 0x100003e28
        return v2 == 2;
    }
    // 0x100003dbc
    if (v2 <= 11 == v2 >= 12) {
        // 0x100003e28
        return 1;
    }
    uint32_t v3 = 3; // 0x100003dd4
    int64_t result = 0; // 0x100003df8
    while (v2 % v3 != 0) {
        // 0x100003dbc
        v3 += 2;
        uint32_t v4 = v2 / v3; // 0x100003dc8
        result = 1;
        if (v3 >= v4 == (v3 != v4)) {
            // break -> 0x100003e28
            break;
        }
        result = 0;
    }
    // 0x100003e28
    return result;
}

// Address range: 0x100003e34 - 0x100003f34
int64_t entry_point(void) {
    // 0x100003e34
    int32_t v1; // 0x100003e34
    uint32_t v2 = v1;
    uint32_t v3 = v1;
    _printf("Enter lower and upper bounds: ");
    int64_t v4; // 0x100003e34
    _scanf("%ld%ld", (int32_t *)v4, (int32_t *)v4);
    int32_t v5 = v4;
    if (v3 >= v2 == (v3 != v2)) {
        // 0x100003ef0
        _printf("\n\nPrime numbers found in [%ld,%ld] : %ld", v5, (int32_t)v4, (int32_t)v4);
        return 0;
    }
    if ((int32_t)function_100003d68() == 1) {
        // 0x100003eb0
        _printf("\n%ld", v5);
    }
    // 0x100003ee0
    int32_t v6; // 0x100003e34
    int32_t v7 = v6 + 1; // 0x100003ee4
    while (v7 >= v2 != v7 != v2) {
        // 0x100003e98
        if ((int32_t)function_100003d68() == 1) {
            // 0x100003eb0
            _printf("\n%ld", v5);
        }
        // 0x100003ee0
        v7++;
    }
    // 0x100003ef0
    _printf("\n\nPrime numbers found in [%ld,%ld] : %ld", v5, (int32_t)v4, (int32_t)v4);
    return 0;
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _printf(format);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(char * format, ...) {
    // 0x100003f40
    return _scanf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4

