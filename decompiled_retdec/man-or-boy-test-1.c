//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c84(void);
int64_t function_100003c98(void);
int64_t function_100003cac(void);
int64_t function_100003cc0(void);
int64_t function_100003ce0(int64_t a1, int64_t a2);
int64_t function_100003cec(int64_t a1);
int64_t function_100003d74(void);
int64_t * function_100003f70(int64_t * s, int32_t c, int32_t n);
int32_t function_100003f7c(char * format, ...);
int32_t function_100003f88(char * nptr, char ** endptr, int32_t base);

// ------- Dynamically Linked Functions Without Header --------

int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _strtol(char * a1, char ** a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x100003c84 - 0x100003c98
int64_t function_100003c84(void) {
    // 0x100003c84
    return 0xffffffff;
}

// Address range: 0x100003c98 - 0x100003cac
int64_t function_100003c98(void) {
    // 0x100003c98
    return 0;
}

// Address range: 0x100003cac - 0x100003cc0
int64_t function_100003cac(void) {
    // 0x100003cac
    return 1;
}

// Address range: 0x100003cc0 - 0x100003ce0
int64_t function_100003cc0(void) {
    // 0x100003cc0
    int64_t result; // 0x100003cc0
    return result;
}

// Address range: 0x100003ce0 - 0x100003cec
int64_t function_100003ce0(int64_t a1, int64_t a2) {
    // 0x100003ce0
    int64_t result; // 0x100003ce0
    return result;
}

// Address range: 0x100003cec - 0x100003d74
int64_t function_100003cec(int64_t a1) {
    int32_t * v1 = (int32_t *)*(int64_t *)(a1 + 8); // 0x100003d04
    *v1 = *v1 - 1;
    return function_100003d74();
}

// Address range: 0x100003d74 - 0x100003df0
int64_t function_100003d74(void) {
    // 0x100003d74
    int64_t v1; // 0x100003d74
    int64_t v2; // 0x100003d74
    if (*(int32_t *)*(int64_t *)(v2 + 8) < 1) {
        int64_t v3 = function_100003cc0(); // 0x100003da8
        v1 = function_100003cc0() + v3;
    } else {
        // 0x100003dd0
        v1 = function_100003cec(v2);
    }
    // 0x100003de0
    return v1 & 0xffffffff;
}

// Address range: 0x100003df0 - 0x100003f70
int64_t entry_point(void) {
    // 0x100003df0
    int64_t v1; // 0x100003df0
    if ((int32_t)v1 == 2) {
        // 0x100003e20
        _strtol((char *)*(int64_t *)(v1 + 8), NULL, 0);
    }
    // 0x100003e48
    int64_t v2; // bp-168, 0x100003df0
    _memset(&v2, 0, 56);
    v2 = 0x100003cac;
    int64_t v3; // bp-224, 0x100003df0
    _memset(&v3, 0, 56);
    v3 = 0x100003c84;
    int64_t v4; // bp-280, 0x100003df0
    _memset(&v4, 0, 56);
    v4 = 0x100003c84;
    int64_t v5; // bp-336, 0x100003df0
    _memset(&v5, 0, 56);
    v5 = 0x100003cac;
    int64_t v6; // bp-392, 0x100003df0
    _memset(&v6, 0, 56);
    v6 = 0x100003c98;
    function_100003d74();
    _printf("%d\n", 0);
    return 0;
}

// Address range: 0x100003f70 - 0x100003f7c
int64_t * function_100003f70(int64_t * s, int32_t c, int32_t n) {
    // 0x100003f70
    return _memset(s, c, n);
}

// Address range: 0x100003f7c - 0x100003f88
int32_t function_100003f7c(char * format, ...) {
    // 0x100003f7c
    return _printf(format);
}

// Address range: 0x100003f88 - 0x100003f94
int32_t function_100003f88(char * nptr, char ** endptr, int32_t base) {
    // 0x100003f88
    return _strtol(nptr, endptr, base);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 11
