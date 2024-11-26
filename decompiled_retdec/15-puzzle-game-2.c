//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003858(void);
int64_t function_1000039dc(void);
int64_t function_100003ae8(void);
int64_t function_100003bbc(void);
int64_t function_100003d00(char * a1);
int64_t function_100003d34(void);
int64_t function_100003e34(int64_t a1);
int64_t function_100003ed0(void);
void function_100003edc(int32_t status);
int32_t function_100003ee8(void);
int32_t function_100003ef4(char * format, ...);
int32_t function_100003f00(int32_t c);
int32_t function_100003f0c(void);
void function_100003f18(int32_t seed);
int32_t function_100003f24(int32_t * timer);

// --------------------- Global Variables ---------------------

float128_t g1 = 0.0L; // 0x100003f40
float128_t g2 = 4.24399158143647898438151788554984887e-314L; // 0x100003f50
int64_t g3 = 0x100000cfeedfacf; // 0x100008000
int64_t g4 = 0; // 0x10000803c
int32_t * g5 = (int32_t *)0x100000000; // 0x100008040
int32_t * g6; // 0x100008044
int32_t g7;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _getchar(void);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003858 - 0x1000039dc
int64_t function_100003858(void) {
    int64_t * v1 = (int64_t *)*(int64_t *)0x100004008;
    int64_t v2 = (float64_t)g1; // bp-48, 0x100003888
    int64_t v3 = (float64_t)g2; // bp-64, 0x10000389c
    int32_t v4 = *(int32_t *)&g6; // 0x1000038a8
    int64_t v5; // 0x100003858
    int64_t v6 = 4 * v5 & 0x3fffffffc; // 0x1000038b0
    int32_t v7 = *(int32_t *)(v6 + (int64_t)&v3) + v4; // 0x1000038b4
    int64_t * v8 = v1; // 0x1000038e4
    int64_t result = 0; // 0x1000038e4
    if (v7 >= 0) {
        int32_t v9 = *(int32_t *)&g5; // 0x1000038c4
        int32_t v10 = *(int32_t *)(v6 + (int64_t)&v2) + v9; // 0x1000038d0
        v8 = v1;
        result = 0;
        if (v10 >= 0 && v7 < 4 != (3 - v7 & v7) < 0) {
            // 0x100003914
            v8 = v1;
            result = 0;
            if (v10 < 4 != (3 - v10 & v10) < 0) {
                int32_t * v11 = (int32_t *)(16 * (int64_t)v7 + (int64_t)&g3 + 4 * (int64_t)v10); // 0x100003940
                int32_t v12 = *v11; // 0x100003940
                *(int32_t *)(16 * (int64_t)v4 + (int64_t)&g3 + 4 * (int64_t)v9) = v12;
                *v11 = 0;
                *(int32_t *)&g6 = v7;
                *(int32_t *)&g5 = v10;
                v8 = (int64_t *)*(int64_t *)0x100004008;
                result = 1;
            }
        }
    }
    // 0x1000039a0
    if (*v8 != *v1) {
        // 0x1000039c8
        ___stack_chk_fail();
    }
    // 0x1000039cc
    return result;
}

// Address range: 0x1000039dc - 0x100003ae8
int64_t function_1000039dc(void) {
    for (int64_t i = 0; i < 4; i++) {
        int64_t v1 = 4 * i;
        int64_t v2 = 16 * i + (int64_t)&g3; // 0x100003a3c
        int64_t v3 = 0;
        int64_t v4 = v3 + 1;
        *(int32_t *)(v2 + 4 * v3) = (int32_t)(v4 + v1);
        while (v4 != 4) {
            // 0x100003a20
            v3 = v4;
            v4 = v3 + 1;
            *(int32_t *)(v2 + 4 * v3) = (int32_t)(v4 + v1);
        }
    }
    // 0x100003a70
    *(int32_t *)&g4 = 0;
    *(int32_t *)&g6 = 3;
    *(int32_t *)&g5 = 3;
    int32_t v5 = 0; // 0x100003ad0
    _rand();
    int64_t result = function_100003858(); // 0x100003ac8
    while (v5 + (int32_t)result < 100 != (99 - v5 + (int32_t)result & v5 + (int32_t)result) < 0) {
        // 0x100003ab4
        v5 += (int32_t)result;
        _rand();
        result = function_100003858();
    }
    // 0x100003adc
    return result;
}

// Address range: 0x100003ae8 - 0x100003bbc
int64_t function_100003ae8(void) {
    int32_t v1 = 0;
    uint64_t v2 = 0;
    int64_t v3 = 16 * v2 + (int64_t)&g3;
    int32_t v4 = 1;
    int32_t v5 = 0;
    uint64_t v6 = 0;
    int32_t v7 = v4; // 0x100003b38
    int64_t result; // 0x100003ae8
    if (v4 < 16 != (15 - v4 & v4) < 0) {
        // 0x100003b40
        v7 = v4 + 1;
        result = 0;
        if (*(int32_t *)(v3 + 4 * v6) != v4) {
            return result;
        }
    }
    int64_t v8 = v6 + 1;
    int32_t v9 = v5 + 1; // 0x100003b24
    while (v6 < 3 != (2 - v5 & (int32_t)v8) < 0) {
        // 0x100003b2c
        v4 = v7;
        v5 = v9;
        v6 = v8;
        v7 = v4;
        if (v4 < 16 != (15 - v4 & v4) < 0) {
            // 0x100003b40
            v7 = v4 + 1;
            result = 0;
            if (*(int32_t *)(v3 + 4 * v6) != v4) {
                return result;
            }
        }
        // 0x100003b80
        v8 = v6 + 1;
        v9 = v5 + 1;
    }
    int64_t v10 = v2 + 1;
    int32_t v11 = v1 + 1; // 0x100003b08
    result = 1;
    while (v2 < 3 != (2 - v1 & (int32_t)v10) < 0) {
        // 0x100003b18
        v1 = v11;
        v2 = v10;
        v3 = 16 * v2 + (int64_t)&g3;
        v4 = v7;
        v5 = 0;
        v6 = 0;
        v7 = v4;
        if (v4 < 16 != (15 - v4 & v4) < 0) {
            // 0x100003b40
            v7 = v4 + 1;
            result = 0;
            if (*(int32_t *)(v3 + 4 * v6) != v4) {
                return result;
            }
        }
        // 0x100003b80
        v8 = v6 + 1;
        v9 = v5 + 1;
        while (v6 < 3 != (2 - v5 & (int32_t)v8) < 0) {
            // 0x100003b2c
            v4 = v7;
            v5 = v9;
            v6 = v8;
            v7 = v4;
            if (v4 < 16 != (15 - v4 & v4) < 0) {
                // 0x100003b40
                v7 = v4 + 1;
                result = 0;
                if (*(int32_t *)(v3 + 4 * v6) != v4) {
                    return result;
                }
            }
            // 0x100003b80
            v8 = v6 + 1;
            v9 = v5 + 1;
        }
        // 0x100003b94
        v10 = v2 + 1;
        v11 = v1 + 1;
        result = 1;
    }
  lab_0x100003bb0:
    // 0x100003bb0
    return result;
}

// Address range: 0x100003bbc - 0x100003d00
int64_t function_100003bbc(void) {
    // 0x100003bbc
    _putchar(10);
    for (int64_t i = 0; i < 4; i++) {
        int64_t v1 = 16 * i + (int64_t)&g3; // 0x100003c14
        int64_t v2 = 0;
        if (*(int32_t *)(v1 + 4 * v2) == 0) {
            // 0x100003c84
            _printf(v2 == 3 ? " %2s \n" : " %2s ");
        } else {
            // 0x100003c30
            _printf(v2 == 3 ? " %2d \n" : " %2d ");
        }
        int64_t v3 = v2 + 1;
        while (v3 != 4) {
            // 0x100003c08
            v2 = v3;
            if (*(int32_t *)(v1 + 4 * v2) == 0) {
                // 0x100003c84
                _printf(v2 == 3 ? " %2s \n" : " %2s ");
            } else {
                // 0x100003c30
                _printf(v2 == 3 ? " %2d \n" : " %2d ");
            }
            // 0x100003cc8
            v3 = v2 + 1;
        }
    }
    // 0x100003cec
    return _putchar(10);
}

// Address range: 0x100003d00 - 0x100003d34
int64_t function_100003d00(char * a1) {
    // 0x100003d00
    int64_t v1; // 0x100003d00
    return _printf("\n%s\n", (char *)v1);
}

// Address range: 0x100003d34 - 0x100003e34
int64_t function_100003d34(void) {
    // 0x100003d34
    while (true) {
      lab_0x100003d44:;
        // 0x100003d44
        int64_t v1; // 0x100003d34
        _printf("%s", (char *)v1);
        int32_t v2 = _getchar(); // 0x100003d60
        while (_getchar() != 10) {
            // continue -> 0x100003d6c
        }
        int64_t result = 2; // 0x100003d34
        switch (v2) {
            case 27: {
                goto lab_0x100003dec;
            }
            case 100: {
                // 0x100003e24
                return 0;
            }
            case 108: {
                // 0x100003e24
                return 3;
            }
            case 114: {
                return result;
            }
            case 117: {
                // 0x100003e24
                result = 1;
                // 0x100003e24
                return result;
            }
            default: {
                goto lab_0x100003d44;
            }
        }
    }
  lab_0x100003dec:
    // 0x100003dec
    _exit(0);
    // UNREACHABLE
}

// Address range: 0x100003e34 - 0x100003e48
int64_t function_100003e34(int64_t a1) {
    // 0x100003e34
    return _getchar();
}

// Address range: 0x100003e48 - 0x100003ed0
int64_t entry_point(void) {
    // 0x100003e48
    _srand(_time(NULL));
    function_1000039dc();
    while ((int32_t)function_100003ae8() != 0) {
        // 0x100003e68
        function_1000039dc();
    }
    // 0x100003e84
    function_100003bbc();
    if ((int32_t)function_100003ae8() != 0) {
        // 0x100003eb0
        function_100003d00("You win");
        function_100003e34((int64_t)&g7);
        return 0;
    }
    function_100003d34();
    function_100003858();
    function_100003bbc();
    while ((int32_t)function_100003ae8() == 0) {
        // 0x100003ea0
        function_100003d34();
        function_100003858();
        function_100003bbc();
    }
    // 0x100003eb0
    function_100003d00("You win");
    function_100003e34((int64_t)&g7);
    return 0;
}

// Address range: 0x100003ed0 - 0x100003edc
int64_t function_100003ed0(void) {
    // 0x100003ed0
    return ___stack_chk_fail();
}

// Address range: 0x100003edc - 0x100003ee8
void function_100003edc(int32_t status) {
    // 0x100003edc
    _exit(status);
}

// Address range: 0x100003ee8 - 0x100003ef4
int32_t function_100003ee8(void) {
    // 0x100003ee8
    return _getchar();
}

// Address range: 0x100003ef4 - 0x100003f00
int32_t function_100003ef4(char * format, ...) {
    // 0x100003ef4
    return _printf(format);
}

// Address range: 0x100003f00 - 0x100003f0c
int32_t function_100003f00(int32_t c) {
    // 0x100003f00
    return _putchar(c);
}

// Address range: 0x100003f0c - 0x100003f18
int32_t function_100003f0c(void) {
    // 0x100003f0c
    return _rand();
}

// Address range: 0x100003f18 - 0x100003f24
void function_100003f18(int32_t seed) {
    // 0x100003f18
    _srand(seed);
}

// Address range: 0x100003f24 - 0x100003f30
int32_t function_100003f24(int32_t * timer) {
    // 0x100003f24
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 16
