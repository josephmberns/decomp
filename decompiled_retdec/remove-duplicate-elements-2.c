//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c54(void);
int64_t function_100003cf0(void);
int64_t function_100003d90(void);
int64_t function_100003f1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003f28(int64_t a1);
void function_100003f34(int64_t * ptr);
int64_t * function_100003f40(int32_t size);
int64_t * function_100003f4c(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f58(char * format, ...);
int32_t function_100003f64(char * s);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x200000001; // 0x100003f70
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memcpy_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t ___stack_chk_fail(int64_t a1);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003c54 - 0x100003cf0
int64_t function_100003c54(void) {
    // 0x100003c54
    int64_t v1; // 0x100003c54
    if (v1 == 0) {
        // 0x100003ce0
        return 0;
    }
    int64_t v2 = 0; // 0x100003c7c
    int64_t result = 1; // 0x100003c9c
    while (*(int32_t *)(4 * v2 + v1) != (int32_t)v1) {
        // 0x100003c6c
        v2++;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x100003ce0
            break;
        }
        result = 1;
    }
    // 0x100003ce0
    return result;
}

// Address range: 0x100003cf0 - 0x100003d90
int64_t function_100003cf0(void) {
    // 0x100003cf0
    int64_t v1; // 0x100003cf0
    if (v1 == 0) {
        // 0x100003d80
        return 0;
    }
    int64_t v2 = 0;
    int64_t v3 = 0;
    int64_t v4 = v2; // 0x100003d40
    int32_t v5; // 0x100003d50
    if (function_100003c54() % 2 == 0) {
        // 0x100003d48
        v5 = *(int32_t *)(4 * v3 + v1);
        *(int32_t *)(4 * v2 + v1) = v5;
        v4 = v2 + 1;
    }
    int64_t result = v4;
    int64_t v6 = v3 + 1; // 0x100003d74
    while (v6 != v1) {
        // 0x100003d28
        v2 = result;
        v3 = v6;
        v4 = v2;
        if (function_100003c54() % 2 == 0) {
            // 0x100003d48
            v5 = *(int32_t *)(4 * v3 + v1);
            *(int32_t *)(4 * v2 + v1) = v5;
            v4 = v2 + 1;
        }
        // 0x100003d70
        result = v4;
        v6 = v3 + 1;
    }
    // 0x100003d80
    return result;
}

// Address range: 0x100003d90 - 0x100003e30
int64_t function_100003d90(void) {
    // 0x100003d90
    int64_t v1; // 0x100003d90
    int64_t * v2 = _malloc(4 * (int32_t)v1); // 0x100003db0
    int64_t v3 = (int64_t)v2; // 0x100003db0
    ___memcpy_chk(v3, v1, 4 * v1, -1);
    int64_t v4 = function_100003cf0(); // 0x100003ddc
    int64_t v5 = (int64_t)_malloc(4 * (int32_t)v4); // 0x100003df0
    *(int64_t *)v1 = v5;
    int64_t v6 = 0x100000000 * v4;
    ___memcpy_chk(v5, v3, v6 >> 30, -1);
    _free(v2);
    return v6 >> 32;
}

// Address range: 0x100003e30 - 0x100003f1c
int64_t entry_point(void) {
    // 0x100003e30
    int64_t v1; // bp-64, 0x100003e30
    _memcpy(&v1, &g1, 40);
    int64_t v2 = function_100003d90(); // 0x100003e74
    int64_t v3 = 0; // 0x100003e94
    if (v2 != 0) {
        _printf("%d ", (int64_t)&v1);
        v3++;
        while (v3 != v2) {
            // 0x100003e9c
            _printf("%d ", (int64_t)&v1);
            v3++;
        }
    }
    // 0x100003ed4
    _puts((char *)0x100003f9c);
    int64_t v4; // 0x100003e30
    _free((int64_t *)v4);
    int64_t v5 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003ef4
    if (v5 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003f08
        ___stack_chk_fail((int64_t)&g2);
    }
    // 0x100003f0c
    return 0;
}

// Address range: 0x100003f1c - 0x100003f28
int64_t function_100003f1c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003f1c
    return ___memcpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f28 - 0x100003f34
int64_t function_100003f28(int64_t a1) {
    // 0x100003f28
    return ___stack_chk_fail(a1);
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
int64_t * function_100003f4c(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f4c
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(char * format, ...) {
    // 0x100003f58
    return _printf(format);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * s) {
    // 0x100003f64
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 11
