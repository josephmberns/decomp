//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003cfc(void);
int64_t function_100003dec(void);
int64_t function_100003f20(int64_t * a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003f2c(int64_t a1);
int32_t function_100003f38(char * format, ...);
int32_t function_100003f44(int32_t c);
void function_100003f50(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
int32_t function_100003f5c(char * s1, char * s2);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___sprintf_chk(int64_t * a1, int64_t a2, int64_t a3, int64_t a4);
int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));
int32_t _strcmp(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003cfc - 0x100003dec
int64_t function_100003cfc(void) {
    // 0x100003cfc
    int64_t v1; // bp-56, 0x100003cfc
    ___sprintf_chk(&v1, 0, 32, (int64_t)"%d%d");
    int64_t v2; // bp-88, 0x100003cfc
    ___sprintf_chk(&v2, 0, 32, (int64_t)"%d%d");
    int32_t result = _strcmp((char *)&v2, (char *)&v1); // 0x100003db0
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003dc4
    if (v3 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003dd8
        ___stack_chk_fail((int64_t)result);
    }
    // 0x100003ddc
    return result;
}

// Address range: 0x100003dec - 0x100003e84
int64_t function_100003dec(void) {
    // 0x100003dec
    int64_t v1; // 0x100003dec
    int32_t v2 = v1; // 0x100003dfc
    int64_t v3 = 0x100000000 * v1 >> 32; // 0x100003e04
    _qsort((int64_t *)v1, (int32_t)v3, 4, (int32_t (*)(int64_t *, int64_t *))0x100003cfc);
    int32_t v4 = -v2; // 0x100003e28
    if (v4 < 0 == (v4 & v2) < 0) {
        // 0x100003e70
        return _putchar(10);
    }
    int32_t v5 = 0; // 0x100003e30
    _printf("%d", v3);
    v5++;
    while (v5 - v2 < 0 != ((v5 - v2 ^ v5) & (v5 ^ v2)) < 0) {
        // 0x100003e38
        _printf("%d", v3);
        v5++;
    }
    // 0x100003e70
    return _putchar(10);
}

// Address range: 0x100003e84 - 0x100003f20
int64_t entry_point(void) {
    // 0x100003e84
    function_100003dec();
    int64_t v1 = function_100003dec(); // 0x100003ee8
    int64_t v2 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003ef8
    if (v2 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003f0c
        ___stack_chk_fail(v1);
    }
    // 0x100003f10
    return 0;
}

// Address range: 0x100003f20 - 0x100003f2c
int64_t function_100003f20(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003f20
    return ___sprintf_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f2c - 0x100003f38
int64_t function_100003f2c(int64_t a1) {
    // 0x100003f2c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(char * format, ...) {
    // 0x100003f38
    return _printf(format);
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(int32_t c) {
    // 0x100003f44
    return _putchar(c);
}

// Address range: 0x100003f50 - 0x100003f5c
void function_100003f50(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003f50
    _qsort(base, nmemb, size, compar);
}

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(char * s1, char * s2) {
    // 0x100003f5c
    return _strcmp(s1, s2);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9

