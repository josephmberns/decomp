//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f80(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003f34 - 0x100003f80
int64_t entry_point(void) {
    // 0x100003f34
    int64_t v1; // 0x100003f34
    _printf("Mary had a %s lamb.\n", (char *)v1);
    return 0;
}

// Address range: 0x100003f80 - 0x100003f8c
int32_t function_100003f80(char * format, ...) {
    // 0x100003f80
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 2
