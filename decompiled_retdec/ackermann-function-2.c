//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c50(void);
int64_t function_100003f6c(int64_t a1, int32_t a2, int64_t a3, int64_t a4);
int64_t * function_100003f78(int32_t size);
int32_t function_100003f84(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x100000cfeedfacf; // 0x100008000
int32_t * g2 = (int32_t *)0x200000000; // 0x100008008
int32_t * g3; // 0x10000800c

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memset_chk(int64_t a1, int32_t a2, int64_t a3, int64_t a4);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c50 - 0x100003dec
int64_t function_100003c50(void) {
    // 0x100003c50
    int64_t v1; // 0x100003c50
    int32_t v2 = v1; // 0x100003c5c
    int32_t v3 = v1; // 0x100003c60
    if (v2 == 0) {
        // 0x100003ddc
        return v3 + 1;
    }
    uint32_t v4 = *(int32_t *)&g3; // 0x100003c94
    int32_t v5 = 1 << v4; // 0x100003c9c
    int32_t v6 = v3 - v5; // 0x100003ca0
    int32_t v7; // 0x100003c50
    if (v6 < 0 == ((v6 ^ v3) & (v5 ^ v3)) < 0) {
        // 0x100003cb0
        _printf("%d, %d\n", v1, v1);
        v7 = 0;
    } else {
        int32_t v8 = (v2 << v4) + v3; // 0x100003cf8
        int32_t result = *(int32_t *)(g1 + 4 * (int64_t)v8); // 0x100003d10
        v7 = v8;
        if (result != 0) {
            // 0x100003ddc
            return result;
        }
    }
    int64_t v9 = function_100003c50(); // 0x100003d50
    if (v3 != 0) {
        // 0x100003d70
        v9 = function_100003c50();
    }
    int32_t result2 = v9;
    if (v7 != 0) {
        // 0x100003db4
        *(int32_t *)(g1 + 4 * (int64_t)v7) = result2;
    }
    // 0x100003ddc
    return result2;
}

// Address range: 0x100003dec - 0x100003f6c
int64_t entry_point(void) {
    // 0x100003dec
    *(int32_t *)&g2 = 3;
    *(int32_t *)&g3 = 20;
    int64_t v1 = (int64_t)_malloc(0x2000000); // 0x100003e58
    g1 = v1;
    int32_t v2 = *(int32_t *)&g3; // 0x100003e84
    int64_t v3 = 4 * (int64_t)(1 << v2 + *(int32_t *)&g2); // 0x100003e98
    ___memset_chk(v1, 0, v3, -1);
    int32_t v4 = 0;
    int32_t v5 = 6 - v4; // 0x100003ed4
    int32_t v6 = -v5; // 0x100003ed8
    int32_t v7 = 0; // 0x100003ee0
    int32_t v8; // 0x100003f3c
    int32_t v9; // 0x100003ed8
    if (v6 < 0 != (v5 & v6) < 0) {
        function_100003c50();
        _printf("A(%d, %d) = %d\n", (int64_t)v7, v3, -1);
        v8 = v7 + 1;
        v9 = v8 - v5;
        v7 = v8;
        while (v9 < 0 != ((v9 ^ v8) & (v8 ^ v5)) < 0) {
            // 0x100003ee8
            function_100003c50();
            _printf("A(%d, %d) = %d\n", (int64_t)v7, v3, -1);
            v8 = v7 + 1;
            v9 = v8 - v5;
            v7 = v8;
        }
    }
    int32_t v10 = v4 + 1; // 0x100003f50
    while (v4 == 3 || v4 < 3 != (2 - v4 & v10) < 0) {
        // 0x100003ec8
        v4 = v10;
        v5 = 6 - v4;
        v6 = -v5;
        v7 = 0;
        if (v6 < 0 != (v5 & v6) < 0) {
            function_100003c50();
            _printf("A(%d, %d) = %d\n", (int64_t)v7, v3, -1);
            v8 = v7 + 1;
            v9 = v8 - v5;
            v7 = v8;
            while (v9 < 0 != ((v9 ^ v8) & (v8 ^ v5)) < 0) {
                // 0x100003ee8
                function_100003c50();
                _printf("A(%d, %d) = %d\n", (int64_t)v7, v3, -1);
                v8 = v7 + 1;
                v9 = v8 - v5;
                v7 = v8;
            }
        }
        // 0x100003f4c
        v10 = v4 + 1;
    }
    // 0x100003f5c
    return 0;
}

// Address range: 0x100003f6c - 0x100003f78
int64_t function_100003f6c(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    // 0x100003f6c
    return ___memset_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f78 - 0x100003f84
int64_t * function_100003f78(int32_t size) {
    // 0x100003f78
    return _malloc(size);
}

// Address range: 0x100003f84 - 0x100003f90
int32_t function_100003f84(char * format, ...) {
    // 0x100003f84
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

