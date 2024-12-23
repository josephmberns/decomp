//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c20(void);
int64_t function_100003f04(void);
int64_t function_100003f10(int64_t a1, int64_t a2, int64_t a3);
int64_t function_100003f1c(int64_t a1, int64_t * a2, int64_t a3);
void function_100003f28(int32_t status);
void function_100003f34(int64_t * ptr);
int64_t * function_100003f40(int32_t size);
void function_100003f4c(char * s);
int32_t function_100003f58(char * format, ...);
int32_t function_100003f64(char * s);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x6e612000202c007b; // 0x100003f88
int64_t g2 = 0x454400434241007d; // 0x100003f93

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int64_t ___strcat_chk(int64_t a1, int64_t a2, int64_t a3);
int64_t ___strcpy_chk(int64_t a1, int64_t * a2, int64_t a3);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
void _perror(char * a1);
int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003c20 - 0x100003e38
int64_t function_100003c20(void) {
    // 0x100003c20
    int64_t v1; // 0x100003c20
    int64_t v2 = v1;
    int64_t v3 = 3; // 0x100003c40
    if (v2 != 1 && v2 != 0) {
        // 0x100003c48
        v3 = (2 * v2 | 1) + 3;
    }
    int64_t v4 = 0; // 0x100003c90
    int64_t v5 = v3; // 0x100003c90
    int64_t v6 = v3; // 0x100003c90
    if (v2 != 0) {
        v5 += (int64_t)_strlen((char *)*(int64_t *)(8 * v4 + v1));
        v4++;
        v6 = v5;
        while (v4 != v2) {
            // 0x100003c98
            v5 += (int64_t)_strlen((char *)*(int64_t *)(8 * v4 + v1));
            v4++;
            v6 = v5;
        }
    }
    int64_t * v7 = _malloc((int32_t)v6); // 0x100003cd0
    if (v7 == NULL) {
        // 0x100003cec
        _perror("Can't allocate memory!\n");
        _exit(1);
        // UNREACHABLE
    }
    int64_t result = (int64_t)v7; // 0x100003cd0
    ___strcpy_chk(result, &g1, -1);
    switch (v2) {
        case 1: {
            // 0x100003d44
            ___strcat_chk(result, result, -1);
            // 0x100003e14
            ___strcat_chk(result, (int64_t)&g2, -1);
            return result;
        }
        default: {
            // 0x100003d80
            ___strcat_chk(result, *(int64_t *)v1, -1);
            int64_t v8 = 0; // 0x100003dec
            if (v8 < v2 - 2) {
                // 0x100003db4
                ___strcat_chk(result, (int64_t)", ", -1);
            } else {
                // 0x100003dcc
                ___strcat_chk(result, (int64_t)" and ", -1);
            }
            // 0x100003de8
            v8++;
            ___strcat_chk(result, *(int64_t *)(8 * v8 + v1), -1);
            while (v8 != v2 - 1) {
                // 0x100003d80
                if (v8 < v2 - 2) {
                    // 0x100003db4
                    ___strcat_chk(result, (int64_t)", ", -1);
                } else {
                    // 0x100003dcc
                    ___strcat_chk(result, (int64_t)" and ", -1);
                }
                // 0x100003de8
                v8++;
                ___strcat_chk(result, *(int64_t *)(8 * v8 + v1), -1);
            }
        }
        case 0: {
            // 0x100003e14
            ___strcat_chk(result, (int64_t)&g2, -1);
            return result;
        }
    }
}

// Address range: 0x100003e38 - 0x100003f04
int64_t entry_point(void) {
    char * v1 = NULL; // 0x100003ec8
    int64_t v2 = function_100003c20(); // 0x100003e94
    _printf("%s\n", v1);
    _free((int64_t *)v2);
    v1 = (char *)((int64_t)v1 + 1);
    while (v1 < (char *)5) {
        // 0x100003e8c
        v2 = function_100003c20();
        _printf("%s\n", v1);
        _free((int64_t *)v2);
        v1 = (char *)((int64_t)v1 + 1);
    }
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003edc
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003ef0
        ___stack_chk_fail();
    }
    // 0x100003ef4
    return 0;
}

// Address range: 0x100003f04 - 0x100003f10
int64_t function_100003f04(void) {
    // 0x100003f04
    return ___stack_chk_fail();
}

// Address range: 0x100003f10 - 0x100003f1c
int64_t function_100003f10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003f10
    return ___strcat_chk(a1, a2, a3);
}

// Address range: 0x100003f1c - 0x100003f28
int64_t function_100003f1c(int64_t a1, int64_t * a2, int64_t a3) {
    // 0x100003f1c
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003f28 - 0x100003f34
void function_100003f28(int32_t status) {
    // 0x100003f28
    _exit(status);
}

// Address range: 0x100003f34 - 0x100003f40
void function_100003f34(int64_t * ptr) {
    // 0x100003f34
    _free(ptr);
}

// Address range: 0x100003f40 - 0x100003f4c
int64_t * function_100003f40(int32_t size) {
    // 0x100003f40
    return _malloc(size);
}

// Address range: 0x100003f4c - 0x100003f58
void function_100003f4c(char * s) {
    // 0x100003f4c
    _perror(s);
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(char * format, ...) {
    // 0x100003f58
    return _printf(format);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * s) {
    // 0x100003f64
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 11

