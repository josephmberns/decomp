//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e70(void);
int32_t function_100003f8c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e70 - 0x100003f3c
int64_t function_100003e70(void) {
    // 0x100003e70
    int64_t v1; // 0x100003e70
    if ((int32_t)v1 == 0) {
        // 0x100003f2c
        return 2 * v1 & 0xffffffff;
    }
    int64_t v2; // 0x100003e70
    if ((int32_t)v1 != 0) {
        // 0x100003ed4
        function_100003e70();
        function_100003e70();
        v2 = function_100003e70();
    }
    // 0x100003f2c
    return v2 & 0xffffffff;
}

// Address range: 0x100003f3c - 0x100003f8c
int64_t entry_point(void) {
    // 0x100003f3c
    function_100003e70();
    _printf("F1(3,3) = %d", 3);
    return 0;
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

