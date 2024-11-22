//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdbool.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003794(int64_t a1, int64_t a2);
int64_t function_100003974(void);
int64_t function_100003be4(void);
int64_t function_100003c44(void);
int64_t function_100003f38(int64_t a1);
int32_t function_100003f44(char * format, ...);

// --------------------- Global Variables ---------------------

float64_t g1 = -1.0e-5; // 0x100003f50
float64_t g2 = 1.0e-5; // 0x100003f58
float128_t g3 = 6.36598737684834211206411899800217684e-314L; // 0x100003f60
int32_t * g4 = (int32_t *)0x100000cfeedfacf; // 0x100008000
int32_t * g5 = (int32_t *)0x100000c; // 0x100008004
float128_t * g6 = (float128_t *)0x200000000; // 0x100008008
int32_t g7;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003794 - 0x10000395c
int64_t function_100003794(int64_t a1, int64_t a2) {
    // 0x100003794
    int64_t result; // 0x100003794
    int32_t v1; // 0x100003794
    if (v1 == -1) {
        // 0x100003928
        __asm_sshll(0.0f, 0);
    } else {
        // 0x1000037bc
        function_100003794((int64_t)&g6, (int64_t)&g7);
        float32_t v2; // 0x100003794
        result = function_100003794((int64_t)(float64_t)v2, (int64_t)&g7);
    }
    // 0x100003818
    return result;
}

// Address range: 0x100003974 - 0x100003bcc
int64_t function_100003974(void) {
    // 0x100003974
    int32_t v1; // 0x100003974
    uint32_t v2 = v1;
    if (v2 == -1) {
        // 0x100003bc0
        int64_t v3; // 0x100003974
        return _printf("%d", v3);
    }
    int32_t result = _printf("("); // 0x1000039a4
    if (v2 >= 5 != v2 != 5) {
        // 0x1000039c4
        return result;
    }
    // 0x100003bc0
    return _printf((char *)0x100003f82);
}

// Address range: 0x100003be4 - 0x100003c44
int64_t function_100003be4(void) {
    // 0x100003be4
    float32_t v1; // 0x100003be4
    float64_t v2 = v1; // 0x100003bf0
    if (g2 >= v2) {
        // 0x100003c34
        return 0;
    }
    float64_t v3 = g1; // 0x100003c20
    bool v4 = false; // 0x100003c24
    bool v5 = true; // 0x100003c24
    bool v6 = false; // 0x100003c24
    if (v3 != v2) {
        v4 = v3 < v2;
        v5 = false;
        v6 = v3 <= v2 == v3 >= v2;
    }
    // 0x100003c34
    return !((v5 | v4 != v6));
}

// Address range: 0x100003c44 - 0x100003e84
int64_t function_100003c44(void) {
    // 0x100003c44
    int64_t v1; // 0x100003c44
    if ((int32_t)v1 == (int32_t)v1) {
        // 0x100003c78
        *(int32_t *)&g4 = 0;
        int64_t result = function_100003794((int64_t)&g4, (int64_t)&g7); // 0x100003c98
        if (*(int32_t *)&g4 != 0) {
            // 0x100003e78
            return result;
        }
        int64_t v2 = function_100003be4(); // 0x100003cc4
        int64_t result2 = v2; // 0x100003cd0
        if ((int32_t)v2 != 0) {
            // 0x100003cd8
            function_100003974();
            result2 = _printf((char *)0x100003f87);
        }
        // 0x100003e78
        return result2;
    }
    int32_t v3 = *(int32_t *)&g5; // 0x100003d08
    int32_t v4 = v3 + 1;
    *(int32_t *)&g5 = v4;
    int32_t v5 = *(int32_t *)(v1 + (0x100000000 * v1 >> 30)); // 0x100003d28
    *(float128_t *)(16 * (int64_t)v3 + (int64_t)&g6) = (float128_t)(int128_t)v5;
    int32_t v6 = 0; // 0x100003e54
    int32_t v7 = -v3; // 0x100003d88
    int32_t v8 = 0; // 0x100003d90
    int32_t v9 = v4; // 0x100003d90
    int64_t v10; // 0x100003c44
    int64_t v11 = v10; // 0x100003d90
    int32_t v12; // 0x100003c44
    float128_t * v13; // 0x100003dc4
    float128_t v14; // 0x100003dc4
    int64_t v15; // 0x100003e14
    int32_t v16; // 0x100003e28
    float128_t v17; // 0x100003e30
    int32_t v18; // 0x100003e40
    int32_t v19; // 0x100003d88
    if (v7 < 0 != (v3 & v7) < 0) {
        *(int32_t *)&g5 = v4 + 1;
        v13 = (float128_t *)(16 * (int64_t)v8 + (int64_t)&g6);
        v14 = *v13;
        *(float128_t *)(16 * (int64_t)v4 + (int64_t)&g6) = v14;
        *v13 = -NAN;
        v15 = function_100003c44();
        v16 = *(int32_t *)&g5 - 1;
        *(int32_t *)&g5 = v16;
        v17 = *(float128_t *)((int64_t)(16 * v16) + (int64_t)&g6);
        *v13 = v17;
        v18 = v8 + 1;
        v19 = v18 - v3;
        v12 = v16;
        v8 = v18;
        v9 = v16;
        v11 = v15;
        while (v19 < 0 != ((v19 ^ v18) & (v18 ^ v3)) < 0) {
            // 0x100003d98
            *(int32_t *)&g5 = v12 + 1;
            v13 = (float128_t *)(16 * (int64_t)v8 + (int64_t)&g6);
            v14 = *v13;
            *(float128_t *)(16 * (int64_t)v12 + (int64_t)&g6) = v14;
            *v13 = -NAN;
            v15 = function_100003c44();
            v16 = *(int32_t *)&g5 - 1;
            *(int32_t *)&g5 = v16;
            v17 = *(float128_t *)((int64_t)(16 * v16) + (int64_t)&g6);
            *v13 = v17;
            v18 = v8 + 1;
            v19 = v18 - v3;
            v12 = v16;
            v8 = v18;
            v9 = v16;
            v11 = v15;
        }
    }
    int64_t result3 = v11;
    int32_t v20 = v9;
    v6++;
    int32_t v21 = v20 - 1;
    while (v6 != 6) {
        int32_t v22 = v21;
        v7 = -v22;
        v12 = v20;
        v8 = 0;
        v9 = v20;
        v11 = result3;
        if (v7 < 0 != (v22 & v7) < 0) {
            *(int32_t *)&g5 = v12 + 1;
            v13 = (float128_t *)(16 * (int64_t)v8 + (int64_t)&g6);
            v14 = *v13;
            *(float128_t *)(16 * (int64_t)v12 + (int64_t)&g6) = v14;
            *v13 = -NAN;
            v15 = function_100003c44();
            v16 = *(int32_t *)&g5 - 1;
            *(int32_t *)&g5 = v16;
            v17 = *(float128_t *)((int64_t)(16 * v16) + (int64_t)&g6);
            *v13 = v17;
            v18 = v8 + 1;
            v19 = v18 - v22;
            v12 = v16;
            v8 = v18;
            v9 = v16;
            v11 = v15;
            while (v19 < 0 != ((v19 ^ v18) & (v18 ^ v22)) < 0) {
                // 0x100003d98
                *(int32_t *)&g5 = v12 + 1;
                v13 = (float128_t *)(16 * (int64_t)v8 + (int64_t)&g6);
                v14 = *v13;
                *(float128_t *)(16 * (int64_t)v12 + (int64_t)&g6) = v14;
                *v13 = -NAN;
                v15 = function_100003c44();
                v16 = *(int32_t *)&g5 - 1;
                *(int32_t *)&g5 = v16;
                v17 = *(float128_t *)((int64_t)(16 * v16) + (int64_t)&g6);
                *v13 = v17;
                v18 = v8 + 1;
                v19 = v18 - v22;
                v12 = v16;
                v8 = v18;
                v9 = v16;
                v11 = v15;
            }
        }
        // 0x100003e50
        result3 = v11;
        v20 = v9;
        v6++;
        v21 = v20 - 1;
    }
    // 0x100003e60
    *(int32_t *)&g5 = v21;
    // 0x100003e78
    return result3;
}

// Address range: 0x100003e84 - 0x100003f38
int64_t entry_point(void) {
    // 0x100003e84
    *(float128_t *)&g6 = g3;
    *(int32_t *)&g5 = 1;
    int64_t v1 = function_100003c44(); // 0x100003f00
    int64_t v2 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f10
    if (v2 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f24
        ___stack_chk_fail(v1);
    }
    // 0x100003f28
    return 0;
}

// Address range: 0x100003f38 - 0x100003f44
int64_t function_100003f38(int64_t a1) {
    // 0x100003f38
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(char * format, ...) {
    // 0x100003f44
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

