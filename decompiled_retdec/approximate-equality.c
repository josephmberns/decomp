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
int64_t function_100003dc4(void);
int64_t function_100003df8(void);
int32_t function_100003f34(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003dc4 - 0x100003df8
int64_t function_100003dc4(void) {
    // 0x100003dc4
    float64_t v1; // 0x100003dc4
    return __asm_fabd(v1, v1) > v1;
}

// Address range: 0x100003df8 - 0x100003e70
int64_t function_100003df8(void) {
    // 0x100003df8
    function_100003dc4();
    int64_t v1; // 0x100003df8
    int128_t v2; // 0x100003df8
    return _printf("%f, %f => %d\n", (float64_t)(int64_t)v2, (float64_t)(int64_t)v2, v1);
}

// Address range: 0x100003e70 - 0x100003f34
int64_t entry_point(void) {
    // 0x100003e70
    function_100003df8();
    function_100003df8();
    function_100003df8();
    function_100003df8();
    function_100003df8();
    function_100003df8();
    function_100003df8();
    function_100003df8();
    return 0;
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4

