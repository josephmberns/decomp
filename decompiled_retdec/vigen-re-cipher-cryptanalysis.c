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
int64_t function_100003420(void);
int64_t function_100003594(void);
int64_t function_1000038c4(void);
int64_t function_100003a84(void);
int32_t function_100003a90(int32_t c);
int64_t * function_100003a9c(int64_t * s, int32_t c, int32_t n);
int32_t function_100003aa8(char * format, ...);
int32_t function_100003ab4(char * s);

// --------------------- Global Variables ---------------------

float64_t g1 = 1.0e+100; // 0x100003ac0
char * g2 = "\x98;"; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(int64_t a1);
int64_t ___stack_chk_fail(void);
int32_t _isupper(int32_t a1);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003420 - 0x100003594
int64_t function_100003420(void) {
    float64_t v1 = 0.0; // 0x100003470
    int64_t v2; // 0x100003420
    for (int64_t i = 0; i < 26; i++) {
        // 0x100003460
        v1 += *(float64_t *)(8 * i + v2);
    }
    float64_t v3 = g1;
    int32_t result = 0;
    for (int64_t i = 0; i < 26; i++) {
        float64_t v4 = v3; // 0x10000354c
        int64_t v5 = 0;
        float64_t v6 = *(float64_t *)(v2 + (int64_t)(8 * ((int32_t)(v5 + i) % 26))); // 0x1000034ec
        float64_t v7 = *(float64_t *)(8 * v5 + v2); // 0x100003500
        float64_t v8 = v6 / v1 - v7; // 0x100003504
        float64_t v9 = v8 * v8 / v7; // 0x10000352c
        v5++;
        float64_t v10 = v9; // 0x1000034c4
        while (v5 != 26) {
            // 0x1000034cc
            v6 = *(float64_t *)(v2 + (int64_t)(8 * ((int32_t)(v5 + i) % 26)));
            v7 = *(float64_t *)(8 * v5 + v2);
            v8 = v6 / v1 - v7;
            v9 = v10 + v8 * v8 / v7;
            v5++;
            v10 = v9;
        }
        // 0x100003548
        v3 = v9 > v4 ? v9 : v4;
        result = v9 > v4 ? (int32_t)i : result;
    }
    // 0x100003588
    return result;
}

// Address range: 0x100003594 - 0x100003874
int64_t function_100003594(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004010; // 0x1000035ac
    int64_t v2; // 0x100003594
    int32_t v3 = v2; // 0x1000035bc
    int64_t v4; // bp-448, 0x100003594
    int64_t * v5 = _memset(&v4, 0, 208); // 0x1000035d0
    int32_t v6 = -v3; // 0x1000035e4
    int64_t v7 = (int64_t)v5; // 0x1000035ec
    if (v6 < 0 != (v6 & v3) < 0) {
        int32_t v8 = v2; // 0x1000035b8
        int64_t v9; // bp-240, 0x100003594
        int64_t v10 = &v9;
        int32_t v11 = 0;
        for (int64_t i = 0; i < 26; i++) {
            // 0x100003610
            *(float64_t *)(8 * i + v10) = 0.0;
        }
        int32_t v12 = v11 - v8; // 0x100003648
        int32_t v13 = v11; // 0x100003650
        int32_t v14; // 0x100003660
        float64_t * v15; // 0x10000366c
        int32_t v16; // 0x100003688
        int32_t v17; // 0x100003648
        if (v12 < 0 != ((v12 ^ v11) & (v11 ^ v8)) < 0) {
            v14 = *(int32_t *)(4 * (int64_t)v13 + v2);
            v15 = (float64_t *)(8 * (int64_t)v14 + v10);
            *v15 = *v15 + 1.0;
            v16 = v13 + v3;
            v17 = v16 - v8;
            v13 = v16;
            while (v17 < 0 != ((v17 ^ v16) & (v16 ^ v8)) < 0) {
                // 0x100003658
                v14 = *(int32_t *)(4 * (int64_t)v13 + v2);
                v15 = (float64_t *)(8 * (int64_t)v14 + v10);
                *v15 = *v15 + 1.0;
                v16 = v13 + v3;
                v17 = v16 - v8;
                v13 = v16;
            }
        }
        int64_t v18 = function_100003420(); // 0x1000036a0
        *(char *)(v2 + (int64_t)v11) = (char)v18 + 65;
        float64_t v19; // 0x100003708
        float64_t * v20; // 0x100003718
        for (int64_t i = 0; i < 26; i++) {
            // 0x1000036e8
            v19 = *(float64_t *)((int64_t)(8 * (((int32_t)i + (int32_t)v18) % 26)) + v10);
            v20 = (float64_t *)(8 * i + (int64_t)&v4);
            *v20 = v19 + *v20;
        }
        int32_t v21 = v11 + 1; // 0x100003740
        int32_t v22 = v21 - v3; // 0x1000035e4
        v7 = v18;
        while (v22 < 0 != ((v22 ^ v21) & (v21 ^ v3)) < 0) {
            // 0x1000035fc
            v11 = v21;
            for (int64_t i = 0; i < 26; i++) {
                // 0x100003610
                *(float64_t *)(8 * i + v10) = 0.0;
            }
            // 0x100003640
            v12 = v11 - v8;
            v13 = v11;
            if (v12 < 0 != ((v12 ^ v11) & (v11 ^ v8)) < 0) {
                v14 = *(int32_t *)(4 * (int64_t)v13 + v2);
                v15 = (float64_t *)(8 * (int64_t)v14 + v10);
                *v15 = *v15 + 1.0;
                v16 = v13 + v3;
                v17 = v16 - v8;
                v13 = v16;
                while (v17 < 0 != ((v17 ^ v16) & (v16 ^ v8)) < 0) {
                    // 0x100003658
                    v14 = *(int32_t *)(4 * (int64_t)v13 + v2);
                    v15 = (float64_t *)(8 * (int64_t)v14 + v10);
                    *v15 = *v15 + 1.0;
                    v16 = v13 + v3;
                    v17 = v16 - v8;
                    v13 = v16;
                }
            }
            // 0x100003694
            v18 = function_100003420();
            *(char *)(v2 + (int64_t)v11) = (char)v18 + 65;
            for (int64_t i = 0; i < 26; i++) {
                // 0x1000036e8
                v19 = *(float64_t *)((int64_t)(8 * (((int32_t)i + (int32_t)v18) % 26)) + v10);
                v20 = (float64_t *)(8 * i + (int64_t)&v4);
                *v20 = v19 + *v20;
            }
            // 0x10000373c
            v21 = v11 + 1;
            v22 = v21 - v3;
            v7 = v18;
        }
    }
    // 0x10000375c
    *(char *)((0x100000000 * v2 >> 32) + v2) = 0;
    int64_t result = v7; // 0x100003854
    if (*(int64_t *)*(int64_t *)0x100004010 != v1) {
        // 0x10000385c
        result = ___stack_chk_fail();
    }
    // 0x100003860
    return result;
}

// Address range: 0x100003874 - 0x1000038c4
int64_t entry_point(void) {
    // 0x100003874
    return ___chkstk_darwin((int64_t)_strlen(g2));
}

// Address range: 0x1000038c4 - 0x100003a84
int64_t function_1000038c4(void) {
    // 0x1000038c4
    int64_t v1; // 0x1000038c4
    int64_t v2; // 0x1000038c4
    int64_t v3 = (int64_t)&v1 - *(int64_t *)(v2 - 168); // 0x1000038cc
    int64_t * v4 = (int64_t *)(v2 - 160); // 0x1000038d4
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v2 - 132); // 0x1000038dc
    *v5 = 0;
    int64_t v6 = v2 - 152; // 0x1000038e8
    int64_t * v7 = (int64_t *)v6;
    *v7 = (int64_t)g1;
    int32_t * v8 = (int32_t *)(v2 - 136); // 0x1000038ec
    *v8 = 0;
    char v9 = *g2; // 0x100003900
    if (v9 != 0) {
        char v10; // 0x100003948
        int32_t v11; // 0x100003950
        if (_isupper((int32_t)v9) != 0) {
            // 0x100003938
            v10 = *(char *)((int64_t)*v8 + (int64_t)g2);
            v11 = *v5;
            *v5 = v11 + 1;
            *(int32_t *)(4 * (int64_t)v11 + *v4) = (int32_t)v10 - 65;
        }
        int32_t v12 = *v8 + 1; // 0x100003970
        *v8 = v12;
        char v13 = *(char *)((int64_t)g2 + (int64_t)v12); // 0x100003900
        while (v13 != 0) {
            // 0x100003914
            if (_isupper((int32_t)v13) != 0) {
                // 0x100003938
                v10 = *(char *)((int64_t)*v8 + (int64_t)g2);
                v11 = *v5;
                *v5 = v11 + 1;
                *(int32_t *)(4 * (int64_t)v11 + *v4) = (int32_t)v10 - 65;
            }
            // 0x10000396c
            v12 = *v8 + 1;
            *v8 = v12;
            v13 = *(char *)((int64_t)g2 + (int64_t)v12);
        }
    }
    // 0x100003988
    *v8 = 1;
    int64_t * v14 = (int64_t *)(v2 - 176); // 0x1000039ac
    int64_t v15 = v2 - 144;
    int64_t * v16 = (int64_t *)v15;
    uint32_t v17 = *v5; // 0x1000039a0
    *v14 = v2 - 108;
    function_100003594();
    *v16 = (int64_t)g1;
    *(int64_t *)(v3 - 32) = (int64_t)g1;
    *(int64_t *)(v3 - 24) = (int64_t)*v8;
    *(int64_t *)(v3 - 16) = *v14;
    int128_t v18; // 0x1000038c4
    _printf("%f, key length: %2d, %s", (float64_t)(int64_t)v18, (int64_t)v17, (char *)(int64_t)1);
    float64_t v19 = *(float64_t *)v15; // 0x1000039ec
    float64_t v20 = v19; // 0x1000039ec
    int64_t v21; // 0x1000038c4
    if (v19 > *(float64_t *)v6) {
        // 0x100003a04
        v21 = *v16;
        v20 = v21;
        *v7 = v21;
        _printf(" <--- best so far");
    }
    // 0x100003a1c
    _printf((char *)0x100003f94);
    int32_t v22 = *v8; // 0x100003a2c
    int32_t v23 = v22 + 1; // 0x100003a30
    *v8 = v23;
    while (v22 < 29 != (28 - v22 & v23) < 0) {
        // 0x10000399c
        v17 = *v5;
        *v14 = v2 - 108;
        function_100003594();
        *v16 = (int64_t)v20;
        *(int64_t *)(v3 - 32) = (int64_t)v20;
        *(int64_t *)(v3 - 24) = (int64_t)*v8;
        *(int64_t *)(v3 - 16) = *v14;
        _printf("%f, key length: %2d, %s", (float64_t)(int64_t)v18, (int64_t)v17, (char *)(int64_t)v23);
        v19 = *(float64_t *)v15;
        v20 = v19;
        if (v19 > *(float64_t *)v6) {
            // 0x100003a04
            v21 = *v16;
            v20 = v21;
            *v7 = v21;
            _printf(" <--- best so far");
        }
        // 0x100003a1c
        _printf((char *)0x100003f94);
        v22 = *v8;
        v23 = v22 + 1;
        *v8 = v23;
    }
    // 0x100003a3c
    *(int32_t *)(v2 - 112) = 0;
    int32_t * v24 = (int32_t *)(v2 - 180); // 0x100003a4c
    *v24 = 0;
    int64_t result = 0; // 0x100003a68
    if (*(int64_t *)*(int64_t *)0x100004010 != *(int64_t *)(v2 - 8)) {
        // 0x100003a70
        ___stack_chk_fail();
        result = (int64_t)*v24;
    }
    // 0x100003a74
    return result;
}

// Address range: 0x100003a84 - 0x100003a90
int64_t function_100003a84(void) {
    // 0x100003a84
    return ___stack_chk_fail();
}

// Address range: 0x100003a90 - 0x100003a9c
int32_t function_100003a90(int32_t c) {
    // 0x100003a90
    return _isupper(c);
}

// Address range: 0x100003a9c - 0x100003aa8
int64_t * function_100003a9c(int64_t * s, int32_t c, int32_t n) {
    // 0x100003a9c
    return _memset(s, c, n);
}

// Address range: 0x100003aa8 - 0x100003ab4
int32_t function_100003aa8(char * format, ...) {
    // 0x100003aa8
    return _printf(format);
}

// Address range: 0x100003ab4 - 0x100003ac0
int32_t function_100003ab4(char * s) {
    // 0x100003ab4
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9
