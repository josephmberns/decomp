//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000038fc(void);
int64_t function_100003940(void);
int64_t function_100003d5c(void);
int32_t function_100003f5c(char * format, ...);
int32_t function_100003f68(void);
char * function_100003f74(int32_t category, char * locale);
void function_100003f80(int32_t seed);
int32_t function_100003f8c(int32_t * timer);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x100000cfeedfacf; // 0x100008000
char * g2 = "\x19"; // 0x100008020

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _rand(void);
char * _setlocale(int32_t a1, char * a2);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x1000038fc - 0x100003940
int64_t function_1000038fc(void) {
    // 0x1000038fc
    int64_t result; // 0x1000038fc
    int32_t * v1 = (int32_t *)((0x100000000 * result >> 30) + (int64_t)&g1); // 0x100003914
    int32_t * v2 = (int32_t *)((0x100000000 * result >> 30) + (int64_t)&g1); // 0x100003920
    *v1 = *v2;
    *v2 = *v1;
    return result;
}

// Address range: 0x100003940 - 0x100003d5c
int64_t function_100003940(void) {
    int64_t v1 = 0;
    *(char *)(v1 + (int64_t)&g2) = 101;
    *(int32_t *)(4 * v1 + (int64_t)&g1) = (int32_t)v1;
    int64_t v2 = v1 + 1;
    while (v2 != 8) {
        // 0x100003968
        v1 = v2;
        *(char *)(v1 + (int64_t)&g2) = 101;
        *(int32_t *)(4 * v1 + (int64_t)&g1) = (int32_t)v1;
        v2 = v1 + 1;
    }
    int32_t v3 = _rand(); // 0x1000039ac
    int32_t v4 = v3 - 8 * v3 / 8; // 0x1000039c0
    int32_t v5 = _rand(); // 0x1000039c8
    int32_t v6 = v5 - 8 * v5 / 8; // 0x1000039d8
    int32_t v7 = _rand(); // 0x1000039e0
    int32_t v8 = v7 - 8 * v7 / 8; // 0x1000039f0
    int32_t v9 = v6 - v4; // 0x100003a04
    int32_t v10 = v8 - v4; // 0x100003a20
    int32_t v11 = 1; // 0x100003a10
    if (v9 < 1 != v10 < 1) {
        // 0x100003a3c
        v11 = 1;
        if (v9 < 0 || v10 < 0) {
            // 0x100003a7c
            v11 = v8 == v4 | v6 == v4 | v6 == v8;
        }
    }
    while (v11 != 0) {
        // 0x1000039ac
        v3 = _rand();
        v4 = v3 - 8 * v3 / 8;
        v5 = _rand();
        v6 = v5 - 8 * v5 / 8;
        v7 = _rand();
        v8 = v7 - 8 * v7 / 8;
        v9 = v6 - v4;
        v10 = v8 - v4;
        v11 = 1;
        if (v9 < 1 != v10 < 1) {
            // 0x100003a3c
            v11 = 1;
            if (v9 < 0 || v10 < 0) {
                // 0x100003a7c
                v11 = v8 == v4 | v6 == v4 | v6 == v8;
            }
        }
    }
    int32_t v12 = *(int32_t *)(4 * (int64_t)v6 + (int64_t)&g1); // 0x100003af8
    *(char *)((int64_t)v12 + (int64_t)&g2) = 82;
    int32_t v13 = *(int32_t *)(4 * (int64_t)v4 + (int64_t)&g1); // 0x100003b18
    *(char *)((int64_t)v13 + (int64_t)&g2) = 75;
    int32_t v14 = *(int32_t *)(4 * (int64_t)v8 + (int64_t)&g1); // 0x100003b30
    *(char *)((int64_t)v14 + (int64_t)&g2) = 82;
    function_1000038fc();
    function_1000038fc();
    function_1000038fc();
    int32_t v15 = _rand() % 5;
    int32_t v16 = _rand() % 5;
    int32_t v17 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g1); // 0x100003ba8
    int32_t * v18 = (int32_t *)(4 * (int64_t)v16 + (int64_t)&g1);
    int32_t v19 = v17 - *v18; // 0x100003bb4
    while (v15 == v16 || v19 == 2 * v19 / 2) {
        // 0x100003b64
        v15 = _rand() % 5;
        v16 = _rand() % 5;
        v17 = *(int32_t *)(4 * (int64_t)v15 + (int64_t)&g1);
        v18 = (int32_t *)(4 * (int64_t)v16 + (int64_t)&g1);
        v19 = v17 - *v18;
    }
    // 0x100003c04
    *(char *)((int64_t)v17 + (int64_t)&g2) = 66;
    *(char *)((int64_t)*v18 + (int64_t)&g2) = 66;
    function_1000038fc();
    function_1000038fc();
    int32_t v20 = _rand() % 3;
    int32_t v21 = _rand(); // 0x100003c74
    int32_t v22 = v21 % 3;
    while (v20 == v22) {
        // 0x100003c58
        v20 = _rand() % 3;
        v21 = _rand();
        v22 = v21 % 3;
    }
    int64_t result = v21; // 0x100003c74
    int32_t v23 = *(int32_t *)(4 * (int64_t)v20 + (int64_t)&g1); // 0x100003cb4
    *(char *)((int64_t)v23 + (int64_t)&g2) = 81;
    int32_t v24 = *(int32_t *)(4 * (int64_t)v22 + (int64_t)&g1); // 0x100003cd4
    *(char *)((int64_t)v24 + (int64_t)&g2) = 78;
    int32_t v25 = 0;
    char * v26 = (char *)((int64_t)v25 + (int64_t)&g2);
    while (*v26 != 101) {
        int32_t v27 = v25 + 1; // 0x100003d44
        if (v25 < 7 == (6 - v25 & v27) < 0) {
            // 0x100003d50
            return result;
        }
        v25 = v27;
        v26 = (char *)((int64_t)v25 + (int64_t)&g2);
    }
    // 0x100003d20
    *v26 = 78;
    // 0x100003d50
    return result;
}

// Address range: 0x100003d5c - 0x100003ef8
int64_t function_100003d5c(void) {
    // 0x100003d5c
    _setlocale(0, (char *)0x100003f98);
    int64_t v1 = 0; // 0x100003d5c
    int64_t v2 = _printf((char *)0x100003f99); // 0x100003d5c
    char v3; // 0x100003d5c
    char * v4; // 0x100003dac
    int32_t v5; // 0x100003d5c
    int64_t v6; // 0x100003d5c
    while (true) {
      lab_0x100003da0:
        // 0x100003da0
        v4 = (char *)(v1 + (int64_t)&g2);
        char v7 = *v4;
        v3 = v7;
        v6 = v2;
        switch (v7) {
            case 75: {
                // 0x100003dc0
                v5 = _printf("%lc", -104);
                goto lab_0x100003e9c_2;
            }
            case 81: {
                // 0x100003dfc
                v5 = _printf("%lc", -104);
                goto lab_0x100003e9c_2;
            }
            case 82: {
                // 0x100003e38
                v5 = _printf("%lc", -104);
                goto lab_0x100003e9c_2;
            }
            case 66: {
                // 0x100003e74
                v5 = _printf("%lc", -104);
                goto lab_0x100003e9c_2;
            }
            default: {
                goto lab_0x100003e9c;
            }
        }
    }
    // 0x100003eec
    int64_t result; // 0x100003d5c
    return result;
  lab_0x100003e9c:
    // 0x100003e9c
    if (v3 == 78) {
        int64_t v8 = _printf("%lc", -104); // 0x100003ed4
    }
    // 0x100003edc
    result = v6;
    int64_t v9 = v1 + 1;
    v1 = v9;
    v2 = result;
    if (v9 == 8) {
        return result;
    }
    goto lab_0x100003da0;
  lab_0x100003e9c_2:
    // 0x100003e9c
    v3 = *v4;
    v6 = v5;
    goto lab_0x100003e9c;
}

// Address range: 0x100003ef8 - 0x100003f5c
int64_t entry_point(void) {
    // 0x100003ef8
    _srand(_time(NULL));
    for (int32_t i = 0; i < 9; i++) {
        // 0x100003f30
        function_100003940();
        function_100003d5c();
    }
    // 0x100003f4c
    return 0;
}

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(char * format, ...) {
    // 0x100003f5c
    return _printf(format);
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(void) {
    // 0x100003f68
    return _rand();
}

// Address range: 0x100003f74 - 0x100003f80
char * function_100003f74(int32_t category, char * locale) {
    // 0x100003f74
    return _setlocale(category, locale);
}

// Address range: 0x100003f80 - 0x100003f8c
void function_100003f80(int32_t seed) {
    // 0x100003f80
    _srand(seed);
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(int32_t * timer) {
    // 0x100003f8c
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9
