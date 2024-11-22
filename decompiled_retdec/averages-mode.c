//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ae4(void);
int64_t function_100003b4c(void);
int64_t function_100003b74(void);
int64_t function_100003ec0(int64_t a1);
void function_100003ecc(int64_t * ptr);
int64_t * function_100003ed8(int32_t size);
int64_t * function_100003ee4(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003ef0(char * format, ...);
void function_100003efc(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));

// --------------------- Global Variables ---------------------

int64_t g1 = 0x3ff0000000000000; // 0x100003f08
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));

// ------------------------ Functions -------------------------

// Address range: 0x100003ae4 - 0x100003b4c
int64_t function_100003ae4(void) {
    float64_t v1 = 0.0; // 0x100003b00
    return v1 > 0.0 ? 0xffffffff : (int64_t)(v1 < 0.0);
}

// Address range: 0x100003b4c - 0x100003b74
int64_t function_100003b4c(void) {
    // 0x100003b4c
    int64_t v1; // 0x100003b4c
    return (int64_t)(*(int32_t *)(v1 + 8) - *(int32_t *)(v1 + 8));
}

// Address range: 0x100003b74 - 0x100003dac
int64_t function_100003b74(void) {
    // 0x100003b74
    int64_t v1; // 0x100003b74
    int32_t v2 = v1; // 0x100003b84
    _qsort((int64_t *)v1, v2, 8, (int32_t (*)(int64_t *, int64_t *))0x100003ae4);
    int32_t v3 = v2 - 1; // 0x100003bbc
    int32_t v4 = 1 - v2;
    int32_t v5 = 1; // 0x100003bc8
    int32_t v6 = 16; // 0x100003bc8
    if (v4 < 0 != (v4 & v3) < 0) {
        int32_t v7 = 0;
        int32_t v8 = v7 + 1; // 0x100003bd8
        float64_t v9 = *(float64_t *)(v1 + (int64_t)(8 * v7 + 16)); // 0x100003bf8
        v5 += (int32_t)(*(float64_t *)(8 * (int64_t)v8 + v1) != v9);
        while (v8 - v3 < 0 != ((v8 - v3 ^ v8) & (v8 ^ v3)) < 0) {
            // 0x100003bd4
            v7 = v8;
            v8 = v7 + 1;
            v9 = *(float64_t *)(v1 + (int64_t)(8 * v7 + 16));
            v5 += (int32_t)(*(float64_t *)(8 * (int64_t)v8 + v1) != v9);
        }
        // 0x100003bb4
        v6 = 16 * v5;
    }
    int64_t * v10 = _malloc(v6); // 0x100003c24
    int64_t v11 = (int64_t)v10; // 0x100003c24
    *(int64_t *)v1 = v11;
    int64_t v12 = v11 + 8;
    int32_t * v13 = (int32_t *)v12; // 0x100003c50
    *v13 = 1;
    int32_t v14 = 0; // 0x100003c74
    int32_t v15 = 0; // 0x100003c74
    if (v4 < 0 != (v4 & v3) < 0) {
        int32_t v16 = 0;
        int64_t v17 = v1 + (int64_t)(8 * v14 + 8); // 0x100003c94
        int64_t v18; // 0x100003b74
        int32_t v19; // 0x100003b74
        int32_t v20; // 0x100003cc0
        int64_t v21; // 0x100003b74
        if (*(float64_t *)(8 * (int64_t)v14 + v1) == *(float64_t *)v17) {
            // 0x100003c7c
            v18 = 16 * (int64_t)v16;
            v19 = v16;
        } else {
            // 0x100003ca4
            v20 = v16 + 1;
            v21 = 16 * (int64_t)v20;
            *(int64_t *)(v21 + v11) = *(int64_t *)v17;
            v18 = v21;
            v19 = v20;
        }
        int32_t v22 = v19;
        v14++;
        int32_t * v23 = (int32_t *)(v18 + v12); // 0x100003cf8
        *v23 = *v23 + 1;
        int32_t v24 = v14 - v3; // 0x100003c6c
        v15 = v22;
        while (v24 < 0 != ((v24 ^ v14) & (v14 ^ v3)) < 0) {
            // 0x100003c7c
            v16 = v22;
            v17 = v1 + (int64_t)(8 * v14 + 8);
            if (*(float64_t *)(8 * (int64_t)v14 + v1) == *(float64_t *)v17) {
                // 0x100003c7c
                v18 = 16 * (int64_t)v16;
                v19 = v16;
            } else {
                // 0x100003ca4
                v20 = v16 + 1;
                v21 = 16 * (int64_t)v20;
                *(int64_t *)(v21 + v11) = *(int64_t *)v17;
                v18 = v21;
                v19 = v20;
            }
            // 0x100003ce0
            v22 = v19;
            v14++;
            v23 = (int32_t *)(v18 + v12);
            *v23 = *v23 + 1;
            v24 = v14 - v3;
            v15 = v22;
        }
    }
    int32_t v25 = v15;
    _qsort(v10, v25 + 1, 16, (int32_t (*)(int64_t *, int64_t *))0x100003b4c);
    int32_t v26 = -v25; // 0x100003d3c
    if (v25 != 0 && v26 < 0 == (v25 & v26) < 0) {
        // 0x100003d9c
        return 0;
    }
    int32_t result = 0; // 0x100003d90
    while (*(int32_t *)(16 * (int64_t)result + v12) == *v13) {
        // 0x100003d8c
        result++;
        int32_t v27 = result - v25; // 0x100003d3c
        if (v27 != 0 && v27 < 0 == ((v27 ^ result) & (result ^ v25)) < 0) {
            // break -> 0x100003d9c
            break;
        }
    }
    // 0x100003d9c
    return result;
}

// Address range: 0x100003dac - 0x100003ec0
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003dc0
    int64_t v2; // bp-128, 0x100003dac
    _memcpy(&v2, &g1, 104);
    int32_t v3 = function_100003b74(); // 0x100003df4
    _printf("got %d modes:\n", 13);
    int32_t v4 = -v3; // 0x100003e24
    if (v4 < 0 != (v4 & v3) < 0) {
        int32_t v5 = 0; // 0x100003e78
        int128_t v6; // 0x100003dac
        _printf("\tvalue = %g, count = %d\n", (float64_t)(int64_t)v6, 13);
        v5++;
        while (v5 - v3 < 0 != ((v5 - v3 ^ v5) & (v5 ^ v3)) < 0) {
            // 0x100003e34
            _printf("\tvalue = %g, count = %d\n", (float64_t)(int64_t)v6, 13);
            v5++;
        }
    }
    // 0x100003e84
    int64_t v7; // 0x100003dac
    _free((int64_t *)v7);
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
void function_100003ecc(int64_t * ptr) {
    // 0x100003ecc
    _free(ptr);
}

// Address range: 0x100003ed8 - 0x100003ee4
int64_t * function_100003ed8(int32_t size) {
    // 0x100003ed8
    return _malloc(size);
}

// Address range: 0x100003ee4 - 0x100003ef0
int64_t * function_100003ee4(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003ee4
    return _memcpy(dest, src, n);
}

// Address range: 0x100003ef0 - 0x100003efc
int32_t function_100003ef0(char * format, ...) {
    // 0x100003ef0
    return _printf(format);
}

// Address range: 0x100003efc - 0x100003f08
void function_100003efc(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003efc
    _qsort(base, nmemb, size, compar);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10

