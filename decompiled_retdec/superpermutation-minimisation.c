//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c18(void);
int64_t function_100003c88(void);
int64_t function_100003d8c(void);
int32_t function_100003f54(char * format, ...);
int32_t function_100003f60(int32_t c);
int64_t * function_100003f6c(int64_t * ptr, int32_t size);
int32_t function_100003f78(char * s);

// --------------------- Global Variables ---------------------

char * g1 = "\xcf\xfa\xed\xfe\f"; // 0x100008000
int32_t * g2 = (int32_t *)0x200000000; // 0x100008008
int32_t * g3; // 0x100008038

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int64_t * _realloc(int64_t * a1, int32_t a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003c18 - 0x100003c88
int64_t function_100003c18(void) {
    // 0x100003c18
    int64_t v1; // 0x100003c18
    int32_t v2 = v1; // 0x100003c1c
    int32_t v3 = -v2; // 0x100003c3c
    int32_t v4 = 1; // 0x100003c44
    int32_t v5 = 0; // 0x100003c44
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003c7c
        return 0;
    }
    int32_t result = 0; // 0x100003c44
    v5++;
    v4 *= v5;
    result += v4;
    while (v5 - v2 < 0 != ((v5 - v2 ^ v5) & (v5 ^ v2)) < 0) {
        // 0x100003c50
        v5++;
        v4 *= v5;
        result += v4;
    }
    // 0x100003c7c
    return result;
}

// Address range: 0x100003c88 - 0x100003d8c
int64_t function_100003c88(void) {
    // 0x100003c88
    int64_t v1; // 0x100003c88
    int32_t v2 = v1; // 0x100003c94
    if (v2 == 0) {
        // 0x100003d7c
        return 0;
    }
    int32_t v3 = *(int32_t *)&g3; // 0x100003cc4
    char v4 = *(char *)((int64_t)(v3 - v2) + (int64_t)g1); // 0x100003cd4
    int32_t * v5 = (int32_t *)((0x100000000 * v1 >> 30) + (int64_t)&g2); // 0x100003cec
    int32_t v6 = *v5 - 1; // 0x100003cf0
    *v5 = v6;
    if (v6 == 0) {
        // 0x100003d08
        *v5 = v2;
        if ((int32_t)function_100003c88() == 0) {
            // 0x100003d7c
            return 0;
        }
    }
    int32_t v7 = *(int32_t *)&g3; // 0x100003d58
    *(int32_t *)&g3 = v7 + 1;
    *(char *)((int64_t)v7 + (int64_t)g1) = v4;
    // 0x100003d7c
    return 1;
}

// Address range: 0x100003d8c - 0x100003eb8
int64_t function_100003d8c(void) {
    // 0x100003d8c
    int64_t v1; // 0x100003d8c
    int32_t v2 = v1; // 0x100003d98
    *(int32_t *)&g3 = v2;
    int64_t v3 = function_100003c18(); // 0x100003db0
    int64_t v4 = (int64_t)_realloc((int64_t *)g1, (int32_t)v3 + 1); // 0x100003dd4
    *(int64_t *)&g1 = v4;
    *(char *)((0x100000000 * v3 >> 32) + v4) = 0;
    int32_t v5 = -v2; // 0x100003e00
    if (v2 == 0 || v5 < 0 != (v5 & v2) < 0) {
        int32_t v6 = 0;
        *(int32_t *)(4 * (int64_t)v6 + (int64_t)&g2) = v6;
        int32_t v7 = v6 + 1; // 0x100003e2c
        while (v7 - v2 == 0 || v7 - v2 < 0 != ((v7 - v2 ^ v7) & (v7 ^ v2)) < 0) {
            // 0x100003e10
            v6 = v7;
            *(int32_t *)(4 * (int64_t)v6 + (int64_t)&g2) = v6;
            v7 = v6 + 1;
        }
    }
    int32_t v8 = 1 - v2; // 0x100003e4c
    if (v8 == 0 || v8 < 0 != (v8 & v2) < 0) {
        int32_t v9 = 1;
        *(char *)((int64_t)g1 + (int64_t)(v9 - 1)) = (char)v9 + 48;
        int32_t v10 = v9 + 1; // 0x100003e80
        while (v10 - v2 == 0 || v10 - v2 < 0 != ((v10 - v2 ^ v10) & (v10 ^ v2)) < 0) {
            // 0x100003e5c
            v9 = v10;
            *(char *)((int64_t)g1 + (int64_t)(v9 - 1)) = (char)v9 + 48;
            v10 = v9 + 1;
        }
    }
    int64_t result = function_100003c88(); // 0x100003e94
    while ((int32_t)result != 0) {
        // 0x100003e90
        result = function_100003c88();
    }
    // 0x100003eac
    return result;
}

// Address range: 0x100003eb8 - 0x100003f54
int64_t entry_point(void) {
    for (int32_t i = 0; i < 12; i++) {
        // 0x100003ee4
        int64_t v1; // 0x100003eb8
        _printf("superperm(%2d) ", v1);
        function_100003d8c();
        _strlen(g1);
        _printf("len = %d", v1);
        _putchar(10);
    }
    // 0x100003f44
    return 0;
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * format, ...) {
    // 0x100003f54
    return _printf(format);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(int32_t c) {
    // 0x100003f60
    return _putchar(c);
}

// Address range: 0x100003f6c - 0x100003f78
int64_t * function_100003f6c(int64_t * ptr, int32_t size) {
    // 0x100003f6c
    return _realloc(ptr, size);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(char * s) {
    // 0x100003f78
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

