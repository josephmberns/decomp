//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(int64_t a1);
int64_t function_100003e10(void);
int64_t function_100003e24(void);
int64_t function_100003ef0(void);
int64_t function_100003f5c(int64_t * a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003f68(int64_t a1);
void function_100003f74(int64_t * ptr);
int64_t * function_100003f80(int32_t size);
int32_t function_100003f8c(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___sprintf_chk(int64_t * a1, int64_t a2, int64_t a3, int64_t a4);
int64_t ___stack_chk_fail(int64_t a1);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e10 - 0x100003e24
int64_t function_100003e10(void) {
    // 0x100003e10
    int64_t result; // 0x100003e10
    return result;
}

// Address range: 0x100003e24 - 0x100003ef0
int64_t function_100003e24(void) {
    // 0x100003e24
    int64_t v1; // bp-124, 0x100003e24
    int64_t * v2 = _malloc((int32_t)___sprintf_chk(&v1, 0, 100, (int64_t)"%d") + 1); // 0x100003e84
    int64_t v3 = ___sprintf_chk(v2, 0, -1, (int64_t)"%d"); // 0x100003eb0
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003ec8
    if (v4 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003edc
        ___stack_chk_fail(v3);
    }
    // 0x100003ee0
    return (int64_t)v2;
}

// Address range: 0x100003ef0 - 0x100003f40
int64_t function_100003ef0(void) {
    // 0x100003ef0
    function_100003e10();
    int64_t v1 = function_100003e24(); // 0x100003f0c
    int64_t v2; // 0x100003ef0
    _printf("%s\n", (char *)v2);
    _free((int64_t *)v1);
    return &g1;
}

// Address range: 0x100003f40 - 0x100003f5c
int64_t entry_point(int64_t a1) {
    // 0x100003f40
    function_100003ef0();
    return 0;
}

// Address range: 0x100003f5c - 0x100003f68
int64_t function_100003f5c(int64_t * a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003f5c
    return ___sprintf_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f68 - 0x100003f74
int64_t function_100003f68(int64_t a1) {
    // 0x100003f68
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f74 - 0x100003f80
void function_100003f74(int64_t * ptr) {
    // 0x100003f74
    _free(ptr);
}

// Address range: 0x100003f80 - 0x100003f8c
int64_t * function_100003f80(int32_t size) {
    // 0x100003f80
    return _malloc(size);
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(char * format, ...) {
    // 0x100003f8c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9
