//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b7c(void);
int32_t function_100003f54(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003b7c - 0x100003e84
int64_t function_100003b7c(void) {
    // 0x100003b7c
    float64_t v1; // 0x100003b7c
    float64_t v2 = v1;
    float64_t v3 = v1;
    int64_t result; // 0x100003b7c
    float64_t * v4 = (float64_t *)result; // 0x100003b90
    if (v3 == 0.0) {
        int64_t v5 = 0; // 0x100003bac
        if (v1 != 0.0) {
            // 0x100003bb8
            v5 = -v2 / v1;
        }
        // 0x100003be0
        *(int64_t *)result = v5;
        *(float64_t *)(result + 8) = 0.0;
        *v4 = 0.0;
        *(float64_t *)(result + 8) = 0.0;
        // 0x100003e7c
        return result;
    }
    float64_t * v6 = (float64_t *)result; // 0x100003b8c
    if (v2 == 0.0) {
        // 0x100003c18
        *v6 = 0.0;
        *(float64_t *)(result + 8) = 0.0;
        float64_t v7; // bp-16, 0x100003b7c
        *v4 = -v7 / v3;
        *(float64_t *)(result + 8) = 0.0;
        // 0x100003e7c
        return result;
    }
    float64_t v8 = 0.5 * v1; // 0x100003c50
    float64_t v9 = fabs(v8);
    float64_t v10 = fabs(v2);
    float64_t v11; // 0x100003b7c
    float64_t v12; // 0x100003b7c
    if (v9 == v10) {
        goto lab_0x100003cbc;
    } else {
        if (v9 > v10 == v9 >= v10 == v9 <= v10) {
            float64_t v13 = 1.0 - v3 / v8 * v2 / v8; // 0x100003c94
            float64_t v14 = fabs(v13); // 0x100003ca0
            v11 = v13;
            v12 = v9 * sqrt(v14);
            goto lab_0x100003d38;
        } else {
            goto lab_0x100003cbc;
        }
    }
  lab_0x100003cbc:;
    float64_t v15 = v2 > 0.0 == v2 >= 0.0 == v2 <= 0.0 ? v3 : -v3;
    float64_t v16 = -((v15 - v8 * v8 / v10)); // 0x100003d0c
    float64_t v17 = sqrt(fabs(v16)); // 0x100003d1c
    v11 = v16;
    v12 = sqrt(v10) * v17;
    goto lab_0x100003d38;
  lab_0x100003d38:;
    float64_t v18 = v12; // 0x100003de0
    if (v11 > 0.0) {
        float64_t v19 = fabs(v18 / v3); // 0x100003d58
        float64_t v20 = -v8 / v3; // 0x100003d6c
        float64_t v21 = 0.0; // 0x100003d80
        *v6 = v20 + v21;
        *(float64_t *)(result + 8) = v19;
        *v4 = v20 - v21;
        *(float64_t *)(result + 8) = -v19;
        // 0x100003e7c
        return result;
    }
    float64_t v22 = v18; // 0x100003dc4
    if (v8 != 0.0) {
        v22 = v8 > 0.0 == v8 >= 0.0 == v8 <= 0.0 ? v18 : -v18;
    }
    float64_t v23 = (v22 - v8) / v3; // 0x100003e08
    int64_t v24 = 0; // 0x100003e14
    if (v23 != 0.0) {
        // 0x100003e20
        v24 = v2 / v23 / v3;
    }
    // 0x100003e4c
    *(int64_t *)result = v24;
    *(float64_t *)(result + 8) = 0.0;
    *(int64_t *)result = (int64_t)v23;
    *(float64_t *)(result + 8) = 0.0;
    // 0x100003e7c
    return result;
}

// Address range: 0x100003e84 - 0x100003f54
int64_t entry_point(void) {
    // 0x100003e84
    function_100003b7c();
    int128_t v1; // 0x100003e84
    _printf("(%g + %g i), (%g + %g i)\n", (float64_t)(int64_t)v1, (float64_t)(int64_t)v1, (float64_t)(int64_t)v1, (float64_t)(int64_t)v1);
    function_100003b7c();
    _printf("(%g + %g i), (%g + %g i)\n", (float64_t)(int64_t)v1, (float64_t)(int64_t)v1, (float64_t)(int64_t)v1, (float64_t)(int64_t)v1);
    return 0;
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * format, ...) {
    // 0x100003f54
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3
