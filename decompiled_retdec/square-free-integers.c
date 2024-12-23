//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdbool.h>
#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000038d4(void);
int64_t function_100003a78(void);
int64_t function_100003ec0(int64_t a1);
int64_t * function_100003ecc(int32_t nmemb, int32_t size);
void function_100003ed8(int64_t * ptr);
int64_t * function_100003ee4(int32_t size);
int32_t function_100003ef0(char * format, ...);

// --------------------- Global Variables ---------------------

float128_t g1 = 2.12199579101467887969550686928086571e-311L; // 0x100003f94
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x1000038d4 - 0x100003a78
int64_t function_1000038d4(void) {
    // 0x1000038d4
    int64_t v1; // 0x1000038d4
    uint64_t v2 = v1;
    int64_t * v3 = _calloc((int32_t)v2 + 1, 1); // 0x1000038fc
    int64_t v4 = (int64_t)v3; // 0x1000038fc
    *(int64_t *)v1 = 2;
    if (v2 == 9 || v2 > 9) {
        int64_t v5 = 3;
        int64_t v6 = 9;
        int64_t v7; // 0x10000399c
        if (v6 >= v2 != v6 != v2) {
            // 0x100003974
            v7 = v6;
            *(char *)(v7 + v4) = 1;
            v7 += 2 * v5;
            while (v7 >= v2 != v7 != v2) {
                // 0x100003974
                *(char *)(v7 + v4) = 1;
                v7 += 2 * v5;
            }
        }
        int64_t v8 = v5 + 2; // 0x1000039b0
        int64_t v9 = v8; // 0x1000039d0
        while (*(char *)(v8 + v4) != 0) {
            // 0x1000039ac
            v8 = v9 + 2;
            v9 = v8;
        }
        int64_t v10 = v8 * v8; // 0x10000392c
        while (v10 == v2 || v10 < v2) {
            // 0x10000395c
            v5 = v8;
            v6 = v10;
            if (v6 >= v2 != v6 != v2) {
                // 0x100003974
                v7 = v6;
                *(char *)(v7 + v4) = 1;
                v7 += 2 * v5;
                while (v7 >= v2 != v7 != v2) {
                    // 0x100003974
                    *(char *)(v7 + v4) = 1;
                    v7 += 2 * v5;
                }
            }
            // 0x1000039ac
            v8 = v5 + 2;
            v9 = v8;
            while (*(char *)(v8 + v4) != 0) {
                // 0x1000039ac
                v8 = v9 + 2;
                v9 = v8;
            }
            // 0x100003924
            v10 = v8 * v8;
        }
    }
    // 0x1000039f0
    if (v2 <= 3 == (v2 != 3)) {
        // 0x100003a58
        *(int64_t *)v1 = 1;
        _free(v3);
        return &g2;
    }
    int64_t v11 = 1;
    int64_t v12 = 3;
    int64_t v13 = v11; // 0x100003a20
    if (*(char *)(v12 + v4) == 0) {
        // 0x100003a28
        *(int64_t *)(8 * v11 + v1) = v12;
        v13 = v11 + 1;
    }
    int64_t v14 = v13;
    int64_t v15 = v12 + 2; // 0x100003a4c
    while (v15 >= v2 != v15 != v2) {
        // 0x100003a08
        v11 = v14;
        v12 = v15;
        v13 = v11;
        if (*(char *)(v12 + v4) == 0) {
            // 0x100003a28
            *(int64_t *)(8 * v11 + v1) = v12;
            v13 = v11 + 1;
        }
        // 0x100003a48
        v14 = v13;
        v15 = v12 + 2;
    }
    // 0x100003a58
    *(int64_t *)v1 = v14;
    _free(v3);
    return &g2;
}

// Address range: 0x100003a78 - 0x100003bfc
int64_t function_100003a78(void) {
    // 0x100003a78
    int64_t v1; // 0x100003a78
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    int64_t * v4 = _malloc(8 * (int32_t)(int64_t)sqrt((float64_t)v2) + 8); // 0x100003ab8
    function_1000038d4();
    if (v3 >= v2 == (v3 != v2)) {
        // 0x100003bdc
        *(int64_t *)v1 = 0;
        _free(v4);
        return &g2;
    }
    int64_t v5 = 0;
    int64_t v6; // 0x100003a78
    while (true) {
        int64_t v7 = v5;
        int64_t v8; // 0x100003a78
        uint64_t v9 = v8;
        int64_t v10; // 0x100003a78
        if (v1 != 0) {
            int64_t v11 = 0;
            int64_t v12 = *(int64_t *)(8 * v11 + (int64_t)v4); // 0x100003b24
            uint64_t v13 = v12 * v12; // 0x100003b34
            while (v13 == v9 || v13 < v9) {
                // 0x100003b58
                v10 = v7;
                if (v9 % v13 == 0) {
                    goto lab_0x100003bcc;
                }
                int64_t v14 = v11 + 1; // 0x100003b8c
                int64_t v15 = v14; // 0x100003b14
                if (v14 >= v1) {
                    // break -> 0x100003bac
                    break;
                }
                v11 = v15;
                v12 = *(int64_t *)(8 * v11 + (int64_t)v4);
                v13 = v12 * v12;
            }
        }
        // 0x100003bac
        *(int64_t *)(8 * v7 + v1) = v9;
        v10 = v7 + 1;
      lab_0x100003bcc:
        // 0x100003bcc
        v5 = v10;
        int64_t v16 = v9 + 1; // 0x100003bd0
        v8 = v16;
        v6 = v5;
        if (v16 >= v2 == (v16 != v2)) {
            // break -> 0x100003bdc
            break;
        }
    }
    // 0x100003bdc
    *(int64_t *)v1 = v6;
    _free(v4);
    return &g2;
}

// Address range: 0x100003bfc - 0x100003ec0
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003c30
    int64_t * v2 = _malloc(0x7a1200); // 0x100003c44
    int64_t v3 = (int64_t)v2; // 0x100003c44
    _printf("Square-free integers from 1 to 145:\n");
    function_100003a78();
    int64_t v4; // bp-80, 0x100003bfc
    int64_t v5; // 0x100003bfc
    if (v5 == 0) {
        // 0x100003dd8
        _printf("\n\nSquare-free integers from %ld to %ld:\n", 145, (int32_t)v3);
        function_100003a78();
    } else {
        uint64_t v6 = 0;
        if (v6 != 0 == v6 % 20 == 0) {
            // 0x100003cc4
            _printf("\n");
        }
        // 0x100003cd4
        _printf("%4lld", 145);
        int64_t v7 = v6 + 1; // 0x100003cfc
        while (v7 < v4) {
            // 0x100003c8c
            v6 = v7;
            if (v6 != 0 == v6 % 20 == 0) {
                // 0x100003cc4
                _printf("\n");
            }
            // 0x100003cd4
            _printf("%4lld", 145);
            v7 = v6 + 1;
        }
        // 0x100003c74
        _printf("\n\nSquare-free integers from %ld to %ld:\n", 145, (int32_t)v3);
        function_100003a78();
        if (v4 != 0) {
            uint64_t v8 = 0;
            if (v8 != 0 == v8 % 5 == 0) {
                // 0x100003d94
                _printf("\n");
            }
            // 0x100003da4
            _printf("%14lld", 0xe8d4a51091);
            int64_t v9 = v8 + 1; // 0x100003dcc
            while (v9 < v4) {
                // 0x100003d5c
                v8 = v9;
                if (v8 != 0 == v8 % 5 == 0) {
                    // 0x100003d94
                    _printf("\n");
                }
                // 0x100003da4
                _printf("%14lld", 0xe8d4a51091);
                v9 = v8 + 1;
            }
        }
    }
    // 0x100003dd8
    _printf("\n\nNumber of square-free integers:\n");
    float128_t v10 = g1; // bp-48, 0x100003df0
    for (int64_t i = 0; i < 5; i++) {
        int32_t v11 = *(int32_t *)(4 * i + (int64_t)&v10); // 0x100003e24
        function_100003a78();
        _printf("  from %d to %d = %lld\n", (int64_t)v11, v3, (int64_t)&v4);
    }
    // 0x100003e84
    _free(v2);
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003eac
        ___stack_chk_fail((int64_t)&g2);
    }
    // 0x100003eb0
    return 0;
}

// Address range: 0x100003ec0 - 0x100003ecc
int64_t function_100003ec0(int64_t a1) {
    // 0x100003ec0
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003ecc - 0x100003ed8
int64_t * function_100003ecc(int32_t nmemb, int32_t size) {
    // 0x100003ecc
    return _calloc(nmemb, size);
}

// Address range: 0x100003ed8 - 0x100003ee4
void function_100003ed8(int64_t * ptr) {
    // 0x100003ed8
    _free(ptr);
}

// Address range: 0x100003ee4 - 0x100003ef0
int64_t * function_100003ee4(int32_t size) {
    // 0x100003ee4
    return _malloc(size);
}

// Address range: 0x100003ef0 - 0x100003efc
int32_t function_100003ef0(char * format, ...) {
    // 0x100003ef0
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

