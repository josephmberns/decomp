//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c68(void);
int64_t function_100003ce4(void);
int64_t function_100003f3c(int64_t a1);
int64_t * function_100003f48(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f54(char * format, ...);

// --------------------- Global Variables ---------------------

float128_t g1 = 4.94065645841246544176568792868221372e-324L; // 0x100003f60
int64_t g2 = -0xfffffffb; // 0x100003f70

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c68 - 0x100003ce4
int64_t function_100003c68(void) {
    // 0x100003c68
    int64_t result; // 0x100003c68
    // 0x100003cdc
    return result;
}

// Address range: 0x100003ce4 - 0x100003e64
int64_t function_100003ce4(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003cf8
    int64_t v2; // bp-40, 0x100003ce4
    int64_t v3 = &v2; // 0x100003d64
    float128_t v4; // bp-80, 0x100003ce4
    int64_t v5 = &v4;
    int64_t v6; // 0x100003ce4
    while (true) {
      lab_0x100003d0c:
        // 0x100003d0c
        v2 = 1;
        v4 = g1;
        int64_t v7 = 0;
        int32_t v8 = 0; // 0x100003ce4
        int64_t v9; // 0x100003ce4
        int64_t v10 = v9; // 0x100003ce4
        while (true) {
          lab_0x100003d58:;
            int64_t v11 = v7;
            int64_t v12 = 8 * v11; // 0x100003d68
            int64_t v13 = *(int64_t *)(v12 + v3); // 0x100003d68
            int64_t v14 = 0x100000000 * v13 >> 32; // 0x100003d74
            int64_t v15; // bp-56, 0x100003ce4
            int64_t * v16 = (int64_t *)(v12 + (int64_t)&v15); // 0x100003d80
            int64_t v17 = *v16; // 0x100003d80
            v6 = v10;
            if (v17 == v14) {
                // break (via goto) -> 0x100003e1c
                goto lab_0x100003e1c_2;
            }
            int32_t v18 = v8;
            int32_t v19 = v13; // 0x100003e00
            int64_t v20; // 0x100003ce4
            int32_t v21 = *(int32_t *)(v20 + (int64_t)(4 * v19 - 4)); // 0x100003da0
            int32_t v22 = *(int32_t *)(4 * v14 + v20); // 0x100003dac
            int32_t v23 = v21 - v22; // 0x100003db0
            int64_t v24 = v17; // 0x100003db8
            int32_t v25 = 1; // 0x100003db8
            int64_t v26 = v10; // 0x100003db8
            if (v23 != 0 && v23 < 0 == ((v23 ^ v21) & (v22 ^ v21)) < 0) {
                // 0x100003dc0
                v26 = function_100003c68();
                v24 = *v16;
                v25 = 0;
            }
            int64_t v27 = v26;
            int32_t v28 = v25;
            int64_t v29 = v24; // 0x100003d80
            v19 += (int32_t)*(int64_t *)(v12 + v5);
            int64_t v30 = v19; // 0x100003d74
            while (v29 != v30) {
                // 0x100003d94
                v21 = *(int32_t *)(v20 + (int64_t)(4 * v19 - 4));
                v22 = *(int32_t *)(4 * v30 + v20);
                v23 = v21 - v22;
                v24 = v29;
                v25 = v28;
                v26 = v27;
                if (v23 != 0 && v23 < 0 == ((v23 ^ v21) & (v22 ^ v21)) < 0) {
                    // 0x100003dc0
                    v26 = function_100003c68();
                    v24 = *v16;
                    v25 = 0;
                }
                // 0x100003dec
                v27 = v26;
                v28 = v25;
                v29 = v24;
                v19 += (int32_t)*(int64_t *)(v12 + v5);
                v30 = v19;
            }
            // 0x100003e08
            v6 = v27;
            if (v28 % 256 != 0) {
                // break (via goto) -> 0x100003e1c
                goto lab_0x100003e1c_2;
            }
            // 0x100003d44
            v7 = v11 + 1;
            v9 = v27;
            v8 = v18 + 1;
            v10 = v27;
            if (v11 == 0 == ((int32_t)v7 & -v18) < 0) {
                goto lab_0x100003d0c;
            } else {
                goto lab_0x100003d58;
            }
        }
    }
  lab_0x100003e1c_2:;
    int64_t result = v6; // 0x100003e34
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003e3c
        result = ___stack_chk_fail(v6);
    }
    // 0x100003e40
    return result;
}

// Address range: 0x100003e64 - 0x100003f3c
int64_t entry_point(void) {
    // 0x100003e64
    int64_t v1; // bp-64, 0x100003e64
    _memcpy(&v1, &g2, 40);
    function_100003ce4();
    int32_t v2; // 0x100003ef0
    for (int64_t i = 0; i < 10; i++) {
        // 0x100003ed0
        v2 = _printf("%d ", 10);
    }
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f14
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f28
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003f2c
    return 0;
}

// Address range: 0x100003f3c - 0x100003f48
int64_t function_100003f3c(int64_t a1) {
    // 0x100003f3c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f48 - 0x100003f54
int64_t * function_100003f48(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f48
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * format, ...) {
    // 0x100003f54
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6
