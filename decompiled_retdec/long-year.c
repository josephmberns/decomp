//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003da8(void);
int64_t function_100003e24(void);
int64_t function_100003e84(void);
int32_t function_100003f60(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003da8 - 0x100003e24
int64_t function_100003da8(void) {
    // 0x100003da8
    int64_t v1; // 0x100003da8
    int32_t v2 = v1; // 0x100003dac
    __asm_sshll(0.0f, 0);
    float64_t v3 = __asm_frintm((float64_t)(v2 / 4)); // 0x100003dd0
    float64_t v4 = __asm_frintm((float64_t)(v2 / 100)); // 0x100003de8
    float64_t v5; // 0x100003da8
    return (int32_t)(v5 + v3 - v4 + __asm_frintm((float64_t)(v2 / 400))) % 7;
}

// Address range: 0x100003e24 - 0x100003e84
int64_t function_100003e24(void) {
    int64_t result = 1; // 0x100003e4c
    if ((int32_t)function_100003da8() != 4) {
        // 0x100003e54
        result = (int32_t)function_100003da8() == 3;
    }
    // 0x100003e70
    return result;
}

// Address range: 0x100003e84 - 0x100003f14
int64_t function_100003e84(void) {
    // 0x100003e84
    int64_t v1; // 0x100003e84
    int32_t v2 = v1; // 0x100003e90
    int32_t v3 = v1; // 0x100003e94
    int32_t v4 = v2 - v3; // 0x100003eac
    if (v4 != 0 && v4 < 0 == ((v4 ^ v2) & (int32_t)(v1 ^ v1)) < 0) {
        // 0x100003f08
        int64_t result; // 0x100003e84
        return result;
    }
    int32_t v5 = v2; // 0x100003eb4
    int64_t v6 = function_100003e24(); // 0x100003ec0
    int64_t result2 = v6; // 0x100003ecc
    if ((int32_t)v6 != 0) {
        // 0x100003ed4
        result2 = _printf("%d ", v1);
    }
    // 0x100003ef8
    v5++;
    int32_t v7 = v5 - v3; // 0x100003eac
    while (v7 == 0 || v7 < 0 != ((v7 ^ v5) & (v5 ^ v3)) < 0) {
        // 0x100003ebc
        v6 = function_100003e24();
        result2 = v6;
        if ((int32_t)v6 != 0) {
            // 0x100003ed4
            result2 = _printf("%d ", v1);
        }
        // 0x100003ef8
        v5++;
        v7 = v5 - v3;
    }
    // 0x100003f08
    return result2;
}

// Address range: 0x100003f14 - 0x100003f60
int64_t entry_point(void) {
    // 0x100003f14
    _printf("Long (53 week) years between 1800 and 2100\n\n");
    function_100003e84();
    _printf((char *)0x100003f9d);
    return 0;
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(char * format, ...) {
    // 0x100003f60
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

