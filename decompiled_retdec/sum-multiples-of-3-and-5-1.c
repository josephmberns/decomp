//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e58(void);
int32_t function_100003f80(char * format, ...);
int64_t function_100003f8c(char * nptr, char ** endptr, int32_t base);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int64_t _strtoull(char * a1, char ** a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x100003e58 - 0x100003f00
int64_t function_100003e58(void) {
    // 0x100003e58
    int64_t v1; // 0x100003e58
    if (v1 == 0) {
        // 0x100003ef4
        return 0;
    }
    int64_t result = 0; // 0x100003e7c
    uint64_t v2 = 0;
    int64_t v3 = v2 % 3 == 0 | v2 % 5 == 0 ? v2 : 0;
    result += v3;
    int64_t v4 = v2 + 1; // 0x100003ee8
    while (v4 != v1) {
        // 0x100003e84
        v2 = v4;
        v3 = v2 % 3 == 0 | v2 % 5 == 0 ? v2 : 0;
        result += v3;
        v4 = v2 + 1;
    }
    // 0x100003ef4
    return result;
}

// Address range: 0x100003f00 - 0x100003f80
int64_t entry_point(void) {
    // 0x100003f00
    int64_t v1; // 0x100003f00
    int64_t v2; // 0x100003f00
    if ((int32_t)v1 == 2) {
        // 0x100003f2c
        _strtoull((char *)*(int64_t *)(v1 + 8), NULL, 10);
        v2 = 0;
    }
    // 0x100003f54
    function_100003e58();
    _printf("%lld\n", v2);
    return 0;
}

// Address range: 0x100003f80 - 0x100003f8c
int32_t function_100003f80(char * format, ...) {
    // 0x100003f80
    return _printf(format);
}

// Address range: 0x100003f8c - 0x100003f98
int64_t function_100003f8c(char * nptr, char ** endptr, int32_t base) {
    // 0x100003f8c
    return _strtoull(nptr, endptr, base);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4
