//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d90(void);
int32_t function_100003f30(char * format, ...);
int32_t function_100003f3c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _scanf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d90 - 0x100003ec0
int64_t function_100003d90(void) {
    // 0x100003d90
    int64_t v1; // 0x100003d90
    int32_t v2 = v1; // 0x100003da8
    int32_t v3 = 1 - v2; // 0x100003dcc
    int32_t v4 = 1; // 0x100003dd4
    int32_t result = _printf("First 25 Leonardo numbers : \n"); // 0x100003dd4
    if (v3 != 0 && v3 < 0 == (v3 & v2) < 0) {
        // 0x100003eb4
        return result;
    }
    v4++;
    int32_t v5 = v4 - v2; // 0x100003dcc
    result = _printf(" %d", v1);
    while (v5 == 0 || v5 < 0 != ((v5 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003ddc
        v4++;
        v5 = v4 - v2;
        result = _printf(" %d", v1);
    }
    // 0x100003eb4
    return result;
}

// Address range: 0x100003ec0 - 0x100003f30
int64_t entry_point(void) {
    // 0x100003ec0
    _printf("Enter first two Leonardo numbers and increment step : ");
    int64_t v1; // 0x100003ec0
    _scanf("%d%d%d", (int64_t *)v1, (int64_t *)v1, (int64_t *)v1);
    function_100003d90();
    return 0;
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(char * format, ...) {
    // 0x100003f30
    return _printf(format);
}

// Address range: 0x100003f3c - 0x100003f48
int32_t function_100003f3c(char * format, ...) {
    // 0x100003f3c
    return _scanf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4
