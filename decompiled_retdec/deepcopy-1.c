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
int64_t function_100003db8(void);
int32_t function_100003f34(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003db8 - 0x100003e78
int64_t function_100003db8(void) {
    // 0x100003db8
    int64_t v1; // 0x100003db8
    _printf("\ncake.d = %d", v1);
    _printf("\ncake.e = %d", v1);
    _printf("\ncake.l1.a = %d", v1);
    int128_t v2; // 0x100003db8
    _printf("\ncake.l2.b = %f", (float64_t)(int64_t)v2);
    return _printf("\ncake.l2.l1.a = %d", v1);
}

// Address range: 0x100003e78 - 0x100003f34
int64_t entry_point(void) {
    // 0x100003e78
    _printf("Cake 1 is : ");
    function_100003db8();
    _printf("\nCake 2 is : ");
    function_100003db8();
    return 0;
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3
