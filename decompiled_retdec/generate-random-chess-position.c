//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_10000398c(void);
int64_t function_100003aa4(void);
int64_t function_100003c2c(void);
int64_t function_100003e6c(void);
int64_t function_100003f10(int64_t a1);
int64_t function_100003f1c(int64_t a1, char * a2, int64_t a3);
int32_t function_100003f28(int32_t x);
int32_t function_100003f34(char * format, ...);
int32_t function_100003f40(void);
void function_100003f4c(int32_t seed);
int32_t function_100003f58(char * s);
int32_t function_100003f64(int32_t * timer);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x100000cfeedfacf; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t ___strcpy_chk(int64_t a1, char * a2, int64_t a3);
int32_t _abs(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _strlen(char * a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x10000398c - 0x100003aa4
int64_t function_10000398c(void) {
    int32_t v1; // 0x1000039f8
    int32_t result; // 0x100003a44
    int32_t v2; // 0x1000039b0
    int32_t v3; // 0x1000039e0
    int32_t v4; // 0x1000039c8
    while (true) {
        int32_t v5 = _rand(); // 0x10000399c
        v2 = v5 - 8 * v5 / 8;
        int32_t v6 = _rand(); // 0x1000039b8
        int32_t v7 = _rand(); // 0x1000039d0
        v3 = v7 - 8 * v7 / 8;
        int32_t v8 = _rand(); // 0x1000039e8
        if (v2 != v3) {
            int32_t v9 = _abs(v2 - v3); // 0x100003a24
            int32_t v10 = v9 - 1; // 0x100003a28
            if (v10 != 0 && v10 < 0 == (v9 & -v9) < 0) {
                // 0x100003a38
                v4 = v6 - 8 * v6 / 8;
                v1 = v8 - 8 * v8 / 8;
                result = _abs(v4 - v1);
                int32_t v11 = result - 1; // 0x100003a48
                if (v11 != 0 && v11 < 0 == (result & -result) < 0) {
                    // break -> 0x100003a58
                    break;
                }
            }
        }
    }
    // 0x100003a58
    *(char *)(8 * (int64_t)v2 + (int64_t)&g1 + (int64_t)v4) = 75;
    *(char *)(8 * (int64_t)v3 + (int64_t)&g1 + (int64_t)v1) = 107;
    return result;
}

// Address range: 0x100003aa4 - 0x100003c2c
int64_t function_100003aa4(void) {
    int32_t v1 = _rand(); // 0x100003ab8
    int64_t v2; // 0x100003aa4
    int64_t result = _strlen((char *)v2); // 0x100003acc
    int32_t v3 = (int64_t)v1 % result; // 0x100003ae0
    int32_t v4 = -v3; // 0x100003af4
    if (v4 < 0 == (v4 & v3) < 0) {
        // 0x100003c20
        return result;
    }
    int32_t v5 = 0; // 0x100003c14
    int32_t v6 = _rand(); // 0x100003b08
    int32_t v7 = v6 - 8 * v6 / 8; // 0x100003b1c
    int32_t result2 = _rand(); // 0x100003b24
    char * v8 = (char *)(8 * (int64_t)v7 + (int64_t)&g1 + (int64_t)(result2 - 8 * result2 / 8));
    int32_t v9 = 1; // 0x100003b68
    if (*v8 == 0) {
        if ((int32_t)v2 == 0) {
            // break -> 0x100003be0
            break;
        }
        // 0x100003b8c
        v9 = v7 == 7 | v7 == 0;
    }
    // 0x100003b08
    while (v9 != 0) {
        // 0x100003b08
        v6 = _rand();
        v7 = v6 - 8 * v6 / 8;
        result2 = _rand();
        v8 = (char *)(8 * (int64_t)v7 + (int64_t)&g1 + (int64_t)(result2 - 8 * result2 / 8));
        v9 = 1;
        if (*v8 == 0) {
            if ((int32_t)v2 == 0) {
                // break -> 0x100003be0
                break;
            }
            // 0x100003b8c
            v9 = v7 == 7 | v7 == 0;
        }
    }
    // 0x100003be0
    *v8 = *(char *)(v2 + (int64_t)v5);
    v5++;
    while (v5 - v3 < 0 != ((v5 - v3 ^ v5) & (v5 ^ v3)) < 0) {
        v6 = _rand();
        v7 = v6 - 8 * v6 / 8;
        result2 = _rand();
        v8 = (char *)(8 * (int64_t)v7 + (int64_t)&g1 + (int64_t)(result2 - 8 * result2 / 8));
        v9 = 1;
        if (*v8 == 0) {
            if ((int32_t)v2 == 0) {
                // break -> 0x100003be0
                break;
            }
            // 0x100003b8c
            v9 = v7 == 7 | v7 == 0;
        }
        // 0x100003b08
        while (v9 != 0) {
            // 0x100003b08
            v6 = _rand();
            v7 = v6 - 8 * v6 / 8;
            result2 = _rand();
            v8 = (char *)(8 * (int64_t)v7 + (int64_t)&g1 + (int64_t)(result2 - 8 * result2 / 8));
            v9 = 1;
            if (*v8 == 0) {
                if ((int32_t)v2 == 0) {
                    // break -> 0x100003be0
                    break;
                }
                // 0x100003b8c
                v9 = v7 == 7 | v7 == 0;
            }
        }
        // 0x100003be0
        *v8 = *(char *)(v2 + (int64_t)v5);
        v5++;
    }
    // 0x100003c20
    return result2;
}

// Address range: 0x100003c2c - 0x100003e6c
int64_t function_100003c2c(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003c40
    int64_t v2; // bp-104, 0x100003c2c
    int64_t v3 = &v2;
    int32_t v4 = 0; // 0x100003dcc
    int32_t v5 = 0; // 0x100003c2c
    for (int64_t i = 0; i < 8; i++) {
        int64_t v6 = 8 * i + (int64_t)&g1; // 0x100003c94
        int64_t v7 = 0;
        int32_t v8 = v5;
        int32_t v9 = v4;
        char v10 = *(char *)(v6 + v7); // 0x100003ca0
        int64_t v11; // 0x100003c2c
        _printf("%2c ", (char)v11);
        int32_t v12; // 0x100003c2c
        int32_t v13; // 0x100003c2c
        int32_t v14; // 0x100003c2c
        int32_t v15; // 0x100003c2c
        if (v10 == 0) {
            // 0x100003d04
            v13 = v8 + 1;
            v15 = v9;
        } else {
            // 0x100003d14
            v12 = v8;
            v14 = v9;
            if (v8 >= 1) {
                // 0x100003d28
                *(char *)((int64_t)v9 + v3) = (char)v8 + 48;
                v12 = 0;
                v14 = v9 + 1;
            }
            // 0x100003d50
            *(char *)((int64_t)v14 + v3) = v10;
            v13 = v12;
            v15 = v14 + 1;
        }
        int32_t v16 = v15;
        int32_t v17 = v13;
        v7++;
        while (v7 != 8) {
            // 0x100003c88
            v8 = v17;
            v9 = v16;
            v10 = *(char *)(v6 + v7);
            _printf("%2c ", (char)v11);
            if (v10 == 0) {
                // 0x100003d04
                v13 = v8 + 1;
                v15 = v9;
            } else {
                // 0x100003d14
                v12 = v8;
                v14 = v9;
                if (v8 >= 1) {
                    // 0x100003d28
                    *(char *)((int64_t)v9 + v3) = (char)v8 + 48;
                    v12 = 0;
                    v14 = v9 + 1;
                }
                // 0x100003d50
                *(char *)((int64_t)v14 + v3) = v10;
                v13 = v12;
                v15 = v14 + 1;
            }
            // 0x100003d78
            v16 = v15;
            v17 = v13;
            v7++;
        }
        // 0x100003d88
        v5 = v17;
        int32_t v18 = v16; // 0x100003d94
        if (v17 >= 1) {
            // 0x100003d9c
            *(char *)((int64_t)v16 + v3) = (char)v17 + 48;
            v5 = 0;
            v18 = v16 + 1;
        }
        // 0x100003dc4
        v4 = v18 + 1;
        *(char *)((int64_t)v18 + v3) = 47;
        _printf("\n");
    }
    // 0x100003e04
    ___strcpy_chk((int64_t)v4 + v3, " w - - 0 1", -1);
    int64_t v19 = _printf("%s\n", " w - - 0 1"); // 0x100003e38
    int64_t result = v19; // 0x100003e54
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003e5c
        result = ___stack_chk_fail(v19);
    }
    // 0x100003e60
    return result;
}

// Address range: 0x100003e6c - 0x100003ed8
int64_t function_100003e6c(void) {
    // 0x100003e6c
    function_10000398c();
    function_100003aa4();
    function_100003aa4();
    function_100003aa4();
    function_100003aa4();
    function_100003c2c();
    int64_t result; // 0x100003e6c
    return result;
}

// Address range: 0x100003ed8 - 0x100003f10
int64_t entry_point(void) {
    // 0x100003ed8
    _srand(_time(NULL));
    function_100003e6c();
    return 0;
}

// Address range: 0x100003f10 - 0x100003f1c
int64_t function_100003f10(int64_t a1) {
    // 0x100003f10
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f1c - 0x100003f28
int64_t function_100003f1c(int64_t a1, char * a2, int64_t a3) {
    // 0x100003f1c
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003f28 - 0x100003f34
int32_t function_100003f28(int32_t x) {
    // 0x100003f28
    return _abs(x);
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _printf(format);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(void) {
    // 0x100003f40
    return _rand();
}

// Address range: 0x100003f4c - 0x100003f58
void function_100003f4c(int32_t seed) {
    // 0x100003f4c
    _srand(seed);
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(char * s) {
    // 0x100003f58
    return _strlen(s);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(int32_t * timer) {
    // 0x100003f64
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 13

