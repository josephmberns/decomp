//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003dd8(void);
int32_t function_100003f94(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003dd8 - 0x100003f5c
int64_t function_100003dd8(void) {
    // 0x100003dd8
    int64_t v1; // 0x100003dd8
    int32_t v2 = v1; // 0x100003de4
    int32_t v3 = (v2 - 1) * v2 / 2; // 0x100003e00
    int32_t v4 = 1 - v3; // 0x100003e1c
    int32_t v5 = 1; // 0x100003e24
    if (v4 < 0 != (v4 & v3) < 0) {
        v5 *= 10;
        while (v5 - v3 < 0 != ((v5 - v3 ^ v5) & (v5 ^ v3)) < 0) {
            // 0x100003e30
            v5 *= 10;
        }
    }
    int32_t v6 = 1 - v2; // 0x100003e78
    if (v6 != 0 && v6 < 0 == (v6 & v2) < 0) {
        // 0x100003f50
        int64_t result; // 0x100003dd8
        return result;
    }
    int32_t v7 = 1;
    int32_t v8 = 1 - v7; // 0x100003e9c
    int64_t v9; // 0x100003dd8
    int64_t result2 = v9; // 0x100003ea4
    int32_t v10; // 0x100003dd8
    int32_t v11; // 0x100003f24
    int32_t v12; // 0x100003f30
    int32_t v13; // 0x100003e9c
    if (v8 == 0 || v8 < 0 != (v8 & v7) < 0) {
        v11 = _printf("%*d%c", v1, v1, (char)v1);
        v12 = 2;
        v13 = v12 - v7;
        v10 = v12;
        while (v13 == 0 || v13 < 0 != ((v13 ^ v12) & (v12 ^ v7)) < 0) {
            // 0x100003eac
            v11 = _printf("%*d%c", v1, v1, (char)v1);
            v12 = v10 + 1;
            v13 = v12 - v7;
            v10 = v12;
        }
        // 0x100003e94
        result2 = v11;
    }
    int32_t v14 = v7 + 1; // 0x100003f44
    int32_t v15 = v14 - v2; // 0x100003e78
    while (v15 == 0 || v15 < 0 != ((v15 ^ v14) & (v14 ^ v2)) < 0) {
        // 0x100003e94
        v7 = v14;
        v8 = 1 - v7;
        if (v8 == 0 || v8 < 0 != (v8 & v7) < 0) {
            v11 = _printf("%*d%c", v1, v1, (char)v1);
            v12 = 2;
            v13 = v12 - v7;
            v10 = v12;
            while (v13 == 0 || v13 < 0 != ((v13 ^ v12) & (v12 ^ v7)) < 0) {
                // 0x100003eac
                v11 = _printf("%*d%c", v1, v1, (char)v1);
                v12 = v10 + 1;
                v13 = v12 - v7;
                v10 = v12;
            }
            // 0x100003e94
            result2 = v11;
        }
        // 0x100003f40
        v14 = v7 + 1;
        v15 = v14 - v2;
    }
    // 0x100003f50
    return result2;
}

// Address range: 0x100003f5c - 0x100003f94
int64_t entry_point(void) {
    // 0x100003f5c
    function_100003dd8();
    function_100003dd8();
    return 0;
}

// Address range: 0x100003f94 - 0x100003fa0
int32_t function_100003f94(char * format, ...) {
    // 0x100003f94
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

