//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e08(void);
int64_t function_100003f50(int64_t a1);
int32_t function_100003f5c(char * format, ...);
void function_100003f68(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));

// --------------------- Global Variables ---------------------

float128_t g1 = 8.48798316484922055212802194780597291e-314L; // 0x100003f74

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));

// ------------------------ Functions -------------------------

// Address range: 0x100003e08 - 0x100003e80
int64_t function_100003e08(void) {
    // 0x100003e08
    int64_t v1; // 0x100003e08
    int32_t v2 = v1;
    int32_t v3 = v2 - (int32_t)v1; // 0x100003e34
    int64_t result = v3 < 0 == ((v3 ^ v2) & (int32_t)(v1 ^ v1)) < 0 ? (int64_t)(v3 != 0) : 0xffffffff;
    return result;
}

// Address range: 0x100003e80 - 0x100003f50
int64_t entry_point(void) {
    int64_t v1 = (float64_t)g1; // bp-48, 0x100003eb0
    _qsort(&v1, 5, 4, (int32_t (*)(int64_t *, int64_t *))0x100003e08);
    int64_t v2; // 0x100003e80
    int32_t v3 = _printf("result: %d %d %d %d %d\n", 5, 4, 0x100003e08, v2, v2); // 0x100003f18
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f28
    if (v4 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f3c
        ___stack_chk_fail((int64_t)v3);
    }
    // 0x100003f40
    return 0;
}

// Address range: 0x100003f50 - 0x100003f5c
int64_t function_100003f50(int64_t a1) {
    // 0x100003f50
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(char * format, ...) {
    // 0x100003f5c
    return _printf(format);
}

// Address range: 0x100003f68 - 0x100003f74
void function_100003f68(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003f68
    _qsort(base, nmemb, size, compar);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

