//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
float64_t function_100003f60(float64_t a1, float64_t a2);
float64_t function_100003f6c(float64_t a1);
int32_t function_100003f78(char * format, ...);
float64_t function_100003f84(float64_t a1);

// --------------------- Global Variables ---------------------

char * g1 = "i"; // 0x100003f95

// ------- Dynamically Linked Functions Without Header --------

float64_t _atan2(float64_t a1, float64_t a2);
float64_t _cos(float64_t a1);
int32_t _printf(char * a1, ...);
float64_t _sin(float64_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003cac - 0x100003f60
int64_t entry_point(void) {
    int32_t v1 = 1; // 0x100003f44
    int128_t v2; // 0x100003cac
    int64_t v3 = (float32_t)_atan2((float64_t)(int64_t)v2, (float64_t)(int64_t)v2); // 0x100003cac
    char * v4; // 0x100003cac
    int32_t v5; // 0x100003cac
    int32_t v6; // 0x100003cac
    int32_t v7; // 0x100003cac
    int64_t v8; // 0x100003cac
    while (true) {
        // 0x100003d14
        v5 = v1;
        int32_t v9 = 3 * v5;
        v6 = 0;
        while (true) {
          lab_0x100003d14:
            // 0x100003d14
            v8 = v3;
            v7 = v6;
            if (v7 == 0) {
                goto lab_0x100003e7c;
            } else {
                int32_t v10 = 4 * v7; // 0x100003d4c
                v4 = (char *)&g1;
                v3 = v8;
                if (v5 == v10) {
                    goto lab_0x100003ee0;
                } else {
                    if (v5 == 2 * v7) {
                        goto lab_0x100003e7c;
                    } else {
                        // 0x100003d98
                        v4 = "-i";
                        v3 = v8;
                        if (v9 != v10) {
                            int128_t v11 = __asm_sshll(0.0f, 0); // 0x100003dd4
                            __asm_sshll(0.0f, 0);
                            float64_t v12 = _cos((float64_t)(int64_t)v11); // 0x100003e00
                            v4 = (char *)0x100003fa1;
                            v3 = (float32_t)_sin(v12);
                        }
                        goto lab_0x100003ee0;
                    }
                }
            }
        }
      lab_0x100003f40:
        // 0x100003f40
        v1 = v5 + 1;
        if (v1 == 10) {
            // break -> 0x100003f50
            break;
        }
    }
    // 0x100003f50
    return 0;
  lab_0x100003e7c:
    // 0x100003e7c
    _printf("%.2g", (float64_t)v8);
    v4 = (char *)0x100003fa1;
    v3 = v8;
    goto lab_0x100003ee0;
  lab_0x100003ee0:
    // 0x100003ee0
    _printf(v4);
    _printf(v7 != v5 - 1 ? ",  " : (char *)0x100003fa2);
    int32_t v13 = v7 + 1; // 0x100003f30
    int32_t v14 = v13 - v5; // 0x100003d04
    v6 = v13;
    if (v14 < 0 == (v13 & -v14) < 0) {
        // break -> 0x100003f40
        goto lab_0x100003f40;
    }
    goto lab_0x100003d14;
}

// Address range: 0x100003f60 - 0x100003f6c
float64_t function_100003f60(float64_t a1, float64_t a2) {
    // 0x100003f60
    return _atan2(a1, a2);
}

// Address range: 0x100003f6c - 0x100003f78
float64_t function_100003f6c(float64_t a1) {
    // 0x100003f6c
    return _cos(a1);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(char * format, ...) {
    // 0x100003f78
    return _printf(format);
}

// Address range: 0x100003f84 - 0x100003f90
float64_t function_100003f84(float64_t a1) {
    // 0x100003f84
    return _sin(a1);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5
