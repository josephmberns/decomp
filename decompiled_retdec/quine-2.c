//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f48(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ee8 - 0x100003f48
int64_t entry_point(void) {
    // 0x100003ee8
    int64_t v1; // 0x100003ee8
    _printf("#include <stdio.h>%cint main(){char*c=%c%s%c;printf(c,10,34,c,34,10);return 0;}%c", (char)v1, (char)v1, (char *)v1, (char)v1, (char)v1);
    return 0;
}

// Address range: 0x100003f48 - 0x100003f54
int32_t function_100003f48(char * format, ...) {
    // 0x100003f48
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 2

