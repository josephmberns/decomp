//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c74(void);
int64_t function_100003e94(int64_t a1);
float64_t function_100003ea0(float64_t a1, float64_t a2);
float64_t function_100003eac(float64_t a1);
int32_t function_100003eb8(char * format, ...);
float64_t function_100003ec4(float64_t a1);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
float64_t _atan2(float64_t a1, float64_t a2);
float64_t _cos(float64_t a1);
int32_t _printf(char * a1, ...);
float64_t _sin(float64_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003c74 - 0x100003d90
int64_t function_100003c74(void) {
    // 0x100003c74
    int64_t v1; // 0x100003c74
    int32_t v2 = v1; // 0x100003c84
    int128_t v3; // 0x100003c74
    int64_t v4 = v3;
    int32_t v5 = -v2; // 0x100003ca4
    int32_t v6 = 0; // 0x100003cac
    int128_t v7; // 0x100003d44
    if (v5 < 0 == (v5 & v2) < 0) {
        // 0x100003d38
        v7 = __asm_sshll(0.0f, 0);
        __asm_sshll(0.0f, 0);
        return _atan2((float64_t)v4, (float64_t)(int64_t)v7);
    }
    float64_t v8 = _cos((float64_t)v4); // 0x100003ce0
    v6++;
    int64_t v9 = (float32_t)_sin(v8);
    int32_t v10 = v6 - v2; // 0x100003ca4
    int64_t v11 = v9; // 0x100003cac
    while (v10 < 0 != ((v10 ^ v6) & (v6 ^ v2)) < 0) {
        // 0x100003cb4
        v8 = _cos((float64_t)v9);
        v6++;
        v9 = (float32_t)_sin(v8);
        v10 = v6 - v2;
        v11 = v9;
    }
    // 0x100003d38
    v7 = __asm_sshll(0.0f, 0);
    __asm_sshll(0.0f, 0);
    return _atan2((float64_t)v11, (float64_t)(int64_t)v7);
}

// Address range: 0x100003d90 - 0x100003e94
int64_t entry_point(void) {
    // 0x100003d90
    function_100003c74();
    int128_t v1; // 0x100003d90
    _printf("\nMean Angle for 1st set : %lf degrees", (float64_t)(int64_t)v1);
    function_100003c74();
    _printf("\nMean Angle for 2nd set : %lf degrees", (float64_t)(int64_t)v1);
    function_100003c74();
    int32_t v2 = _printf("\nMean Angle for 3rd set : %lf degrees\n", (float64_t)(int64_t)v1); // 0x100003e5c
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003e6c
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003e80
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003e84
    return 0;
}

// Address range: 0x100003e94 - 0x100003ea0
int64_t function_100003e94(int64_t a1) {
    // 0x100003e94
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003ea0 - 0x100003eac
float64_t function_100003ea0(float64_t a1, float64_t a2) {
    // 0x100003ea0
    return _atan2(a1, a2);
}

// Address range: 0x100003eac - 0x100003eb8
float64_t function_100003eac(float64_t a1) {
    // 0x100003eac
    return _cos(a1);
}

// Address range: 0x100003eb8 - 0x100003ec4
int32_t function_100003eb8(char * format, ...) {
    // 0x100003eb8
    return _printf(format);
}

// Address range: 0x100003ec4 - 0x100003ed0
float64_t function_100003ec4(float64_t a1) {
    // 0x100003ec4
    return _sin(a1);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7
