//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <unistd.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003650(void);
int64_t function_100003820(void);
int64_t function_100003c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003c9c(int64_t a1);
int64_t * function_100003ca8(int32_t nmemb, int32_t size);
void function_100003cb4(int32_t status);
void function_100003cc0(int64_t * ptr);
int64_t * function_100003ccc(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003cd8(char * format, ...);
int32_t function_100003ce4(char * s);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x10000000003cf0; // 0x100004048
int64_t g2 = 0x100000cfeedfacf; // 0x100008000
int32_t g3 = 0; // 0x100008008
int64_t g4 = 0x50800000012; // 0x100008010
int64_t g5 = 0x200085; // 0x100008018
int64_t g6 = 0x4800000019; // 0x100008020
char g7[11] = "__PAGEZERO"; // 0x100008028
int32_t g8 = 0x4f52; // 0x100008030
int32_t g9;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memcpy_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t ___stack_chk_fail(int64_t a1);
int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003650 - 0x100003820
int64_t function_100003650(void) {
    // 0x100003650
    int64_t v1; // 0x100003650
    uint64_t v2 = v1;
    int64_t result; // 0x100003650
    if (v2 == g5) {
        // 0x100003680
        g6++;
    } else {
        if (v2 >= g5) {
            // 0x1000036b8
            g6 = 1;
            result = ___memcpy_chk(g4, *(int64_t *)&g7, 4 * v2, -1);
        }
    }
    int64_t v3 = *(int64_t *)&g7; // 0x100003710
    int64_t v4 = 4 * v2; // 0x100003718
    uint64_t v5 = *(int64_t *)&g8; // 0x100003740
    if (v2 >= v5) {
        // 0x100003814
        return result;
    }
    int64_t v6; // 0x100003650
    int64_t v7 = 4 * v6; // 0x100003764
    int64_t v8 = v7 + v3; // 0x100003764
    int64_t v9 = v5; // 0x100003778
    int64_t v10 = result; // 0x100003778
    int32_t * v11; // 0x100003794
    int32_t v12; // 0x100003794
    int64_t v13; // 0x100003650
    if (*(char *)(v4 - 2 + v3) == *(char *)(v8 + 3)) {
        // 0x100003780
        v11 = (int32_t *)(v3 + v4);
        v12 = *v11;
        *v11 = *(int32_t *)v8;
        *(int32_t *)(*(int64_t *)&g7 + v7) = v12;
        v10 = function_100003650();
        v13 = *(int64_t *)&g7;
        *(int32_t *)(v13 + v7) = *(int32_t *)(v13 + v4);
        *(int32_t *)(*(int64_t *)&g7 + v4) = v12;
        v9 = *(int64_t *)&g8;
    }
    int64_t result2 = v10;
    int64_t v14 = v6 + 1; // 0x100003808
    while (v14 < v9) {
        int64_t v15 = *(int64_t *)&g7; // 0x10000375c
        v7 = 4 * v14;
        v8 = v7 + v15;
        v10 = result2;
        if (*(char *)(v4 - 2 + v3) == *(char *)(v8 + 3)) {
            // 0x100003780
            v11 = (int32_t *)(v15 + v4);
            v12 = *v11;
            *v11 = *(int32_t *)v8;
            *(int32_t *)(*(int64_t *)&g7 + v7) = v12;
            v10 = function_100003650();
            v13 = *(int64_t *)&g7;
            *(int32_t *)(v13 + v7) = *(int32_t *)(v13 + v4);
            *(int32_t *)(*(int64_t *)&g7 + v4) = v12;
            v9 = *(int64_t *)&g8;
        }
        // 0x100003804
        result2 = v10;
        v14++;
    }
    // 0x100003814
    return result2;
}

// Address range: 0x100003820 - 0x100003ac0
int64_t function_100003820(void) {
    // 0x100003820
    int64_t v1; // 0x100003820
    uint64_t v2 = v1;
    *(int64_t *)&g7 = (int64_t)_calloc((int32_t)v2, 4);
    g5 = 0;
    int64_t v3 = *(int64_t *)&g8; // 0x100003878
    g4 = (int64_t)_calloc((int32_t)v3, 4);
    int64_t v4 = 0; // 0x1000038a4
    int32_t v5 = 0; // 0x1000038a4
    int64_t v6; // 0x100003820
    if (v2 != 0) {
        int64_t * v7 = (int64_t *)(8 * v4 + v1); // 0x1000038b4
        int32_t v8 = _strlen((char *)*v7); // 0x1000038b8
        while (v8 != 0 == (v8 != 1)) {
            int64_t v9 = 4 * v4; // 0x1000038f0
            *(int16_t *)(*(int64_t *)&g7 + v9) = (int16_t)v5;
            char v10 = *(char *)((int64_t)v8 - 1 + *v7); // 0x100003910
            *(char *)(*(int64_t *)&g7 + (v9 | 2)) = v10;
            char v11 = *(char *)*v7; // 0x100003930
            *(char *)(*(int64_t *)&g7 + (v9 | 3)) = v11;
            v5++;
            v4 = v5;
            v6 = 0;
            if (v2 <= v4) {
                goto lab_0x100003978;
            }
            v7 = (int64_t *)(8 * v4 + v1);
            v8 = _strlen((char *)*v7);
        }
        // 0x1000038d4
        _exit(1);
        // UNREACHABLE
    }
    goto lab_0x1000039f4;
  lab_0x100003978:;
    int32_t v17 = *(int32_t *)&g7; // 0x100003988
    int64_t v18 = *(int64_t *)&g7;
    int64_t v19 = 4 * v6; // 0x10000399c
    *(int32_t *)v18 = *(int32_t *)(v18 + v19);
    *(int32_t *)(*(int64_t *)&g7 + v19) = v17;
    function_100003650();
    int64_t v20 = *(int64_t *)&g7; // 0x1000039c0
    *(int32_t *)(v20 + v19) = (int32_t)v20;
    *(int32_t *)*(int64_t *)&g7 = v17;
    int64_t v21 = v6 + 1; // 0x1000039e8
    v6 = v21;
    if (v21 == v2) {
        goto lab_0x1000039f4;
    } else {
        goto lab_0x100003978;
    }
  lab_0x1000039f4:
    // 0x1000039f4
    *(int64_t *)&g3 = g5;
    int64_t * v12 = _calloc((int32_t)g5, 8); // 0x100003a14
    g2 = (int64_t)v12;
    if (g3 == 0) {
        // 0x100003a94
        _free((int64_t *)g4);
        _free((int64_t *)*(int64_t *)&g7);
        return &g9;
    }
    // 0x100003a4c
    *v12 = *(int64_t *)(8 * (int64_t)*(int16_t *)g4 + v1);
    int64_t v13 = 1; // 0x100003a44
    if (g3 == 1) {
        // 0x100003a94
        _free((int64_t *)g4);
        _free((int64_t *)*(int64_t *)&g7);
        return &g9;
    }
    uint16_t v14 = *(int16_t *)(4 * v13 + g4); // 0x100003a64
    int64_t v15 = *(int64_t *)(8 * (int64_t)v14 + v1); // 0x100003a68
    *(int64_t *)(8 * v13 + g2) = v15;
    int64_t v16 = v13 + 1; // 0x100003a88
    v13 = v16;
    while (v16 < (int64_t)g3) {
        // 0x100003a4c
        v14 = *(int16_t *)(4 * v13 + g4);
        v15 = *(int64_t *)(8 * (int64_t)v14 + v1);
        *(int64_t *)(8 * v13 + g2) = v15;
        v16 = v13 + 1;
        v13 = v16;
    }
    // 0x100003a94
    _free((int64_t *)g4);
    _free((int64_t *)*(int64_t *)&g7);
    return &g9;
}

// Address range: 0x100003ac0 - 0x100003c90
int64_t entry_point(void) {
    // 0x100003ac0
    int64_t v1; // bp-592, 0x100003ac0
    _memcpy(&v1, &g1, 560);
    function_100003820();
    _printf("Maximum path length: %u\n", 70);
    _printf("Paths of that length: %u\n", 70);
    _printf("Example path of that length:\n");
    if (g3 != 0) {
        int64_t v2 = 0;
        _printf("  ");
        uint64_t v3 = v2 + 7; // 0x100003ba4
        int64_t v4 = v2; // 0x100003bb8
        uint64_t v5; // 0x100003ac0
        int64_t v6; // 0x100003c1c
        if (v2 < 0xfffffffffffffff9) {
            v5 = v4;
            while (v5 < (int64_t)g3) {
                // 0x100003bec
                _printf("%s ", (char *)70);
                v6 = v5 + 1;
                v4 = v6;
                if (v6 >= v3) {
                    // break -> 0x100003c28
                    break;
                }
                v5 = v4;
            }
        }
        // 0x100003c28
        _printf((char *)0x100003f9b);
        while (v3 < (int64_t)g3) {
            // 0x100003b84
            v2 = v3;
            _printf("  ");
            v3 = v2 + 7;
            v4 = v2;
            if (v2 < 0xfffffffffffffff9) {
                v5 = v4;
                while (v5 < (int64_t)g3) {
                    // 0x100003bec
                    _printf("%s ", (char *)70);
                    v6 = v5 + 1;
                    v4 = v6;
                    if (v6 >= v3) {
                        // break -> 0x100003c28
                        break;
                    }
                    v5 = v4;
                }
            }
            // 0x100003c28
            _printf((char *)0x100003f9b);
        }
    }
    // 0x100003c48
    _free((int64_t *)g2);
    int64_t v7 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003c64
    if (v7 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003c78
        ___stack_chk_fail((int64_t)&g9);
    }
    // 0x100003c7c
    return 0;
}

// Address range: 0x100003c90 - 0x100003c9c
int64_t function_100003c90(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003c90
    return ___memcpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003c9c - 0x100003ca8
int64_t function_100003c9c(int64_t a1) {
    // 0x100003c9c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003ca8 - 0x100003cb4
int64_t * function_100003ca8(int32_t nmemb, int32_t size) {
    // 0x100003ca8
    return _calloc(nmemb, size);
}

// Address range: 0x100003cb4 - 0x100003cc0
void function_100003cb4(int32_t status) {
    // 0x100003cb4
    _exit(status);
}

// Address range: 0x100003cc0 - 0x100003ccc
void function_100003cc0(int64_t * ptr) {
    // 0x100003cc0
    _free(ptr);
}

// Address range: 0x100003ccc - 0x100003cd8
int64_t * function_100003ccc(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003ccc
    return _memcpy(dest, src, n);
}

// Address range: 0x100003cd8 - 0x100003ce4
int32_t function_100003cd8(char * format, ...) {
    // 0x100003cd8
    return _printf(format);
}

// Address range: 0x100003ce4 - 0x100003cf0
int32_t function_100003ce4(char * s) {
    // 0x100003ce4
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 11

