//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f8c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e80 - 0x100003f8c
int64_t entry_point(void) {
    // 0x100003e80
    _printf("1 ");
    int32_t v1 = 2;
    int32_t v2 = 2;
    int32_t v3 = v2 - v1; // 0x100003edc
    int32_t v4 = v2 + 1; // 0x100003ee4
    while (v3 == 0 || v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0) {
        // 0x100003ed4
        v2 = v4;
        v3 = v2 - v1;
        v4 = v2 + 1;
    }
    // 0x100003f40
    int64_t v5; // 0x100003e80
    _printf("%d ", v5);
    int32_t v6 = v1 + 1; // 0x100003f64
    while (v1 == 14 || v1 < 14 != (13 - v1 & v6) < 0) {
        // 0x100003ed4
        v1 = v6;
        v2 = 2;
        v3 = v2 - v1;
        v4 = v2 + 1;
        while (v3 == 0 || v3 < 0 != ((v3 ^ v2) & (v2 ^ v1)) < 0) {
            // 0x100003ed4
            v2 = v4;
            v3 = v2 - v1;
            v4 = v2 + 1;
        }
        // 0x100003f40
        _printf("%d ", v5);
        v6 = v1 + 1;
    }
    // 0x100003f70
    _printf((char *)0x100003fa3);
    return 0;
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 2
