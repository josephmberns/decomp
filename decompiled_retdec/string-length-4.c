//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f44(char * format, ...);
int32_t function_100003f50(int16_t * s);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _wcslen(int16_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003ed4 - 0x100003f44
int64_t entry_point(void) {
    // 0x100003ed4
    _wcslen((int16_t *)"J0");
    int64_t v1; // 0x100003ed4
    _printf("Length in characters = %d\n", v1);
    _printf("Length in bytes      = %d\n", v1);
    return 0;
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(char * format, ...) {
    // 0x100003f44
    return _printf(format);
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(int16_t * s) {
    // 0x100003f50
    return _wcslen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

