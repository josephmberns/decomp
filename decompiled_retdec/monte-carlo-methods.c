//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdbool.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d48(void);
int32_t function_100003f44(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003f50(char * format, ...);
int32_t function_100003f5c(void);

// --------------------- Global Variables ---------------------

float64_t g1 = 2147483648.0; // 0x100003f68

// ------- Dynamically Linked Functions Without Header --------

int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _printf(char * a1, ...);
int32_t _rand(void);

// ------------------------ Functions -------------------------

// Address range: 0x100003d48 - 0x100003efc
int64_t function_100003d48(void) {
    // 0x100003d48
    float64_t v1; // 0x100003d48
    float64_t v2 = v1;
    int64_t v3 = 0xf4240; // 0x100003dfc
    float64_t v4 = 0.0;
    float64_t v5 = 0.0;
    float64_t v6 = (float64_t)_rand() / g1; // 0x100003d9c
    float64_t v7 = (float64_t)_rand() / g1; // 0x100003db0
    float64_t v8 = v4; // 0x100003dd4
    if (v6 * v6 + v7 * v7 > 1.0) {
        // 0x100003de4
        v8 = (int64_t)v4 + 1;
    }
    float64_t v9 = v8;
    v3--;
    float64_t v10 = (int64_t)v5 + 1; // 0x100003d80
    while (v3 != 0) {
        // 0x100003d88
        v4 = v9;
        v5 = v10;
        v6 = (float64_t)_rand() / g1;
        v7 = (float64_t)_rand() / g1;
        v8 = v4;
        if (v6 * v6 + v7 * v7 > 1.0) {
            // 0x100003de4
            v8 = (int64_t)v4 + 1;
        }
        // 0x100003df8
        v9 = v8;
        v3--;
        v10 = (int64_t)v5 + 1;
    }
    int64_t v11 = *(int64_t *)*(int64_t *)0x100004000; // 0x100003e70
    int64_t v12; // 0x100003d48
    int128_t v13; // 0x100003d48
    int32_t result = _fprintf((struct _IO_FILE *)v11, "Pi = %f +/- %5.3e at %ldM samples.\r", (float64_t)(int64_t)v13, (float64_t)(int64_t)v13, (int32_t)v12); // 0x100003ea4
    int32_t v14 = 1; // 0x100003ec0
    bool v15; // 0x100003d48
    bool v16; // 0x100003d48
    bool v17; // 0x100003d48
    float64_t v18; // 0x100003e24
    float64_t v19; // 0x100003e54
    if ((int64_t)v9 != 0) {
        // 0x100003ec8
        v18 = v9 / (float64_t)((int64_t)v5 + 1);
        v19 = 4.0 * sqrt(v18 * (1.0 - v18) / (float64_t)((int64_t)v5 + 1));
        v17 = false;
        v16 = true;
        v15 = false;
        if (v19 != v2) {
            v17 = v19 > v2;
            v16 = false;
            v15 = v19 >= v2 == v19 <= v2;
        }
        v14 = !((v16 | v17 != v15));
    }
    // 0x100003ee0
    while (v14 != 0) {
        // 0x100003d64
        v3 = 0xf4240;
        v4 = v9;
        v5 = (int64_t)v5 + 1;
        v6 = (float64_t)_rand() / g1;
        v7 = (float64_t)_rand() / g1;
        v8 = v4;
        if (v6 * v6 + v7 * v7 > 1.0) {
            // 0x100003de4
            v8 = (int64_t)v4 + 1;
        }
        // 0x100003df8
        v9 = v8;
        v3--;
        v10 = (int64_t)v5 + 1;
        while (v3 != 0) {
            // 0x100003d88
            v4 = v9;
            v5 = v10;
            v6 = (float64_t)_rand() / g1;
            v7 = (float64_t)_rand() / g1;
            v8 = v4;
            if (v6 * v6 + v7 * v7 > 1.0) {
                // 0x100003de4
                v8 = (int64_t)v4 + 1;
            }
            // 0x100003df8
            v9 = v8;
            v3--;
            v10 = (int64_t)v5 + 1;
        }
        // 0x100003e14
        v11 = *(int64_t *)*(int64_t *)0x100004000;
        result = _fprintf((struct _IO_FILE *)v11, "Pi = %f +/- %5.3e at %ldM samples.\r", (float64_t)(int64_t)v13, (float64_t)(int64_t)v13, (int32_t)v12);
        v14 = 1;
        if ((int64_t)v9 != 0) {
            // 0x100003ec8
            v18 = v9 / (float64_t)((int64_t)v5 + 1);
            v19 = 4.0 * sqrt(v18 * (1.0 - v18) / (float64_t)((int64_t)v5 + 1));
            v17 = false;
            v16 = true;
            v15 = false;
            if (v19 != v2) {
                v17 = v19 > v2;
                v16 = false;
                v15 = v19 >= v2 == v19 <= v2;
            }
            v14 = !((v16 | v17 != v15));
        }
    }
    // 0x100003eec
    return result;
}

// Address range: 0x100003efc - 0x100003f44
int64_t entry_point(void) {
    // 0x100003efc
    function_100003d48();
    int128_t v1; // 0x100003efc
    _printf("Pi is %f\n", (float64_t)(int64_t)v1);
    return 0;
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f44
    return _fprintf(stream, format);
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(char * format, ...) {
    // 0x100003f50
    return _printf(format);
}

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(void) {
    // 0x100003f5c
    return _rand();
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5
