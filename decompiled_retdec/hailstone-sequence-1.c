//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c90(void);
void function_100003f38(int64_t * ptr);
int64_t * function_100003f44(int32_t size);
int32_t function_100003f50(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003c90 - 0x100003d78
int64_t function_100003c90(void) {
    // 0x100003c90
    int64_t v1; // 0x100003c90
    int32_t v2 = v1; // 0x100003c94
    int32_t v3 = 1; // 0x100003cb4
    int64_t result = 1; // 0x100003cb4
    int32_t * v4 = (int32_t *)v1; // 0x100003cb4
    if (v2 != 1) {
        int32_t * v5 = v4;
        int32_t v6 = v2;
        int32_t * v7 = NULL; // 0x100003cd4
        if (v5 != NULL) {
            // 0x100003cdc
            *v5 = v6;
            v7 = (int32_t *)((int64_t)v5 + 4);
        }
        // 0x100003cf4
        v3++;
        v4 = v7;
        int32_t v8 = v6 % 2 == 0 ? v6 / 2 : 3 * v6 + 1;
        while (v8 != 1) {
            // 0x100003cbc
            v5 = v4;
            v6 = v8;
            v7 = NULL;
            if (v5 != NULL) {
                // 0x100003cdc
                *v5 = v6;
                v7 = (int32_t *)((int64_t)v5 + 4);
            }
            // 0x100003cf4
            v3++;
            v4 = v7;
            v8 = v6 % 2 == 0 ? v6 / 2 : 3 * v6 + 1;
        }
        // 0x100003ca8
        result = v3;
    }
    // 0x100003d40
    if (v4 != NULL) {
        // 0x100003d54
        *v4 = 1;
    }
    // 0x100003d6c
    return result;
}

// Address range: 0x100003d78 - 0x100003f38
int64_t entry_point(void) {
    // 0x100003d78
    function_100003c90();
    int32_t v1 = 1;
    int32_t v2 = v1 + 1; // 0x100003df8
    int64_t v3 = function_100003c90();
    while (v1 < 0x1869f != (0x1869e - v1 & v2) < 0) {
        // 0x100003db4
        v1 = v2;
        v2 = v1 + 1;
        v3 = function_100003c90();
    }
    int64_t * v4 = _malloc(4 * (int32_t)v3); // 0x100003e20
    int64_t v5 = (int64_t)v4; // 0x100003e20
    function_100003c90();
    int32_t v6 = *(int32_t *)v4; // 0x100003e40
    uint32_t v7 = *(int32_t *)(v5 + 4); // 0x100003e4c
    int64_t v8; // 0x100003d78
    _printf("[ %d, %d, %d, %d, ...., %d, %d, %d, %d] len=%d\n", v5, v8, v8, v8, v8, v8, v8, (int64_t)v6, (int64_t)v7);
    _printf("Max %d at j= %d\n", v5, v8);
    _free(v4);
    return 0;
}

// Address range: 0x100003f38 - 0x100003f44
void function_100003f38(int64_t * ptr) {
    // 0x100003f38
    _free(ptr);
}

// Address range: 0x100003f44 - 0x100003f50
int64_t * function_100003f44(int32_t size) {
    // 0x100003f44
    return _malloc(size);
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(char * format, ...) {
    // 0x100003f50
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

