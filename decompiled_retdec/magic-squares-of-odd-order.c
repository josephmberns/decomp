//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d80(void);
int32_t function_100003f60(char * nptr);
int32_t function_100003f6c(char * format, ...);
int32_t function_100003f78(int32_t c);

// ------- Dynamically Linked Functions Without Header --------

int32_t _atoi(char * a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003d80 - 0x100003db8
int64_t function_100003d80(void) {
    // 0x100003d80
    int64_t v1; // 0x100003d80
    return ((int32_t)(2 * v1 + v1) + 1) % (int32_t)v1;
}

// Address range: 0x100003db8 - 0x100003f60
int64_t entry_point(void) {
    // 0x100003db8
    int64_t v1; // 0x100003db8
    if ((int32_t)v1 != 2) {
        // 0x100003f50
        return 1;
    }
    int32_t v2 = _atoi((char *)*(int64_t *)(v1 + 8)); // 0x100003df8
    if (v2 < 3 != (2 - v2 & v2) < 0 || v2 == 2 * v2 / 2) {
        // 0x100003f50
        return 2;
    }
    int32_t v3 = -v2;
    int32_t v4 = 0; // 0x100003e5c
    int64_t v5; // 0x100003db8
    if (v3 < 0 == (v2 & v3) < 0) {
        // 0x100003f10
        _printf("\n Magic Constant: %d.\n", v5);
        // 0x100003f50
        return 0;
    }
    int32_t v6 = 0; // 0x100003ee8
    function_100003d80();
    int64_t v7 = v6; // 0x100003eb0
    function_100003d80();
    _printf("% 4d", v7);
    v6++;
    while (v6 - v2 < 0 != ((v6 - v2 ^ v6) & (v6 ^ v2)) < 0) {
        // 0x100003e84
        function_100003d80();
        v7 = v6;
        function_100003d80();
        _printf("% 4d", v7);
        v6++;
    }
    // 0x100003ef4
    _putchar(10);
    v4++;
    int32_t v8 = v4 - v2; // 0x100003e54
    v5 = v7;
    while (v8 < 0 != ((v8 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003e84
        v6 = 0;
        function_100003d80();
        v7 = v6;
        function_100003d80();
        _printf("% 4d", v7);
        v6++;
        while (v6 - v2 < 0 != ((v6 - v2 ^ v6) & (v6 ^ v2)) < 0) {
            // 0x100003e84
            function_100003d80();
            v7 = v6;
            function_100003d80();
            _printf("% 4d", v7);
            v6++;
        }
        // 0x100003ef4
        _putchar(10);
        v4++;
        v8 = v4 - v2;
        v5 = v7;
    }
    // 0x100003f10
    _printf("\n Magic Constant: %d.\n", v5);
    // 0x100003f50
    return 0;
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(char * nptr) {
    // 0x100003f60
    return _atoi(nptr);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(char * format, ...) {
    // 0x100003f6c
    return _printf(format);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(int32_t c) {
    // 0x100003f78
    return _putchar(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

