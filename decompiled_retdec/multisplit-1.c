//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003da8(void);
int64_t function_100003f50(int64_t a1);
int32_t function_100003f5c(char * format, ...);
int32_t function_100003f68(int32_t c);
int32_t function_100003f74(char * s);
int32_t function_100003f80(char * s1, char * s2, int32_t n);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _strlen(char * a1);
int32_t _strncmp(char * a1, char * a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x100003da8 - 0x100003ed0
int64_t function_100003da8(void) {
    // 0x100003da8
    int64_t v1; // 0x100003da8
    char * v2 = (char *)v1; // 0x100003db4
    int32_t v3 = v1; // 0x100003dbc
    if (*v2 == 0) {
        // 0x100003ec4
        int64_t result; // 0x100003da8
        return result;
    }
    char * v4 = v2; // 0x100003dd4
    char * v5; // 0x100003da8
    int32_t result2; // 0x100003da8
    while (true) {
      lab_0x100003de4:;
        char * v6 = v4; // 0x100003da8
        int32_t v7 = 0; // 0x100003da8
        while (true) {
            int32_t v8 = v7;
            char * v9 = v6;
            int32_t v10 = v8 - v3; // 0x100003dec
            char * v11 = v9; // 0x100003dfc
            if (v10 < 0 == ((v10 ^ v8) & (v8 ^ v3)) < 0) {
                char * v12 = (char *)((int64_t)v9 + 1);
                int32_t v13 = _putchar((int32_t)*v9); // 0x100003e14
                v11 = v12;
                v5 = v12;
                result2 = v13;
                if (v13 != 0) {
                    // break -> 0x100003ec0
                    break;
                }
            }
            char * v14 = v11;
            int64_t * v15 = (int64_t *)(8 * (int64_t)v8 + v1); // 0x100003e3c
            int32_t v16 = _strlen((char *)*v15); // 0x100003e40
            int64_t v17 = *v15; // 0x100003e58
            int32_t v18 = _strncmp(v14, (char *)v17, v16); // 0x100003e60
            v6 = v14;
            v7 = v8 + 1;
            if (v18 == 0) {
                int64_t v19 = v16; // 0x100003e5c
                int32_t v20 = _printf("{%.*s}", v17, (char *)v19); // 0x100003e98
                v5 = (char *)(v19 + (int64_t)v14);
                result2 = v20;
                goto lab_0x100003ec0;
            }
        }
        goto lab_0x100003ec0;
    }
    // 0x100003ec4
    return result2;
  lab_0x100003ec0:
    // 0x100003ec0
    v4 = v5;
    if (*v4 == 0) {
        return result2;
    }
    goto lab_0x100003de4;
}

// Address range: 0x100003ed0 - 0x100003f50
int64_t entry_point(void) {
    int64_t v1 = function_100003da8(); // 0x100003f18
    int64_t v2 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f28
    if (v2 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f3c
        ___stack_chk_fail(v1);
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
int32_t function_100003f5c(char * format, ...) {
    // 0x100003f5c
    return _printf(format);
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(int32_t c) {
    // 0x100003f68
    return _putchar(c);
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(char * s) {
    // 0x100003f74
    return _strlen(s);
}

// Address range: 0x100003f80 - 0x100003f8c
int32_t function_100003f80(char * s1, char * s2, int32_t n) {
    // 0x100003f80
    return _strncmp(s1, s2, n);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7
