//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------------ Structures ------------------------

struct stat {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    int32_t e10;
    int32_t e11;
    int32_t e12;
    int32_t e13;
    int32_t e14;
    int32_t e15;
    int32_t e16;
    int32_t e17;
    int32_t e18;
    int32_t e19;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f74(char * format, ...);
int32_t function_100003f80(char * file, struct stat * buf);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _stat(char * a1, struct stat * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003ef8 - 0x100003f74
int64_t entry_point(void) {
    // 0x100003ef8
    int64_t v1; // bp-168, 0x100003ef8
    _stat("input.txt", (struct stat *)&v1);
    int32_t v2 = &v1; // 0x100003f3c
    _printf("%ld\n", v2);
    _stat("/input.txt", (struct stat *)&v1);
    _printf("%ld\n", v2);
    return 0;
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(char * format, ...) {
    // 0x100003f74
    return _printf(format);
}

// Address range: 0x100003f80 - 0x100003f8c
int32_t function_100003f80(char * file, struct stat * buf) {
    // 0x100003f80
    return _stat(file, buf);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

