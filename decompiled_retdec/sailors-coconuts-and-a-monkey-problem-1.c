//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003df4(void);
int32_t function_100003f8c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003df4 - 0x100003ed8
int64_t function_100003df4(void) {
    // 0x100003df4
    int64_t v1; // 0x100003df4
    int32_t v2 = v1; // 0x100003df8
    int32_t v3 = v1; // 0x100003dfc
    int32_t v4 = v2; // 0x100003e18
    int32_t v5 = v3; // 0x100003e18
    int64_t result; // 0x100003df4
    if (v2 == 0) {
      lab_0x100003e7c:
        // 0x100003e7c
        result = 0;
        if (v5 != 0) {
            // 0x100003e98
            result = v5 % v2 == 0;
        }
    } else {
        int32_t v6 = v3; // 0x100003e70
        result = 0;
        while (v6 % v2 == 1) {
            // 0x100003e50
            v4--;
            v6 += -1 - v6 / v2;
            v5 = v6;
            if (v4 == 0) {
                goto lab_0x100003e7c;
            }
            result = 0;
        }
    }
    // 0x100003ecc
    return result;
}

// Address range: 0x100003ed8 - 0x100003f8c
int64_t entry_point(void) {
    for (int32_t i = 2; i < 10; i++) {
        uint32_t v1 = 0;
        int32_t v2 = v1 + 1; // 0x100003f24
        while ((int32_t)function_100003df4() == 0) {
            // 0x100003f10
            v1 = v2;
            v2 = v1 + 1;
        }
        // 0x100003f40
        int64_t v3; // 0x100003ed8
        _printf("%d: %d\n", (int64_t)v1, v3);
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

