//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003bcc(void);
int32_t function_100003f38(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x200000001; // 0x100008000
int32_t * g2 = (int32_t *)0xa0000001f; // 0x100008050

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003bcc - 0x100003c54
int64_t function_100003bcc(void) {
    int64_t result = 0; // 0x100003be8
    int64_t v1; // 0x100003bcc
    if (v1 != 0) {
        int32_t v2 = v1;
        int32_t v3 = v1;
        *(int32_t *)v1 = v3;
        *(int32_t *)v1 = v2 % v3;
        result = v2 / v3;
    }
    // 0x100003c48
    return result;
}

// Address range: 0x100003c54 - 0x100003f38
int64_t entry_point(void) {
    // 0x100003c54
    _printf("Running the examples :");
    int64_t v1 = 0;
    int64_t v2; // 0x100003c54
    int64_t v3; // 0x100003c54
    _printf("\nFor N = %d, D = %d :", v3, v2);
    int64_t v4 = 8 * v1 + (int64_t)&g1 + 4; // 0x100003ce0
    int32_t * v5 = (int32_t *)v4; // 0x100003ce0
    int64_t v6 = v3; // 0x100003cec
    if (*v5 != 0) {
        function_100003bcc();
        _printf(" %d ", v4);
        v6 = v4;
        while (*v5 != 0) {
            // 0x100003cf4
            function_100003bcc();
            _printf(" %d ", v4);
            v6 = v4;
        }
    }
    int64_t v7 = v6;
    v1++;
    while (v1 != 6) {
        // 0x100003c8c
        _printf("\nFor N = %d, D = %d :", v7, v2);
        v4 = 8 * v1 + (int64_t)&g1 + 4;
        v5 = (int32_t *)v4;
        v6 = v7;
        if (*v5 != 0) {
            function_100003bcc();
            _printf(" %d ", v4);
            v6 = v4;
            while (*v5 != 0) {
                // 0x100003cf4
                function_100003bcc();
                _printf(" %d ", v4);
                v6 = v4;
            }
        }
        // 0x100003d38
        v7 = v6;
        v1++;
    }
    // 0x100003d48
    _printf("\n\nRunning for %c2 :", (char)v7);
    int64_t v8 = v7;
    for (int64_t i = 0; i < 4; i++) {
        // 0x100003d7c
        _printf("\nFor N = %d, D = %d :", v8, v2);
        int64_t v9 = 8 * i + (int64_t)">7" + 4; // 0x100003dd0
        int32_t * v10 = (int32_t *)v9; // 0x100003dd0
        int64_t v11 = v8; // 0x100003ddc
        if (*v10 != 0) {
            function_100003bcc();
            _printf(" %d ", v9);
            v11 = v9;
            while (*v10 != 0) {
                // 0x100003de4
                function_100003bcc();
                _printf(" %d ", v9);
                v11 = v9;
            }
        }
        // 0x100003e28
        v8 = v11;
    }
    // 0x100003e38
    _printf("\n\nRunning for %c :", (char)v8);
    int64_t v12 = v8; // 0x100003c54
    for (int64_t i = 0; i < 8; i++) {
        // 0x100003e6c
        _printf("\nFor N = %d, D = %d :", v12, v2);
        int64_t v13 = 8 * i + (int64_t)&g2 + 4; // 0x100003ec0
        int32_t * v14 = (int32_t *)v13; // 0x100003ec0
        if (*v14 != 0) {
            function_100003bcc();
            _printf(" %d ", v13);
            v12 = v13;
            while (*v14 != 0) {
                // 0x100003ed4
                function_100003bcc();
                _printf(" %d ", v13);
                v12 = v13;
            }
        }
    }
    // 0x100003f28
    return 0;
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(char * format, ...) {
    // 0x100003f38
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

