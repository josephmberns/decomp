//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ee8(void);
int32_t function_100003f70(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ee8 - 0x100003f14
int64_t function_100003ee8(void) {
    // 0x100003ee8
    return (int64_t)"James";
}

// Address range: 0x100003f14 - 0x100003f70
int64_t entry_point(void) {
    // 0x100003f14
    function_100003ee8();
    int64_t v1; // 0x100003f14
    _printf("The name's %s. %s %s.\n", (char *)v1, (char *)v1, (char *)v1);
    return 0;
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(char * format, ...) {
    // 0x100003f70
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

