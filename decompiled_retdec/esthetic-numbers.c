//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003564(void);
int64_t function_1000035c8(void);
int64_t function_100003690(void);
int64_t function_100003734(void);
int64_t function_10000378c(void);
int64_t function_100003870(void);
int64_t function_1000039d0(void);
int64_t function_100003ee8(int64_t a1);
int32_t function_100003ef4(char * format, ...);
char * function_100003f00(int32_t category, char * locale);
int32_t function_100003f0c(char * s);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x100000cfeedfacf; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
char * _setlocale(int32_t a1, char * a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003564 - 0x1000035c8
int64_t function_100003564(void) {
    // 0x100003564
    int64_t v1; // 0x100003564
    int32_t v2 = v1; // 0x100003568
    if (v2 < 0) {
        // 0x1000035b8
        return 0x1000000 * (v2 + 87) >> 24;
    }
    int32_t v3 = v2 - 9; // 0x100003584
    if (v3 != 0 && v3 < 0 == (8 - v2 & v2) < 0) {
        // 0x1000035b8
        return 0x1000000 * (v2 + 87) >> 24;
    }
    // 0x1000035b8
    return 0x1000000 * (v2 + 48) >> 24;
}

// Address range: 0x1000035c8 - 0x100003690
int64_t function_1000035c8(void) {
    // 0x1000035c8
    int64_t v1; // 0x1000035c8
    int32_t result = _strlen((char *)v1); // 0x1000035dc
    int32_t v2 = result / 2; // 0x1000035fc
    if (result > 1 == (v2 & -v2) < 0) {
        // 0x100003684
        return result;
    }
    int32_t v3 = 0; // 0x100003608
    char * v4 = (char *)(v1 + (int64_t)v3); // 0x10000361c
    char * v5 = (char *)(v1 + (int64_t)(result + -1 - v3)); // 0x10000363c
    *v4 = *v5;
    *v5 = *v4;
    v3++;
    while (v3 - v2 < 0 != ((v3 - v2 ^ v3) & (v3 ^ v2)) < 0) {
        // 0x100003610
        v4 = (char *)(v1 + (int64_t)v3);
        v5 = (char *)(v1 + (int64_t)(result + -1 - v3));
        *v4 = *v5;
        *v5 = *v4;
        v3++;
    }
    // 0x100003684
    return result;
}

// Address range: 0x100003690 - 0x100003734
int64_t function_100003690(void) {
    // 0x100003690
    int64_t result; // 0x100003690
    if (result == 0) {
        // 0x10000370c
        *(char *)result = 0;
        function_1000035c8();
        return result;
    }
    uint64_t v1 = 0x100000000 * result >> 32;
    int32_t v2 = 0;
    int64_t v3; // 0x100003690
    uint64_t v4 = v3;
    int64_t v5 = function_100003564(); // 0x1000036dc
    int32_t v6 = v2 + 1; // 0x1000036ec
    *(char *)(result + (int64_t)v2) = (char)v5;
    v3 = v4 / v1;
    while (v1 <= v4) {
        // 0x1000036c4
        v2 = v6;
        v4 = v3;
        v5 = function_100003564();
        v6 = v2 + 1;
        *(char *)(result + (int64_t)v2) = (char)v5;
        v3 = v4 / v1;
    }
    // 0x10000370c
    *(char *)((int64_t)v6 + result) = 0;
    function_1000035c8();
    return result;
}

// Address range: 0x100003734 - 0x10000378c
int64_t function_100003734(void) {
    // 0x100003734
    int64_t v1; // 0x100003734
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    return v3 == v2 | v3 < v2 ? v2 - v3 : v3 - v2;
}

// Address range: 0x10000378c - 0x100003870
int64_t function_10000378c(void) {
    // 0x10000378c
    int64_t v1; // 0x10000378c
    if (v1 == 0) {
        // 0x100003860
        return 0;
    }
    uint64_t v2 = 0x100000000 * v1 >> 32; // 0x1000037d4
    int64_t result = 1; // 0x1000037f4
    int64_t v3; // 0x10000378c
    while (v2 <= v3) {
        // 0x1000037fc
        v3 /= v2;
        result = 0;
        if (function_100003734() != 1) {
            // break -> 0x100003860
            break;
        }
        result = 1;
    }
    // 0x100003860
    return result;
}

// Address range: 0x100003870 - 0x1000039d0
int64_t function_100003870(void) {
    // 0x100003870
    int64_t v1; // 0x100003870
    uint64_t v2 = v1;
    uint64_t v3 = v1;
    if (v2 >= v1) {
        if (v2 >= v3 != v2 != v3) {
            // 0x1000038b8
            *(int32_t *)&g1 = *(int32_t *)&g1 + 1;
        }
    }
    int64_t result; // 0x100003870
    if (v2 == 0) {
        // 0x1000039c4
        return result;
    }
    if (v2 != v3 && v2 >= v3) {
        // 0x1000039c4
        return result;
    }
    uint64_t v4 = v2 % 10;
    if (v4 == 0) {
        // 0x1000039c4
        return function_100003870();
    }
    // 0x100003974
    result = function_100003870();
    if (v4 != 9) {
        // 0x10000399c
        result = function_100003870();
    }
    // 0x1000039c4
    return result;
}

// Address range: 0x1000039d0 - 0x100003c10
int64_t function_1000039d0(void) {
    // 0x1000039d0
    int64_t v1; // 0x1000039d0
    int64_t v2 = v1;
    *(int32_t *)&g1 = 0;
    for (int32_t i = 0; i < 10; i++) {
        // 0x100003a18
        function_100003870();
    }
    int32_t v3 = v1; // 0x1000039ec
    _printf("Base 10: %'d esthetic numbers between %'llu and %'llu:\n", v2, 9, v2);
    if ((int32_t)v1 != 0) {
        int32_t v4 = *(int32_t *)&g1; // 0x100003a90
        int32_t v5 = -v4; // 0x100003a94
        if (v5 < 0 == (v4 & v5) < 0) {
            // 0x100003bf8
            return _printf("\n\n");
        }
        int32_t v6 = 0; // 0x100003a9c
        _printf("%llu ", v2);
        int32_t v7 = v6 == -1; // 0x100003ae0
        if (v7 % v3 - v7 != (int32_t)(v6 == -1)) {
            // 0x100003afc
            _printf("\n");
        }
        // 0x100003b10
        v6++;
        int32_t v8 = *(int32_t *)&g1; // 0x100003a90
        while (v6 - v8 < 0 != ((v6 - v8 ^ v6) & (v8 ^ v6)) < 0) {
            // 0x100003aa4
            _printf("%llu ", v2);
            v7 = v6 == -1;
            if (v7 % v3 - v7 != (int32_t)(v6 == -1)) {
                // 0x100003afc
                _printf("\n");
            }
            // 0x100003b10
            v6++;
            v8 = *(int32_t *)&g1;
        }
        // 0x100003bf8
        return _printf("\n\n");
    }
    int32_t v9 = -v3;
    if (v9 < 0 != (v9 & v3) < 0) {
        _printf("%llu ", v2);
        int32_t v10 = 1; // 0x100003b70
        int32_t v11 = v10 - v3; // 0x100003b34
        int32_t v12 = v10; // 0x100003b3c
        while (v11 < 0 != ((v11 ^ v10) & (v10 ^ v3)) < 0) {
            // 0x100003b44
            _printf("%llu ", v2);
            v10 = v12 + 1;
            v11 = v10 - v3;
            v12 = v10;
        }
    }
    // 0x100003b7c
    _printf("\n............\n");
    int32_t v13 = *(int32_t *)&g1;
    int32_t v14 = v13 - v3; // 0x100003b94
    if (v9 < 0 == ((v14 ^ v9) & (v14 ^ v13)) < 0) {
        // 0x100003bf8
        return _printf("\n\n");
    }
    int32_t v15 = v14; // 0x100003bb4
    _printf("%llu ", v2);
    v15++;
    int32_t v16 = *(int32_t *)&g1; // 0x100003ba8
    while (v15 - v16 < 0 != ((v15 - v16 ^ v15) & (v16 ^ v15)) < 0) {
        // 0x100003bbc
        _printf("%llu ", v2);
        v15++;
        v16 = *(int32_t *)&g1;
    }
    // 0x100003bf8
    return _printf("\n\n");
}

// Address range: 0x100003c10 - 0x100003ee8
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003c24
    uint32_t v2 = 2;
    int64_t v3; // 0x100003c10
    int64_t v4; // 0x100003c10
    int64_t v5; // 0x100003c10
    _printf("Base %d: %dth to %dth esthetic numbers:\n", v4, v5, v3);
    int32_t v6 = 6 * v2; // 0x100003cbc
    int32_t v7 = -v6; // 0x100003cc0
    int64_t v8 = v4; // 0x100003cc8
    int64_t v9 = v5; // 0x100003cc8
    char * v10; // 0x100003c10
    char * v11; // 0x100003c10
    int32_t v12; // 0x100003c10
    int32_t v13; // 0x100003c10
    int32_t v14; // 0x100003c10
    int32_t v15; // 0x100003c10
    int32_t v16; // 0x100003cc0
    int32_t v17; // 0x100003cf0
    int32_t v18; // 0x100003d04
    int64_t v19; // 0x100003cd4
    int64_t v20; // 0x100003c10
    int64_t v21; // 0x100003c10
    int64_t v22; // 0x100003c10
    int64_t v23; // 0x100003c10
    if (v7 < 0 != (v6 & v7) < 0) {
        // 0x100003cd0
        v19 = v2;
        v15 = 4 * v2;
        v11 = (char *)1;
        v12 = 0;
        v13 = v12;
        v20 = v19;
        v22 = v5;
        if ((int32_t)function_10000378c() != 0) {
            // 0x100003cec
            v17 = v12 + 1;
            v18 = v17 - v15;
            v13 = v17;
            v20 = v19;
            v22 = v5;
            if (v18 < 0 == ((v18 ^ v17) & (v17 ^ v15)) < 0) {
                // 0x100003d14
                function_100003690();
                _printf("%s ", v11);
                v13 = v17;
                v20 = (int64_t)v11;
                v22 = v19;
            }
        }
        // 0x100003d44
        v23 = v22;
        v14 = v13;
        v16 = v14 - v6;
        v10 = (char *)((int64_t)v11 + 1);
        v8 = v20;
        v9 = v23;
        while (v16 < 0 != ((v16 ^ v14) & (v14 ^ v6)) < 0) {
            // 0x100003cd0
            v11 = v10;
            v12 = v14;
            v21 = v23;
            v13 = v12;
            v20 = v19;
            v22 = v21;
            if ((int32_t)function_10000378c() != 0) {
                // 0x100003cec
                v17 = v12 + 1;
                v18 = v17 - v15;
                v13 = v17;
                v20 = v19;
                v22 = v21;
                if (v18 < 0 == ((v18 ^ v17) & (v17 ^ v15)) < 0) {
                    // 0x100003d14
                    function_100003690();
                    _printf("%s ", v11);
                    v13 = v17;
                    v20 = (int64_t)v11;
                    v22 = v19;
                }
            }
            // 0x100003d44
            v23 = v22;
            v14 = v13;
            v16 = v14 - v6;
            v10 = (char *)((int64_t)v11 + 1);
            v8 = v20;
            v9 = v23;
        }
    }
    // 0x100003d54
    _printf("\n\n");
    int32_t v24 = v2 + 1; // 0x100003d68
    int32_t v25 = v2 - 15; // 0x100003c4c
    while (v25 == 0 || v25 < 0 != (14 - v2 & v24) < 0) {
        int64_t v26 = v9;
        v2 = v24;
        _printf("Base %d: %dth to %dth esthetic numbers:\n", v8, v26, v3);
        v6 = 6 * v2;
        v7 = -v6;
        v9 = v26;
        if (v7 < 0 != (v6 & v7) < 0) {
            // 0x100003cd0
            v19 = v2;
            v15 = 4 * v2;
            v11 = (char *)1;
            v12 = 0;
            v21 = v26;
            v13 = v12;
            v20 = v19;
            v22 = v21;
            if ((int32_t)function_10000378c() != 0) {
                // 0x100003cec
                v17 = v12 + 1;
                v18 = v17 - v15;
                v13 = v17;
                v20 = v19;
                v22 = v21;
                if (v18 < 0 == ((v18 ^ v17) & (v17 ^ v15)) < 0) {
                    // 0x100003d14
                    function_100003690();
                    _printf("%s ", v11);
                    v13 = v17;
                    v20 = (int64_t)v11;
                    v22 = v19;
                }
            }
            // 0x100003d44
            v23 = v22;
            v14 = v13;
            v16 = v14 - v6;
            v10 = (char *)((int64_t)v11 + 1);
            v8 = v20;
            v9 = v23;
            while (v16 < 0 != ((v16 ^ v14) & (v14 ^ v6)) < 0) {
                // 0x100003cd0
                v11 = v10;
                v12 = v14;
                v21 = v23;
                v13 = v12;
                v20 = v19;
                v22 = v21;
                if ((int32_t)function_10000378c() != 0) {
                    // 0x100003cec
                    v17 = v12 + 1;
                    v18 = v17 - v15;
                    v13 = v17;
                    v20 = v19;
                    v22 = v21;
                    if (v18 < 0 == ((v18 ^ v17) & (v17 ^ v15)) < 0) {
                        // 0x100003d14
                        function_100003690();
                        _printf("%s ", v11);
                        v13 = v17;
                        v20 = (int64_t)v11;
                        v22 = v19;
                    }
                }
                // 0x100003d44
                v23 = v22;
                v14 = v13;
                v16 = v14 - v6;
                v10 = (char *)((int64_t)v11 + 1);
                v8 = v20;
                v9 = v23;
            }
        }
        // 0x100003d54
        _printf("\n\n");
        v24 = v2 + 1;
        v25 = v2 - 15;
    }
    char * v27 = _setlocale(4, NULL); // 0x100003d80
    _setlocale(4, (char *)0x100003f97);
    function_1000039d0();
    function_1000039d0();
    function_1000039d0();
    function_1000039d0();
    function_1000039d0();
    char * v28 = _setlocale(4, v27); // 0x100003eb0
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003ed4
        ___stack_chk_fail((int64_t)v28);
    }
    // 0x100003ed8
    return 0;
}

// Address range: 0x100003ee8 - 0x100003ef4
int64_t function_100003ee8(int64_t a1) {
    // 0x100003ee8
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003ef4 - 0x100003f00
int32_t function_100003ef4(char * format, ...) {
    // 0x100003ef4
    return _printf(format);
}

// Address range: 0x100003f00 - 0x100003f0c
char * function_100003f00(int32_t category, char * locale) {
    // 0x100003f00
    return _setlocale(category, locale);
}

// Address range: 0x100003f0c - 0x100003f18
int32_t function_100003f0c(char * s) {
    // 0x100003f0c
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12

