//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003dec(void);
int64_t function_100003e54(void);
int32_t function_100003f94(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003dec - 0x100003e54
int64_t function_100003dec(void) {
    int64_t result = 1; // 0x100003e08
    int64_t v1; // 0x100003dec
    if ((int32_t)v1 != 0) {
        // 0x100003e1c
        function_100003dec();
        result = v1 - function_100003e54() & 0xffffffff;
    }
    // 0x100003e44
    return result;
}

// Address range: 0x100003e54 - 0x100003ebc
int64_t function_100003e54(void) {
    int64_t result = 0; // 0x100003e70
    int64_t v1; // 0x100003e54
    if ((int32_t)v1 != 0) {
        // 0x100003e84
        function_100003e54();
        result = v1 - function_100003dec() & 0xffffffff;
    }
    // 0x100003eac
    return result;
}

// Address range: 0x100003ebc - 0x100003f94
int64_t entry_point(void) {
    int64_t v1; // 0x100003ebc
    for (int32_t i = 0; i < 20; i++) {
        // 0x100003ee8
        function_100003dec();
        _printf("%2d ", v1);
    }
    // 0x100003f1c
    _printf((char *)0x100003fa5);
    for (int32_t i = 0; i < 20; i++) {
        // 0x100003f44
        function_100003e54();
        _printf("%2d ", v1);
    }
    // 0x100003f78
    _printf("\n");
    return 0;
}

// Address range: 0x100003f94 - 0x100003fa0
int32_t function_100003f94(char * format, ...) {
    // 0x100003f94
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4

