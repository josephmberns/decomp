//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f8c(char * s);

// ------- Dynamically Linked Functions Without Header --------

int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003f58 - 0x100003f8c
int64_t entry_point(void) {
    // 0x100003f58
    _puts("Hello world!");
    return 0;
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * s) {
    // 0x100003f8c
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 2

