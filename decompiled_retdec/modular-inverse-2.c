//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d30(void);
int32_t function_100003f90(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d30 - 0x100003eac
int64_t function_100003d30(void) {
    // 0x100003d30
    int64_t v1; // 0x100003d30
    int32_t v2 = v1; // 0x100003d34
    int32_t v3 = v1; // 0x100003d38
    int32_t v4 = v3 < 0 ? -v3 : v3;
    int32_t v5 = v2; // 0x100003d70
    if (v2 < 0) {
        // 0x100003d78
        v5 = v4 - -v2 % v4;
    }
    int32_t v6 = v5 % v4;
    int32_t v7 = 0; // 0x100003de0
    int32_t v8 = v4; // 0x100003de0
    if (v6 != 0) {
        int32_t v9 = 1;
        int32_t v10 = v6;
        int32_t v11 = v4 / v10; // 0x100003df0
        int32_t v12 = v4 - v11 * v10; // 0x100003e38
        int32_t v13 = -((v11 * v9)); // 0x100003de0
        v7 = v9;
        v8 = v10;
        while (v12 != 0) {
            int32_t v14 = v9;
            v9 = v13;
            int32_t v15 = v10;
            v10 = v12;
            v11 = v15 / v10;
            v12 = v15 - v11 * v10;
            v13 = v14 - v11 * v9;
            v7 = v9;
            v8 = v10;
        }
    }
    int32_t v16 = v8;
    int32_t v17 = v16 - 1; // 0x100003e50
    int64_t result = 0xffffffff; // 0x100003e58
    if (v17 == 0 || v17 < 0 != (v16 & -v16) < 0) {
        int32_t v18 = v7 < 0 ? v4 : 0;
        result = v18 + v7;
    }
    // 0x100003ea0
    return result;
}

// Address range: 0x100003eac - 0x100003f90
int64_t entry_point(void) {
    // 0x100003eac
    function_100003d30();
    _printf("%d\n", 2017);
    function_100003d30();
    _printf("%d\n", 1);
    function_100003d30();
    _printf("%d\n", 0xffffff27);
    function_100003d30();
    _printf("%d\n", 217);
    function_100003d30();
    _printf("%d\n", 2018);
    return 0;
}

// Address range: 0x100003f90 - 0x100003f9c
int32_t function_100003f90(char * format, ...) {
    // 0x100003f90
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

