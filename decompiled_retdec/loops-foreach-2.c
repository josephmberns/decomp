//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <unistd.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
void function_100003f68(int32_t status);
int32_t function_100003f74(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e80 - 0x100003f68
int64_t entry_point(void) {
    // 0x100003e80
    int64_t v1; // 0x100003e80
    char v2 = v1;
    char * v3 = "abcdefg"; // 0x100003f00
    _printf("loop 1 %c\n", v2);
    v3 = (char *)((int64_t)v3 + 1);
    char * v4 = "123456789"; // 0x100003ecc
    while (*v3 != 0) {
        // 0x100003ed4
        _printf("loop 1 %c\n", v2);
        v3 = (char *)((int64_t)v3 + 1);
        v4 = "123456789";
    }
    _printf("loop 2 %c\n", v2);
    char * v5 = (char *)((int64_t)v4 + 1); // 0x100003f58
    v4 = v5;
    while (*v5 != 0) {
        // 0x100003f2c
        _printf("loop 2 %c\n", v2);
        v5 = (char *)((int64_t)v4 + 1);
        v4 = v5;
    }
    // 0x100003f60
    return 0;
}

// Address range: 0x100003f68 - 0x100003f74
void function_100003f68(int32_t status) {
    // 0x100003f68
    _exit(status);
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(char * format, ...) {
    // 0x100003f74
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

