//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c80(void);
int64_t function_100003d70(void);
int64_t function_100003f4c(int64_t a1);
int64_t * function_100003f58(int64_t * s, int32_t c, int32_t n);
int32_t function_100003f64(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c80 - 0x100003d70
int64_t function_100003c80(void) {
    int32_t v1 = 9; // 0x100003ce0
    int64_t v2 = 9;
    int32_t v3; // 0x100003c80
    int64_t result; // 0x100003c80
    while ((127 << 7 * v2 & result) == 0) {
        int64_t v4 = v2 - 1;
        v1--;
        v3 = v1;
        if (v4 == 0) {
            goto lab_0x100003cec;
        }
        v2 = v4;
    }
    // 0x100003cec
    v3 = v2;
  lab_0x100003cec:;
    int32_t v5 = v3;
    int32_t v6 = -v5; // 0x100003cfc
    if (v5 == 0 || v6 < 0 != (v5 & v6) < 0) {
        int32_t v7 = 0;
        *(char *)(result + (int64_t)v7) = (char)(result >> (int64_t)(7 * (v5 - v7))) | -128;
        int32_t v8 = v7 + 1; // 0x100003d44
        int32_t v9 = v8 - v5; // 0x100003cfc
        while (v9 == 0 || v9 < 0 != ((v9 ^ v8) & (v8 ^ v5)) < 0) {
            // 0x100003d0c
            v7 = v8;
            *(char *)(result + (int64_t)v7) = (char)(result >> (int64_t)(7 * (v5 - v7))) | -128;
            v8 = v7 + 1;
            v9 = v8 - v5;
        }
    }
    char * v10 = (char *)(result + (int64_t)v5); // 0x100003d5c
    *v10 = *v10 ^ -128;
    return result;
}

// Address range: 0x100003d70 - 0x100003dd0
int64_t function_100003d70(void) {
    int64_t result = 0; // 0x100003d7c
    int64_t v1; // 0x100003d70
    unsigned char v2 = *(char *)v1;
    result = 128 * result | (int64_t)(v2 % 128);
    v1++;
    while (v2 <= -1) {
        // 0x100003d80
        v2 = *(char *)v1;
        result = 128 * result | (int64_t)(v2 % 128);
        v1++;
    }
    // 0x100003dc4
    return result;
}

// Address range: 0x100003dd0 - 0x100003f4c
int64_t entry_point(void) {
    // 0x100003dd0
    int64_t v1; // bp-96, 0x100003dd0
    _memset(&v1, 0, 56);
    v1 = 127;
    int64_t v2; // bp-34, 0x100003dd0
    int64_t v3 = &v2; // 0x100003e68
    int32_t v4; // 0x100003f00
    for (int32_t i = 0; i < 7; i++) {
        // 0x100003e58
        function_100003c80();
        _printf("seq from %llx: [ ", v3);
        int32_t v5 = 0;
        _printf("%02x ", (int32_t)v3);
        int32_t v6 = v5 + 1; // 0x100003ee0
        while (*(char *)((int64_t)v5 + v3) <= -1) {
            // 0x100003e98
            v5 = v6;
            _printf("%02x ", (int32_t)v3);
            v6 = v5 + 1;
        }
        // 0x100003ee8
        function_100003d70();
        v4 = _printf("] back: %llx\n", v3);
    }
    int64_t v7 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f24
    if (v7 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f38
        ___stack_chk_fail((int64_t)v4);
    }
    // 0x100003f3c
    return 0;
}

// Address range: 0x100003f4c - 0x100003f58
int64_t function_100003f4c(int64_t a1) {
    // 0x100003f4c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f58 - 0x100003f64
int64_t * function_100003f58(int64_t * s, int32_t c, int32_t n) {
    // 0x100003f58
    return _memset(s, c, n);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * format, ...) {
    // 0x100003f64
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

