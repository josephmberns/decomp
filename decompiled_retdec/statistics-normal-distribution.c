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

typedef float float32_t;
typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003820(void);
int64_t function_1000038a0(void);
int64_t function_100003958(void);
int64_t function_100003b08(void);
int64_t * function_100003ebc(int32_t nmemb, int32_t size);
void function_100003ec8(int64_t * ptr);
int32_t function_100003ed4(void);
float64_t function_100003ee0(float64_t a1);
int32_t function_100003eec(char * format, ...);
int32_t function_100003ef8(int32_t c);
int32_t function_100003f04(void);
void function_100003f10(int32_t seed);
int32_t function_100003f1c(int32_t * timer);

// --------------------- Global Variables ---------------------

float64_t g1 = 2147483647.0; // 0x100003f28
float64_t g2 = 0.1; // 0x100003f30
float64_t g3 = -3.05; // 0x100003f38
float64_t g4 = 50.0; // 0x100003f48
int32_t g5;

// ------- Dynamically Linked Functions Without Header --------

int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int32_t _getchar(void);
float64_t _log(float64_t a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003820 - 0x1000038a0
int64_t function_100003820(void) {
    // 0x100003820
    int64_t result; // 0x100003820
    int32_t v1 = result; // 0x100003828
    int32_t v2 = 0; // 0x100003838
    while (v2 - v1 < 0 != ((v2 - v1 ^ v2) & (v2 ^ v1)) < 0) {
        // 0x10000383c
        v2++;
    }
    // 0x100003880
    __asm_sshll(0.0f, 0);
    return result;
}

// Address range: 0x1000038a0 - 0x100003958
int64_t function_1000038a0(void) {
    // 0x1000038a0
    int64_t v1; // 0x1000038a0
    int32_t v2 = v1; // 0x1000038b0
    int64_t result = function_100003820(); // 0x1000038bc
    int32_t v3 = 0; // 0x1000038d0
    while (v3 - v2 < 0 != ((v3 - v2 ^ v3) & (v3 ^ v2)) < 0) {
        // 0x1000038d4
        v3++;
    }
    // 0x100003934
    return result;
}

// Address range: 0x100003958 - 0x100003b08
int64_t function_100003958(void) {
    // 0x100003958
    int64_t v1; // 0x100003958
    int32_t v2 = v1; // 0x100003964
    int32_t v3 = v2 - 2 * v2 / 2 + v2; // 0x100003980
    int64_t * v4 = _calloc(v3, 8); // 0x100003990
    int64_t result = (int64_t)v4; // 0x100003990
    if (v4 == NULL) {
        // 0x100003af8
        return result;
    }
    int32_t v5 = -v3; // 0x1000039bc
    if (v5 < 0 == (v3 & v5) < 0) {
        // 0x100003af8
        return result;
    }
    int32_t v6 = 0; // 0x100003ae8
    float64_t v7 = 2.0 * (float64_t)_rand() / g1 - 1.0; // 0x1000039fc
    float64_t v8 = 2.0 * (float64_t)_rand() / g1 - 1.0; // 0x100003a20
    float64_t v9 = v7 * v7 + v8 * v8; // 0x100003a3c
    bool v10 = false; // 0x100003a50
    bool v11 = false; // 0x100003a50
    if (v9 != 1.0) {
        v10 = v9 > 1.0;
        v11 = v9 >= 1.0 == v9 <= 1.0;
    }
    // 0x1000039d0
    while (v9 == 0.0 || v10 == v11) {
        // 0x1000039d0
        v7 = 2.0 * (float64_t)_rand() / g1 - 1.0;
        v8 = 2.0 * (float64_t)_rand() / g1 - 1.0;
        v9 = v7 * v7 + v8 * v8;
        v10 = false;
        v11 = false;
        if (v9 != 1.0) {
            v10 = v9 > 1.0;
            v11 = v9 >= 1.0 == v9 <= 1.0;
        }
    }
    // 0x100003a88
    int128_t v12; // 0x100003958
    float64_t v13 = _log((float64_t)(int64_t)v12); // 0x100003a8c
    float64_t v14 = sqrt(-2.0 * v9 / v9); // 0x100003aa4
    *(float64_t *)(8 * (int64_t)v6 + result) = v7 * v14;
    *(float64_t *)((int64_t)(8 * v6 | 8) + result) = v8 * v14;
    v6 += 2;
    int32_t v15 = v6 - v3; // 0x1000039bc
    int64_t v16 = (float32_t)v13; // 0x1000039c4
    while (v15 < 0 != ((v15 ^ v6) & (v6 ^ v3)) < 0) {
        v7 = 2.0 * (float64_t)_rand() / g1 - 1.0;
        v8 = 2.0 * (float64_t)_rand() / g1 - 1.0;
        v9 = v7 * v7 + v8 * v8;
        v10 = false;
        v11 = false;
        if (v9 != 1.0) {
            v10 = v9 > 1.0;
            v11 = v9 >= 1.0 == v9 <= 1.0;
        }
        // 0x1000039d0
        while (v9 == 0.0 || v10 == v11) {
            // 0x1000039d0
            v7 = 2.0 * (float64_t)_rand() / g1 - 1.0;
            v8 = 2.0 * (float64_t)_rand() / g1 - 1.0;
            v9 = v7 * v7 + v8 * v8;
            v10 = false;
            v11 = false;
            if (v9 != 1.0) {
                v10 = v9 > 1.0;
                v11 = v9 >= 1.0 == v9 <= 1.0;
            }
        }
        // 0x100003a88
        v13 = _log((float64_t)v16);
        v14 = sqrt(-2.0 * v9 / v9);
        *(float64_t *)(8 * (int64_t)v6 + result) = v7 * v14;
        *(float64_t *)((int64_t)(8 * v6 | 8) + result) = v8 * v14;
        v6 += 2;
        v15 = v6 - v3;
        v16 = (float32_t)v13;
    }
    // 0x100003af8
    return result;
}

// Address range: 0x100003b08 - 0x100003de4
int64_t function_100003b08(void) {
    int64_t * v1 = _calloc(60, 4); // 0x100003b5c
    int64_t result = (int64_t)v1; // 0x100003b5c
    if (v1 == NULL) {
        // 0x100003dd8
        return result;
    }
    // 0x100003b80
    int64_t v2; // 0x100003b08
    int32_t v3 = v2; // 0x100003b18
    int32_t v4 = -v3; // 0x100003b88
    int32_t v5 = 0; // 0x100003b90
    if (v4 < 0 != (v4 & v3) < 0) {
        float64_t v6 = *(float64_t *)(8 * (int64_t)v5 + v2); // 0x100003ba0
        int32_t v7 = (v6 - g3) / g2; // 0x100003bbc
        int32_t v8 = -v7; // 0x100003bcc
        int32_t * v9; // 0x100003c00
        if (v7 == 0 || v8 < 0 != (v7 & v8) < 0) {
            if (v7 < 60 != (59 - v7 & v7) < 0) {
                // 0x100003bf4
                v9 = (int32_t *)(4 * (int64_t)v7 + result);
                *v9 = *v9 + 1;
            }
        }
        // 0x100003c14
        v5++;
        while (v5 - v3 < 0 != ((v5 - v3 ^ v5) & (v5 ^ v3)) < 0) {
            // 0x100003b98
            v6 = *(float64_t *)(8 * (int64_t)v5 + v2);
            v7 = (v6 - g3) / g2;
            v8 = -v7;
            if (v7 == 0 || v8 < 0 != (v7 & v8) < 0) {
                if (v7 < 60 != (59 - v7 & v7) < 0) {
                    // 0x100003bf4
                    v9 = (int32_t *)(4 * (int64_t)v7 + result);
                    *v9 = *v9 + 1;
                }
            }
            // 0x100003c14
            v5++;
        }
    }
    int32_t v10 = 0; // 0x100003cd4
    v10++;
    float64_t v11 = g3 + g2 * (float64_t)v10; // 0x100003cdc
    int128_t v12; // 0x100003b08
    _printf("(%5.2f, %5.2f) |", (float64_t)(int64_t)__asm_sshll(0.0f, 0), (float64_t)(int64_t)v12);
    __asm_sshll(0.0f, 0);
    __asm_sshll(0.0f, 0);
    int32_t v13 = v11 * g4 / v11; // 0x100003d30
    int32_t v14 = v13; // 0x100003d50
    int32_t v15; // 0x100003b08
    if (v13 >= 1) {
        v15 = v14;
        _putchar(42);
        v14 = v15 - 1;
        while (v15 >= 2) {
            // 0x100003d58
            v15 = v14;
            _putchar(42);
            v14 = v15 - 1;
        }
    }
    int128_t v16 = __asm_sshll(0.0f, 0); // 0x100003d74
    int128_t v17 = __asm_sshll(0.0f, 0); // 0x100003d90
    _printf("  %-.1f%%", (float64_t)(int64_t)v16);
    _putchar(10);
    int64_t v18 = v17; // 0x100003ca4
    while (v10 != 60) {
        // 0x100003cac
        v10++;
        v11 = g3 + g2 * (float64_t)v10;
        _printf("(%5.2f, %5.2f) |", (float64_t)(int64_t)__asm_sshll(0.0f, 0), (float64_t)v18);
        __asm_sshll(0.0f, 0);
        __asm_sshll(0.0f, 0);
        v13 = v11 * g4 / v11;
        v14 = v13;
        if (v13 >= 1) {
            v15 = v14;
            _putchar(42);
            v14 = v15 - 1;
            while (v15 >= 2) {
                // 0x100003d58
                v15 = v14;
                _putchar(42);
                v14 = v15 - 1;
            }
        }
        // 0x100003d64
        v16 = __asm_sshll(0.0f, 0);
        v17 = __asm_sshll(0.0f, 0);
        _printf("  %-.1f%%", (float64_t)(int64_t)v16);
        _putchar(10);
        v18 = v17;
    }
    // 0x100003dcc
    _free(v1);
    // 0x100003dd8
    return &g5;
}

// Address range: 0x100003de4 - 0x100003ebc
int64_t entry_point(void) {
    // 0x100003de4
    _srand(_time(NULL));
    int64_t v1 = function_100003958(); // 0x100003e10
    int64_t result = 1; // 0x100003e24
    if (v1 != 0) {
        // 0x100003e2c
        function_100003820();
        function_1000038a0();
        int128_t v2; // 0x100003de4
        _printf("mean = %g, stddev = %g\n\n", (float64_t)(int64_t)v2, (float64_t)(int64_t)v2);
        function_100003b08();
        _free((int64_t *)v1);
        _printf("\n%s\n", (char *)0x989680);
        _getchar();
        result = 0;
    }
    // 0x100003eac
    return result;
}

// Address range: 0x100003ebc - 0x100003ec8
int64_t * function_100003ebc(int32_t nmemb, int32_t size) {
    // 0x100003ebc
    return _calloc(nmemb, size);
}

// Address range: 0x100003ec8 - 0x100003ed4
void function_100003ec8(int64_t * ptr) {
    // 0x100003ec8
    _free(ptr);
}

// Address range: 0x100003ed4 - 0x100003ee0
int32_t function_100003ed4(void) {
    // 0x100003ed4
    return _getchar();
}

// Address range: 0x100003ee0 - 0x100003eec
float64_t function_100003ee0(float64_t a1) {
    // 0x100003ee0
    return _log(a1);
}

// Address range: 0x100003eec - 0x100003ef8
int32_t function_100003eec(char * format, ...) {
    // 0x100003eec
    return _printf(format);
}

// Address range: 0x100003ef8 - 0x100003f04
int32_t function_100003ef8(int32_t c) {
    // 0x100003ef8
    return _putchar(c);
}

// Address range: 0x100003f04 - 0x100003f10
int32_t function_100003f04(void) {
    // 0x100003f04
    return _rand();
}

// Address range: 0x100003f10 - 0x100003f1c
void function_100003f10(int32_t seed) {
    // 0x100003f10
    _srand(seed);
}

// Address range: 0x100003f1c - 0x100003f28
int32_t function_100003f1c(int32_t * timer) {
    // 0x100003f1c
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 14
