//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c30(void);
int64_t function_100003cd0(int64_t a1, int32_t a2);
int64_t function_100003d28(void);
int64_t function_100003f74(void);
int32_t function_100003f80(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int64_t ___stack_chk_fail(void);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c30 - 0x100003cd0
int64_t function_100003c30(void) {
    // 0x100003c30
    int64_t v1; // 0x100003c30
    int32_t v2 = v1; // 0x100003c40
    int32_t v3 = -v2; // 0x100003c54
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003cb8
        return _printf("\n");
    }
    int32_t v4 = 0; // 0x100003cac
    _printf("%c", (char)v1);
    v4++;
    while (v4 - v2 < 0 != ((v4 - v2 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003c64
        _printf("%c", (char)v1);
        v4++;
    }
    // 0x100003cb8
    return _printf("\n");
}

// Address range: 0x100003cd0 - 0x100003d28
int64_t function_100003cd0(int64_t a1, int32_t a2) {
    // 0x100003cd0
    return ___chkstk_darwin();
}

// Address range: 0x100003d28 - 0x100003e60
int64_t function_100003d28(void) {
    // 0x100003d28
    int64_t v1; // 0x100003d28
    int64_t v2 = v1;
    int64_t v3; // 0x100003d28
    int64_t v4 = (int64_t)&v3 - *(int64_t *)(v2 - 72); // 0x100003d34
    int64_t * v5 = (int64_t *)(v2 - 56); // 0x100003d3c
    *v5 = v4;
    *(int64_t *)(v2 - 40) = *(int64_t *)(v2 - 64);
    int32_t * v6 = (int32_t *)(v2 - 20); // 0x100003d44
    *(int32_t *)(v4 + (int64_t)(4 * *v6 + 4)) = 0;
    *(int32_t *)v4 = 0;
    int32_t * v7 = (int32_t *)(v2 - 44); // 0x100003d58
    *v7 = 0;
    int32_t v8 = *v6; // 0x100003d64
    int32_t v9 = -v8; // 0x100003d68
    if (v9 < 0 != (v8 & v9) < 0) {
        int32_t v10 = 0; // 0x100003d9c
        int32_t v11 = *(int32_t *)(*(int64_t *)(v2 - 16) + 4 * (int64_t)v10); // 0x100003d84
        *(int32_t *)(*v5 + (int64_t)(4 * v10 + 4)) = v11;
        v10 = *v7 + 1;
        *v7 = v10;
        int32_t v12 = *v6; // 0x100003d64
        while (v10 - v12 < 0 != ((v10 - v12 ^ v10) & (v12 ^ v10)) < 0) {
            // 0x100003d78
            v11 = *(int32_t *)(*(int64_t *)(v2 - 16) + 4 * (int64_t)v10);
            *(int32_t *)(*v5 + (int64_t)(4 * v10 + 4)) = v11;
            v10 = *v7 + 1;
            *v7 = v10;
            v12 = *v6;
        }
    }
    int32_t * v13 = (int32_t *)(v2 - 48); // 0x100003da8
    *v13 = 0;
    int32_t v14 = *v6; // 0x100003db4
    int32_t v15 = -v14; // 0x100003db8
    if (v15 < 0 != (v14 & v15) < 0) {
        int32_t v16 = 0; // 0x100003e14
        int64_t v17 = *v5; // 0x100003dc8
        int64_t v18 = 4 * (int64_t)v16; // 0x100003dd0
        int32_t v19 = *(int32_t *)(v18 + v17); // 0x100003dd0
        int32_t v20 = 4 * v16; // 0x100003dd8
        int32_t v21 = *(int32_t *)(v17 + (int64_t)(v20 + 4)); // 0x100003ddc
        int32_t v22 = *(int32_t *)(v17 + (int64_t)(v20 + 8)); // 0x100003dec
        int64_t v23 = *(int64_t *)(v2 - 16); // 0x100003e00
        *(int32_t *)(v23 + v18) = (int32_t)(v21 + v19 + v22 == 2);
        v16 = *v13 + 1;
        *v13 = v16;
        int32_t v24 = *v6; // 0x100003db4
        while (v16 - v24 < 0 != ((v16 - v24 ^ v16) & (v24 ^ v16)) < 0) {
            // 0x100003dc8
            v17 = *v5;
            v18 = 4 * (int64_t)v16;
            v19 = *(int32_t *)(v18 + v17);
            v20 = 4 * v16;
            v21 = *(int32_t *)(v17 + (int64_t)(v20 + 4));
            v22 = *(int32_t *)(v17 + (int64_t)(v20 + 8));
            v23 = *(int64_t *)(v2 - 16);
            *(int32_t *)(v23 + v18) = (int32_t)(v21 + v19 + v22 == 2);
            v16 = *v13 + 1;
            *v13 = v16;
            v24 = *v6;
        }
    }
    // 0x100003e20
    *(int64_t *)(v2 - 80) = *(int64_t *)(v2 - 32);
    int64_t result; // 0x100003d28
    if (*(int64_t *)*(int64_t *)0x100004010 != *(int64_t *)(v2 - 8)) {
        // 0x100003e48
        result = ___stack_chk_fail();
    }
    // 0x100003e4c
    return result;
}

// Address range: 0x100003e60 - 0x100003f74
int64_t entry_point(void) {
    int64_t v1 = (float64_t)*(float128_t *)"_###_##_#_#_#_#__#__"; // bp-48, 0x100003e90
    int64_t v2; // bp-132, 0x100003e60
    int64_t v3 = &v2;
    int64_t v4 = 0;
    char v5 = *(char *)(v4 + (int64_t)&v1); // 0x100003ec0
    *(int32_t *)(4 * v4 + v3) = (int32_t)(v5 == 35);
    v4++;
    int32_t v6 = 0; // 0x100003eb0
    while (v4 != 21) {
        // 0x100003eb8
        v5 = *(char *)(v4 + (int64_t)&v1);
        *(int32_t *)(4 * v4 + v3) = (int32_t)(v5 == 35);
        v4++;
        v6 = 0;
    }
    function_100003c30();
    function_100003cd0(v3, 21);
    int32_t v7 = v6 + 1; // 0x100003f34
    v6 = v7;
    while (v7 != 10) {
        // 0x100003f0c
        function_100003c30();
        function_100003cd0(v3, 21);
        v7 = v6 + 1;
        v6 = v7;
    }
    int64_t v8 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003f4c
    if (v8 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003f60
        ___stack_chk_fail();
    }
    // 0x100003f64
    return 0;
}

// Address range: 0x100003f74 - 0x100003f80
int64_t function_100003f74(void) {
    // 0x100003f74
    return ___stack_chk_fail();
}

// Address range: 0x100003f80 - 0x100003f8c
int32_t function_100003f80(char * format, ...) {
    // 0x100003f80
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6
