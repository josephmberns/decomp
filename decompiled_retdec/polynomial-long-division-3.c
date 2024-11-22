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
int64_t function_1000039e0(void);
int64_t function_100003b40(void);
int64_t function_100003b70(void);
int64_t function_100003bf4(void);
int64_t function_100003c60(void);
int64_t function_100003f54(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
void function_100003f60(int64_t * ptr);
int64_t * function_100003f6c(int32_t size);
int32_t function_100003f78(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memcpy_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x1000039e0 - 0x100003b40
int64_t function_1000039e0(void) {
    // 0x1000039e0
    int64_t v1; // 0x1000039e0
    int32_t v2 = v1; // 0x1000039ec
    int32_t v3 = v2 < 0 ? -v2 : v2;
    int64_t * v4 = _malloc(16); // 0x100003a28
    int64_t result = (int64_t)v4; // 0x100003a28
    *(int32_t *)v4 = v3;
    int32_t v5 = v3 + 1; // 0x100003a40
    int64_t * v6 = _malloc(8 * v5); // 0x100003a58
    int64_t * v7 = (int64_t *)(result + 8); // 0x100003a60
    *v7 = (int64_t)v6;
    if (v2 < 0) {
        if (v3 > -1 == (v5 & -v3) < 0) {
            // 0x100003b30
            return result;
        }
        // 0x100003a98
        *v6 = 0;
        int32_t v8 = -v3; // 0x100003a88
        if (v8 < 0 == (v5 & v8) < 0) {
            // 0x100003b30
            return result;
        }
        int32_t v9 = 1; // 0x100003a90
        *(float64_t *)(8 * (int64_t)v9 + *v7) = 0.0;
        v9++;
        while (v9 - v5 < 0 != ((v9 - v5 ^ v9) & (v9 ^ v5)) < 0) {
            // 0x100003a98
            *(float64_t *)(8 * (int64_t)v9 + *v7) = 0.0;
            v9++;
        }
        // 0x100003b30
        return result;
    }
    if (v3 > -1 == (v5 & -v3) < 0) {
        // 0x100003b30
        return result;
    }
    // 0x100003af0
    int64_t v10; // 0x1000039e0
    *v6 = v10;
    int32_t v11 = -v3; // 0x100003ae0
    if (v11 < 0 == (v5 & v11) < 0) {
        // 0x100003b30
        return result;
    }
    int32_t v12 = 1; // 0x100003b20
    int64_t v13 = &v10; // 0x100003af8
    v13 += 8;
    int64_t v14 = *(int64_t *)v13; // 0x100003af4
    *(float64_t *)(8 * (int64_t)v12 + *v7) = (float64_t)v14;
    v12++;
    while (v12 - v5 < 0 != ((v12 - v5 ^ v12) & (v12 ^ v5)) < 0) {
        // 0x100003af0
        v13 += 8;
        v14 = *(int64_t *)v13;
        *(float64_t *)(8 * (int64_t)v12 + *v7) = (float64_t)v14;
        v12++;
    }
    // 0x100003b30
    return result;
}

// Address range: 0x100003b40 - 0x100003b70
int64_t function_100003b40(void) {
    // 0x100003b40
    int64_t v1; // 0x100003b40
    _free((int64_t *)*(int64_t *)(v1 + 8));
    _free((int64_t *)v1);
    return &g1;
}

// Address range: 0x100003b70 - 0x100003bf4
int64_t function_100003b70(void) {
    // 0x100003b70
    int64_t v1; // 0x100003b70
    int32_t v2 = v1;
    int32_t v3 = -v2; // 0x100003b94
    if (v2 != 0 && v3 < 0 == (v2 & v3) < 0) {
        // 0x100003bdc
        return _printf("\n");
    }
    int32_t v4 = 0; // 0x100003bd0
    int128_t v5; // 0x100003b70
    _printf("%g ", (float64_t)(int64_t)v5);
    v4++;
    while (v4 - v2 == 0 || v4 - v2 < 0 != ((v4 - v2 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003ba4
        _printf("%g ", (float64_t)(int64_t)v5);
        v4++;
    }
    // 0x100003bdc
    return _printf("\n");
}

// Address range: 0x100003bf4 - 0x100003c60
int64_t function_100003bf4(void) {
    int64_t result = function_1000039e0(); // 0x100003c14
    int64_t v1; // 0x100003bf4
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x100003c28
    ___memcpy_chk(*(int64_t *)(result + 8), v2, 0x100000000 * v1 + 0x100000000 >> 29, -1);
    return result;
}

// Address range: 0x100003c60 - 0x100003e4c
int64_t function_100003c60(void) {
    int64_t result = function_1000039e0(); // 0x100003cb8
    int64_t v1; // 0x100003c60
    *(int64_t *)v1 = function_100003bf4();
    int64_t v2; // 0x100003c60
    int32_t v3 = *(int32_t *)&v2; // 0x100003cd4
    int64_t v4; // 0x100003c60
    int32_t v5 = *(int32_t *)&v4; // 0x100003ce8
    int32_t v6 = v3 - v5; // 0x100003cec
    int64_t * v7; // 0x100003c60
    if (v6 < 0 == ((v6 ^ v3) & (v5 ^ v3)) < 0) {
        int64_t * v8 = (int64_t *)(v1 + 8); // 0x100003d14
        int64_t * v9 = (int64_t *)(v1 + 8);
        int64_t v10 = 8 * (int64_t)v3; // 0x100003d0c
        float64_t v11 = *(float64_t *)(*v8 + 8 * (int64_t)v5); // 0x100003d20
        float64_t v12 = *(float64_t *)(v10 + *v9) / v11; // 0x100003d24
        *(float64_t *)(*(int64_t *)(result + 8) + (int64_t)(8 * v6)) = v12;
        *(float64_t *)(*v9 + v10) = 0.0;
        int32_t v13 = *(int32_t *)&v4; // 0x100003d70
        int32_t v14 = -v13; // 0x100003d74
        int32_t v15 = v13; // 0x100003d7c
        int32_t v16 = 0; // 0x100003d7c
        int32_t v17 = v13; // 0x100003d7c
        float64_t * v18; // 0x100003dc0
        int32_t v19; // 0x100003dd4
        int32_t v20; // 0x100003d70
        int32_t v21; // 0x100003d74
        if (v14 < 0 != (v13 & v14) < 0) {
            v18 = (float64_t *)(*v9 + 8 * (int64_t)(v3 - v15 + v16));
            *v18 = *v18 - v12 * *(float64_t *)(8 * (int64_t)v16 + *v8);
            v19 = v16 + 1;
            v20 = *(int32_t *)&v4;
            v21 = v19 - v20;
            v16 = v19;
            v17 = v20;
            while (v21 < 0 != ((v21 ^ v19) & (v20 ^ v19)) < 0) {
                // 0x100003d84
                v18 = (float64_t *)(*v9 + 8 * (int64_t)(v3 - v20 + v16));
                *v18 = *v18 - v12 * *(float64_t *)(8 * (int64_t)v16 + *v8);
                v19 = v16 + 1;
                v20 = *(int32_t *)&v4;
                v21 = v19 - v20;
                v16 = v19;
                v17 = v20;
            }
        }
        int32_t v22 = v17; // 0x100003ce8
        int32_t v23 = v3 - 1; // 0x100003de8
        int32_t v24 = v23 - v22; // 0x100003cec
        v7 = v9;
        while (v24 < 0 == ((v24 ^ v23) & (v22 ^ v23)) < 0) {
            int32_t v25 = v23;
            v10 = 8 * (int64_t)v25;
            v11 = *(float64_t *)(*v8 + 8 * (int64_t)v22);
            v12 = *(float64_t *)(v10 + *v9) / v11;
            *(float64_t *)(*(int64_t *)(result + 8) + (int64_t)(8 * v24)) = v12;
            *(float64_t *)(*v9 + v10) = 0.0;
            v13 = *(int32_t *)&v4;
            v14 = -v13;
            v15 = v13;
            v16 = 0;
            v17 = v13;
            if (v14 < 0 != (v13 & v14) < 0) {
                int64_t v26 = *v9; // 0x100003da0
                v18 = (float64_t *)(v26 + 8 * (int64_t)(v25 - v15 + v16));
                *v18 = *v18 - v12 * *(float64_t *)(8 * (int64_t)v16 + *v8);
                v19 = v16 + 1;
                v20 = *(int32_t *)&v4;
                v21 = v19 - v20;
                v16 = v19;
                v17 = v20;
                while (v21 < 0 != ((v21 ^ v19) & (v20 ^ v19)) < 0) {
                    // 0x100003d84
                    v26 = *v9;
                    v18 = (float64_t *)(v26 + 8 * (int64_t)(v25 - v20 + v16));
                    *v18 = *v18 - v12 * *(float64_t *)(8 * (int64_t)v16 + *v8);
                    v19 = v16 + 1;
                    v20 = *(int32_t *)&v4;
                    v21 = v19 - v20;
                    v16 = v19;
                    v17 = v20;
                }
            }
            // 0x100003de4
            v22 = v17;
            v23 = v25 - 1;
            v24 = v23 - v22;
            v7 = v9;
        }
    } else {
        // 0x100003cac
        v7 = (int64_t *)(v1 + 8);
    }
    int32_t v27 = (int32_t)v1 - 1; // 0x100003e10
    *(int32_t *)v1 = v27;
    while (*(float64_t *)(*v7 + (int64_t)(8 * v27)) == 0.0) {
        // 0x100003df8
        *(int32_t *)v1 = v27;
    }
    // 0x100003e3c
    return result;
}

// Address range: 0x100003e4c - 0x100003f54
int64_t entry_point(void) {
    // 0x100003e4c
    function_1000039e0();
    function_1000039e0();
    function_100003c60();
    _printf("poly: ");
    function_100003b70();
    _printf("div:  ");
    function_100003b70();
    _printf("quot: ");
    function_100003b70();
    _printf("rem:  ");
    function_100003b70();
    function_100003b40();
    function_100003b40();
    function_100003b40();
    function_100003b40();
    return 0;
}

// Address range: 0x100003f54 - 0x100003f60
int64_t function_100003f54(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003f54
    return ___memcpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f60 - 0x100003f6c
void function_100003f60(int64_t * ptr) {
    // 0x100003f60
    _free(ptr);
}

// Address range: 0x100003f6c - 0x100003f78
int64_t * function_100003f6c(int32_t size) {
    // 0x100003f6c
    return _malloc(size);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(char * format, ...) {
    // 0x100003f78
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10

