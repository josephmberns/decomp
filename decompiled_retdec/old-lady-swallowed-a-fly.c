//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003de4(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c98 - 0x100003de4
int64_t entry_point(void) {
    // 0x100003c98
    int64_t v1; // 0x100003c98
    char * v2 = (char *)v1; // 0x100003cf8
    char * v3 = (char *)v1; // 0x100003cf8
    int64_t v4 = 0;
    _printf("There was an old lady who swallowed a %s\n%s\n", v2, v3);
    int64_t v5 = v4; // 0x100003d1c
    int64_t v6; // 0x100003c98
    if (v4 != 0 && v4 < 7) {
        v6 = v5;
        _printf("She swallowed the %s to catch the %s\n", v2, v3);
        v5 = v6 - 1;
        while (v6 != 1) {
            // 0x100003d44
            v6 = v5;
            _printf("She swallowed the %s to catch the %s\n", v2, v3);
            v5 = v6 - 1;
        }
        // 0x100003d08
        _printf("%s\n", v2);
    }
    int64_t v7 = v4 + 1; // 0x100003dc8
    while (v7 != 8) {
        // 0x100003cc4
        v4 = v7;
        _printf("There was an old lady who swallowed a %s\n%s\n", v2, v3);
        v5 = v4;
        if (v4 != 0 && v4 < 7) {
            v6 = v5;
            _printf("She swallowed the %s to catch the %s\n", v2, v3);
            v5 = v6 - 1;
            while (v6 != 1) {
                // 0x100003d44
                v6 = v5;
                _printf("She swallowed the %s to catch the %s\n", v2, v3);
                v5 = v6 - 1;
            }
            // 0x100003d08
            _printf("%s\n", v2);
        }
        // 0x100003dc4
        v7 = v4 + 1;
    }
    // 0x100003dd4
    return 0;
}

// Address range: 0x100003de4 - 0x100003df0
int32_t function_100003de4(char * format, ...) {
    // 0x100003de4
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 2

