//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ed0(void);
int32_t function_100003f8c(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x100000cfeedfacf; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ed0 - 0x100003f0c
int64_t function_100003ed0(void) {
    int64_t v1 = g1;
    int64_t v2 = v1 * v1; // 0x100003ee0
    int64_t result = -0xf4240 * v2 / 0x3b9aca00 + v2 / 1000; // 0x100003efc
    g1 = result;
    return result;
}

// Address range: 0x100003f0c - 0x100003f8c
int64_t entry_point(void) {
    // 0x100003f0c
    g1 = 0xa4db0;
    int32_t v1 = 1;
    function_100003ed0();
    int64_t v2; // 0x100003f0c
    _printf("%lld\n", v2);
    int32_t v3 = v1 + 1; // 0x100003f70
    while (v1 == 4 || v1 < 4 != (3 - v1 & v3) < 0) {
        // 0x100003f50
        v1 = v3;
        function_100003ed0();
        _printf("%lld\n", v2);
        v3 = v1 + 1;
    }
    // 0x100003f7c
    return 0;
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

