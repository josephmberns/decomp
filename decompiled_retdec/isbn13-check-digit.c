//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ce0(void);
int64_t function_100003f38(void);
int32_t function_100003f44(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ce0 - 0x100003e40
int64_t function_100003ce0(void) {
    // 0x100003ce0
    int64_t v1; // 0x100003ce0
    char v2 = v1; // 0x100003cfc
    int32_t v3 = 0; // 0x100003cfc
    int32_t v4 = 0; // 0x100003cfc
    int32_t v5; // 0x100003ce0
    int32_t v6; // 0x100003ce0
    int64_t result; // 0x100003ce0
    while (true) {
        // 0x100003d00
        v6 = v4;
        v5 = v3;
        char v7 = v2;
        int32_t v8; // 0x100003ce0
        switch (v7) {
            case 0: {
                // 0x100003df0
                result = 0;
                if (v5 == 13) {
                    // 0x100003e0c
                    result = v6 % 10 == 0;
                }
                // 0x100003e34
                return result;
            }
            case 45: {
            }
            case 32: {
                // 0x100003d3c
                v8 = v5 - 1;
                v4 = v6;
                // break -> 0x100003dcc
                break;
            }
            default: {
                int32_t v9 = v7;
                int32_t v10 = v9 - 48; // 0x100003d50
                if (v10 < 0 != (47 - v9 & v9) < 0) {
                    // 0x100003e34
                    return 0;
                }
                int32_t v11 = v9 - 57; // 0x100003d64
                if (v11 != 0 && v11 < 0 == (56 - v9 & v9) < 0) {
                    // 0x100003e34
                    return 0;
                }
                int32_t v12 = v5 % 2 == 0 ? v10 : 3 * v9 - 144;
                v8 = v5;
                v4 = v12 + v6;
                // break -> 0x100003dcc
                break;
            }
        }
        // 0x100003dcc
        int64_t v13; // 0x100003ce0
        int64_t v14 = v13 + 1; // 0x100003dd0
        v2 = *(char *)v14;
        v13 = v14;
        v3 = v8 + 1;
    }
    // 0x100003df0
    result = 0;
    if (v5 == 13) {
        // 0x100003e0c
        result = v6 % 10 == 0;
    }
    // 0x100003e34
    return result;
}

// Address range: 0x100003e40 - 0x100003f38
int64_t entry_point(void) {
    for (int32_t i = 0; i < 4; i++) {
        // 0x100003e94
        function_100003ce0();
        int64_t v1; // 0x100003e40
        _printf("%s: %s\n", (char *)v1, (char *)v1);
    }
    int64_t v2 = *(int64_t *)0x100004008; // 0x100003f0c
    if (*(int64_t *)v2 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f24
        ___stack_chk_fail();
    }
    // 0x100003f28
    return 0;
}

// Address range: 0x100003f38 - 0x100003f44
int64_t function_100003f38(void) {
    // 0x100003f38
    return ___stack_chk_fail();
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(char * format, ...) {
    // 0x100003f44
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4

