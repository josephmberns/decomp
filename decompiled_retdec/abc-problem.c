//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c14(void);
int64_t function_100003f08(int64_t a1);
int64_t * function_100003f14(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f20(char * format, ...);
int32_t function_100003f2c(int32_t c);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c14 - 0x100003e0c
int64_t function_100003c14(void) {
    // 0x100003c14
    int64_t v1; // 0x100003c14
    int32_t v2 = _toupper(0x1000000 * (int32_t)v1 >> 24); // 0x100003c34
    if (v2 == 0) {
        // 0x100003dfc
        return 1;
    }
    int64_t * v3 = (int64_t *)v1;
    int64_t v4 = *v3; // 0x100003c8c
    if (v4 == 0) {
        // 0x100003dfc
        return 0;
    }
    int64_t v5 = v4; // 0x100003c8c
    int64_t * v6 = v3; // 0x100003c8c
    int32_t v7 = 0; // 0x100003de4
    int64_t v8 = v2; // 0x100003c14
    int32_t v9 = 0; // 0x100003c14
    int64_t v10; // 0x100003d1c
    int64_t * v11; // 0x100003c14
    int32_t v12; // 0x100003c14
    int64_t v13; // 0x100003c14
    while (true) {
      lab_0x100003cc8:
        // 0x100003cc8
        v13 = v8;
        v11 = v6;
        v10 = v5;
        if (v2 == (int32_t)*(char *)v10) {
            goto lab_0x100003d14;
        } else {
            // 0x100003cec
            v12 = v9;
            v8 = v13;
            if (v2 == (int32_t)*(char *)(v10 + 1)) {
                goto lab_0x100003d14;
            } else {
                goto lab_0x100003de0;
            }
        }
    }
  lab_0x100003dfc:;
    // 0x100003dfc
    int32_t result; // 0x100003c14
    return result;
  lab_0x100003d14:
    if (v10 != v13) {
        // 0x100003d38
        *v11 = v13;
        *v3 = v10;
    }
    int64_t v14 = function_100003c14(); // 0x100003d7c
    int32_t v15 = v14; // 0x100003d80
    int64_t v16 = *v11; // 0x100003d8c
    v12 = v15;
    v8 = v14;
    if (v16 != v14) {
        // 0x100003da8
        *v11 = v14;
        *v3 = v16;
        v12 = v15;
        v8 = v14;
    }
    goto lab_0x100003de0;
  lab_0x100003de0:
    // 0x100003de0
    v7++;
    v6 = (int64_t *)(8 * (int64_t)v7 + v1);
    v5 = *v6;
    v9 = v12;
    result = v12;
    if (v12 == 0 != v5 != 0) {
        // break -> 0x100003dfc
        goto lab_0x100003dfc;
    }
    goto lab_0x100003cc8;
}

// Address range: 0x100003e0c - 0x100003f08
int64_t entry_point(void) {
    // 0x100003e0c
    int64_t v1; // bp-208, 0x100003e0c
    _memcpy(&v1, (int64_t *)"8?", 168);
    int64_t v2; // bp-280, 0x100003e0c
    int64_t v3 = (int64_t)_memcpy(&v2, (int64_t *)"q?", 72); // 0x100003e78
    if (v2 != 0) {
        int64_t v4 = &v2; // 0x100003ec4
        function_100003c14();
        int32_t v5 = _printf("%s\t%d\n", (char *)v2, 72); // 0x100003eb8
        v4 += 8;
        int64_t v6 = *(int64_t *)v4; // 0x100003e6c
        while (v6 != 0) {
            // 0x100003e80
            function_100003c14();
            v5 = _printf("%s\t%d\n", (char *)v6, 72);
            v4 += 8;
            v6 = *(int64_t *)v4;
        }
        // 0x100003e68
        v3 = v5;
    }
    int64_t v7 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003edc
    if (v7 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003ef0
        ___stack_chk_fail(v3);
    }
    // 0x100003ef4
    return 0;
}

// Address range: 0x100003f08 - 0x100003f14
int64_t function_100003f08(int64_t a1) {
    // 0x100003f08
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f14 - 0x100003f20
int64_t * function_100003f14(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f14
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f20 - 0x100003f2c
int32_t function_100003f20(char * format, ...) {
    // 0x100003f20
    return _printf(format);
}

// Address range: 0x100003f2c - 0x100003f38
int32_t function_100003f2c(int32_t c) {
    // 0x100003f2c
    return _toupper(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

