//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d1c(void);
int64_t function_100003d64(void);
int64_t function_100003dac(void);
int64_t function_100003eb4(int64_t a1);
int64_t function_100003f04(void);
int32_t function_100003f20(char * format, ...);
int32_t function_100003f2c(void);
void function_100003f38(int32_t seed);
int32_t function_100003f44(int32_t * timer);

// --------------------- Global Variables ---------------------

float64_t g1 = 0.001; // 0x100003f50
float64_t g2 = -INFINITY; // 0x100003f58
float64_t g3 = INFINITY; // 0x100003f60
float64_t * g4 = (float64_t *)0x3ffa447fbbd064d8; // 0x100008000
int32_t g5;

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003a84 - 0x100003d1c
int64_t entry_point(void) {
    // 0x100003a84
    function_100003d1c();
    function_100003d64();
    function_100003d1c();
    function_100003d64();
    float64_t v1 = *(float64_t *)((int64_t)&g4 + 16); // 0x100003b78
    *(float64_t *)((int64_t)&g4 + 16) = v1 * v1;
    int64_t v2 = 1; // 0x100003b94
    function_100003d1c();
    float64_t v3 = (int64_t)g3;
    function_100003d64();
    float64_t v4 = (int64_t)g2;
    function_100003d1c();
    float64_t v5 = (int64_t)g3;
    function_100003d64();
    float64_t v6 = (int64_t)g2;
    float64_t * v7 = (float64_t *)(24 * v2 + (int64_t)&g4 + 16); // 0x100003b78
    float64_t v8 = *v7; // 0x100003b78
    *v7 = v8 * v8;
    v2++;
    while (v2 != 25) {
        // 0x100003ad8
        function_100003d1c();
        v3 = (int64_t)v3;
        function_100003d64();
        v4 = (int64_t)v4;
        function_100003d1c();
        v5 = (int64_t)v5;
        function_100003d64();
        v6 = (int64_t)v6;
        v7 = (float64_t *)(24 * v2 + (int64_t)&g4 + 16);
        v8 = *v7;
        *v7 = v8 * v8;
        v2++;
    }
    float64_t v9 = (v4 - v3) * (v6 - v5); // 0x100003bb8
    _srand(_time(NULL));
    float64_t v10 = 0.0; // 0x100003bdc
    float64_t v11 = 0.0; // 0x100003bdc
    int64_t v12 = 0x10000; // 0x100003bdc
    int64_t v13 = &g5; // 0x100003bdc
    while (true) {
        int64_t v14 = v12;
        float64_t v15 = v11;
        function_100003eb4(function_100003eb4(v13));
        uint64_t v16 = function_100003dac(); // 0x100003c04
        int64_t v17 = (int64_t)v10 + 1; // 0x100003c20
        v12 = v14;
        v13 = v16;
        if (v17 == v14) {
            float64_t v18 = (float64_t)(v16 % 2 + (int64_t)v15) / (float64_t)v17; // 0x100003c70
            float64_t v19 = sqrt(v18 * (1.0 - v18) / (float64_t)v17); // 0x100003c9c
            int64_t v20; // 0x100003a84
            int128_t v21; // 0x100003a84
            int32_t v22 = _printf("%.4f +/- %.4f (%zd samples)\n", (float64_t)(int64_t)v21, (float64_t)(int64_t)v21, v20); // 0x100003ccc
            float64_t v23 = 3.0 * v9 * (float64_t)(v16 % 2 + (int64_t)v15) / (float64_t)v17 * v19; // 0x100003cd8
            float64_t v24 = g1; // 0x100003ce0
            if (v23 <= v24 != v23 != v24) {
                // break -> 0x100003d0c
                break;
            }
            // 0x100003cf8
            v12 = 2 * v14;
            v13 = v22;
        }
        // 0x100003d08
        v10 = v17;
        v11 = v16 % 2 + (int64_t)v15;
    }
    // 0x100003d0c
    return 0;
}

// Address range: 0x100003d1c - 0x100003d64
int64_t function_100003d1c(void) {
    // 0x100003d1c
    int64_t result; // 0x100003d1c
    return result;
}

// Address range: 0x100003d64 - 0x100003dac
int64_t function_100003d64(void) {
    // 0x100003d64
    int64_t result; // 0x100003d64
    return result;
}

// Address range: 0x100003dac - 0x100003eb4
int64_t function_100003dac(void) {
    int64_t v1 = 0; // 0x100003e80
    int64_t v2 = 24 * v1; // 0x100003dec
    float64_t v3 = *(float64_t *)(v2 + (int64_t)&g4); // 0x100003dfc
    function_100003f04();
    float64_t v4 = *(float64_t *)(v2 + (int64_t)&g4 + 8); // 0x100003e24
    function_100003f04();
    float64_t v5 = *(float64_t *)(v2 + (int64_t)&g4 + 16); // 0x100003e50
    int64_t result = 1; // 0x100003e54
    float64_t v6; // 0x100003dac
    while (v6 - v3 + v6 - v4 <= v5) {
        // 0x100003dc8
        v1++;
        result = 0;
        if (v1 >= 25) {
            // break -> 0x100003ea0
            break;
        }
        v2 = 24 * v1;
        v3 = *(float64_t *)(v2 + (int64_t)&g4);
        function_100003f04();
        v4 = *(float64_t *)(v2 + (int64_t)&g4 + 8);
        function_100003f04();
        v5 = *(float64_t *)(v2 + (int64_t)&g4 + 16);
        result = 1;
    }
    // 0x100003ea0
    return result;
}

// Address range: 0x100003eb4 - 0x100003f04
int64_t function_100003eb4(int64_t a1) {
    // 0x100003eb4
    return _rand();
}

// Address range: 0x100003f04 - 0x100003f20
int64_t function_100003f04(void) {
    // 0x100003f04
    int64_t result; // 0x100003f04
    return result;
}

// Address range: 0x100003f20 - 0x100003f2c
int32_t function_100003f20(char * format, ...) {
    // 0x100003f20
    return _printf(format);
}

// Address range: 0x100003f2c - 0x100003f38
int32_t function_100003f2c(void) {
    // 0x100003f2c
    return _rand();
}

// Address range: 0x100003f38 - 0x100003f44
void function_100003f38(int32_t seed) {
    // 0x100003f38
    _srand(seed);
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(int32_t * timer) {
    // 0x100003f44
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10
