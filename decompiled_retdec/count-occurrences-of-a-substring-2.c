//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003de0(void);
int32_t function_100003f44(char * format, ...);
int32_t function_100003f50(char * s);
char * function_100003f5c(char * haystack, char * needle);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);
char * _strstr(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003de0 - 0x100003e94
int64_t function_100003de0(void) {
    // 0x100003de0
    int64_t v1; // 0x100003de0
    char * v2 = (char *)v1; // 0x100003df0
    int32_t v3 = _strlen(v2); // 0x100003df8
    if (v3 == 0) {
        // 0x100003e84
        return 0;
    }
    char * v4 = _strstr((char *)v1, v2); // 0x100003e2c
    if (v4 == NULL) {
        // 0x100003e84
        return 0;
    }
    char * v5 = v4; // 0x100003e6c
    int32_t result = 0; // 0x100003e50
    result++;
    v5 = _strstr((char *)((int64_t)v5 + (int64_t)v3), v2);
    while (v5 != NULL) {
        // 0x100003e4c
        result++;
        v5 = _strstr((char *)((int64_t)v5 + (int64_t)v3), v2);
    }
    // 0x100003e84
    return result;
}

// Address range: 0x100003e94 - 0x100003f44
int64_t entry_point(void) {
    // 0x100003e94
    function_100003de0();
    _printf("%d\n", (int64_t)"th");
    function_100003de0();
    _printf("%d\n", (int64_t)"abab");
    function_100003de0();
    _printf("%d\n", (int64_t)"a*b");
    return 0;
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(char * format, ...) {
    // 0x100003f44
    return _printf(format);
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(char * s) {
    // 0x100003f50
    return _strlen(s);
}

// Address range: 0x100003f5c - 0x100003f68
char * function_100003f5c(char * haystack, char * needle) {
    // 0x100003f5c
    return _strstr(haystack, needle);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

