//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
char * function_100003f80(char * name);
int32_t function_100003f8c(char * s);

// ------- Dynamically Linked Functions Without Header --------

char * _getenv(char * a1);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003f28 - 0x100003f80
int64_t entry_point(void) {
    // 0x100003f28
    _puts(_getenv("HOME"));
    _puts(_getenv("PATH"));
    _puts(_getenv("USER"));
    return 0;
}

// Address range: 0x100003f80 - 0x100003f8c
char * function_100003f80(char * name) {
    // 0x100003f80
    return _getenv(name);
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * s) {
    // 0x100003f8c
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

