//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003da4(void);
int64_t function_100003e5c(void);
int32_t function_100003edc(char * format, ...);
int32_t function_100003ee8(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _scanf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ce4 - 0x100003da4
int64_t entry_point(void) {
    // 0x100003ce4
    _printf("Nim Game\n\n");
    int64_t v1; // 0x100003ce4
    int64_t v2 = v1 & 0xffffffff;
    int32_t v3 = 12; // 0x100003d08
    while (true) {
        if (v3 < 1) {
            // break (via goto) -> 0x100003d88
            goto lab_0x100003d88;
        }
        // 0x100003d20
        _printf("How many tokens would you like to take?: ");
        int64_t v4; // 0x100003ce4
        _scanf("%i", (int64_t *)v4);
        int64_t v5 = v2; // 0x100003d64
        while (v3 == (int32_t)function_100003da4()) {
            if (v3 < 1) {
                // break (via goto) -> 0x100003d88
                goto lab_0x100003d88;
            }
            // 0x100003d20
            _printf("How many tokens would you like to take?: ");
            _scanf("%i", (int64_t *)v5);
            v5 = v2;
        }
        // 0x100003d70
        v3 = function_100003e5c();
        v4 = v2;
    }
  lab_0x100003d88:
    // 0x100003d88
    _printf("Computer wins.");
    return 0;
}

// Address range: 0x100003da4 - 0x100003e5c
int64_t function_100003da4(void) {
    // 0x100003da4
    int64_t v1; // 0x100003da4
    int32_t v2 = v1; // 0x100003db4
    int64_t v3; // 0x100003da4
    if (v2 < 1 != (v2 & -v2) < 0) {
        // 0x100003de0
        _printf("\nTake must be between 1 and 3.\n\n");
        // 0x100003e4c
        return v3 & 0xffffffff;
    }
    int32_t v4 = v2 - 3; // 0x100003dd0
    if (v4 == 0 || v4 < 0 != (2 - v2 & v2) < 0) {
        // 0x100003df8
        _printf("\nPlayer takes %i tokens.\n", v1);
        _printf("%i tokens remaining.\n\n", v1);
        // 0x100003e4c
        return 0;
    }
    // 0x100003de0
    _printf("\nTake must be between 1 and 3.\n\n");
    // 0x100003e4c
    return v3 & 0xffffffff;
}

// Address range: 0x100003e5c - 0x100003edc
int64_t function_100003e5c(void) {
    // 0x100003e5c
    int64_t v1; // 0x100003e5c
    _printf("Computer takes %u tokens.\n", (int32_t)v1);
    _printf("%i tokens remaining.\n\n", v1);
    return 4 * (int32_t)v1 / 4;
}

// Address range: 0x100003edc - 0x100003ee8
int32_t function_100003edc(char * format, ...) {
    // 0x100003edc
    return _printf(format);
}

// Address range: 0x100003ee8 - 0x100003ef4
int32_t function_100003ee8(char * format, ...) {
    // 0x100003ee8
    return _scanf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

