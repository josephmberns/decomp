//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003cb0(void);
int64_t function_100003d28(void);
int32_t function_100003f70(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003cb0 - 0x100003d28
int64_t function_100003cb0(void) {
    // 0x100003cb0
    int64_t v1; // 0x100003cb0
    int32_t v2 = v1; // 0x100003cb4
    int32_t v3 = v2; // 0x100003ccc
    if (v2 == 0) {
        // 0x100003d1c
        return 0;
    }
    int32_t result = 0; // 0x100003ccc
    int32_t v4 = v3 % 10;
    result += v4 * v4;
    while (v3 >= 10) {
        // 0x100003cd4
        v3 /= 10;
        v4 = v3 % 10;
        result += v4 * v4;
    }
    // 0x100003d1c
    return result;
}

// Address range: 0x100003d28 - 0x100003dec
int64_t function_100003d28(void) {
    int64_t v1; // 0x100003d28
    int32_t v2 = v1;
    int32_t v3 = v2 - 999; // 0x100003d40
    int64_t v4 = function_100003cb0();
    while (v3 != 0 && v3 < 0 == (998 - v2 & v2) < 0) {
        // 0x100003d3c
        v2 = v4;
        v3 = v2 - 999;
        v4 = function_100003cb0();
    }
    // 0x100003d70
    if (v2 != (int32_t)v4 != (int32_t)v4 != 1) {
        // 0x100003dd0
        return v2 == 1;
    }
    int32_t v5 = function_100003cb0();
    function_100003cb0();
    int32_t v6 = function_100003cb0();
    while (v5 != v6 == (v6 != 1)) {
        // 0x100003db0
        v5 = function_100003cb0();
        function_100003cb0();
        v6 = function_100003cb0();
    }
    // 0x100003dd0
    return v5 == 1;
}

// Address range: 0x100003dec - 0x100003f70
int64_t entry_point(void) {
    int32_t v1 = 8; // 0x100003e0c
    int64_t v2; // 0x100003dec
    while (true) {
        int32_t v3 = v1;
        if (v3 == 0) {
            // 0x100003e48
            if (_printf("\n") != 0) {
                // break -> 0x100003eac
                break;
            }
        }
        // 0x100003e54
        v1 = v3;
        if ((int32_t)function_100003d28() != 0) {
            // 0x100003e6c
            _printf("%d ", v2);
            v1 = v3 - 1;
        }
    }
    // 0x100003eac
    _printf("The %dth happy number: ", v2);
    int32_t v4 = 0xf4240; // 0x100003f10
    while (true) {
        int32_t v5 = v4;
        v4 = v5;
        if ((int32_t)function_100003d28() != 0) {
            // 0x100003f0c
            v4 = v5 - 1;
            if (v4 == 0) {
                // break -> 0x100003f60
                break;
            }
        }
    }
    // 0x100003f60
    _printf("%d\n", v2);
    return 0;
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(char * format, ...) {
    // 0x100003f70
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4

