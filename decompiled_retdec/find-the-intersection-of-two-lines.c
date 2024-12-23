//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003770(void);
int64_t function_1000037e0(void);
int64_t function_100003980(void);
float64_t function_100003ecc(char * nptr);
int64_t * function_100003ed8(int32_t size);
int32_t function_100003ee4(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

float64_t _atof(char * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003770 - 0x1000037e0
int64_t function_100003770(void) {
    // 0x100003770
    int64_t result; // 0x100003770
    return result;
}

// Address range: 0x1000037e0 - 0x100003980
int64_t function_1000037e0(void) {
    int32_t v1 = 0; // 0x1000037f4
    int32_t v2; // 0x1000037e0
    int32_t v3; // 0x1000037e0
    int32_t v4; // 0x1000037e0
    int32_t v5; // 0x1000037e0
    int64_t v6; // 0x1000037e0
    char * v7; // 0x100003800
    int64_t v8; // 0x1000037e0
    int64_t result; // 0x1000037e0
    int64_t v9; // 0x1000037e0
    while (true) {
      lab_0x1000037f8:
        // 0x1000037f8
        v5 = v1;
        result = v8;
        v3 = v2;
        v7 = (char *)(v6 + (int64_t)v5);
        v4 = v5;
        v9 = result;
        switch (*v7) {
            case 0: {
                return result;
            }
            case 40: {
                goto lab_0x10000395c;
            }
            case 44: {
                goto lab_0x100003874;
            }
            case 41: {
                goto lab_0x100003874;
            }
            default: {
                // 0x10000395c
                v4 = v3;
                v9 = result;
                goto lab_0x10000395c;
            }
        }
    }
    // 0x10000396c
    return result;
  lab_0x10000395c:
    // 0x10000395c
    v2 = v4;
    v8 = v9;
    v1 = v5 + 1;
    goto lab_0x1000037f8;
  lab_0x100003874:;
    int32_t v10 = v5 - v3; // 0x100003884
    int64_t * v11 = _malloc(v10); // 0x100003894
    int32_t v12 = v10 - 1; // 0x1000038ac
    int32_t v13 = 1 - v10; // 0x1000038b0
    int64_t v14 = (int64_t)v11;
    int32_t v15 = 0; // 0x1000038b8
    int32_t v16 = 0; // 0x1000038b8
    if (v13 < 0 != (v13 & v12) < 0) {
        int32_t v17 = v15 + 1;
        char v18 = *(char *)(v6 + (int64_t)(v17 + v3)); // 0x1000038d8
        *(char *)((int64_t)v15 + v14) = v18;
        int32_t v19 = v17 - v12; // 0x1000038b0
        v15 = v17;
        v16 = v17;
        while (v19 < 0 != ((v19 ^ v17) & (v17 ^ v12)) < 0) {
            // 0x1000038c0
            v17 = v15 + 1;
            v18 = *(char *)(v6 + (int64_t)(v17 + v3));
            *(char *)((int64_t)v15 + v14) = v18;
            v19 = v17 - v12;
            v15 = v17;
            v16 = v17;
        }
    }
    // 0x100003900
    *(char *)((int64_t)v16 + v14) = 0;
    v4 = *v7 == 44 ? v5 : v3;
    v9 = _atof((char *)v11);
    goto lab_0x10000395c;
}

// Address range: 0x100003980 - 0x100003d20
int64_t function_100003980(void) {
    // 0x100003980
    function_100003770();
    return function_100003770();
}

// Address range: 0x100003d20 - 0x100003ecc
int64_t entry_point(void) {
    // 0x100003d20
    float64_t v1; // 0x100003d20
    float64_t v2 = v1;
    int64_t v3; // 0x100003d20
    int32_t v4 = v3; // 0x100003d30
    if (v4 < 5 != (4 - v4 & v4) < 0) {
        // 0x100003d4c
        _printf("Usage : %s <four points specified as (x,y) separated by a space>", (char *)v3);
        // 0x100003ebc
        return 0;
    }
    // 0x100003d6c
    function_1000037e0();
    function_1000037e0();
    function_1000037e0();
    function_1000037e0();
    function_100003980();
    if (v2 == v2 && 0.0 == 0.0) {
        // 0x100003e94
        int128_t v5; // 0x100003d20
        _printf("Point of intersection : (%lf,%lf)", (float64_t)(int64_t)v5, (float64_t)(int64_t)v5);
    } else {
        // 0x100003e84
        _printf("The lines do not intersect, they are either parallel or co-incident.");
    }
    // 0x100003ebc
    return 0;
}

// Address range: 0x100003ecc - 0x100003ed8
float64_t function_100003ecc(char * nptr) {
    // 0x100003ecc
    return _atof(nptr);
}

// Address range: 0x100003ed8 - 0x100003ee4
int64_t * function_100003ed8(int32_t size) {
    // 0x100003ed8
    return _malloc(size);
}

// Address range: 0x100003ee4 - 0x100003ef0
int32_t function_100003ee4(char * format, ...) {
    // 0x100003ee4
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

