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
int64_t function_100003b48(void);
int64_t function_100003bb0(void);
int64_t function_100003bf4(void);
int64_t function_100003c38(void);
int64_t function_100003c78(void);
int64_t function_100003cb8(void);
float64_t function_100003ec4(float64_t a1);
int32_t function_100003ed0(char * format, ...);
float64_t function_100003edc(float64_t a1);

// ------- Dynamically Linked Functions Without Header --------

float64_t _cos(float64_t a1);
int32_t _printf(char * a1, ...);
float64_t _sin(float64_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003b48 - 0x100003bb0
int64_t function_100003b48(void) {
    // 0x100003b48
    int128_t v1; // 0x100003b48
    return _sin(_cos((float64_t)(int64_t)v1));
}

// Address range: 0x100003bb0 - 0x100003bf4
int64_t function_100003bb0(void) {
    // 0x100003bb0
    int64_t result; // 0x100003bb0
    return result;
}

// Address range: 0x100003bf4 - 0x100003c38
int64_t function_100003bf4(void) {
    // 0x100003bf4
    int64_t result; // 0x100003bf4
    return result;
}

// Address range: 0x100003c38 - 0x100003c78
int64_t function_100003c38(void) {
    // 0x100003c38
    int64_t result; // 0x100003c38
    return result;
}

// Address range: 0x100003c78 - 0x100003cb8
int64_t function_100003c78(void) {
    // 0x100003c78
    int64_t result; // 0x100003c78
    return result;
}

// Address range: 0x100003cb8 - 0x100003d70
int64_t function_100003cb8(void) {
    // 0x100003cb8
    int64_t v1; // 0x100003cb8
    int128_t v2; // 0x100003cb8
    return _printf("%lf %c %c %lf %c", (float64_t)(int64_t)v2, (char)v1, (char)v1, (float64_t)(int64_t)v2, (char)v1);
}

// Address range: 0x100003d70 - 0x100003ec4
int64_t entry_point(void) {
    // 0x100003d70
    function_100003b48();
    function_100003b48();
    _printf("\nVector a : ");
    function_100003cb8();
    _printf("\n\nVector b : ");
    function_100003cb8();
    _printf("\n\nSum of vectors a and b : ");
    function_100003bb0();
    function_100003cb8();
    _printf("\n\nDifference of vectors a and b : ");
    function_100003bf4();
    function_100003cb8();
    _printf("\n\nMultiplying vector a by 3 : ");
    function_100003c38();
    function_100003cb8();
    _printf("\n\nDividing vector b by 2.5 : ");
    function_100003c78();
    function_100003cb8();
    return 0;
}

// Address range: 0x100003ec4 - 0x100003ed0
float64_t function_100003ec4(float64_t a1) {
    // 0x100003ec4
    return _cos(a1);
}

// Address range: 0x100003ed0 - 0x100003edc
int32_t function_100003ed0(char * format, ...) {
    // 0x100003ed0
    return _printf(format);
}

// Address range: 0x100003edc - 0x100003ee8
float64_t function_100003edc(float64_t a1) {
    // 0x100003edc
    return _sin(a1);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10

