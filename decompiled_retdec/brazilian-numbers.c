//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000039f0(void);
int64_t function_100003a98(void);
int64_t function_100003b84(void);
int64_t function_100003f24(int64_t a1);
int32_t function_100003f30(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x1000039f0 - 0x100003a98
int64_t function_1000039f0(void) {
    // 0x1000039f0
    int64_t v1; // 0x1000039f0
    int32_t v2 = v1; // 0x1000039f4
    int32_t v3 = v1; // 0x1000039f8
    int32_t v4 = v2 / v3; // 0x100003a04
    if (v4 < 1) {
        // 0x100003a8c
        return 1;
    }
    int32_t v5 = v4; // 0x100003a34
    int64_t result = 0; // 0x100003a5c
    while (v5 % v3 == v2 - v4 * v3) {
        // 0x100003a6c
        v5 /= v3;
        result = 1;
        if (v5 < 1) {
            // break -> 0x100003a8c
            break;
        }
        result = 0;
    }
    // 0x100003a8c
    return result;
}

// Address range: 0x100003a98 - 0x100003b84
int64_t function_100003a98(void) {
    // 0x100003a98
    int64_t v1; // 0x100003a98
    int32_t v2 = v1; // 0x100003aa4
    if (v2 < 7 != (6 - v2 & v2) < 0) {
        // 0x100003b74
        return 0;
    }
    if (2 * v2 / 2 == v2) {
        // 0x100003ae8
        if (v2 < 8 == (7 - v2 & v2) < 0) {
            // 0x100003b74
            return 1;
        }
    }
    int32_t v3 = v2 - 1; // 0x100003b1c
    int32_t v4 = 3 - v2; // 0x100003b20
    if (v4 < 0 == (v4 & v3) < 0) {
        // 0x100003b74
        return 0;
    }
    int32_t v5 = 2; // 0x100003b28
    int64_t result = 1; // 0x100003b44
    while (function_1000039f0() % 256 == 0) {
        // 0x100003b14
        v5++;
        int32_t v6 = v5 - v3; // 0x100003b20
        result = 0;
        if (v6 < 0 == ((v6 ^ v5) & (v5 ^ v3)) < 0) {
            // break -> 0x100003b74
            break;
        }
        result = 1;
    }
    // 0x100003b74
    return result;
}

// Address range: 0x100003b84 - 0x100003cd8
int64_t function_100003b84(void) {
    // 0x100003b84
    int64_t v1; // 0x100003b84
    int32_t v2 = v1; // 0x100003b88
    if (v2 < 2 != (1 - v2 & v2) < 0) {
        // 0x100003ccc
        return false;
    }
    if (2 * v2 / 2 == v2) {
        // 0x100003ccc
        return v2 == 2;
    }
    if (v2 % 3 == 0) {
        // 0x100003ccc
        return v2 == 3;
    }
    int32_t v3 = 25 - v2; // 0x100003c3c
    if (v3 != 0 && v3 < 0 == (v3 & v2) < 0) {
        // 0x100003ccc
        return true;
    }
    int32_t v4 = 5; // 0x100003c44
    bool result = false; // 0x100003c68
    while (v2 % v4 != 0) {
        // 0x100003c78
        result = false;
        if (v2 % (v4 + 2) == 0) {
            // break -> 0x100003ccc
            break;
        }
        // 0x100003c2c
        v4 += 6;
        int32_t v5 = v4 * v4; // 0x100003c34
        int32_t v6 = v5 - v2; // 0x100003c3c
        result = true;
        if (v6 != 0 && v6 < 0 == ((v6 ^ v5) & (v5 ^ v2)) < 0) {
            // break -> 0x100003ccc
            break;
        }
        result = false;
    }
    // 0x100003ccc
    return result;
}

// Address range: 0x100003cd8 - 0x100003f24
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003cec
    int32_t v2 = 0;
    int64_t v3; // 0x100003cd8
    _printf("First 20%sBrazilian numbers:\n", (char *)v3);
    int32_t v4 = 0; // 0x100003d58
    int32_t v5; // 0x100003cd8
    while (true) {
        // 0x100003d5c
        v5 = v4;
        v4 = v5;
        if (function_100003a98() % 256 != 0) {
            // 0x100003d74
            _printf("%d ", v3);
            v4 = v5 + 1;
            if (v5 == 19) {
                // break -> 0x100003dac
                break;
            }
        }
        // 0x100003dc0
        if (v2 == 2) {
            while (function_100003b84() % 256 == 0) {
                // continue -> 0x100003e24
            }
        }
    }
    // 0x100003dac
    _printf("\n\n");
    int32_t v6 = v2 + 1; // 0x100003e5c
    int32_t v7 = 0; // 0x100003d24
    while (v6 != 3) {
        // 0x100003d2c
        v2 = v6;
        _printf("First 20%sBrazilian numbers:\n", (char *)v3);
        int32_t v8 = 0; // 0x100003d58
        while (true) {
            // 0x100003d5c
            v5 = v8;
            v4 = v5;
            if (function_100003a98() % 256 != 0) {
                // 0x100003d74
                _printf("%d ", v3);
                v4 = v5 + 1;
                if (v5 == 19) {
                    // break -> 0x100003dac
                    break;
                }
            }
            // 0x100003dc0
            v8 = v4;
            if (v2 == 2) {
                while (function_100003b84() % 256 == 0) {
                    // continue -> 0x100003e24
                }
            }
        }
        // 0x100003dac
        _printf("\n\n");
        v6 = v2 + 1;
        v7 = 0;
    }
    int32_t v9 = v7 + (int32_t)(function_100003a98() % 256 != 0);
    v7 = v9;
    while (v9 < 0x186a0 != (0x1869f - v9 & v9) < 0) {
        // 0x100003e94
        v9 = v7 + (int32_t)(function_100003a98() % 256 != 0);
        v7 = v9;
    }
    int32_t v10 = _printf("The 100,000th Brazilian number: %d\n", v3); // 0x100003eec
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003f10
        ___stack_chk_fail((int64_t)v10);
    }
    // 0x100003f14
    return 0;
}

// Address range: 0x100003f24 - 0x100003f30
int64_t function_100003f24(int64_t a1) {
    // 0x100003f24
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(char * format, ...) {
    // 0x100003f30
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

