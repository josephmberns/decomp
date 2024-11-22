//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b68(void);
int64_t function_100003f1c(int64_t a1);
int64_t * function_100003f28(int64_t * s, int32_t c, int32_t n);
int32_t function_100003f34(char * format, ...);

// --------------------- Global Variables ---------------------

float128_t g1 = 1.64221254872089119574353520352250133e-310L; // 0x100003f40

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003b68 - 0x100003c3c
int64_t function_100003b68(void) {
    // 0x100003b68
    int64_t v1; // 0x100003b68
    int64_t v2 = v1;
    int32_t v3 = v1 != 0;
    int32_t v4 = v3; // 0x100003bb0
    int32_t v5 = v3; // 0x100003bb0
    if (v1 != 0) {
        int64_t v6; // 0x100003b68
        int64_t v7 = v6;
        v4 *= (int32_t)(v7 % 10);
        v6 = v7 / 10;
        v5 = v4;
        while (v7 >= 10) {
            // 0x100003bb8
            v7 = v6;
            v4 *= (int32_t)(v7 % 10);
            v6 = v7 / 10;
            v5 = v4;
        }
    }
    int32_t v8 = v5;
    *(int32_t *)v2 = (int32_t)v2 + 1;
    int64_t result; // 0x100003b68
    if (v8 < 10 == (9 - v8 & v8) < 0) {
        // 0x100003c0c
        result = function_100003b68();
    } else {
        // 0x100003c20
        *(int32_t *)v1 = v8;
    }
    // 0x100003c30
    return result;
}

// Address range: 0x100003c3c - 0x100003f1c
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003c58
    int64_t v2 = (float64_t)g1; // bp-64, 0x100003c70
    _printf("Number    MDR    MP\n");
    int64_t v3; // bp-324, 0x100003c3c
    int64_t v4 = &v3;
    int64_t v5 = 0; // 0x100003c3c
    v3 = 0;
    int32_t v6 = *(int32_t *)((0x100000000 * v5 >> 30) + (int64_t)&v2); // 0x100003cb8
    function_100003b68();
    int64_t v7; // 0x100003c3c
    _printf("%6d   %3d   %3d\n", v4, (int64_t)v6, v7);
    int64_t v8 = v5 + 1; // 0x100003d0c
    int32_t v9 = v8; // 0x100003c90
    v5 = v8 & 0xffffffff;
    while (v9 < 4 != (3 - v9 & v9) < 0) {
        // 0x100003ca8
        v3 = 0;
        v6 = *(int32_t *)((0x100000000 * v5 >> 30) + (int64_t)&v2);
        function_100003b68();
        _printf("%6d   %3d   %3d\n", v4, (int64_t)v6, v7);
        v8 = v5 + 1;
        v9 = v8;
        v5 = v8 & 0xffffffff;
    }
    // 0x100003d18
    int64_t v10; // bp-264, 0x100003c3c
    _memset(&v10, 0, 200);
    int64_t v11; // bp-304, 0x100003c3c
    _memset(&v11, 0, 40);
    int32_t v12; // 0x100003c3c
    int64_t v13 = v12;
    int32_t * v14 = (int32_t *)(4 * v13 + (int64_t)&v11);
    int64_t v15 = 20 * v13 + (int64_t)&v10;
    int32_t v16 = 0;
    v3 = 0;
    int64_t v17 = (int64_t)NULL;
    function_100003b68();
    int32_t v18 = *v14; // 0x100003d80
    int32_t v19 = v16; // 0x100003d8c
    if (v18 < 5 != (4 - v18 & v18) < 0) {
        // 0x100003d94
        *v14 = v18 + 1;
        *(int32_t *)(v15 + 4 * (int64_t)v18) = (int32_t)v17;
        v19 = v16 + 1;
    }
    int32_t v20 = v19;
    char * v21 = (char *)(v17 + 1 & 0xffffffff); // 0x100003d54
    while (v20 < 50 != (49 - v20 & v20) < 0) {
        // 0x100003d60
        v16 = v20;
        v3 = 0;
        v17 = (int64_t)v21;
        function_100003b68();
        v18 = *v14;
        v19 = v16;
        if (v18 < 5 != (4 - v18 & v18) < 0) {
            // 0x100003d94
            *v14 = v18 + 1;
            *(int32_t *)(v15 + 4 * (int64_t)v18) = (int32_t)v17;
            v19 = v16 + 1;
        }
        // 0x100003de0
        v20 = v19;
        v21 = (char *)(v17 + 1 & 0xffffffff);
    }
    // 0x100003df0
    _printf("\nMDR: [n0..n4]\n");
    _printf("%3d: [", v4);
    for (int32_t i = 0; i < 5; i++) {
        // 0x100003e50
        _printf("%d%s", v4, (char *)(0x100000000 * v17 >> 32));
    }
    int32_t v22 = _printf("]\n"); // 0x100003ecc
    int64_t v23 = 1; // 0x100003ed8
    int32_t v24 = v23; // 0x100003e04
    int64_t v25 = v23 & 0xffffffff; // 0x100003e10
    while (v24 < 10 != (9 - v24 & v24) < 0) {
        // 0x100003e18
        _printf("%3d: [", v4);
        for (int32_t i = 0; i < 5; i++) {
            // 0x100003e50
            _printf("%d%s", v4, (char *)(0x100000000 * v17 >> 32));
        }
        // 0x100003ec4
        v22 = _printf("]\n");
        v23 = v25 + 1;
        v24 = v23;
        v25 = v23 & 0xffffffff;
    }
    // 0x100003ee4
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003f04
        ___stack_chk_fail((int64_t)v22);
    }
    // 0x100003f08
    return 0;
}

// Address range: 0x100003f1c - 0x100003f28
int64_t function_100003f1c(int64_t a1) {
    // 0x100003f1c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f28 - 0x100003f34
int64_t * function_100003f28(int64_t * s, int32_t c, int32_t n) {
    // 0x100003f28
    return _memset(s, c, n);
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

