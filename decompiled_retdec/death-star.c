//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdbool.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003898(void);
int64_t function_100003928(void);
int64_t function_1000039b0(void);
int64_t function_100003a90(void);
int64_t function_100003f1c(void);
float64_t function_100003f28(float64_t a1);
float64_t function_100003f34(float64_t a1, float64_t a2);
int32_t function_100003f40(char * format, ...);
int32_t function_100003f4c(int32_t c);
float64_t function_100003f58(float64_t a1);
int32_t function_100003f64(int32_t useconds);

// --------------------- Global Variables ---------------------

float64_t g1 = 0.05; // 0x100003f78
int64_t g2 = 0x3f80; // 0x100008000
int64_t g3 = -0x3fb7000000000000; // 0x100008008
int64_t g4 = 0; // 0x100008010
int64_t g5 = 0x4049000000000000; // 0x100008018
float64_t g6 = 20.0; // 0x100008020
float64_t g7 = 20.0; // 0x100008028
float64_t g8 = 0.0; // 0x100008030
float64_t g9 = 20.0; // 0x100008038
float64_t g10 = -6.0; // 0x100008050

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
float64_t _cos(float64_t a1);
float64_t _pow(float64_t a1, float64_t a2);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
float64_t _sin(float64_t a1);
int32_t _usleep(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003898 - 0x100003928
int64_t function_100003898(void) {
    // 0x100003898
    int64_t v1; // 0x100003898
    int64_t result = v1;
    float64_t * v2 = (float64_t *)(result + 8); // 0x1000038b4
    float64_t v3 = *v2; // 0x1000038b4
    float64_t * v4 = (float64_t *)(result + 16); // 0x1000038cc
    float64_t v5 = *v4; // 0x1000038cc
    float64_t v6 = sqrt((float64_t)result * (float64_t)result + v3 * v3 + v5 * v5); // 0x1000038dc
    *(float64_t *)result = (float64_t)result / v6;
    *v2 = *v2 / v6;
    *v4 = *v4 / v6;
    return result;
}

// Address range: 0x100003928 - 0x1000039b0
int64_t function_100003928(void) {
    // 0x100003928
    int64_t result; // 0x100003928
    return result;
}

// Address range: 0x1000039b0 - 0x100003a90
int64_t function_1000039b0(void) {
    // 0x1000039b0
    int64_t v1; // 0x1000039b0
    float64_t v2; // 0x1000039b0
    float64_t v3 = v2 - (float64_t)v1; // 0x1000039d4
    float64_t v4 = v2 - *(float64_t *)(v1 + 8); // 0x1000039e8
    float64_t v5 = *(float64_t *)(v1 + 24); // 0x1000039f4
    float64_t v6 = v3 * v3 + v4 * v4 - v5 * v5; // 0x100003a18
    int64_t result = 0; // 0x100003a24
    if (v6 >= 0.0) {
        float64_t v7 = sqrt(-v6); // 0x100003a40
        float64_t * v8 = (float64_t *)(v1 + 16); // 0x100003a4c
        *(float64_t *)v1 = *v8 - v7;
        *(float64_t *)v1 = v7 + *v8;
        result = 1;
    }
    // 0x100003a84
    return result;
}

// Address range: 0x100003a90 - 0x100003e6c
int64_t function_100003a90(void) {
    // 0x100003a90
    float64_t v1; // 0x100003a90
    float64_t v2 = v1;
    float64_t v3 = v1;
    float64_t v4 = v1;
    float64_t v5 = v1;
    int64_t v6 = *(int64_t *)0x100004008; // 0x100003aa8
    float64_t v7 = g7 - g9; // 0x100003ac4
    __asm_fcvtms(v7);
    __asm_sshll(0.0f, 0);
    float64_t v8 = __asm_frintp(g7 + g9); // 0x100003af8
    float64_t v9; // 0x100003a90
    float64_t v10; // 0x100003a90
    float64_t v11; // 0x100003a90
    float64_t v12; // 0x100003a90
    int128_t v13; // 0x100003b98
    int64_t v14; // 0x100003a90
    if (v7 <= v8 != v7 != v8) {
        bool v15 = v3 == v5 | v3 > v5 != (v3 >= v5 == v3 <= v5);
        int32_t v16; // 0x100003e24
        while (true) {
            // 0x100003b0c
            __asm_sshll(0.0f, 0);
            float64_t v17 = g6 - 2.0 * g9;
            __asm_fcvtms(v17);
            __asm_sshll(0.0f, 0);
            float64_t v18 = __asm_frintp(g6 + 2.0 * g9); // 0x100003b7c
            v9 = v17;
            v11 = v17;
            if (v17 <= v18 != v17 != v18) {
                while (true) {
                  lab_0x100003b90:
                    // 0x100003b90
                    v13 = __asm_sshll(0.0f, 0);
                    float64_t v19 = g6;
                    v10 = v19 + 0.5 * (v9 - v19) + 0.5;
                    if ((int32_t)function_1000039b0() == 0) {
                        goto lab_0x100003ce4;
                    } else {
                        // 0x100003bfc
                        if (v15 == ((int32_t)function_1000039b0() != 0)) {
                            if (v2 == v4 || v2 > v4 != (v2 >= v4 == v2 <= v4)) {
                                if (v2 == v5 || v2 > v5 != (v2 >= v5 == v2 <= v5)) {
                                    // 0x100003cf0
                                    v12 = v5 - g8;
                                    goto lab_0x100003d70;
                                } else {
                                    // 0x100003d30
                                    v12 = g10 - v2;
                                    goto lab_0x100003d70;
                                }
                            } else {
                                goto lab_0x100003ce4;
                            }
                        } else {
                            // 0x100003cf0
                            v12 = v5 - g8;
                            goto lab_0x100003d70;
                        }
                    }
                }
            }
          lab_0x100003e20:;
            float64_t v20 = v11; // 0x100003ae0
            v16 = _putchar(10);
            __asm_sshll(0.0f, 0);
            float64_t v21 = __asm_frintp(g7 + g9); // 0x100003af8
            if (v20 <= v21 == (v20 != v21)) {
                // break -> 0x100003ad4
                break;
            }
        }
        // 0x100003ad4
        v14 = v16;
    }
    int64_t result = v14; // 0x100003e54
    if (*(int64_t *)*(int64_t *)0x100004008 != *(int64_t *)v6) {
        // 0x100003e5c
        result = ___stack_chk_fail();
    }
    // 0x100003e60
    return result;
  lab_0x100003ce4:
    // 0x100003ce4
    _putchar(43);
    float64_t v22 = v10; // 0x100003cec
    goto lab_0x100003e10;
  lab_0x100003e10:;
    float64_t v23 = v22; // 0x100003b5c
    __asm_sshll(0.0f, 0);
    float64_t v24 = __asm_frintp(g6 + 2.0 * g9); // 0x100003b7c
    v9 = v23;
    v11 = v23;
    if (v23 <= v24 == (v23 != v24)) {
        // break -> 0x100003e20
        goto lab_0x100003e20;
    }
    goto lab_0x100003b90;
  lab_0x100003d70:
    // 0x100003d70
    function_100003898();
    function_100003928();
    int128_t v25; // 0x100003a90
    _pow((float64_t)(int64_t)v13, (float64_t)(int64_t)v25);
    float64_t v26 = 7.0 * (1.0 - (v1 + v12)); // 0x100003db0
    int32_t v27 = v26; // 0x100003db4
    uint32_t v28 = v27 > 0 ? v27 : 0;
    char v29 = *(char *)(g2 + (int64_t)(v28 < 6 ? v28 : 6)); // 0x100003e04
    _putchar((int32_t)v29);
    v22 = v26;
    goto lab_0x100003e10;
}

// Address range: 0x100003e6c - 0x100003f1c
int64_t entry_point(void) {
    float64_t v1 = 0.0; // 0x100003e84
    int128_t v2; // 0x100003e6c
    int64_t v3 = v2; // 0x100003e84
    while (true) {
        // 0x100003e88
        _printf((char *)0x100003f8b);
        float64_t v4 = _cos((float64_t)v3); // 0x100003ea4
        g4 = 2.0 * v1;
        g5 = v1;
        float64_t v5 = _sin(_cos(v4)); // 0x100003ed4
        g3 = v1;
        function_100003898();
        function_100003a90();
        _usleep(0x186a0);
        v1 += g1;
        v3 = (float32_t)v5;
    }
}

// Address range: 0x100003f1c - 0x100003f28
int64_t function_100003f1c(void) {
    // 0x100003f1c
    return ___stack_chk_fail();
}

// Address range: 0x100003f28 - 0x100003f34
float64_t function_100003f28(float64_t a1) {
    // 0x100003f28
    return _cos(a1);
}

// Address range: 0x100003f34 - 0x100003f40
float64_t function_100003f34(float64_t a1, float64_t a2) {
    // 0x100003f34
    return _pow(a1, a2);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(char * format, ...) {
    // 0x100003f40
    return _printf(format);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(int32_t c) {
    // 0x100003f4c
    return _putchar(c);
}

// Address range: 0x100003f58 - 0x100003f64
float64_t function_100003f58(float64_t a1) {
    // 0x100003f58
    return _sin(a1);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(int32_t useconds) {
    // 0x100003f64
    return _usleep(useconds);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12
