//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ea0(void);
void function_100003f7c(int64_t * ptr);
int32_t function_100003f88(char * format, ...);
int64_t * function_100003f94(int64_t * ptr, int32_t size);

// ------- Dynamically Linked Functions Without Header --------

void _free(int64_t * a1);
int32_t _printf(char * a1, ...);
int64_t * _realloc(int64_t * a1, int32_t a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003dfc - 0x100003ea0
int64_t entry_point(void) {
    int32_t v1 = function_100003ea0(); // 0x100003e1c
    int32_t v2 = -v1; // 0x100003e30
    int32_t v3 = 0; // 0x100003e38
    if (v2 < 0 == (v2 & v1) < 0) {
        // 0x100003e88
        _free(NULL);
        return 0;
    }
    int64_t v4; // 0x100003dfc
    _printf("%d) %d\n", 10, v4);
    v3++;
    while (v3 - v1 < 0 != ((v3 - v1 ^ v3) & (v3 ^ v1)) < 0) {
        // 0x100003e40
        _printf("%d) %d\n", 10, v4);
        v3++;
    }
    // 0x100003e88
    _free(NULL);
    return 0;
}

// Address range: 0x100003ea0 - 0x100003f7c
int64_t function_100003ea0(void) {
    // 0x100003ea0
    int64_t v1; // 0x100003ea0
    int32_t v2 = v1; // 0x100003eb0
    int32_t v3 = -v2; // 0x100003ec8
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003f6c
        return 0;
    }
    int32_t v4 = 0;
    int64_t v5; // 0x100003ea0
    int64_t * v6 = _realloc((int64_t *)v5, 4 * v4 + 4); // 0x100003ef4
    int64_t result; // 0x100003ea0
    while (v6 != NULL) {
        int64_t v7 = (int64_t)v6; // 0x100003ef4
        *(int64_t *)v1 = v7;
        *(int32_t *)(4 * (int64_t)v4 + v7) = v4;
        int32_t v8 = v4 + 1; // 0x100003f54
        int32_t v9 = v8 - v2; // 0x100003ec8
        if (v9 < 0 == ((v9 ^ v8) & (v8 ^ v2)) < 0) {
            // 0x100003ec0
            result = v8;
            return result;
        }
        v4 = v8;
        v6 = _realloc((int64_t *)v7, 4 * v4 + 4);
    }
    // 0x100003f10
    _free(NULL);
    result = 0xffffffff;
  lab_0x100003f6c:
    // 0x100003f6c
    return result;
}

// Address range: 0x100003f7c - 0x100003f88
void function_100003f7c(int64_t * ptr) {
    // 0x100003f7c
    _free(ptr);
}

// Address range: 0x100003f88 - 0x100003f94
int32_t function_100003f88(char * format, ...) {
    // 0x100003f88
    return _printf(format);
}

// Address range: 0x100003f94 - 0x100003fa0
int64_t * function_100003f94(int64_t * ptr, int32_t size) {
    // 0x100003f94
    return _realloc(ptr, size);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

