//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b78(void);
int64_t function_100003c08(void);
int64_t function_100003c90(void);
int64_t function_100003f54(void);
float64_t function_100003f60(float64_t a1, float64_t a2);
int32_t function_100003f6c(int32_t c);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x3f88; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
float64_t _pow(float64_t a1, float64_t a2);
int32_t _putchar(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003b78 - 0x100003c08
int64_t function_100003b78(void) {
    // 0x100003b78
    int64_t v1; // 0x100003b78
    int64_t result = v1;
    float64_t * v2 = (float64_t *)(result + 8); // 0x100003b94
    float64_t v3 = *v2; // 0x100003b94
    float64_t * v4 = (float64_t *)(result + 16); // 0x100003bac
    float64_t v5 = *v4; // 0x100003bac
    float64_t v6 = sqrt((float64_t)result * (float64_t)result + v3 * v3 + v5 * v5); // 0x100003bbc
    *(float64_t *)result = (float64_t)result / v6;
    *v2 = *v2 / v6;
    *v4 = *v4 / v6;
    return result;
}

// Address range: 0x100003c08 - 0x100003c90
int64_t function_100003c08(void) {
    // 0x100003c08
    int64_t result; // 0x100003c08
    return result;
}

// Address range: 0x100003c90 - 0x100003ef8
int64_t function_100003c90(void) {
    // 0x100003c90
    float64_t v1; // 0x100003c90
    float64_t v2 = v1;
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ca4
    float64_t v4 = -v2; // 0x100003cbc
    __asm_fcvtms(v4);
    __asm_sshll(0.0f, 0);
    float64_t v5 = __asm_frintp(v2); // 0x100003ce0
    int64_t v6; // 0x100003c90
    if (v5 >= v4 != v5 != v4) {
        float64_t v7 = -2.0 * v2;
        float64_t v8 = 2.0 * v2;
        float64_t v9 = v2 * v2;
        __asm_sshll(0.0f, 0);
        __asm_fcvtms(v7);
        __asm_sshll(0.0f, 0);
        float64_t v10 = __asm_frintp(v8); // 0x100003d44
        float64_t v11 = v7; // 0x100003d50
        float64_t v12; // 0x100003c90
        float64_t v13; // 0x100003c90
        uint32_t v14; // 0x100003c90
        float64_t v15; // 0x100003d08
        float64_t v16; // 0x100003c90
        float64_t v17; // 0x100003c90
        int128_t v18; // 0x100003d60
        float64_t v19; // 0x100003d74
        float64_t v20; // 0x100003d8c
        float64_t v21; // 0x100003d90
        float64_t v22; // 0x100003dec
        float64_t v23; // 0x100003e2c
        int32_t v24; // 0x100003e30
        char v25; // 0x100003e80
        float64_t v26; // 0x100003d44
        int128_t v27; // 0x100003c90
        if (v7 <= v10 != v7 != v10) {
            // 0x100003d58
            v15 = v4 + 0.5;
            v16 = v15 * v15;
            v17 = -((v16 - v9));
            v18 = __asm_sshll(0.0f, 0);
            v19 = 0.5 * v7 + 0.5;
            v20 = v19 * v19;
            v21 = v16 + v20;
            if (v21 <= v9 == (v21 != v9)) {
                // 0x100003e8c
                _putchar(32);
                v12 = v21;
            } else {
                // 0x100003db0
                v22 = sqrt(v17 - v20);
                function_100003b78();
                function_100003c08();
                _pow((float64_t)(int64_t)v18, (float64_t)(int64_t)v27);
                v23 = 7.0 * (1.0 - (v1 + v22));
                v24 = v23;
                v14 = v24 > 0 ? v24 : 0;
                v25 = *(char *)(g1 + (int64_t)(v14 < 6 ? v14 : 6));
                _putchar((int32_t)v25);
                v12 = v23;
            }
            // 0x100003e9c
            v13 = v12;
            __asm_sshll(0.0f, 0);
            v26 = __asm_frintp(v8);
            v11 = v13;
            while (v13 <= v26 != v13 != v26) {
                // 0x100003d58
                v18 = __asm_sshll(0.0f, 0);
                v19 = 0.5 * v13 + 0.5;
                v20 = v19 * v19;
                v21 = v16 + v20;
                if (v21 <= v9 == (v21 != v9)) {
                    // 0x100003e8c
                    _putchar(32);
                    v12 = v21;
                } else {
                    // 0x100003db0
                    v22 = sqrt(v17 - v20);
                    function_100003b78();
                    function_100003c08();
                    _pow((float64_t)(int64_t)v18, (float64_t)(int64_t)v27);
                    v23 = 7.0 * (1.0 - (v1 + v22));
                    v24 = v23;
                    v14 = v24 > 0 ? v24 : 0;
                    v25 = *(char *)(g1 + (int64_t)(v14 < 6 ? v14 : 6));
                    _putchar((int32_t)v25);
                    v12 = v23;
                }
                // 0x100003e9c
                v13 = v12;
                __asm_sshll(0.0f, 0);
                v26 = __asm_frintp(v8);
                v11 = v13;
            }
        }
        float64_t v28 = v11;
        int32_t v29 = _putchar(10); // 0x100003eb0
        __asm_sshll(0.0f, 0);
        float64_t v30 = __asm_frintp(v2); // 0x100003ce0
        float64_t v31 = v28; // 0x100003cec
        while (v28 <= v30 != v28 != v30) {
            // 0x100003cf4
            __asm_sshll(0.0f, 0);
            __asm_fcvtms(v7);
            __asm_sshll(0.0f, 0);
            v10 = __asm_frintp(v8);
            v11 = v7;
            if (v7 <= v10 != v7 != v10) {
                // 0x100003d58
                v15 = v31 + 0.5;
                v16 = v15 * v15;
                v17 = -((v16 - v9));
                v18 = __asm_sshll(0.0f, 0);
                v19 = 0.5 * v7 + 0.5;
                v20 = v19 * v19;
                v21 = v16 + v20;
                if (v21 <= v9 == (v21 != v9)) {
                    // 0x100003e8c
                    _putchar(32);
                    v12 = v21;
                } else {
                    // 0x100003db0
                    v22 = sqrt(v17 - v20);
                    function_100003b78();
                    function_100003c08();
                    _pow((float64_t)(int64_t)v18, (float64_t)(int64_t)v27);
                    v23 = 7.0 * (1.0 - (v1 + v22));
                    v24 = v23;
                    v14 = v24 > 0 ? v24 : 0;
                    v25 = *(char *)(g1 + (int64_t)(v14 < 6 ? v14 : 6));
                    _putchar((int32_t)v25);
                    v12 = v23;
                }
                // 0x100003e9c
                v13 = v12;
                __asm_sshll(0.0f, 0);
                v26 = __asm_frintp(v8);
                v11 = v13;
                while (v13 <= v26 != v13 != v26) {
                    // 0x100003d58
                    v18 = __asm_sshll(0.0f, 0);
                    v19 = 0.5 * v13 + 0.5;
                    v20 = v19 * v19;
                    v21 = v16 + v20;
                    if (v21 <= v9 == (v21 != v9)) {
                        // 0x100003e8c
                        _putchar(32);
                        v12 = v21;
                    } else {
                        // 0x100003db0
                        v22 = sqrt(v17 - v20);
                        function_100003b78();
                        function_100003c08();
                        _pow((float64_t)(int64_t)v18, (float64_t)(int64_t)v27);
                        v23 = 7.0 * (1.0 - (v1 + v22));
                        v24 = v23;
                        v14 = v24 > 0 ? v24 : 0;
                        v25 = *(char *)(g1 + (int64_t)(v14 < 6 ? v14 : 6));
                        _putchar((int32_t)v25);
                        v12 = v23;
                    }
                    // 0x100003e9c
                    v13 = v12;
                    __asm_sshll(0.0f, 0);
                    v26 = __asm_frintp(v8);
                    v11 = v13;
                }
            }
            // 0x100003eac
            v28 = v11;
            v29 = _putchar(10);
            __asm_sshll(0.0f, 0);
            v30 = __asm_frintp(v2);
            v31 = v28;
        }
        // 0x100003ccc
        v6 = v29;
    }
    int64_t result = v6; // 0x100003ee0
    if (*(int64_t *)*(int64_t *)0x100004008 != v3) {
        // 0x100003ee8
        result = ___stack_chk_fail();
    }
    // 0x100003eec
    return result;
}

// Address range: 0x100003ef8 - 0x100003f54
int64_t entry_point(void) {
    // 0x100003ef8
    function_100003b78();
    function_100003c90();
    function_100003c90();
    return 0;
}

// Address range: 0x100003f54 - 0x100003f60
int64_t function_100003f54(void) {
    // 0x100003f54
    return ___stack_chk_fail();
}

// Address range: 0x100003f60 - 0x100003f6c
float64_t function_100003f60(float64_t a1, float64_t a2) {
    // 0x100003f60
    return _pow(a1, a2);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(int32_t c) {
    // 0x100003f6c
    return _putchar(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7
