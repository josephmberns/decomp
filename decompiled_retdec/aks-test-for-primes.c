//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003bf8(void);
int64_t function_100003d0c(void);
int64_t function_100003dd8(void);
void function_100003f4c(void);
int32_t function_100003f58(char * format, ...);
int32_t function_100003f64(int32_t c);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x100000cfeedfacf; // 0x100008000
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

void _abort(void);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003bf8 - 0x100003d0c
int64_t function_100003bf8(void) {
    // 0x100003bf8
    int64_t v1; // 0x100003bf8
    int32_t v2 = v1; // 0x100003c04
    int64_t result; // 0x100003bf8
    if (v2 < 0) {
        // 0x100003c30
        _abort();
        result = &g2;
        goto lab_0x100003c34;
    } else {
        int32_t v3 = v2 - 63; // 0x100003c20
        if (v3 == 0 || v3 < 0 != (62 - v2 & v2) < 0) {
            goto lab_0x100003c34;
        } else {
            // 0x100003c30
            _abort();
            result = &g2;
            goto lab_0x100003c34;
        }
    }
  lab_0x100003c34:
    // 0x100003c34
    g1 = 1;
    int32_t v4 = -v2; // 0x100003c54
    if (v4 < 0 == (v4 & v2) < 0) {
        // 0x100003d00
        return result;
    }
    int32_t v5 = 0;
    *(int64_t *)((int64_t)(8 * v5 + 8) + (int64_t)&g1) = 1;
    int64_t v6; // 0x100003bf8
    int64_t v7; // 0x100003ca8
    int64_t * v8; // 0x100003cb0
    int32_t v9; // 0x100003cc8
    int64_t v10; // 0x100003c9c
    if (v5 >= 1) {
        // 0x100003c98
        v6 = v5;
        v9 = v5;
        v10 = 8 * v6;
        v7 = *(int64_t *)((v10 + 0xfffffff8 & 0xfffffff8) + (int64_t)&g1);
        v8 = (int64_t *)(v10 + (int64_t)&g1);
        *v8 = v7 - *v8;
        v9--;
        v6--;
        while (v9 >= 1) {
            // 0x100003c98
            v10 = 8 * v6;
            v7 = *(int64_t *)((v10 + 0xfffffff8 & 0xfffffff8) + (int64_t)&g1);
            v8 = (int64_t *)(v10 + (int64_t)&g1);
            *v8 = v7 - *v8;
            v9--;
            v6--;
        }
    }
    // 0x100003cd8
    g1 = -g1;
    int32_t v11 = v5 + 1; // 0x100003cf4
    int32_t v12 = v11 - v2; // 0x100003c54
    while (v12 < 0 != ((v12 ^ v11) & (v11 ^ v2)) < 0) {
        // 0x100003c64
        v5 = v11;
        *(int64_t *)((int64_t)(8 * v5 + 8) + (int64_t)&g1) = 1;
        if (v5 >= 1) {
            // 0x100003c98
            v6 = v5;
            v9 = v5;
            v10 = 8 * v6;
            v7 = *(int64_t *)((v10 + 0xfffffff8 & 0xfffffff8) + (int64_t)&g1);
            v8 = (int64_t *)(v10 + (int64_t)&g1);
            *v8 = v7 - *v8;
            v9--;
            v6--;
            while (v9 >= 1) {
                // 0x100003c98
                v10 = 8 * v6;
                v7 = *(int64_t *)((v10 + 0xfffffff8 & 0xfffffff8) + (int64_t)&g1);
                v8 = (int64_t *)(v10 + (int64_t)&g1);
                *v8 = v7 - *v8;
                v9--;
                v6--;
            }
        }
        // 0x100003cd8
        g1 = -g1;
        v11 = v5 + 1;
        v12 = v11 - v2;
    }
    // 0x100003d00
    return result;
}

// Address range: 0x100003d0c - 0x100003dd8
int64_t function_100003d0c(void) {
    // 0x100003d0c
    function_100003bf8();
    g1++;
    int64_t v1; // 0x100003d0c
    int64_t v2 = 0x100000000 * v1;
    int64_t * v3 = (int64_t *)((v2 >> 29) + (int64_t)&g1); // 0x100003d48
    *v3 = *v3 - 1;
    int32_t v4 = v1; // 0x100003d54
    while (v4 != 0) {
        // 0x100003d58
        v4--;
        int64_t v5 = *(int64_t *)(8 * (int64_t)v4 + (int64_t)&g1); // 0x100003d88
        if (v5 % (v2 >> 32) != 0) {
            // break -> 0x100003dbc
            break;
        }
    }
    // 0x100003dbc
    return v4 < 0;
}

// Address range: 0x100003dd8 - 0x100003e48
int64_t function_100003dd8(void) {
    // 0x100003dd8
    int64_t v1; // 0x100003dd8
    int32_t v2 = v1; // 0x100003de8
    int32_t result = _printf("%+lldx^%d", v1, v1); // 0x100003e18
    while (v2 != 0) {
        // 0x100003dec
        v2--;
        result = _printf("%+lldx^%d", v1, v1);
    }
    // 0x100003e3c
    return result;
}

// Address range: 0x100003e48 - 0x100003f4c
int64_t entry_point(void) {
    int64_t v1; // 0x100003e48
    for (int32_t i = 0; i < 10; i++) {
        // 0x100003e74
        function_100003bf8();
        _printf("(x-1)^%d = ", v1);
        function_100003dd8();
        _putchar(10);
    }
    // 0x100003ebc
    _printf("\nprimes (never mind the 1):");
    int32_t v2 = 1;
    if ((int32_t)function_100003d0c() != 0) {
        // 0x100003f00
        _printf(" %d", v1);
    }
    int32_t v3 = v2 + 1; // 0x100003f28
    while (v2 == 62 || v2 < 62 != (61 - v2 & v3) < 0) {
        // 0x100003ee8
        v2 = v3;
        if ((int32_t)function_100003d0c() != 0) {
            // 0x100003f00
            _printf(" %d", v1);
        }
        // 0x100003f24
        v3 = v2 + 1;
    }
    // 0x100003f34
    _putchar(10);
    return 0;
}

// Address range: 0x100003f4c - 0x100003f58
void function_100003f4c(void) {
    // 0x100003f4c
    _abort();
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(char * format, ...) {
    // 0x100003f58
    return _printf(format);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(int32_t c) {
    // 0x100003f64
    return _putchar(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

