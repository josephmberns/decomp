//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ce0(void);
int64_t function_100003f30(int64_t a1);
void function_100003f3c(int32_t status);
int64_t * function_100003f48(int32_t size);
int64_t * function_100003f54(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f60(char * format, ...);
int32_t function_100003f6c(char * s);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x200000001; // 0x100003f78

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003ce0 - 0x100003e5c
int64_t function_100003ce0(void) {
    // 0x100003ce0
    int64_t v1; // 0x100003ce0
    uint32_t v2 = (int32_t)v1; // 0x100003cf0
    if (v2 == 0) {
        // 0x100003e4c
        return 0;
    }
    int64_t * v3 = _malloc(16); // 0x100003d14
    int32_t * v4 = (int32_t *)v3; // bp-48, 0x100003d18
    if (v3 == NULL) {
        // 0x100003d30
        _exit(1);
        // UNREACHABLE
    }
    // 0x100003d38
    *(int32_t *)v3 = (int32_t)v1;
    *(int64_t *)((int64_t)v3 + 8) = 0;
    int64_t result = (int64_t)v4;
    if (v2 <= 1) {
        // 0x100003e4c
        return result;
    }
    int64_t v5 = result;
    int32_t v6 = 1; // 0x100003e34
    int64_t result2; // 0x100003ce0
    while (true) {
        int64_t v7 = v5;
        int32_t * v8; // bp-64, 0x100003ce0
        *(int64_t *)&v8 = v7;
        int32_t * v9 = (int32_t *)(4 * (int64_t)v6 + v1); // 0x100003d88
        int32_t * v10 = (int32_t *)v7;
        int32_t * v11 = v10; // 0x100003d9c
        int64_t v12 = v7; // 0x100003d9c
        if (*v9 != *v10) {
            int64_t * v13 = (int64_t *)((int64_t)v11 + 8);
            int64_t v14 = *v13; // 0x100003dac
            while (v14 != 0) {
                int32_t * v15 = (int32_t *)v14; // 0x100003e24
                v8 = v15;
                v11 = v15;
                v12 = v7;
                if (*v9 == *v15) {
                    goto lab_0x100003e30;
                }
                v13 = (int64_t *)((int64_t)v11 + 8);
                v14 = *v13;
            }
            // 0x100003dc0
            *v13 = (int64_t)_malloc(16);
            int64_t v16 = *(int64_t *)((int64_t)v8 + 8); // 0x100003dd4
            int32_t * v17 = (int32_t *)v16; // 0x100003dd8
            v8 = v17;
            if (v16 == 0) {
                // 0x100003df0
                _exit(1);
                // UNREACHABLE
            }
            // 0x100003df8
            *v17 = *v9;
            *(int64_t *)(v16 + 8) = 0;
            v12 = (int64_t)v4;
        }
      lab_0x100003e30:
        // 0x100003e30
        v5 = v12;
        v6++;
        result2 = v5;
        if (v6 >= v2) {
            // break -> 0x100003e4c
            break;
        }
    }
    // 0x100003e4c
    return result2;
}

// Address range: 0x100003e5c - 0x100003f30
int64_t entry_point(void) {
    // 0x100003e5c
    int64_t v1; // bp-64, 0x100003e5c
    _memcpy(&v1, &g1, 40);
    int64_t v2 = function_100003ce0(); // 0x100003e9c
    int64_t v3 = v2; // 0x100003eb4
    if (v2 != 0) {
        _printf("%d ", 10);
        v3 += 8;
        while (v3 != 0) {
            // 0x100003ebc
            _printf("%d ", 10);
            v3 += 8;
        }
    }
    int32_t v4 = _puts((char *)0x100003fa4); // 0x100003ef8
    int64_t v5 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f08
    if (v5 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f1c
        ___stack_chk_fail((int64_t)v4);
    }
    // 0x100003f20
    return 0;
}

// Address range: 0x100003f30 - 0x100003f3c
int64_t function_100003f30(int64_t a1) {
    // 0x100003f30
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f3c - 0x100003f48
void function_100003f3c(int32_t status) {
    // 0x100003f3c
    _exit(status);
}

// Address range: 0x100003f48 - 0x100003f54
int64_t * function_100003f48(int32_t size) {
    // 0x100003f48
    return _malloc(size);
}

// Address range: 0x100003f54 - 0x100003f60
int64_t * function_100003f54(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f54
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(char * format, ...) {
    // 0x100003f60
    return _printf(format);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(char * s) {
    // 0x100003f6c
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

