//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e50(void);
int32_t function_100003f7c(char * format, ...);
int32_t function_100003f88(int32_t c);
int32_t function_100003f94(char * s);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003e50 - 0x100003f34
int64_t function_100003e50(void) {
    // 0x100003e50
    int64_t v1; // 0x100003e50
    if ((int32_t)v1 != 0) {
        // 0x100003ed8
        function_100003e50();
        // 0x100003f28
        return function_100003e50();
    }
    // 0x100003e7c
    _putchar(91);
    if (v1 == 0) {
        // 0x100003f28
        return _puts(" ]");
    }
    _printf(" %s", (char *)v1);
    int64_t v2; // 0x100003e50
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x100003ebc
    // 0x100003e9c
    while (v3 != 0) {
        // 0x100003e9c
        _printf(" %s", (char *)v1);
        v3 += 8;
    }
    // 0x100003f28
    return _puts(" ]");
}

// Address range: 0x100003f34 - 0x100003f7c
int64_t entry_point(void) {
    // 0x100003f34
    function_100003e50();
    return 0;
}

// Address range: 0x100003f7c - 0x100003f88
int32_t function_100003f7c(char * format, ...) {
    // 0x100003f7c
    return _printf(format);
}

// Address range: 0x100003f88 - 0x100003f94
int32_t function_100003f88(int32_t c) {
    // 0x100003f88
    return _putchar(c);
}

// Address range: 0x100003f94 - 0x100003fa0
int32_t function_100003f94(char * s) {
    // 0x100003f94
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5
