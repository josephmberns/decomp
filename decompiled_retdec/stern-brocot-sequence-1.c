//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003bbc(void);
int64_t function_100003c74(void);
int64_t function_100003d24(void);
int32_t function_100003f34(char * format, ...);
int32_t function_100003f40(char * s);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003bbc - 0x100003c74
int64_t function_100003bbc(void) {
    // 0x100003bbc
    int64_t v1; // 0x100003bbc
    uint32_t v2 = (int32_t)v1; // 0x100003bc8
    int64_t v3; // 0x100003bbc
    if (v2 < 2) {
        // 0x100003c64
        return v3 & 0xffffffff;
    }
    int64_t v4 = function_100003bbc();
    v3 = v4;
    if (v2 % 2 != 0) {
        // 0x100003c00
        v3 = function_100003bbc() + v4;
    }
    // 0x100003c64
    return v3 & 0xffffffff;
}

// Address range: 0x100003c74 - 0x100003d24
int64_t function_100003c74(void) {
    // 0x100003c74
    int64_t v1; // 0x100003c74
    int64_t v2; // 0x100003c74
    if ((int32_t)v2 != 0) {
        // 0x100003c9c
        v1 = function_100003c74();
    }
    // 0x100003d14
    return v1 & 0xffffffff;
}

// Address range: 0x100003d24 - 0x100003dd0
int64_t function_100003d24(void) {
    // 0x100003d24
    int64_t v1; // 0x100003d24
    uint32_t v2 = (int32_t)v1; // 0x100003d34
    int32_t v3 = v1; // 0x100003d38
    while (v3 != (int32_t)function_100003bbc()) {
        // continue -> 0x100003d48
    }
    int32_t result = _printf("%3u at Stern #%u.\n", v2, (int32_t)v1); // 0x100003d9c
    v3++;
    while (v3 == v2 || v3 < v2) {
        // 0x100003d3c
        while (v3 != (int32_t)function_100003bbc()) {
            // continue -> 0x100003d48
        }
        // 0x100003d78
        result = _printf("%3u at Stern #%u.\n", v2, (int32_t)v1);
        v3++;
    }
    // 0x100003dc4
    return result;
}

// Address range: 0x100003dd0 - 0x100003f34
int64_t entry_point(void) {
    for (int32_t i = 1; i < 16; i++) {
        // 0x100003e00
        function_100003bbc();
        int64_t v1; // 0x100003dd0
        _printf("%u ", (int32_t)v1);
    }
    // 0x100003e34
    _puts("are the first fifteen.");
    function_100003d24();
    function_100003d24();
    int32_t v2 = 1; // 0x100003ecc
    function_100003bbc();
    function_100003bbc();
    int32_t v3 = v2; // 0x100003ebc
    while ((int32_t)function_100003c74() == 1) {
        // 0x100003ec8
        v2++;
        v3 = 1000;
        if (v2 >= 1000) {
            // break -> 0x100003ed8
            break;
        }
        function_100003bbc();
        function_100003bbc();
        v3 = v2;
    }
    // 0x100003ed8
    _printf(v3 != 1000 ? "GCD of #%d and #%d is not 1" : "All GCDs are 1.\n");
    return 0;
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _printf(format);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(char * s) {
    // 0x100003f40
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6
