//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e50(void);
int32_t function_100003f84(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e50 - 0x100003ebc
int64_t function_100003e50(void) {
    // 0x100003e50
    int64_t v1; // 0x100003e50
    if (v1 == 0) {
        // 0x100003eb0
        return 0;
    }
    uint64_t v2 = 0x100000000 * v1 >> 32; // 0x100003e7c
    int32_t result = 0; // 0x100003e94
    int64_t v3; // 0x100003e50
    uint64_t v4 = v3;
    result += (int32_t)(v4 % v2);
    v3 = v4 / v2;
    while (v2 <= v4) {
        // 0x100003e78
        v4 = v3;
        result += (int32_t)(v4 % v2);
        v3 = v4 / v2;
    }
    // 0x100003eb0
    return result;
}

// Address range: 0x100003ebc - 0x100003f84
int64_t entry_point(void) {
    // 0x100003ebc
    function_100003e50();
    function_100003e50();
    function_100003e50();
    function_100003e50();
    function_100003e50();
    int64_t v1; // 0x100003ebc
    _printf("%d %d %d %d %d\n", 16, v1, v1, v1, v1);
    return 0;
}

// Address range: 0x100003f84 - 0x100003f90
int32_t function_100003f84(char * format, ...) {
    // 0x100003f84
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3
