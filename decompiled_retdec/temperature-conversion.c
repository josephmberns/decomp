//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e08(void);
int64_t function_100003e28(void);
int64_t function_100003e50(void);
int64_t function_100003e70(void);
float64_t function_100003f50(char * nptr);
int32_t function_100003f5c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

float64_t _atof(char * a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e08 - 0x100003e28
int64_t function_100003e08(void) {
    // 0x100003e08
    int64_t result; // 0x100003e08
    return result;
}

// Address range: 0x100003e28 - 0x100003e50
int64_t function_100003e28(void) {
    // 0x100003e28
    int64_t result; // 0x100003e28
    return result;
}

// Address range: 0x100003e50 - 0x100003e70
int64_t function_100003e50(void) {
    // 0x100003e50
    int64_t result; // 0x100003e50
    return result;
}

// Address range: 0x100003e70 - 0x100003ef8
int64_t function_100003e70(void) {
    // 0x100003e70
    int128_t v1; // 0x100003e70
    _printf("K %.2f\n", (float64_t)(int64_t)v1);
    function_100003e08();
    _printf("C %.2f\n", (float64_t)(int64_t)v1);
    function_100003e28();
    _printf("F %.2f\n", (float64_t)(int64_t)v1);
    function_100003e50();
    return _printf("R %.2f", (float64_t)(int64_t)v1);
}

// Address range: 0x100003ef8 - 0x100003f50
int64_t entry_point(void) {
    // 0x100003ef8
    int64_t v1; // 0x100003ef8
    int32_t v2 = v1; // 0x100003f08
    int32_t v3 = v2 - 1; // 0x100003f14
    if (v3 != 0 && v3 < 0 == (v2 & -v2) < 0) {
        // 0x100003f24
        _atof((char *)*(int64_t *)(v1 + 8));
        function_100003e70();
    }
    // 0x100003f40
    return 0;
}

// Address range: 0x100003f50 - 0x100003f5c
float64_t function_100003f50(char * nptr) {
    // 0x100003f50
    return _atof(nptr);
}

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(char * format, ...) {
    // 0x100003f5c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

