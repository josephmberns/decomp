//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c10(void);
int64_t function_100003c44(float64_t a1);
int64_t function_100003c8c(float64_t a1);
int64_t function_100003cd0(float64_t a1);
int64_t function_100003d08(float64_t a1, float64_t a2);
int64_t function_100003d54(void);
int64_t * function_100003f4c(int32_t size);
float64_t function_100003f58(float64_t a1, float64_t a2);
int32_t function_100003f64(char * format, ...);

// --------------------- Global Variables ---------------------

float64_t g1 = 0.1; // 0x100003f70

// ------- Dynamically Linked Functions Without Header --------

int64_t * _malloc(int32_t a1);
float64_t _pow(float64_t a1, float64_t a2);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c10 - 0x100003c44
int64_t function_100003c10(void) {
    // 0x100003c10
    int64_t result; // 0x100003c10
    return result;
}

// Address range: 0x100003c44 - 0x100003c8c
int64_t function_100003c44(float64_t a1) {
    // 0x100003c44
    int64_t result; // 0x100003c44
    float64_t v1; // 0x100003c44
    *(float64_t *)(result - 40) = v1 * a1;
    return result;
}

// Address range: 0x100003c8c - 0x100003cd0
int64_t function_100003c8c(float64_t a1) {
    // 0x100003c8c
    int64_t result; // 0x100003c8c
    float64_t v1; // 0x100003c8c
    *(float64_t *)(result - 48) = v1 * a1;
    return result;
}

// Address range: 0x100003cd0 - 0x100003d08
int64_t function_100003cd0(float64_t a1) {
    // 0x100003cd0
    int64_t result; // 0x100003cd0
    return result;
}

// Address range: 0x100003d08 - 0x100003d54
int64_t function_100003d08(float64_t a1, float64_t a2) {
    // 0x100003d08
    int64_t result; // 0x100003d08
    return result;
}

// Address range: 0x100003d54 - 0x100003d78
int64_t function_100003d54(void) {
    // 0x100003d54
    int64_t result; // 0x100003d54
    return result;
}

// Address range: 0x100003d78 - 0x100003f4c
int64_t entry_point(void) {
    int32_t v1 = 10.0 / g1 + 1.0; // 0x100003dc4
    int64_t * v2 = _malloc(8 * v1); // 0x100003dd8
    *v2 = 0x3ff0000000000000;
    int32_t v3 = 1 - v1; // 0x100003e00
    if (v3 < 0 != (v3 & v1) < 0) {
        int64_t v4 = (int64_t)v2; // 0x100003dd8
        function_100003c10();
        *(int64_t *)(v4 + 8) = (int64_t)g1;
        int32_t v5 = 2 - v1; // 0x100003e00
        int32_t v6 = 2; // 0x100003e08
        if (v5 < 0 != (v5 & v1) < 0) {
            function_100003c10();
            *(int64_t *)(8 * (int64_t)v6 + v4) = (int64_t)g1;
            int32_t v7 = v6 + 1; // 0x100003e5c
            int32_t v8 = v7 - v1; // 0x100003e00
            v6 = v7;
            while (v8 < 0 != ((v8 ^ v7) & (v7 ^ v1)) < 0) {
                // 0x100003e10
                function_100003c10();
                *(int64_t *)(8 * (int64_t)v6 + v4) = (int64_t)g1;
                v7 = v6 + 1;
                v8 = v7 - v1;
                v6 = v7;
            }
        }
    }
    // 0x100003e68
    _printf("x\ty\trel. err.\n------------\n");
    int32_t v9 = -v1; // 0x100003e84
    if (v9 < 0 == (v9 & v1) < 0) {
        // 0x100003f3c
        return 0;
    }
    int32_t v10 = 0; // 0x100003f30
    int128_t v11 = __asm_sshll(0.0f, 0); // 0x100003ea4
    int128_t v12; // 0x100003d78
    float64_t v13 = _pow((float64_t)(int64_t)v12, (float64_t)(int64_t)v11); // 0x100003ed8
    _printf("%g\t%g\t%g\n", v13, (float64_t)(int64_t)v11, (float64_t)(int64_t)v12);
    v10 += 10;
    int32_t v14 = v10 - v1; // 0x100003e84
    int64_t v15 = (float32_t)v13; // 0x100003e8c
    while (v14 < 0 != ((v14 ^ v10) & (v10 ^ v1)) < 0) {
        // 0x100003e94
        v11 = __asm_sshll(0.0f, 0);
        v13 = _pow((float64_t)v15, (float64_t)(int64_t)v11);
        _printf("%g\t%g\t%g\n", v13, (float64_t)(int64_t)v11, (float64_t)(int64_t)v12);
        v10 += 10;
        v14 = v10 - v1;
        v15 = (float32_t)v13;
    }
    // 0x100003f3c
    return 0;
}

// Address range: 0x100003f4c - 0x100003f58
int64_t * function_100003f4c(int32_t size) {
    // 0x100003f4c
    return _malloc(size);
}

// Address range: 0x100003f58 - 0x100003f64
float64_t function_100003f58(float64_t a1, float64_t a2) {
    // 0x100003f58
    return _pow(a1, a2);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * format, ...) {
    // 0x100003f64
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10

