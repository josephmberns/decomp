//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d5c(void);
int64_t function_100003de8(void);
int64_t function_100003f04(int64_t a1);
int64_t * function_100003f10(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f1c(char * format, ...);
void function_100003f28(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
int32_t function_100003f34(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));
int32_t _scanf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d5c - 0x100003de8
int64_t function_100003d5c(void) {
    // 0x100003d5c
    g1++;
    int64_t v1; // 0x100003d5c
    _printf("(%d) Is %s <, ==, or > %s? Answer -1, 0, or 1: ", v1, (char *)v1, (char *)v1);
    _scanf("%d", (int64_t *)v1);
    int32_t result; // 0x100003d5c
    return result;
}

// Address range: 0x100003de8 - 0x100003e74
int64_t function_100003de8(void) {
    // 0x100003de8
    int64_t v1; // 0x100003de8
    int32_t v2 = v1; // 0x100003df8
    _printf("{ ");
    int32_t v3 = -v2; // 0x100003e18
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003e5c
        return _printf("}\n");
    }
    int32_t v4 = 0; // 0x100003e50
    _printf("%s ", (char *)v1);
    v4++;
    while (v4 - v2 < 0 != ((v4 - v2 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003e28
        _printf("%s ", (char *)v1);
        v4++;
    }
    // 0x100003e5c
    return _printf("}\n");
}

// Address range: 0x100003e74 - 0x100003f04
int64_t entry_point(void) {
    // 0x100003e74
    int64_t v1; // bp-80, 0x100003e74
    _memcpy(&v1, (int64_t *)"}?", 56);
    _qsort(&v1, 7, 8, (int32_t (*)(int64_t *, int64_t *))0x100003d5c);
    int64_t v2 = function_100003de8(); // 0x100003ecc
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003edc
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003ef0
        ___stack_chk_fail(v2);
    }
    // 0x100003ef4
    return 0;
}

// Address range: 0x100003f04 - 0x100003f10
int64_t function_100003f04(int64_t a1) {
    // 0x100003f04
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f10 - 0x100003f1c
int64_t * function_100003f10(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f10
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f1c - 0x100003f28
int32_t function_100003f1c(char * format, ...) {
    // 0x100003f1c
    return _printf(format);
}

// Address range: 0x100003f28 - 0x100003f34
void function_100003f28(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003f28
    _qsort(base, nmemb, size, compar);
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _scanf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

