//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d5c(void);
int64_t function_100003e28(int64_t a1);
int32_t function_100003f50(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // 0x100008000
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d5c - 0x100003e28
int64_t function_100003d5c(void) {
    // 0x100003d5c
    int64_t v1; // 0x100003d5c
    int32_t v2 = v1; // 0x100003d60
    int32_t v3 = v2; // 0x100003d9c
    if (v2 < 10) {
        // 0x100003e10
        return 1;
    }
    int32_t v4 = 0; // 0x100003d9c
    int32_t v5 = v3 % 10;
    v3 /= 10;
    int32_t v6 = v3 % 10;
    int32_t v7 = v6 - v5; // 0x100003dbc
    v4 = v4 + (int32_t)(v7 < 0 != ((v7 ^ v6) & (v6 ^ v5)) < 0) + (int32_t)!((v7 == 0 | v7 < 0 != ((v7 ^ v6) & (v6 ^ v5)) < 0));
    while (v3 >= 10) {
        // 0x100003da4
        v5 = v3 % 10;
        v3 /= 10;
        v6 = v3 % 10;
        v7 = v6 - v5;
        v4 = v4 + (int32_t)(v7 < 0 != ((v7 ^ v6) & (v6 ^ v5)) < 0) + (int32_t)!((v7 == 0 | v7 < 0 != ((v7 ^ v6) & (v6 ^ v5)) < 0));
    }
    // 0x100003e10
    return v4 == 0;
}

// Address range: 0x100003e28 - 0x100003e74
int64_t function_100003e28(int64_t a1) {
    g1++;
    while ((int32_t)function_100003d5c() == 0) {
        // 0x100003e34
        g1++;
    }
    // 0x100003e64
    return (uint32_t)g1;
}

// Address range: 0x100003e74 - 0x100003f50
int64_t entry_point(void) {
    // 0x100003e74
    _printf("The first 200 numbers are: \n");
    int32_t v1 = 0;
    function_100003e28((int64_t)v1);
    int64_t v2; // 0x100003e74
    _printf("%d ", v2);
    int32_t v3 = v1 + 1; // 0x100003ed0
    while (v1 < 199 != (198 - v1 & v3) < 0) {
        // 0x100003eac
        v1 = v3;
        function_100003e28((int64_t)v1);
        _printf("%d ", v2);
        v3 = v1 + 1;
    }
    // 0x100003edc
    _printf("\n\nThe 10,000,000th number is: ");
    if (v1 < 0x98967f == (0x98967e - v1 & v3) < 0) {
        // 0x100003f24
        _printf("%d\n", v2);
        return 0;
    }
    int32_t v4 = v3;
    function_100003e28((int64_t)&g2);
    int32_t v5 = v4 + 1; // 0x100003f18
    while (v4 < 0x98967f != (0x98967e - v4 & v5) < 0) {
        // 0x100003f08
        v4 = v5;
        function_100003e28((int64_t)&g2);
        v5 = v4 + 1;
    }
    // 0x100003f24
    _printf("%d\n", v2);
    return 0;
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(char * format, ...) {
    // 0x100003f50
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4
