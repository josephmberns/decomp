//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c18(void);
int64_t function_100003efc(int64_t a1);
int32_t function_100003f08(char * format, ...);
void function_100003f14(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
int32_t function_100003f20(void);
void function_100003f2c(int32_t seed);
int32_t function_100003f38(int32_t * timer);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003c18 - 0x100003c50
int64_t function_100003c18(void) {
    // 0x100003c18
    return 0;
}

// Address range: 0x100003c50 - 0x100003efc
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003c64
    _srand(_time(NULL));
    int64_t v2; // bp-64, 0x100003c50
    int64_t v3 = &v2;
    int64_t v4; // bp-48, 0x100003c50
    int64_t v5 = &v4;
    while (true) {
        int64_t v6 = 0;
        for (int64_t i = 0; i < 4; i++) {
            // 0x100003cbc
            *(int32_t *)(4 * i + v3) = _rand() % 6 + 1;
        }
        // 0x100003cf4
        _qsort(&v2, 4, 4, (int32_t (*)(int64_t *, int64_t *))0x100003c18);
        int64_t v7 = 1;
        int32_t v8 = *(int32_t *)(4 * v7 + v3); // 0x100003d40
        v7++;
        int32_t v9 = v8; // 0x100003d28
        while (v7 != 4) {
            // 0x100003d30
            v8 = *(int32_t *)(4 * v7 + v3) + v9;
            v7++;
            v9 = v8;
        }
        // 0x100003d5c
        *(int32_t *)(4 * v6 + v5) = v8;
        int32_t v10 = v8; // 0x100003d78
        v6++;
        int32_t v11 = v10; // 0x100003c98
        while (v6 != 6) {
            for (int64_t i = 0; i < 4; i++) {
                // 0x100003cbc
                *(int32_t *)(4 * i + v3) = _rand() % 6 + 1;
            }
            // 0x100003cf4
            _qsort(&v2, 4, 4, (int32_t (*)(int64_t *, int64_t *))0x100003c18);
            v7 = 1;
            v8 = *(int32_t *)(4 * v7 + v3);
            v7++;
            v9 = v8;
            while (v7 != 4) {
                // 0x100003d30
                v8 = *(int32_t *)(4 * v7 + v3) + v9;
                v7++;
                v9 = v8;
            }
            // 0x100003d5c
            *(int32_t *)(4 * v6 + v5) = v8;
            v10 = v8 + v11;
            v6++;
            v11 = v10;
        }
        int64_t v12 = 0; // 0x100003da0
        if (v10 < 75 == (74 - v10 & v10) < 0) {
            int32_t v13 = *(int32_t *)(4 * v12 + v5); // 0x100003dd4
            int32_t v14 = v13 < 15 == (14 - v13 & v13) < 0;
            int64_t v15 = v12 + 1;
            v12 = v15;
            int32_t v16 = v14; // 0x100003dc4
            while (v15 != 6) {
                // 0x100003dcc
                v13 = *(int32_t *)(4 * v12 + v5);
                v14 = v16 + (int32_t)(v13 < 15 == (14 - v13 & v13) < 0);
                v15 = v12 + 1;
                v12 = v15;
                v16 = v14;
            }
            if (v14 < 2 == (1 - v14 & v14) < 0) {
                // break -> 0x100003e24
                break;
            }
        }
    }
    // 0x100003e24
    _printf("The 6 random numbers generated are:\n");
    _printf("[");
    for (int32_t i = 0; i < 6; i++) {
        // 0x100003e58
        _printf("%d ", 4);
    }
    // 0x100003e90
    _printf("\b]\n");
    int32_t v17 = _printf("\nTheir sum is %d and %d of them are >= 15\n", 4, 4); // 0x100003ec0
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003ee8
        ___stack_chk_fail((int64_t)v17);
    }
    // 0x100003eec
    return 0;
}

// Address range: 0x100003efc - 0x100003f08
int64_t function_100003efc(int64_t a1) {
    // 0x100003efc
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f08 - 0x100003f14
int32_t function_100003f08(char * format, ...) {
    // 0x100003f08
    return _printf(format);
}

// Address range: 0x100003f14 - 0x100003f20
void function_100003f14(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003f14
    _qsort(base, nmemb, size, compar);
}

// Address range: 0x100003f20 - 0x100003f2c
int32_t function_100003f20(void) {
    // 0x100003f20
    return _rand();
}

// Address range: 0x100003f2c - 0x100003f38
void function_100003f2c(int32_t seed) {
    // 0x100003f2c
    _srand(seed);
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(int32_t * timer) {
    // 0x100003f38
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

