//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e38(void);
int64_t function_100003f4c(int64_t a1);
int64_t function_100003f58(int64_t a1, char * a2, int64_t a3);
int64_t * function_100003f64(int32_t size);
int32_t function_100003f70(char * format, ...);
int64_t * function_100003f7c(int64_t * ptr, int32_t size);
int32_t function_100003f88(char * s);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t ___strcpy_chk(int64_t a1, char * a2, int64_t a3);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int64_t * _realloc(int64_t * a1, int32_t a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003dac - 0x100003e38
int64_t entry_point(void) {
    // 0x100003dac
    function_100003e38();
    int64_t v1; // 0x100003dac
    int32_t v2 = _printf("%s\n", (char *)v1); // 0x100003e00
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003e10
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003e24
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003e28
    return 0;
}

// Address range: 0x100003e38 - 0x100003f4c
int64_t function_100003e38(void) {
    // 0x100003e38
    int64_t v1; // 0x100003e38
    char * v2 = (char *)v1;
    int64_t * v3 = _malloc(3 * _strlen(v2)); // 0x100003e64
    char v4 = *v2; // 0x100003e84
    char * v5 = (char *)v3; // 0x100003e90
    if (v4 != 0) {
        int32_t v6 = 0x1000000 * (int32_t)v1 >> 24;
        char * v7 = (char *)v3;
        char v8 = v4; // 0x100003eac
        int32_t v9 = v6; // 0x100003eac
        char * v10 = v7; // 0x100003eac
        int64_t v11; // 0x100003eb4
        if (0x1000000 * v6 >> 24 != (int32_t)v4) {
            // 0x100003eb4
            v11 = (int64_t)v7;
            ___strcpy_chk(v11, ", ", -1);
            v8 = *v2;
            v9 = v8;
            v10 = (char *)(v11 + 2);
        }
        // 0x100003ee4
        v6 = v9;
        *v10 = v8;
        char * v12 = (char *)((int64_t)v10 + 1);
        int64_t v13; // 0x100003e38
        int64_t v14 = v13 + 1; // 0x100003f08
        char * v15 = (char *)v14;
        char v16 = *v15; // 0x100003e84
        char * v17 = v15; // 0x100003e90
        v13 = v14;
        v5 = v12;
        while (v16 != 0) {
            // 0x100003e98
            v7 = v12;
            v8 = v16;
            v9 = v6;
            v10 = v7;
            if (0x1000000 * v6 >> 24 != (int32_t)v16) {
                // 0x100003eb4
                v11 = (int64_t)v7;
                ___strcpy_chk(v11, ", ", -1);
                v8 = *v17;
                v9 = v8;
                v10 = (char *)(v11 + 2);
            }
            // 0x100003ee4
            v6 = v9;
            *v10 = v8;
            v12 = (char *)((int64_t)v10 + 1);
            v14 = v13 + 1;
            v15 = (char *)v14;
            v16 = *v15;
            v17 = v15;
            v13 = v14;
            v5 = v12;
        }
    }
    // 0x100003f14
    *v5 = 0;
    char * v18 = (char *)v3;
    return (int64_t)_realloc((int64_t *)v18, _strlen(v18));
}

// Address range: 0x100003f4c - 0x100003f58
int64_t function_100003f4c(int64_t a1) {
    // 0x100003f4c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f58 - 0x100003f64
int64_t function_100003f58(int64_t a1, char * a2, int64_t a3) {
    // 0x100003f58
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003f64 - 0x100003f70
int64_t * function_100003f64(int32_t size) {
    // 0x100003f64
    return _malloc(size);
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(char * format, ...) {
    // 0x100003f70
    return _printf(format);
}

// Address range: 0x100003f7c - 0x100003f88
int64_t * function_100003f7c(int64_t * ptr, int32_t size) {
    // 0x100003f7c
    return _realloc(ptr, size);
}

// Address range: 0x100003f88 - 0x100003f94
int32_t function_100003f88(char * s) {
    // 0x100003f88
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

