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
int32_t function_100003f98(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t * g1; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ec4 - 0x100003f98
int64_t entry_point(void) {
    // 0x100003ec4
    *(int32_t *)&g1 = 1;
    int128_t v1 = __asm_sshll(0.0f, 0); // 0x100003f30
    int32_t v2 = *(int32_t *)&g1; // 0x100003f58
    int32_t v3 = v2 + 1; // 0x100003f5c
    *(int32_t *)&g1 = v3;
    while (v2 == 99 || v2 < 99 != (98 - v2 & v3) < 0) {
        // 0x100003f20
        v1 = __asm_sshll(0.0f, 0);
        v2 = *(int32_t *)&g1;
        v3 = v2 + 1;
        *(int32_t *)&g1 = v3;
    }
    // 0x100003f68
    _printf("%f\n", (float64_t)(int64_t)v1);
    return 0;
}

// Address range: 0x100003f98 - 0x100003fa4
int32_t function_100003f98(char * format, ...) {
    // 0x100003f98
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 2
