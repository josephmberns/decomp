//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e18(void);
int64_t function_100003e78(void);
int32_t function_100003f8c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e18 - 0x100003e78
int64_t function_100003e18(void) {
    int32_t result = 0; // 0x100003e24
    int64_t v1; // 0x100003e18
    uint32_t v2 = (int32_t)v1; // 0x100003e24
    result += v2 % 10;
    while (v2 >= 10) {
        // 0x100003e28
        v2 /= 10;
        result += v2 % 10;
    }
    // 0x100003e6c
    return result;
}

// Address range: 0x100003e78 - 0x100003ee4
int64_t function_100003e78(void) {
    uint32_t result = 1;
    int32_t v1 = result + 1; // 0x100003eb8
    int64_t v2; // 0x100003e78
    while ((int32_t)v2 != (int32_t)function_100003e18()) {
        // 0x100003e94
        result = v1;
        v1 = result + 1;
    }
    // 0x100003ed4
    return result;
}

// Address range: 0x100003ee4 - 0x100003f8c
int64_t entry_point(void) {
    for (int32_t i = 1; i < 71; i++) {
        // 0x100003f14
        function_100003e78();
        int64_t v1; // 0x100003ee4
        _printf("%9u", (int32_t)v1);
        if (i % 10 == 0) {
            // 0x100003f58
            _printf((char *)0x100003f9c);
        }
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

// Detected functions: 4

