//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c20(int64_t a1);
int64_t function_100003c68(void);
int64_t function_100003d5c(int32_t a1);
int64_t function_100003da4(void);
int64_t * function_100003f88(int32_t size);
int32_t function_100003f94(void);

// ------- Dynamically Linked Functions Without Header --------

int64_t * _malloc(int32_t a1);
int32_t _rand(void);

// ------------------------ Functions -------------------------

// Address range: 0x100003c20 - 0x100003c68
int64_t function_100003c20(int64_t a1) {
    int64_t * v1 = _malloc(24); // 0x100003c34
    int64_t result = (int64_t)v1; // 0x100003c34
    float64_t v2; // 0x100003c20
    *(int64_t *)(result + 16) = (int64_t)v2;
    *(int64_t *)(result + 8) = 0;
    *v1 = 0;
    return result;
}

// Address range: 0x100003c68 - 0x100003d5c
int64_t function_100003c68(void) {
    // 0x100003c68
    int64_t v1; // 0x100003c68
    int64_t result = function_100003c20(v1); // 0x100003c80
    if (v1 == 0) {
        // 0x100003d4c
        return 0;
    }
    // 0x100003ca0
    int64_t * v2; // 0x100003c68
    while (true) {
        // 0x100003ca0
        int64_t v3; // 0x100003c68
        int64_t v4 = v3;
        int64_t v5; // 0x100003c68
        if (*(float64_t *)(v4 + 16) > *(float64_t *)(result + 16)) {
            // 0x100003cc0
            v2 = (int64_t *)v4;
            int64_t v6 = *v2; // 0x100003cc4
            v5 = v6;
            if (v6 == 0) {
                // break -> 0x100003cd8
                break;
            }
        } else {
            int64_t * v7 = (int64_t *)(v4 + 8);
            int64_t v8 = *v7; // 0x100003d04
            v5 = v8;
            if (v8 == 0) {
                // 0x100003d18
                *v7 = result;
                return result;
            }
        }
        // 0x100003d40
        v3 = v5;
    }
    // 0x100003cd8
    *v2 = result;
  lab_0x100003d4c:
    // 0x100003d4c
    return result;
}

// Address range: 0x100003d5c - 0x100003da4
int64_t function_100003d5c(int32_t a1) {
    int64_t * v1 = _malloc(24); // 0x100003d70
    int64_t result = (int64_t)v1; // 0x100003d70
    *(int32_t *)(result + 16) = a1;
    *(int64_t *)(result + 8) = 0;
    *v1 = 0;
    return result;
}

// Address range: 0x100003da4 - 0x100003e98
int64_t function_100003da4(void) {
    // 0x100003da4
    int64_t v1; // 0x100003da4
    int64_t result = function_100003d5c((int32_t)v1); // 0x100003dbc
    if (v1 == 0) {
        // 0x100003e88
        return 0;
    }
    int32_t v2 = *(int32_t *)(result + 16); // 0x100003de8
    int64_t * v3; // 0x100003da4
    while (true) {
        // 0x100003ddc
        int64_t v4; // 0x100003da4
        int64_t v5 = v4;
        int32_t v6 = *(int32_t *)(v5 + 16); // 0x100003de0
        int32_t v7 = v6 - v2; // 0x100003dec
        int64_t v8; // 0x100003da4
        if (v7 < 0 == ((v7 ^ v6) & (v6 ^ v2)) < 0) {
            // 0x100003e3c
            v3 = (int64_t *)(v5 + 8);
            int64_t v9 = *v3; // 0x100003e40
            v8 = v9;
            if (v9 == 0) {
                // break -> 0x100003e54
                break;
            }
        } else {
            int64_t * v10 = (int64_t *)v5;
            int64_t v11 = *v10; // 0x100003e00
            v8 = v11;
            if (v11 == 0) {
                // 0x100003e14
                *v10 = result;
                return result;
            }
        }
        // 0x100003e7c
        v4 = v8;
    }
    // 0x100003e54
    *v3 = result;
  lab_0x100003e88:
    // 0x100003e88
    return result;
}

// Address range: 0x100003e98 - 0x100003f88
int64_t entry_point(void) {
    // 0x100003e98
    function_100003c20((int64_t)_rand());
    _rand();
    int32_t v1 = 0;
    function_100003c68();
    int32_t v2 = v1 + 1; // 0x100003f14
    int32_t v3 = _rand();
    while (v1 < 0x270f != (0x270e - v1 & v2) < 0) {
        // 0x100003ee4
        v1 = v2;
        function_100003c68();
        v2 = v1 + 1;
        v3 = _rand();
    }
    // 0x100003f20
    function_100003d5c(v3);
    int32_t v4 = 0;
    _rand();
    function_100003da4();
    int32_t v5 = v4 + 1; // 0x100003f6c
    while (v4 < 0x270f != (0x270e - v4 & v5) < 0) {
        // 0x100003f4c
        v4 = v5;
        _rand();
        function_100003da4();
        v5 = v4 + 1;
    }
    // 0x100003f78
    return 0;
}

// Address range: 0x100003f88 - 0x100003f94
int64_t * function_100003f88(int32_t size) {
    // 0x100003f88
    return _malloc(size);
}

// Address range: 0x100003f94 - 0x100003fa0
int32_t function_100003f94(void) {
    // 0x100003f94
    return _rand();
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

