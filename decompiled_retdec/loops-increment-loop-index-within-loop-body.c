//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d74(void);
int32_t function_100003f74(char * format, ...);
char * function_100003f80(int32_t category, char * locale);

// --------------------- Global Variables ---------------------

char * g1; // 0x100003f8c

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
char * _setlocale(int32_t a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003d74 - 0x100003eac
int64_t function_100003d74(void) {
    // 0x100003d74
    int64_t v1; // 0x100003d74
    int64_t v2 = v1;
    if (v2 == 2 * v2 / 2) {
        // 0x100003ea0
        return v2 == 2;
    }
    if (v2 % 3 == 0) {
        // 0x100003ea0
        return v2 == 3;
    }
    int64_t v3 = 25 - v2; // 0x100003e10
    if (v3 != 0 && v3 < 0 == (v3 & v2) < 0) {
        // 0x100003ea0
        return true;
    }
    int64_t v4 = 5; // 0x100003e18
    bool result = false; // 0x100003e3c
    while (v2 % v4 != 0) {
        // 0x100003e4c
        result = false;
        if (v2 % (v4 + 2) == 0) {
            // break -> 0x100003ea0
            break;
        }
        // 0x100003e00
        v4 += 6;
        int64_t v5 = v4 * v4; // 0x100003e08
        int64_t v6 = v5 - v2; // 0x100003e10
        result = true;
        if (v6 != 0 && v6 < 0 == ((v6 ^ v5) & (v5 ^ v2)) < 0) {
            // break -> 0x100003ea0
            break;
        }
        result = false;
    }
    // 0x100003ea0
    return result;
}

// Address range: 0x100003eac - 0x100003f74
int64_t entry_point(void) {
    // 0x100003eac
    _setlocale(4, (char *)&g1);
    int32_t v1 = 0;
    int32_t v2 = v1; // 0x100003f00
    int64_t v3; // 0x100003eac
    if ((int32_t)function_100003d74() != 0) {
        // 0x100003f08
        _printf("n = %-2d  %'19lld\n", (int64_t)&g1, v3);
        v2 = v1 + 1;
    }
    // 0x100003f54
    while (v2 < 42 != (41 - v2 & v2) < 0) {
        // 0x100003ef0
        v1 = v2;
        v2 = v1;
        if ((int32_t)function_100003d74() != 0) {
            // 0x100003f08
            _printf("n = %-2d  %'19lld\n", (int64_t)&g1, v3);
            v2 = v1 + 1;
        }
    }
    // 0x100003f64
    return 0;
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(char * format, ...) {
    // 0x100003f74
    return _printf(format);
}

// Address range: 0x100003f80 - 0x100003f8c
char * function_100003f80(int32_t category, char * locale) {
    // 0x100003f80
    return _setlocale(category, locale);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4

