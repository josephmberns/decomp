//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d50(void);
int64_t function_100003d88(void);
int64_t function_100003f58(int64_t a1);
int64_t * function_100003f64(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f70(char * format, ...);
void function_100003f7c(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));

// --------------------- Global Variables ---------------------

int64_t g1 = 5; // 0x100004028

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));

// ------------------------ Functions -------------------------

// Address range: 0x100003d50 - 0x100003d88
int64_t function_100003d50(void) {
    // 0x100003d50
    return 0;
}

// Address range: 0x100003d88 - 0x100003ec4
int64_t function_100003d88(void) {
    // 0x100003d88
    int64_t v1; // 0x100003d88
    int32_t v2 = v1; // 0x100003d94
    int32_t v3 = 1 - v2; // 0x100003db4
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003eb8
        int64_t result; // 0x100003d88
        return result;
    }
    int32_t v4 = v1; // 0x100003d9c
    int32_t v5 = -v4; // 0x100003dd8
    int32_t v6 = 1; // 0x100003eac
    int32_t v7; // 0x100003d88
    while (true) {
      lab_0x100003dd0:
        // 0x100003dd0
        v7 = v6;
        int32_t v8 = 0; // 0x100003de0
        if (v5 < 0 == (v5 & v4) < 0) {
            // 0x100003e78
            _printf("%d", v1);
            goto lab_0x100003e98;
        } else {
            int32_t v9 = 0; // 0x100003e14
            if (v7 % *(int32_t *)(16 * (int64_t)v8 + v1) == 0) {
                // 0x100003e1c
                _printf("%s", (char *)v1);
                v9 = 1;
            }
            int32_t v10 = v9;
            int32_t v11 = v8 + 1; // 0x100003e54
            int32_t v12 = v11 - v4; // 0x100003dd8
            v8 = v11;
            while (v12 < 0 != ((v12 ^ v11) & (v11 ^ v4)) < 0) {
                // 0x100003de8
                v9 = v10;
                if (v7 % *(int32_t *)(16 * (int64_t)v8 + v1) == 0) {
                    // 0x100003e1c
                    _printf("%s", (char *)v1);
                    v9 = 1;
                }
                // 0x100003e50
                v10 = v9;
                v11 = v8 + 1;
                v12 = v11 - v4;
                v8 = v11;
            }
            if (v10 == 0) {
                // 0x100003e78
                _printf("%d", v1);
                goto lab_0x100003e98;
            } else {
                goto lab_0x100003e98;
            }
        }
    }
  lab_0x100003dac:;
    // 0x100003eb8
    int32_t result2; // 0x100003ea0
    return result2;
  lab_0x100003e98:
    // 0x100003e98
    result2 = _printf("\n");
    v6 = v7 + 1;
    int32_t v13 = v6 - v2; // 0x100003db4
    if (v13 < 0 == ((v13 ^ v6) & (v6 ^ v2)) < 0) {
        // break -> 0x100003dac
        goto lab_0x100003dac;
    }
    goto lab_0x100003dd0;
}

// Address range: 0x100003ec4 - 0x100003f58
int64_t entry_point(void) {
    // 0x100003ec4
    int64_t v1; // bp-72, 0x100003ec4
    _memcpy(&v1, &g1, 48);
    _qsort(&v1, 3, 16, (int32_t (*)(int64_t *, int64_t *))0x100003d50);
    int64_t v2 = function_100003d88(); // 0x100003f20
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f30
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f44
        ___stack_chk_fail(v2);
    }
    // 0x100003f48
    return 0;
}

// Address range: 0x100003f58 - 0x100003f64
int64_t function_100003f58(int64_t a1) {
    // 0x100003f58
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f64 - 0x100003f70
int64_t * function_100003f64(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f64
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(char * format, ...) {
    // 0x100003f70
    return _printf(format);
}

// Address range: 0x100003f7c - 0x100003f88
void function_100003f7c(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003f7c
    _qsort(base, nmemb, size, compar);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7
