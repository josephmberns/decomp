//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f98(char * s);

// --------------------- Global Variables ---------------------

char * g1 = "\xc2\xa3"; // 0x100003fa4

// ------- Dynamically Linked Functions Without Header --------

int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003f58 - 0x100003f98
int64_t entry_point(void) {
    // 0x100003f58
    _puts((char *)0x100003fa4);
    _puts((char *)&g1);
    return 0;
}

// Address range: 0x100003f98 - 0x100003fa4
int32_t function_100003f98(char * s) {
    // 0x100003f98
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 2
