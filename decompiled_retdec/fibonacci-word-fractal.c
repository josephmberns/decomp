//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003edc(char * format, ...);
int32_t function_100003ee8(char * s);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003e34 - 0x100003edc
int64_t entry_point(void) {
    // 0x100003e34
    _puts("%!PS-Adobe-3.0 EPSF\n%%BoundingBox: -10 -10 400 565\n/a{0 0 moveto 0 .4 translate 0 0 lineto stroke -1 1 scale}def\n/b{a 90 rotate}def");
    int32_t v1 = 99; // 0x100003eb8
    int64_t v2; // 0x100003e34
    _printf("/%c{%c %c}def\n", (char)v2, (char)v2, (char)v2);
    v1 = 0x1000000 * v1 + 0x1000000 >> 24;
    while (v1 == 122 || v1 < 122 != (121 - v1 & v1) < 0) {
        // 0x100003e70
        _printf("/%c{%c %c}def\n", (char)v2, (char)v2, (char)v2);
        v1 = 0x1000000 * v1 + 0x1000000 >> 24;
    }
    // 0x100003ec0
    _puts("0 setlinewidth z showpage\n%%EOF");
    return 0;
}

// Address range: 0x100003edc - 0x100003ee8
int32_t function_100003edc(char * format, ...) {
    // 0x100003edc
    return _printf(format);
}

// Address range: 0x100003ee8 - 0x100003ef4
int32_t function_100003ee8(char * s) {
    // 0x100003ee8
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

