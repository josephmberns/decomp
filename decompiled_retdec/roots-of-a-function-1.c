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

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003bb4(void);
int64_t function_100003bf8(void);
int64_t function_100003c30(int32_t a1, int32_t a2, float64_t a3, float64_t a4, float64_t a5);
int32_t function_100003f04(char * format, ...);

// --------------------- Global Variables ---------------------

float64_t g1 = -99.0; // 0x100003f10
float64_t g2 = 1.0e-12; // 0x100003f18
int64_t g3 = 0x3f1a36e2eb1c432d; // 0x100003f20
float64_t g4 = -1.032; // 0x100003f28
float64_t g5 = 0.01; // 0x100003f30

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003bb4 - 0x100003bf8
int64_t function_100003bb4(void) {
    // 0x100003bb4
    int64_t result; // 0x100003bb4
    return result;
}

// Address range: 0x100003bf8 - 0x100003c30
int64_t function_100003bf8(void) {
    // 0x100003bf8
    int64_t result; // 0x100003bf8
    return result;
}

// Address range: 0x100003c30 - 0x100003d44
int64_t function_100003c30(int32_t a1, int32_t a2, float64_t a3, float64_t a4, float64_t a5) {
    // 0x100003c30
    int64_t v1; // 0x100003c30
    int64_t v2 = v1;
    int32_t v3 = -a1; // 0x100003c44
    int64_t result; // 0x100003c30
    if (v3 < 0 != (v3 & a1) < 0) {
        // 0x100003c54
        return result;
    }
    if (a1 == 0) {
        // 0x100003cf8
        int128_t v4; // 0x100003c30
        int32_t v5 = _printf("Function is not converging near (%7.4f,%7.4f).\n", (float64_t)(int64_t)v4, (float64_t)(int64_t)v4); // 0x100003d14
        *(int64_t *)(v2 - 8) = (int64_t)g1;
        result = v5;
    } else {
        // 0x100003d28
        *(int64_t *)(v2 - 8) = *(int64_t *)(v2 - 24);
    }
    // 0x100003c54
    return result;
}

// Address range: 0x100003d44 - 0x100003f04
int64_t entry_point(void) {
    float64_t v1 = g4; // 0x100003d78
    function_100003bb4();
    bool v2 = false; // 0x100003d88
    bool v3 = true; // 0x100003d88
    bool v4 = false; // 0x100003d88
    if (v1 != 0.0) {
        v2 = v1 > 0.0;
        v3 = false;
        v4 = v1 >= 0.0 == v1 <= 0.0;
    }
    if (v1 <= 3.0) {
        // 0x100003ef4
        return 0;
    }
    int32_t v5 = !((v3 | v2 != v4)); // 0x100003d44
    float64_t v6 = v1;
    function_100003bb4();
    int32_t v7; // 0x100003d44
    bool v8; // 0x100003d44
    bool v9; // 0x100003d44
    bool v10; // 0x100003d44
    bool v11; // 0x100003d44
    bool v12; // 0x100003d44
    bool v13; // 0x100003d44
    bool v14; // 0x100003d44
    bool v15; // 0x100003d44
    bool v16; // 0x100003d44
    float64_t v17; // 0x100003ec0
    int128_t v18; // 0x100003d44
    float64_t v19; // 0x100003e00
    if (fabs(v6) > g2) {
        // 0x100003ddc
        _printf("Root found at x= %12.9f\n", (float64_t)(int64_t)v18);
        v19 = v6 + (float64_t)g3;
        function_100003bb4();
        v14 = false;
        v13 = true;
        v15 = false;
        if (v19 != 0.0) {
            v14 = v19 > 0.0;
            v13 = false;
            v15 = v19 >= 0.0 == v19 <= 0.0;
        }
        v7 = !((v13 | v14 != v15));
    } else {
        // 0x100003e1c
        v12 = false;
        v9 = true;
        v8 = false;
        if (v6 != 0.0) {
            v12 = v6 > 0.0;
            v9 = false;
            v8 = v6 >= 0.0 == v6 <= 0.0;
        }
        v7 = v5;
        if (v5 != (int32_t)(!v9 && v12 == v8)) {
            // 0x100003e40
            function_100003bf8();
            if (v6 - g5 == g1) {
                // 0x100003e98
                _printf("Root found near x= %7.4f\n", (float64_t)(int64_t)v18);
            } else {
                // 0x100003e78
                _printf("Root found at x= %12.9f\n", (float64_t)(int64_t)v18);
            }
            // 0x100003eb4
            v17 = v6 + (float64_t)g3;
            function_100003bb4();
            v11 = false;
            v10 = true;
            v16 = false;
            if (v17 != 0.0) {
                v11 = v17 > 0.0;
                v10 = false;
                v16 = v17 >= 0.0 == v17 <= 0.0;
            }
            v7 = !((v10 | v11 != v16));
        }
    }
    float64_t v20 = v6 + g5; // 0x100003ee8
    v5 = v7;
    while (v20 > 3.0) {
        // 0x100003db4
        v6 = v20;
        function_100003bb4();
        if (fabs(v6) > g2) {
            // 0x100003ddc
            _printf("Root found at x= %12.9f\n", (float64_t)(int64_t)v18);
            v19 = v6 + (float64_t)g3;
            function_100003bb4();
            v14 = false;
            v13 = true;
            v15 = false;
            if (v19 != 0.0) {
                v14 = v19 > 0.0;
                v13 = false;
                v15 = v19 >= 0.0 == v19 <= 0.0;
            }
            v7 = !((v13 | v14 != v15));
        } else {
            // 0x100003e1c
            v12 = false;
            v9 = true;
            v8 = false;
            if (v6 != 0.0) {
                v12 = v6 > 0.0;
                v9 = false;
                v8 = v6 >= 0.0 == v6 <= 0.0;
            }
            v7 = v5;
            if (v5 != (int32_t)(!v9 && v12 == v8)) {
                // 0x100003e40
                function_100003bf8();
                if (v6 - g5 == g1) {
                    // 0x100003e98
                    _printf("Root found near x= %7.4f\n", (float64_t)(int64_t)v18);
                } else {
                    // 0x100003e78
                    _printf("Root found at x= %12.9f\n", (float64_t)(int64_t)v18);
                }
                // 0x100003eb4
                v17 = v6 + (float64_t)g3;
                function_100003bb4();
                v11 = false;
                v10 = true;
                v16 = false;
                if (v17 != 0.0) {
                    v11 = v17 > 0.0;
                    v10 = false;
                    v16 = v17 >= 0.0 == v17 <= 0.0;
                }
                v7 = !((v10 | v11 != v16));
            }
        }
        // 0x100003ee0
        v20 = v6 + g5;
        v5 = v7;
    }
    // 0x100003ef4
    return 0;
}

// Address range: 0x100003f04 - 0x100003f10
int32_t function_100003f04(char * format, ...) {
    // 0x100003f04
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

