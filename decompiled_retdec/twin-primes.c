//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b08(void);
int64_t function_100003dd4(void);
int64_t function_100003e9c(void);
int32_t function_100003f64(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003b08 - 0x100003dd4
int64_t function_100003b08(void) {
    // 0x100003b08
    int64_t v1; // 0x100003b08
    int64_t v2 = v1;
    if (v2 < 2 != (1 - v2 & v2) < 0) {
        // 0x100003dc4
        return false;
    }
    if (v2 == 2 * v2 / 2) {
        // 0x100003dc4
        return v2 == 2;
    }
    if (v2 % 3 == 0) {
        // 0x100003dc4
        return v2 == 3;
    }
    if (v2 % 5 == 0) {
        // 0x100003dc4
        return v2 == 5;
    }
    if (v2 % 7 == 0) {
        // 0x100003dc4
        return v2 == 7;
    }
    if (v2 % 11 == 0) {
        // 0x100003dc4
        return v2 == 11;
    }
    if (v2 % 13 == 0) {
        // 0x100003dc4
        return v2 == 13;
    }
    if (v2 % 17 == 0) {
        // 0x100003dc4
        return v2 == 17;
    }
    if (v2 % 19 == 0) {
        // 0x100003dc4
        return v2 == 19;
    }
    int64_t v3 = 529 - v2; // 0x100003d54
    if (v3 != 0 && v3 < 0 == (v3 & v2) < 0) {
        // 0x100003dc4
        return true;
    }
    int64_t v4 = 23; // 0x100003d5c
    bool result = false; // 0x100003d80
    while (v2 % v4 != 0) {
        // 0x100003d44
        v4 += 2;
        int64_t v5 = v4 * v4; // 0x100003d4c
        int64_t v6 = v5 - v2; // 0x100003d54
        result = true;
        if (v6 != 0 && v6 < 0 == ((v6 ^ v5) & (v5 ^ v2)) < 0) {
            // break -> 0x100003dc4
            break;
        }
        result = false;
    }
    // 0x100003dc4
    return result;
}

// Address range: 0x100003dd4 - 0x100003e9c
int64_t function_100003dd4(void) {
    // 0x100003dd4
    int64_t v1; // 0x100003dd4
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x100003e08
    int64_t v3 = 5 - v2; // 0x100003e0c
    int64_t v4 = 5; // 0x100003e14
    if (v3 != 0 && v3 < 0 == (v3 & v2) < 0) {
        // 0x100003e8c
        return 0;
    }
    int32_t result = 0; // 0x100003e14
    int64_t v5 = 0;
    int64_t v6 = function_100003b08() % 2; // 0x100003e38
    result += (int32_t)(true == (v6 != 0));
    v4++;
    while (v4 - v2 == 0 || v4 - v2 < 0 != ((v4 - v2 ^ v4) & (v4 ^ v2)) < 0) {
        int64_t v7 = v5;
        v5 = v6;
        v6 = function_100003b08() % 2;
        result += (int32_t)(v7 != 0 == (v6 != 0));
        v4++;
    }
    // 0x100003e8c
    return result;
}

// Address range: 0x100003e9c - 0x100003eec
int64_t function_100003e9c(void) {
    // 0x100003e9c
    function_100003dd4();
    int64_t v1; // 0x100003e9c
    return _printf("Number of twin prime pairs less than %d is %d\n", v1, v1);
}

// Address range: 0x100003eec - 0x100003f64
int64_t entry_point(void) {
    // 0x100003eec
    function_100003e9c();
    function_100003e9c();
    function_100003e9c();
    function_100003e9c();
    function_100003e9c();
    function_100003e9c();
    function_100003e9c();
    function_100003e9c();
    return 0;
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * format, ...) {
    // 0x100003f64
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

