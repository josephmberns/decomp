//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b74(int64_t * a1, int64_t a2, int32_t a3);
int64_t function_100003bd0(int64_t a1, uint32_t a2, int64_t a3);
int64_t function_100003c24(void);
int64_t function_100003d00(void);
int64_t function_100003f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
void function_100003f4c(int64_t * ptr);
int64_t * function_100003f58(int32_t size);
int32_t function_100003f64(char * format, ...);
int32_t function_100003f70(char * s);
int32_t function_100003f7c(void);
void function_100003f88(int32_t seed);
int32_t function_100003f94(int32_t * timer);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memcpy_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003b74 - 0x100003bd0
int64_t function_100003b74(int64_t * a1, int64_t a2, int32_t a3) {
    int64_t v1 = (int64_t)a1;
    *(int32_t *)(v1 + 4) = 0;
    *(int32_t *)a1 = a3;
    *(int64_t *)(v1 + 8) = a2;
    int64_t result = (int64_t)_malloc((int32_t)a2 * a3); // 0x100003bb8
    *(int64_t *)(v1 + 16) = result;
    return result;
}

// Address range: 0x100003bd0 - 0x100003c24
int64_t function_100003bd0(int64_t a1, uint32_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 8); // 0x100003bf8
    return ___memcpy_chk(v1 * (int64_t)a2 + *(int64_t *)(a1 + 16), a3, v1, -1);
}

// Address range: 0x100003c24 - 0x100003d00
int64_t function_100003c24(void) {
    // 0x100003c24
    int64_t v1; // 0x100003c24
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x100003c3c
    int32_t v3 = *v2; // 0x100003c3c
    uint32_t v4 = v3 + 1; // 0x100003c40
    *v2 = v4;
    int64_t v5; // 0x100003c24
    uint32_t v6 = *(int32_t *)&v5; // 0x100003c54
    if (v4 >= v6 != v4 != v6) {
        // 0x100003c68
        function_100003bd0(v1, v3, v1);
        // 0x100003cec
        return *(int64_t *)(v1 + 16);
    }
    // 0x100003c84
    if (_rand() % *v2 < v6) {
        // 0x100003cb4
        function_100003bd0(v1, _rand() % v6, v1);
    }
    // 0x100003cec
    return *(int64_t *)(v1 + 16);
}

// Address range: 0x100003d00 - 0x100003d80
int64_t function_100003d00(void) {
    // 0x100003d00
    int64_t result; // 0x100003d00
    int32_t v1 = result; // 0x100003d14
    int64_t v2; // bp-64, 0x100003d00
    function_100003b74(&v2, 4, (int32_t)result);
    if (v1 == 0) {
        // 0x100003d70
        return result;
    }
    int32_t v3 = 0; // 0x100003d40
    function_100003c24();
    while (v3 + 1 != v1) {
        // 0x100003d48
        v3++;
        function_100003c24();
    }
    // 0x100003d70
    return result;
}

// Address range: 0x100003d80 - 0x100003f40
int64_t entry_point(void) {
    // 0x100003d80
    _srand(_time(NULL));
    int64_t v1 = (int64_t)_malloc(40); // 0x100003db4
    int64_t v2 = (int64_t)_malloc(40); // 0x100003dc4
    int64_t v3 = 0;
    int64_t v4 = 4 * v3; // 0x100003df8
    *(int32_t *)(v4 + v1) = (int32_t)v3;
    *(int32_t *)(v4 + v2) = 0;
    v3++;
    int32_t v5 = 0; // 0x100003de4
    while (v3 != 10) {
        // 0x100003dec
        v4 = 4 * v3;
        *(int32_t *)(v4 + v1) = (int32_t)v3;
        *(int32_t *)(v4 + v2) = 0;
        v3++;
        v5 = 0;
    }
    int64_t v6 = function_100003d00(); // 0x100003e54
    int32_t v7; // 0x100003e88
    int32_t * v8; // 0x100003e90
    for (int64_t i = 0; i < 3; i++) {
        // 0x100003e7c
        v7 = *(int32_t *)(4 * i + v6);
        v8 = (int32_t *)(4 * (int64_t)v7 + v2);
        *v8 = *v8 + 1;
    }
    // 0x100003eb0
    _free((int64_t *)v6);
    int32_t v9 = v5 + 1; // 0x100003ec0
    v5 = v9;
    int32_t v10 = 0; // 0x100003e40
    while (v9 != 0x186a0) {
        // 0x100003e48
        v6 = function_100003d00();
        for (int64_t i = 0; i < 3; i++) {
            // 0x100003e7c
            v7 = *(int32_t *)(4 * i + v6);
            v8 = (int32_t *)(4 * (int64_t)v7 + v2);
            *v8 = *v8 + 1;
        }
        // 0x100003eb0
        _free((int64_t *)v6);
        v9 = v5 + 1;
        v5 = v9;
        v10 = 0;
    }
    _printf(" %d", v1);
    int32_t v11 = v10 + 1; // 0x100003f18
    v10 = v11;
    while (v11 != 10) {
        // 0x100003eec
        _printf(" %d", v1);
        v11 = v10 + 1;
        v10 = v11;
    }
    // 0x100003f24
    _puts((char *)0x100003fa4);
    return 0;
}

// Address range: 0x100003f40 - 0x100003f4c
int64_t function_100003f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003f40
    return ___memcpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f4c - 0x100003f58
void function_100003f4c(int64_t * ptr) {
    // 0x100003f4c
    _free(ptr);
}

// Address range: 0x100003f58 - 0x100003f64
int64_t * function_100003f58(int32_t size) {
    // 0x100003f58
    return _malloc(size);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * format, ...) {
    // 0x100003f64
    return _printf(format);
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(char * s) {
    // 0x100003f70
    return _puts(s);
}

// Address range: 0x100003f7c - 0x100003f88
int32_t function_100003f7c(void) {
    // 0x100003f7c
    return _rand();
}

// Address range: 0x100003f88 - 0x100003f94
void function_100003f88(int32_t seed) {
    // 0x100003f88
    _srand(seed);
}

// Address range: 0x100003f94 - 0x100003fa0
int32_t function_100003f94(int32_t * timer) {
    // 0x100003f94
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 13
