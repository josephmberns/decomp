//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f90(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003f5c - 0x100003f90
int64_t entry_point(void) {
    // 0x100003f5c
    _printf("Hi There.");
    return 0;
}

// Address range: 0x100003f90 - 0x100003f9c
int32_t function_100003f90(char * format, ...) {
    // 0x100003f90
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 2
