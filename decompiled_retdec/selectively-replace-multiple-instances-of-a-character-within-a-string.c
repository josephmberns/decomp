//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003f50(int64_t a1);
int64_t function_100003f5c(int64_t a1, int64_t a2, int64_t a3);
void function_100003f68(int64_t * ptr);
int64_t * function_100003f74(int32_t size);
int32_t function_100003f80(char * format, ...);

// --------------------- Global Variables ---------------------

char * g1 = "E"; // 0x100003f9e
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t ___strcpy_chk(int64_t a1, int64_t a2, int64_t a3);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d58 - 0x100003f50
int64_t entry_point(void) {
    char * v1 = (char *)0x6164616361726261; // bp-40, 0x100003d8c
    int64_t * v2 = _malloc(12); // 0x100003d9c
    ___strcpy_chk((int64_t)v2, (int64_t)&v1, -1);
    char * v3 = "ABaCD"; // 0x100003de0
    char * v4 = (char *)&g1; // 0x100003de0
    char * v5 = "rF"; // 0x100003de0
    char * v6 = (char *)v2; // 0x100003de0
    int64_t v7; // 0x100003f28
    while (true) {
        char * v8 = v6;
        char * v9 = v5;
        char * v10 = v4;
        char * v11 = v3;
        v3 = v11;
        v4 = v10;
        v5 = v9;
        switch (*v8) {
            case 0: {
                // 0x100003efc
                _printf("%s\n", &v1);
                _free(v2);
                v7 = *(int64_t *)*(int64_t *)0x100004008;
                if (v7 != *(int64_t *)*(int64_t *)0x100004008) {
                    // 0x100003f3c
                    ___stack_chk_fail((int64_t)&g2);
                }
                // 0x100003f40
                return 0;
            }
            case 97: {
                char v12 = *v11; // 0x100003e44
                v3 = v11;
                v4 = v10;
                v5 = v9;
                if (v12 != 0) {
                    // 0x100003e58
                    *v8 = v12;
                    v3 = (char *)((int64_t)v11 + 1);
                    v4 = v10;
                    v5 = v9;
                }
                // break -> 0x100003eec
                break;
            }
            case 98: {
                char v13 = *v10; // 0x100003e7c
                v3 = v11;
                v4 = v10;
                v5 = v9;
                if (v13 != 0) {
                    // 0x100003e90
                    *v8 = v13;
                    v3 = v11;
                    v4 = (char *)((int64_t)v10 + 1);
                    v5 = v9;
                }
                // break -> 0x100003eec
                break;
            }
            case 114: {
                char v14 = *v9; // 0x100003eb4
                v3 = v11;
                v4 = v10;
                v5 = v9;
                if (v14 != 0) {
                    // 0x100003ec8
                    *v8 = v14;
                    v3 = v11;
                    v4 = v10;
                    v5 = (char *)((int64_t)v9 + 1);
                }
                // break -> 0x100003eec
                break;
            }
        }
        // 0x100003eec
        v6 = (char *)((int64_t)v8 + 1);
    }
    // 0x100003efc
    _printf("%s\n", &v1);
    _free(v2);
    v7 = *(int64_t *)*(int64_t *)0x100004008;
    if (v7 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f3c
        ___stack_chk_fail((int64_t)&g2);
    }
    // 0x100003f40
    return 0;
}

// Address range: 0x100003f50 - 0x100003f5c
int64_t function_100003f50(int64_t a1) {
    // 0x100003f50
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f5c - 0x100003f68
int64_t function_100003f5c(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003f5c
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003f68 - 0x100003f74
void function_100003f68(int64_t * ptr) {
    // 0x100003f68
    _free(ptr);
}

// Address range: 0x100003f74 - 0x100003f80
int64_t * function_100003f74(int32_t size) {
    // 0x100003f74
    return _malloc(size);
}

// Address range: 0x100003f80 - 0x100003f8c
int32_t function_100003f80(char * format, ...) {
    // 0x100003f80
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

