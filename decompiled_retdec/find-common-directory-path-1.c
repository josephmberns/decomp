//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d1c(void);
int64_t function_100003f08(int64_t a1);
int32_t function_100003f14(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003d1c - 0x100003e3c
int64_t function_100003d1c(void) {
    // 0x100003d1c
    int64_t v1; // 0x100003d1c
    int32_t v2 = v1; // 0x100003d24
    int32_t v3 = -v2; // 0x100003d44
    int32_t v4 = 0; // 0x100003d30
    int32_t v5; // 0x100003d1c
    while (true) {
        // 0x100003d34
        v5 = v4;
        if (v3 < 0 != (v3 & v2) < 0) {
            int64_t v6 = v5; // 0x100003d60
            int32_t v7 = 0; // 0x100003e1c
            char v8 = *(char *)(*(int64_t *)(8 * (int64_t)v7 + v1) + v6); // 0x100003d64
            if (v8 == 0) {
                // break (via goto) -> 0x100003db0
                goto lab_0x100003db0_2;
            }
            // 0x100003d78
            if (v8 != *(char *)(v1 + v6)) {
                // break (via goto) -> 0x100003db0
                goto lab_0x100003db0_2;
            }
            // 0x100003d3c
            v7++;
            while (v7 - v2 < 0 != ((v7 - v2 ^ v7) & (v7 ^ v2)) < 0) {
                // 0x100003d54
                v8 = *(char *)(*(int64_t *)(8 * (int64_t)v7 + v1) + v6);
                if (v8 == 0) {
                    // break (via goto) -> 0x100003db0
                    goto lab_0x100003db0_2;
                }
                // 0x100003d78
                if (v8 != *(char *)(v1 + v6)) {
                    // break (via goto) -> 0x100003db0
                    goto lab_0x100003db0_2;
                }
                // 0x100003d3c
                v7++;
            }
        }
        // 0x100003e2c
        v4 = v5 + 1;
    }
  lab_0x100003db0_2:;
    int64_t v9 = v5;
    while ((int32_t)v9 >= 1) {
        int64_t v10 = v9 + 0xffffffff & 0xffffffff;
        int64_t result = v10; // 0x100003e00
        if (0x1000000 * (int32_t)v1 >> 24 == (int32_t)*(char *)(v10 + v1)) {
            // 0x100003e0c
            return result;
        }
        v9--;
    }
    // 0x100003e0c
    return v9 & 0xffffffff;
}

// Address range: 0x100003e3c - 0x100003f08
int64_t entry_point(void) {
    // 0x100003e3c
    int32_t v1; // 0x100003e3c
    if ((int32_t)function_100003d1c() == 0) {
        // 0x100003e9c
        v1 = _printf("No common path\n");
    } else {
        // 0x100003eac
        v1 = _printf("Common path: %.*s\n", 3, (char *)47);
    }
    int64_t v2 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ee0
    if (v2 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003ef4
        ___stack_chk_fail((int64_t)v1);
    }
    // 0x100003ef8
    return 0;
}

// Address range: 0x100003f08 - 0x100003f14
int64_t function_100003f08(int64_t a1) {
    // 0x100003f08
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f14 - 0x100003f20
int32_t function_100003f14(char * format, ...) {
    // 0x100003f14
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4
