//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b68(void);
int64_t function_100003be8(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003dac(void);
int64_t function_100003df0(void);
int64_t function_100003f30(int64_t a1);
int64_t * function_100003f3c(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f48(char * format, ...);
int32_t function_100003f54(char * s1, char * s2);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _strcmp(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003b68 - 0x100003be8
int64_t function_100003b68(void) {
    // 0x100003b68
    int64_t result; // 0x100003b68
    if (result == 0) {
        // 0x100003be0
        return result;
    }
    int64_t v1; // 0x100003b68
    char * v2 = (char *)v1;
    int64_t v3; // 0x100003b68
    char * v4 = (char *)v3;
    int64_t v5; // 0x100003b68
    int64_t v6 = v5 - 1; // 0x100003b80
    *v2 = *v4;
    *v4 = *v2;
    v1++;
    v3++;
    while (v6 != 0) {
        // 0x100003b98
        v2 = (char *)v1;
        v4 = (char *)v3;
        v6--;
        *v2 = *v4;
        *v4 = *v2;
        v1++;
        v3++;
    }
    // 0x100003be0
    return result;
}

// Address range: 0x100003be8 - 0x100003dac
int64_t function_100003be8(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003be8
    int64_t result; // 0x100003be8
    return result;
}

// Address range: 0x100003dac - 0x100003df0
int64_t function_100003dac(void) {
    // 0x100003dac
    int64_t v1; // 0x100003dac
    return _strcmp((char *)v1, (char *)v1);
}

// Address range: 0x100003df0 - 0x100003e70
int64_t function_100003df0(void) {
    // 0x100003df0
    int64_t v1; // 0x100003df0
    if (v1 == 0) {
        // 0x100003e58
        return _printf("\n");
    }
    int64_t v2 = 0; // 0x100003e4c
    _printf("%s ", (char *)v1);
    while (v2 + 1 != v1) {
        // 0x100003e24
        v2++;
        _printf("%s ", (char *)v1);
    }
    // 0x100003e58
    return _printf("\n");
}

// Address range: 0x100003e70 - 0x100003f30
int64_t entry_point(void) {
    // 0x100003e70
    int64_t v1; // bp-88, 0x100003e70
    _memcpy(&v1, (int64_t *)"f?", 64);
    _printf("before: ");
    function_100003df0();
    function_100003be8((int64_t)&g1, (int64_t)&g1, (int64_t)&g1, (int64_t)&g1);
    _printf("after: ");
    int64_t v2 = function_100003df0(); // 0x100003ef8
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f08
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f1c
        ___stack_chk_fail(v2);
    }
    // 0x100003f20
    return 0;
}

// Address range: 0x100003f30 - 0x100003f3c
int64_t function_100003f30(int64_t a1) {
    // 0x100003f30
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f3c - 0x100003f48
int64_t * function_100003f3c(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f3c
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f48 - 0x100003f54
int32_t function_100003f48(char * format, ...) {
    // 0x100003f48
    return _printf(format);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * s1, char * s2) {
    // 0x100003f54
    return _strcmp(s1, s2);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9

