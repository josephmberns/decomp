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
int64_t function_100003d6c(void);
int64_t function_100003f54(int64_t a1);
int64_t * function_100003f60(int64_t * s, int32_t c, int32_t n);
int32_t function_100003f6c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d6c - 0x100003dec
int64_t function_100003d6c(void) {
    // 0x100003d6c
    int64_t result; // 0x100003d6c
    int32_t v1 = result; // 0x100003d74
    int32_t v2 = 0; // 0x100003d84
    while (v2 - v1 < 0 != ((v2 - v1 ^ v2) & (v2 ^ v1)) < 0) {
        // 0x100003d88
        v2++;
    }
    // 0x100003dcc
    __asm_sshll(0.0f, 0);
    return result;
}

// Address range: 0x100003dec - 0x100003f54
int64_t entry_point(void) {
    // 0x100003dec
    int64_t v1; // bp-64, 0x100003dec
    _memset(&v1, 0, 40);
    v1 = 0x3ff0000000000000;
    int32_t v2; // 0x100003f08
    for (int32_t i = 5; i > -1; i--) {
        // 0x100003e6c
        _printf("mean[");
        int32_t v3 = 0; // 0x100003e90
        if (i != 0 != (i & -i) < 0) {
            _printf(v3 == 0 ? "%g" : ", %g");
            int32_t v4 = v3 + 1; // 0x100003ee0
            int32_t v5 = v4 - i; // 0x100003e88
            v3 = v4;
            while (v5 < 0 != ((v5 ^ v4) & (v4 ^ i)) < 0) {
                // 0x100003e98
                _printf(v3 == 0 ? "%g" : ", %g");
                v4 = v3 + 1;
                v5 = v4 - i;
                v3 = v4;
            }
        }
        // 0x100003eec
        function_100003d6c();
        int128_t v6; // 0x100003dec
        v2 = _printf("] = %g\n", (float64_t)(int64_t)v6);
    }
    int64_t v7 = *(int64_t *)0x100004008; // 0x100003f28
    if (*(int64_t *)v7 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f40
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003f44
    return 0;
}

// Address range: 0x100003f54 - 0x100003f60
int64_t function_100003f54(int64_t a1) {
    // 0x100003f54
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f60 - 0x100003f6c
int64_t * function_100003f60(int64_t * s, int32_t c, int32_t n) {
    // 0x100003f60
    return _memset(s, c, n);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(char * format, ...) {
    // 0x100003f6c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

