//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003cc4(void);
int64_t function_100003d58(void);
int32_t function_100003ef4(char * format, ...);
int32_t function_100003f00(char * s1, char * s2);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _strcmp(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003cc4 - 0x100003d58
int64_t function_100003cc4(void) {
    // 0x100003cc4
    int64_t v1; // 0x100003cc4
    int64_t v2 = *(int64_t *)v1; // 0x100003ce8
    int64_t v3 = v2; // 0x100003cf4
    if (v2 == 0) {
        // 0x100003d48
        return 0xffffffff;
    }
    uint32_t result = 0;
    while (_strcmp((char *)v3, (char *)v1) != 0) {
        int32_t v4 = result + 1; // 0x100003d30
        v3 = *(int64_t *)(8 * (int64_t)v4 + v1);
        if (v3 == 0) {
            // 0x100003d48
            return 0xffffffff;
        }
        result = v4;
    }
    // 0x100003d48
    return result;
}

// Address range: 0x100003d58 - 0x100003e1c
int64_t function_100003d58(void) {
    int32_t result = function_100003cc4(); // 0x100003d7c
    if (result < 0) {
        // 0x100003e0c
        return 0xffffffff;
    }
    int32_t v1 = result + 1; // 0x100003db0
    int32_t v2 = v1; // 0x100003dc4
    int64_t v3; // 0x100003d58
    if (*(int64_t *)(v3 + (int64_t)(8 * v1)) == 0) {
        // 0x100003e0c
        return result;
    }
    int32_t result2 = result; // 0x100003dc4
    int64_t v4 = *(int64_t *)(8 * (int64_t)v2 + v3); // 0x100003dd8
    result2 = _strcmp((char *)v3, (char *)v4) == 0 ? v2 : result2;
    v2++;
    while (*(int64_t *)(v3 + (int64_t)(8 * v2)) != 0) {
        // 0x100003dcc
        v4 = *(int64_t *)(8 * (int64_t)v2 + v3);
        result2 = _strcmp((char *)v3, (char *)v4) == 0 ? v2 : result2;
        v2++;
    }
    // 0x100003e0c
    return result2;
}

// Address range: 0x100003e1c - 0x100003ef4
int64_t entry_point(void) {
    // 0x100003e1c
    function_100003cc4();
    _printf("Bush is at %d\n", (int64_t)"\f?");
    if ((int32_t)function_100003cc4() == -1) {
        // 0x100003e7c
        _printf("Washington is not in the haystack\n");
    }
    // 0x100003e8c
    function_100003cc4();
    _printf("First index for Zag: %d\n", (int64_t)"\f?");
    function_100003d58();
    _printf("Last index for Zag: %d\n", (int64_t)"\f?");
    return 0;
}

// Address range: 0x100003ef4 - 0x100003f00
int32_t function_100003ef4(char * format, ...) {
    // 0x100003ef4
    return _printf(format);
}

// Address range: 0x100003f00 - 0x100003f0c
int32_t function_100003f00(char * s1, char * s2) {
    // 0x100003f00
    return _strcmp(s1, s2);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

