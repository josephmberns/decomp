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
int64_t function_10000379c(void);
int64_t function_100003920(void);
int64_t function_100003a2c(void);
int64_t function_100003b00(void);
int64_t function_100003b64(int64_t a1);
int64_t function_100003b78(void);
int64_t function_100003ce4(char * a1);
int64_t function_100003d18(void);
int64_t function_100003d1c(void);
int64_t function_100003e1c(int64_t a1);
int64_t function_100003ec0(void);
void function_100003ecc(int32_t status);
int32_t function_100003ed8(void);
int32_t function_100003ee4(char * format, ...);
int32_t function_100003ef0(int32_t c);
int32_t function_100003efc(void);
void function_100003f08(int32_t seed);
int32_t function_100003f14(int32_t * timer);

// --------------------- Global Variables ---------------------

float128_t g1 = 0.0L; // 0x100003f30
float128_t g2 = 4.24399158143647898438151788554984887e-314L; // 0x100003f40
int64_t g3 = 0x100000cfeedfacf; // 0x100008000
int64_t g4 = 0; // 0x10000803c
int32_t * g5 = (int32_t *)0x100000000; // 0x100008040
int32_t * g6 = (int32_t *)1; // 0x100008044
int32_t * g7; // 0x100008048
int32_t g8;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _getchar(void);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x10000379c - 0x100003920
int64_t function_10000379c(void) {
    int64_t * v1 = (int64_t *)*(int64_t *)0x100004008;
    int64_t v2 = (float64_t)g1; // bp-48, 0x1000037cc
    int64_t v3 = (float64_t)g2; // bp-64, 0x1000037e0
    int32_t v4 = *(int32_t *)&g7; // 0x1000037ec
    int64_t v5; // 0x10000379c
    int64_t v6 = 4 * v5 & 0x3fffffffc; // 0x1000037f4
    int32_t v7 = *(int32_t *)(v6 + (int64_t)&v3) + v4; // 0x1000037f8
    int64_t * v8 = v1; // 0x100003828
    int64_t result = 0; // 0x100003828
    if (v7 >= 0) {
        int32_t v9 = *(int32_t *)&g6; // 0x100003808
        int32_t v10 = *(int32_t *)(v6 + (int64_t)&v2) + v9; // 0x100003814
        v8 = v1;
        result = 0;
        if (v10 >= 0 && v7 < 4 != (3 - v7 & v7) < 0) {
            // 0x100003858
            v8 = v1;
            result = 0;
            if (v10 < 4 != (3 - v10 & v10) < 0) {
                int32_t * v11 = (int32_t *)(16 * (int64_t)v7 + (int64_t)&g3 + 4 * (int64_t)v10); // 0x100003884
                int32_t v12 = *v11; // 0x100003884
                *(int32_t *)(16 * (int64_t)v4 + (int64_t)&g3 + 4 * (int64_t)v9) = v12;
                *v11 = 0;
                *(int32_t *)&g7 = v7;
                *(int32_t *)&g6 = v10;
                v8 = (int64_t *)*(int64_t *)0x100004008;
                result = 1;
            }
        }
    }
    // 0x1000038e4
    if (*v8 != *v1) {
        // 0x10000390c
        ___stack_chk_fail();
    }
    // 0x100003910
    return result;
}

// Address range: 0x100003920 - 0x100003a2c
int64_t function_100003920(void) {
    for (int64_t i = 0; i < 4; i++) {
        int64_t v1 = 4 * i;
        int64_t v2 = 16 * i + (int64_t)&g3; // 0x100003980
        int64_t v3 = 0;
        int64_t v4 = v3 + 1;
        *(int32_t *)(v2 + 4 * v3) = (int32_t)(v4 + v1);
        while (v4 != 4) {
            // 0x100003964
            v3 = v4;
            v4 = v3 + 1;
            *(int32_t *)(v2 + 4 * v3) = (int32_t)(v4 + v1);
        }
    }
    // 0x1000039b4
    *(int32_t *)&g4 = 0;
    *(int32_t *)&g7 = 3;
    *(int32_t *)&g6 = 3;
    int32_t v5 = 0; // 0x100003a14
    _rand();
    int64_t result = function_10000379c(); // 0x100003a0c
    while (v5 + (int32_t)result < 100 != (99 - v5 + (int32_t)result & v5 + (int32_t)result) < 0) {
        // 0x1000039f8
        v5 += (int32_t)result;
        _rand();
        result = function_10000379c();
    }
    // 0x100003a20
    return result;
}

// Address range: 0x100003a2c - 0x100003b00
int64_t function_100003a2c(void) {
    int32_t v1 = 0;
    uint64_t v2 = 0;
    int64_t v3 = 16 * v2 + (int64_t)&g3;
    int32_t v4 = 1;
    int32_t v5 = 0;
    uint64_t v6 = 0;
    int32_t v7 = v4; // 0x100003a7c
    int64_t result; // 0x100003a2c
    if (v4 < 16 != (15 - v4 & v4) < 0) {
        // 0x100003a84
        v7 = v4 + 1;
        result = 0;
        if (*(int32_t *)(v3 + 4 * v6) != v4) {
            return result;
        }
    }
    int64_t v8 = v6 + 1;
    int32_t v9 = v5 + 1; // 0x100003a68
    while (v6 < 3 != (2 - v5 & (int32_t)v8) < 0) {
        // 0x100003a70
        v4 = v7;
        v5 = v9;
        v6 = v8;
        v7 = v4;
        if (v4 < 16 != (15 - v4 & v4) < 0) {
            // 0x100003a84
            v7 = v4 + 1;
            result = 0;
            if (*(int32_t *)(v3 + 4 * v6) != v4) {
                return result;
            }
        }
        // 0x100003ac4
        v8 = v6 + 1;
        v9 = v5 + 1;
    }
    int64_t v10 = v2 + 1;
    int32_t v11 = v1 + 1; // 0x100003a4c
    result = 1;
    while (v2 < 3 != (2 - v1 & (int32_t)v10) < 0) {
        // 0x100003a5c
        v1 = v11;
        v2 = v10;
        v3 = 16 * v2 + (int64_t)&g3;
        v4 = v7;
        v5 = 0;
        v6 = 0;
        v7 = v4;
        if (v4 < 16 != (15 - v4 & v4) < 0) {
            // 0x100003a84
            v7 = v4 + 1;
            result = 0;
            if (*(int32_t *)(v3 + 4 * v6) != v4) {
                return result;
            }
        }
        // 0x100003ac4
        v8 = v6 + 1;
        v9 = v5 + 1;
        while (v6 < 3 != (2 - v5 & (int32_t)v8) < 0) {
            // 0x100003a70
            v4 = v7;
            v5 = v9;
            v6 = v8;
            v7 = v4;
            if (v4 < 16 != (15 - v4 & v4) < 0) {
                // 0x100003a84
                v7 = v4 + 1;
                result = 0;
                if (*(int32_t *)(v3 + 4 * v6) != v4) {
                    return result;
                }
            }
            // 0x100003ac4
            v8 = v6 + 1;
            v9 = v5 + 1;
        }
        // 0x100003ad8
        v10 = v2 + 1;
        v11 = v1 + 1;
        result = 1;
    }
  lab_0x100003af4:
    // 0x100003af4
    return result;
}

// Address range: 0x100003b00 - 0x100003b64
int64_t function_100003b00(void) {
    // 0x100003b00
    *(int32_t *)&g5 = 2;
    int64_t result; // 0x100003b00
    return result;
}

// Address range: 0x100003b64 - 0x100003b78
int64_t function_100003b64(int64_t a1) {
    // 0x100003b64
    return function_100003b00();
}

// Address range: 0x100003b78 - 0x100003ce4
int64_t function_100003b78(void) {
    // 0x100003b78
    _putchar(10);
    for (int64_t i = 0; i < 4; i++) {
        int64_t v1 = 16 * i + (int64_t)&g3; // 0x100003bd0
        int64_t v2 = 0;
        if (*(int32_t *)(v1 + 4 * v2) == 0) {
            // 0x100003c54
            _printf(v2 == 3 ? " %*s \n" : " %*s ");
        } else {
            // 0x100003bec
            _printf(v2 == 3 ? " %*d \n" : " %*d ");
        }
        int64_t v3 = v2 + 1;
        while (v3 != 4) {
            // 0x100003bc4
            v2 = v3;
            if (*(int32_t *)(v1 + 4 * v2) == 0) {
                // 0x100003c54
                _printf(v2 == 3 ? " %*s \n" : " %*s ");
            } else {
                // 0x100003bec
                _printf(v2 == 3 ? " %*d \n" : " %*d ");
            }
            // 0x100003cac
            v3 = v2 + 1;
        }
    }
    // 0x100003cd0
    return _putchar(10);
}

// Address range: 0x100003ce4 - 0x100003d18
int64_t function_100003ce4(char * a1) {
    // 0x100003ce4
    int64_t v1; // 0x100003ce4
    return _printf("\n%s\n", (char *)v1);
}

// Address range: 0x100003d18 - 0x100003d1c
int64_t function_100003d18(void) {
    // 0x100003d18
    int64_t result; // 0x100003d18
    return result;
}

// Address range: 0x100003d1c - 0x100003e1c
int64_t function_100003d1c(void) {
    // 0x100003d1c
    while (true) {
      lab_0x100003d2c:;
        // 0x100003d2c
        int64_t v1; // 0x100003d1c
        _printf("%s", (char *)v1);
        int32_t v2 = _getchar(); // 0x100003d48
        while (_getchar() != 10) {
            // continue -> 0x100003d54
        }
        int64_t result = 2; // 0x100003d1c
        switch (v2) {
            case 27: {
                goto lab_0x100003dd4;
            }
            case 100: {
                // 0x100003e0c
                return 0;
            }
            case 108: {
                // 0x100003e0c
                return 3;
            }
            case 114: {
                return result;
            }
            case 117: {
                // 0x100003e0c
                result = 1;
                // 0x100003e0c
                return result;
            }
            default: {
                goto lab_0x100003d2c;
            }
        }
    }
  lab_0x100003dd4:
    // 0x100003dd4
    _exit(0);
    // UNREACHABLE
}

// Address range: 0x100003e1c - 0x100003e30
int64_t function_100003e1c(int64_t a1) {
    // 0x100003e1c
    return _getchar();
}

// Address range: 0x100003e30 - 0x100003ec0
int64_t entry_point(void) {
    // 0x100003e30
    _srand(_time(NULL));
    function_100003920();
    while ((int32_t)function_100003a2c() != 0) {
        // 0x100003e50
        function_100003920();
    }
    // 0x100003e6c
    function_100003b64((int64_t)&g8);
    function_100003d18();
    function_100003b78();
    if ((int32_t)function_100003a2c() != 0) {
        // 0x100003ea0
        function_100003ce4("You win");
        function_100003e1c((int64_t)&g8);
        return 0;
    }
    function_100003d1c();
    function_10000379c();
    function_100003b78();
    while ((int32_t)function_100003a2c() == 0) {
        // 0x100003e90
        function_100003d1c();
        function_10000379c();
        function_100003b78();
    }
    // 0x100003ea0
    function_100003ce4("You win");
    function_100003e1c((int64_t)&g8);
    return 0;
}

// Address range: 0x100003ec0 - 0x100003ecc
int64_t function_100003ec0(void) {
    // 0x100003ec0
    return ___stack_chk_fail();
}

// Address range: 0x100003ecc - 0x100003ed8
void function_100003ecc(int32_t status) {
    // 0x100003ecc
    _exit(status);
}

// Address range: 0x100003ed8 - 0x100003ee4
int32_t function_100003ed8(void) {
    // 0x100003ed8
    return _getchar();
}

// Address range: 0x100003ee4 - 0x100003ef0
int32_t function_100003ee4(char * format, ...) {
    // 0x100003ee4
    return _printf(format);
}

// Address range: 0x100003ef0 - 0x100003efc
int32_t function_100003ef0(int32_t c) {
    // 0x100003ef0
    return _putchar(c);
}

// Address range: 0x100003efc - 0x100003f08
int32_t function_100003efc(void) {
    // 0x100003efc
    return _rand();
}

// Address range: 0x100003f08 - 0x100003f14
void function_100003f08(int32_t seed) {
    // 0x100003f08
    _srand(seed);
}

// Address range: 0x100003f14 - 0x100003f20
int32_t function_100003f14(int32_t * timer) {
    // 0x100003f14
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 19

