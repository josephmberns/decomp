//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b6c(void);
int64_t function_100003bec(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003da4(void);
int64_t function_100003de8(void);
int64_t function_100003f28(int64_t a1);
int64_t * function_100003f34(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f40(char * format, ...);
int32_t function_100003f4c(char * s1, char * s2);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _strcmp(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003b6c - 0x100003bec
int64_t function_100003b6c(void) {
    // 0x100003b6c
    int64_t result; // 0x100003b6c
    if (result == 0) {
        // 0x100003be4
        return result;
    }
    int64_t v1; // 0x100003b6c
    char * v2 = (char *)v1;
    int64_t v3; // 0x100003b6c
    char * v4 = (char *)v3;
    int64_t v5; // 0x100003b6c
    int64_t v6 = v5 - 1; // 0x100003b84
    *v2 = *v4;
    *v4 = *v2;
    v1++;
    v3++;
    while (v6 != 0) {
        // 0x100003b9c
        v2 = (char *)v1;
        v4 = (char *)v3;
        v6--;
        *v2 = *v4;
        *v4 = *v2;
        v1++;
        v3++;
    }
    // 0x100003be4
    return result;
}

// Address range: 0x100003bec - 0x100003da4
int64_t function_100003bec(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003bec
    int64_t result; // 0x100003bec
    return result;
}

// Address range: 0x100003da4 - 0x100003de8
int64_t function_100003da4(void) {
    // 0x100003da4
    int64_t v1; // 0x100003da4
    return _strcmp((char *)v1, (char *)v1);
}

// Address range: 0x100003de8 - 0x100003e68
int64_t function_100003de8(void) {
    // 0x100003de8
    int64_t v1; // 0x100003de8
    if (v1 == 0) {
        // 0x100003e50
        return _printf("\n");
    }
    int64_t v2 = 0; // 0x100003e44
    _printf("%s ", (char *)v1);
    while (v2 + 1 != v1) {
        // 0x100003e1c
        v2++;
        _printf("%s ", (char *)v1);
    }
    // 0x100003e50
    return _printf("\n");
}

// Address range: 0x100003e68 - 0x100003f28
int64_t entry_point(void) {
    // 0x100003e68
    int64_t v1; // bp-104, 0x100003e68
    _memcpy(&v1, (int64_t *)"^?", 80);
    _printf("before: ");
    function_100003de8();
    function_100003bec((int64_t)&g1, (int64_t)&g1, (int64_t)&g1, (int64_t)&g1);
    _printf("after: ");
    int64_t v2 = function_100003de8(); // 0x100003ef0
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f00
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f14
        ___stack_chk_fail(v2);
    }
    // 0x100003f18
    return 0;
}

// Address range: 0x100003f28 - 0x100003f34
int64_t function_100003f28(int64_t a1) {
    // 0x100003f28
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f34 - 0x100003f40
int64_t * function_100003f34(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f34
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(char * format, ...) {
    // 0x100003f40
    return _printf(format);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(char * s1, char * s2) {
    // 0x100003f4c
    return _strcmp(s1, s2);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9
