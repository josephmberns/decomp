//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f7c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d9c - 0x100003f7c
int64_t entry_point(void) {
    int32_t v1 = 1;
    int64_t v2; // 0x100003d9c
    _printf("%3d%c", v2, (char)v2);
    int32_t v3 = v1 + 1; // 0x100003e28
    int32_t v4 = v1 - 11; // 0x100003dc8
    while (v4 == 0 || v4 < 0 != (10 - v1 & v3) < 0) {
        // 0x100003dd8
        v1 = v3;
        _printf("%3d%c", v2, (char)v2);
        v3 = v1 + 1;
        v4 = v1 - 11;
    }
    int32_t v5 = 0;
    _printf(v5 == 12 ? "+\n" : "----");
    int32_t v6 = v5 + 1; // 0x100003e8c
    int32_t v7 = v5 - 11; // 0x100003e44
    while (v7 == 0 || v7 < 0 != (10 - v5 & v6) < 0) {
        // 0x100003e54
        v5 = v6;
        _printf(v5 == 12 ? "+\n" : "----");
        v6 = v5 + 1;
        v7 = v5 - 11;
    }
    int32_t v8 = 1;
    int32_t v9 = 1;
    int32_t v10 = v9 - v8; // 0x100003ee8
    char * v11 = v10 < 0 == ((v10 ^ v9) & (v9 ^ v8)) < 0 ? "%3d " : "    "; // 0x100003f24
    _printf(v11);
    int32_t v12 = v9 + 1; // 0x100003f30
    while (v9 == 11 || v9 < 11 != (10 - v9 & v12) < 0) {
        // 0x100003ee0
        v9 = v12;
        v10 = v9 - v8;
        v11 = v10 < 0 == ((v10 ^ v9) & (v9 ^ v8)) < 0 ? "%3d " : "    ";
        _printf(v11);
        v12 = v9 + 1;
    }
    // 0x100003f3c
    _printf("| %d\n", v2);
    int32_t v13 = v8 + 1; // 0x100003f60
    int32_t v14 = v8 - 11; // 0x100003eac
    while (v14 == 0 || v14 < 0 != (10 - v8 & v13) < 0) {
        // 0x100003ec8
        v8 = v13;
        v9 = 1;
        v10 = v9 - v8;
        v11 = v10 < 0 == ((v10 ^ v9) & (v9 ^ v8)) < 0 ? "%3d " : "    ";
        _printf(v11);
        v12 = v9 + 1;
        while (v9 == 11 || v9 < 11 != (10 - v9 & v12) < 0) {
            // 0x100003ee0
            v9 = v12;
            v10 = v9 - v8;
            v11 = v10 < 0 == ((v10 ^ v9) & (v9 ^ v8)) < 0 ? "%3d " : "    ";
            _printf(v11);
            v12 = v9 + 1;
        }
        // 0x100003f3c
        _printf("| %d\n", v2);
        v13 = v8 + 1;
        v14 = v8 - 11;
    }
    // 0x100003f6c
    return 0;
}

// Address range: 0x100003f7c - 0x100003f88
int32_t function_100003f7c(char * format, ...) {
    // 0x100003f7c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 2
