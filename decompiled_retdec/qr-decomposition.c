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
int64_t function_100003070(void);
int64_t function_100003160(void);
int64_t function_1000031a0(void);
int64_t function_100003284(void);
int64_t function_100003360(void);
int64_t function_1000034cc(void);
int64_t function_100003600(void);
int64_t function_100003684(void);
int64_t function_1000037b8(void);
int64_t function_100003834(void);
int64_t function_1000038a8(void);
int64_t function_100003920(void);
int64_t function_1000039f0(int64_t a1, int64_t * a2, int64_t * a3);
int64_t function_100003a44(void);
int64_t function_100003f2c(int64_t a1);
int64_t * function_100003f38(int32_t nmemb, int32_t size);
void function_100003f44(int64_t * ptr);
int64_t * function_100003f50(int32_t size);
int32_t function_100003f5c(char * format, ...);
int32_t function_100003f68(char * s);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int64_t ___stack_chk_fail(int64_t a1);
int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003070 - 0x100003160
int64_t function_100003070(void) {
    // 0x100003070
    int64_t v1; // 0x100003070
    int32_t v2 = v1; // 0x10000307c
    int32_t v3 = v1; // 0x100003080
    int64_t * v4 = _malloc(16); // 0x100003088
    int64_t result = (int64_t)v4; // 0x100003088
    int64_t * v5 = _malloc(8 * v2); // 0x1000030a0
    int64_t * v6 = (int64_t *)(result + 8); // 0x1000030b0
    *v6 = (int64_t)v5;
    *(int64_t *)*v6 = (int64_t)_calloc(8, v2 * v3);
    int32_t v7 = -v2; // 0x1000030e8
    if (v7 < 0 == (v7 & v2) < 0) {
        // 0x100003138
        *(int32_t *)v4 = v2;
        *(int32_t *)(result + 4) = v3;
        return result;
    }
    int32_t v8 = 0;
    int64_t v9 = *v6; // 0x1000030fc
    int64_t v10 = *(int64_t *)v9; // 0x100003100
    *(int64_t *)(8 * (int64_t)v8 + v9) = 8 * (int64_t)(v8 * v3) + v10;
    int32_t v11 = v8 + 1; // 0x10000312c
    while (v11 - v2 < 0 != ((v11 - v2 ^ v11) & (v11 ^ v2)) < 0) {
        // 0x1000030f8
        v8 = v11;
        v9 = *v6;
        v10 = *(int64_t *)v9;
        *(int64_t *)(8 * (int64_t)v8 + v9) = 8 * (int64_t)(v8 * v3) + v10;
        v11 = v8 + 1;
    }
    // 0x100003138
    *(int32_t *)v4 = v2;
    *(int32_t *)(result + 4) = v3;
    return result;
}

// Address range: 0x100003160 - 0x1000031a0
int64_t function_100003160(void) {
    // 0x100003160
    int64_t v1; // 0x100003160
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x100003174
    _free((int64_t *)*(int64_t *)*v2);
    _free((int64_t *)*v2);
    _free((int64_t *)v1);
    return &g1;
}

// Address range: 0x1000031a0 - 0x100003284
int64_t function_1000031a0(void) {
    // 0x1000031a0
    int64_t v1; // 0x1000031a0
    int32_t v2 = v1;
    int32_t v3 = -v2; // 0x1000031bc
    if (v3 < 0 == (v2 & v3) < 0) {
        // 0x10000327c
        int64_t result; // 0x1000031a0
        return result;
    }
    int64_t * v4 = (int64_t *)(v1 + 8);
    int32_t v5 = 0;
    int32_t v6 = -v5; // 0x1000031dc
    int32_t v7 = v2; // 0x1000031e4
    int64_t v8; // 0x1000031f0
    int64_t v9; // 0x100003200
    int64_t * v10; // 0x1000031a0
    int32_t v11; // 0x10000325c
    int64_t v12; // 0x1000031f8
    int64_t result2; // 0x1000031a0
    if (v6 < 0 != (v5 & v6) < 0) {
        // 0x1000031ec
        v12 = 8 * (int64_t)v5;
        v11 = 0;
        v8 = *v4;
        v9 = 8 * (int64_t)v11;
        v10 = (int64_t *)(*(int64_t *)(v8 + v12) + v9);
        *v10 = *(int64_t *)(*(int64_t *)(v9 + v8) + v12);
        *(int64_t *)(*(int64_t *)(*v4 + v9) + v12) = *v10;
        v11++;
        while (v11 - v5 < 0 != ((v11 - v5 ^ v11) & (v11 ^ v5)) < 0) {
            // 0x1000031ec
            v8 = *v4;
            v9 = 8 * (int64_t)v11;
            v10 = (int64_t *)(*(int64_t *)(v8 + v12) + v9);
            *v10 = *(int64_t *)(*(int64_t *)(v9 + v8) + v12);
            *(int64_t *)(*(int64_t *)(*v4 + v9) + v12) = *v10;
            v11++;
        }
        // 0x1000031d4
        v7 = *(int32_t *)&result2;
    }
    int32_t v13 = v5 + 1; // 0x100003270
    while (v13 - v7 < 0 != ((v13 - v7 ^ v13) & (v7 ^ v13)) < 0) {
        // 0x1000031d4
        v5 = v13;
        v6 = -v5;
        if (v6 < 0 != (v5 & v6) < 0) {
            // 0x1000031ec
            v12 = 8 * (int64_t)v5;
            v11 = 0;
            v8 = *v4;
            v9 = 8 * (int64_t)v11;
            v10 = (int64_t *)(*(int64_t *)(v8 + v12) + v9);
            *v10 = *(int64_t *)(*(int64_t *)(v9 + v8) + v12);
            *(int64_t *)(*(int64_t *)(*v4 + v9) + v12) = *v10;
            v11++;
            while (v11 - v5 < 0 != ((v11 - v5 ^ v11) & (v11 ^ v5)) < 0) {
                // 0x1000031ec
                v8 = *v4;
                v9 = 8 * (int64_t)v11;
                v10 = (int64_t *)(*(int64_t *)(v8 + v12) + v9);
                *v10 = *(int64_t *)(*(int64_t *)(v9 + v8) + v12);
                *(int64_t *)(*(int64_t *)(*v4 + v9) + v12) = *v10;
                v11++;
            }
            // 0x1000031d4
            v7 = *(int32_t *)&result2;
        }
        // 0x10000326c
        v13 = v5 + 1;
    }
    // 0x10000327c
    return result2;
}

// Address range: 0x100003284 - 0x100003360
int64_t function_100003284(void) {
    // 0x100003284
    int64_t v1; // 0x100003284
    int32_t v2 = v1; // 0x100003298
    int64_t result = function_100003070(); // 0x1000032ac
    int32_t v3 = -v2; // 0x1000032c4
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003350
        return result;
    }
    int32_t v4 = v1; // 0x100003290
    int32_t v5 = -v4; // 0x1000032e4
    int32_t v6 = 0;
    int64_t v7; // 0x1000032fc
    int64_t v8; // 0x100003304
    int64_t v9; // 0x10000330c
    int64_t v10; // 0x10000331c
    int32_t v11; // 0x100003330
    if (v5 < 0 != (v5 & v4) < 0) {
        // 0x1000032f4
        v7 = v6;
        v8 = (8 * v1 & 0x7fffffff8) * v7 + v1;
        v11 = 0;
        v9 = 8 * (int64_t)v11;
        v10 = *(int64_t *)(*(int64_t *)(result + 8) + 8 * v7);
        *(int64_t *)(v10 + v9) = *(int64_t *)(v8 + v9);
        v11++;
        while (v11 - v4 < 0 != ((v11 - v4 ^ v11) & (v11 ^ v4)) < 0) {
            // 0x1000032f4
            v9 = 8 * (int64_t)v11;
            v10 = *(int64_t *)(*(int64_t *)(result + 8) + 8 * v7);
            *(int64_t *)(v10 + v9) = *(int64_t *)(v8 + v9);
            v11++;
        }
    }
    int32_t v12 = v6 + 1; // 0x100003344
    while (v12 - v2 < 0 != ((v12 - v2 ^ v12) & (v12 ^ v2)) < 0) {
        // 0x1000032dc
        v6 = v12;
        if (v5 < 0 != (v5 & v4) < 0) {
            // 0x1000032f4
            v7 = v6;
            v8 = (8 * v1 & 0x7fffffff8) * v7 + v1;
            v11 = 0;
            v9 = 8 * (int64_t)v11;
            v10 = *(int64_t *)(*(int64_t *)(result + 8) + 8 * v7);
            *(int64_t *)(v10 + v9) = *(int64_t *)(v8 + v9);
            v11++;
            while (v11 - v4 < 0 != ((v11 - v4 ^ v11) & (v11 ^ v4)) < 0) {
                // 0x1000032f4
                v9 = 8 * (int64_t)v11;
                v10 = *(int64_t *)(*(int64_t *)(result + 8) + 8 * v7);
                *(int64_t *)(v10 + v9) = *(int64_t *)(v8 + v9);
                v11++;
            }
        }
        // 0x100003340
        v12 = v6 + 1;
    }
    // 0x100003350
    return result;
}

// Address range: 0x100003360 - 0x1000034cc
int64_t function_100003360(void) {
    // 0x100003360
    int64_t v1; // 0x100003360
    int32_t * v2 = (int32_t *)(v1 + 4); // 0x100003378
    if (*v2 != (int32_t)v1) {
        // 0x1000034bc
        return 0;
    }
    int32_t v3 = v1;
    int64_t result = function_100003070(); // 0x1000033ac
    int32_t v4 = -v3; // 0x1000033c8
    if (v4 < 0 == (v3 & v4) < 0) {
        // 0x1000034bc
        return result;
    }
    int32_t * v5 = (int32_t *)(v1 + 4); // 0x1000033e8
    int32_t v6 = *v5;
    int32_t v7 = 0;
    int32_t v8 = -v6; // 0x1000033ec
    int32_t v9 = v3; // 0x1000033f4
    int32_t v10 = v6; // 0x1000033f4
    int32_t v11 = v6; // 0x1000033f4
    int32_t v12; // 0x100003360
    int32_t v13; // 0x100003360
    int32_t v14; // 0x1000033e8
    int32_t v15; // 0x100003360
    int32_t v16; // 0x100003360
    int64_t v17; // 0x100003360
    int32_t v18; // 0x100003410
    int32_t v19; // 0x100003490
    int32_t v20; // 0x1000033ec
    int64_t v21; // 0x10000344c
    int64_t v22; // 0x100003434
    float64_t v23; // 0x100003434
    float64_t v24; // 0x10000344c
    float64_t * v25; // 0x100003468
    int32_t v26; // 0x10000347c
    int32_t v27; // 0x10000340c
    int64_t v28; // 0x100003360
    if (v8 < 0 != (v6 & v8) < 0) {
        // 0x100003404
        v17 = 8 * (int64_t)v7;
        v15 = *v2;
        v16 = 0;
        v18 = -v15;
        v12 = v6;
        v13 = v15;
        if (v18 < 0 != (v15 & v18) < 0) {
            // 0x100003420
            v21 = 8 * (int64_t)v16;
            v26 = 0;
            v22 = 8 * (int64_t)v26;
            v23 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v17) + v22);
            v24 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v22) + v21);
            v25 = (float64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v17) + v21);
            *v25 = v23 * v24 + *v25;
            v26++;
            v27 = *v2;
            while (v26 - v27 < 0 != ((v26 - v27 ^ v26) & (v27 ^ v26)) < 0) {
                // 0x100003420
                v22 = 8 * (int64_t)v26;
                v23 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v17) + v22);
                v24 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v22) + v21);
                v25 = (float64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v17) + v21);
                *v25 = v23 * v24 + *v25;
                v26++;
                v27 = *v2;
            }
            // 0x100003404
            v12 = *v5;
            v13 = v27;
        }
        // 0x10000348c
        v15 = v13;
        v14 = v12;
        v19 = v16 + 1;
        v20 = v19 - v14;
        while (v20 < 0 != ((v20 ^ v19) & (v14 ^ v19)) < 0) {
            // 0x100003404
            v16 = v19;
            v18 = -v15;
            v12 = v14;
            v13 = v15;
            if (v18 < 0 != (v15 & v18) < 0) {
                // 0x100003420
                v21 = 8 * (int64_t)v16;
                v26 = 0;
                v22 = 8 * (int64_t)v26;
                v23 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v17) + v22);
                v24 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v22) + v21);
                v25 = (float64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v17) + v21);
                *v25 = v23 * v24 + *v25;
                v26++;
                v27 = *v2;
                while (v26 - v27 < 0 != ((v26 - v27 ^ v26) & (v27 ^ v26)) < 0) {
                    // 0x100003420
                    v22 = 8 * (int64_t)v26;
                    v23 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v17) + v22);
                    v24 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v22) + v21);
                    v25 = (float64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v17) + v21);
                    *v25 = v23 * v24 + *v25;
                    v26++;
                    v27 = *v2;
                }
                // 0x100003404
                v12 = *v5;
                v13 = v27;
            }
            // 0x10000348c
            v15 = v13;
            v14 = v12;
            v19 = v16 + 1;
            v20 = v19 - v14;
        }
        // 0x1000033e0
        v9 = *(int32_t *)&v28;
        v10 = v14;
        v11 = v14;
    }
    int32_t v29 = v7 + 1; // 0x1000034a4
    while (v29 - v9 < 0 != ((v29 - v9 ^ v29) & (v9 ^ v29)) < 0) {
        // 0x1000033e0
        v7 = v29;
        int32_t v30 = v11; // 0x1000033e8
        int32_t v31 = v10;
        v8 = -v30;
        v10 = v31;
        v11 = v30;
        if (v8 < 0 != (v30 & v8) < 0) {
            // 0x100003404
            v17 = 8 * (int64_t)v7;
            v15 = *v2;
            v16 = 0;
            v18 = -v15;
            v12 = v31;
            v13 = v15;
            if (v18 < 0 != (v15 & v18) < 0) {
                // 0x100003420
                v21 = 8 * (int64_t)v16;
                v26 = 0;
                v22 = 8 * (int64_t)v26;
                v23 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v17) + v22);
                v24 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v22) + v21);
                v25 = (float64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v17) + v21);
                *v25 = v23 * v24 + *v25;
                v26++;
                v27 = *v2;
                while (v26 - v27 < 0 != ((v26 - v27 ^ v26) & (v27 ^ v26)) < 0) {
                    // 0x100003420
                    v22 = 8 * (int64_t)v26;
                    v23 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v17) + v22);
                    v24 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v22) + v21);
                    v25 = (float64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v17) + v21);
                    *v25 = v23 * v24 + *v25;
                    v26++;
                    v27 = *v2;
                }
                // 0x100003404
                v12 = *v5;
                v13 = v27;
            }
            // 0x10000348c
            v15 = v13;
            v14 = v12;
            v19 = v16 + 1;
            v20 = v19 - v14;
            while (v20 < 0 != ((v20 ^ v19) & (v14 ^ v19)) < 0) {
                // 0x100003404
                v16 = v19;
                v18 = -v15;
                v12 = v14;
                v13 = v15;
                if (v18 < 0 != (v15 & v18) < 0) {
                    // 0x100003420
                    v21 = 8 * (int64_t)v16;
                    v26 = 0;
                    v22 = 8 * (int64_t)v26;
                    v23 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v17) + v22);
                    v24 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v22) + v21);
                    v25 = (float64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v17) + v21);
                    *v25 = v23 * v24 + *v25;
                    v26++;
                    v27 = *v2;
                    while (v26 - v27 < 0 != ((v26 - v27 ^ v26) & (v27 ^ v26)) < 0) {
                        // 0x100003420
                        v22 = 8 * (int64_t)v26;
                        v23 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v17) + v22);
                        v24 = *(float64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v22) + v21);
                        v25 = (float64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v17) + v21);
                        *v25 = v23 * v24 + *v25;
                        v26++;
                        v27 = *v2;
                    }
                    // 0x100003404
                    v12 = *v5;
                    v13 = v27;
                }
                // 0x10000348c
                v15 = v13;
                v14 = v12;
                v19 = v16 + 1;
                v20 = v19 - v14;
            }
            // 0x1000033e0
            v9 = *(int32_t *)&v28;
            v10 = v14;
            v11 = v14;
        }
        // 0x1000034a0
        v29 = v7 + 1;
    }
    // 0x1000034bc
    return result;
}

// Address range: 0x1000034cc - 0x100003600
int64_t function_1000034cc(void) {
    // 0x1000034cc
    int64_t v1; // 0x1000034cc
    int32_t v2 = v1; // 0x1000034dc
    int64_t result = function_100003070(); // 0x1000034f0
    int32_t v3 = -v2; // 0x100003508
    int32_t v4; // 0x1000034cc
    int64_t v5; // 0x1000034cc
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x1000034cc
        v4 = v1;
    } else {
        int32_t v6 = 0; // 0x10000353c
        int64_t v7 = 8 * (int64_t)v6; // 0x100003524
        *(float64_t *)(*(int64_t *)(v7 + *(int64_t *)(result + 8)) + v7) = 1.0;
        v6++;
        while (v6 - v2 < 0 != ((v6 - v2 ^ v6) & (v6 ^ v2)) < 0) {
            // 0x100003518
            v7 = 8 * (int64_t)v6;
            *(float64_t *)(*(int64_t *)(v7 + *(int64_t *)(result + 8)) + v7) = 1.0;
            v6++;
        }
        // 0x100003500
        v4 = *(int32_t *)&v5;
    }
    int32_t v8 = v2 - v4; // 0x100003560
    if (v8 < 0 == ((v8 ^ v2) & (v4 ^ v2)) < 0) {
        // 0x1000035f0
        return result;
    }
    int32_t * v9 = (int32_t *)(v1 + 4); // 0x100003584
    int32_t v10 = *v9; // 0x100003584
    int32_t v11 = v2 - v10; // 0x100003588
    int32_t v12 = v4; // 0x100003590
    int32_t v13 = v10; // 0x100003590
    int64_t v14; // 0x1000035a4
    int64_t v15; // 0x1000035ac
    int64_t v16; // 0x1000034cc
    int32_t v17; // 0x1000035d0
    int32_t v18; // 0x100003584
    if (v11 < 0 != ((v11 ^ v2) & (v10 ^ v2)) < 0) {
        // 0x100003598
        v14 = 8 * (int64_t)v2;
        v17 = v2;
        v15 = 8 * (int64_t)v17;
        v16 = *(int64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v14) + v15);
        *(int64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v14) + v15) = v16;
        v17++;
        v18 = *v9;
        while (v17 - v18 < 0 != ((v17 - v18 ^ v17) & (v18 ^ v17)) < 0) {
            // 0x100003598
            v15 = 8 * (int64_t)v17;
            v16 = *(int64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v14) + v15);
            *(int64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v14) + v15) = v16;
            v17++;
            v18 = *v9;
        }
        // 0x1000035e0
        v12 = *(int32_t *)&v5;
        v13 = v18;
    }
    int32_t v19 = v2 + 1; // 0x1000035e4
    while (v19 - v12 < 0 != ((v19 - v12 ^ v19) & (v12 ^ v19)) < 0) {
        int32_t v20 = v19;
        v10 = v13;
        v11 = v2 - v10;
        v13 = v10;
        if (v11 < 0 != ((v11 ^ v2) & (v10 ^ v2)) < 0) {
            // 0x100003598
            v14 = 8 * (int64_t)v20;
            v17 = v2;
            v15 = 8 * (int64_t)v17;
            v16 = *(int64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v14) + v15);
            *(int64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v14) + v15) = v16;
            v17++;
            v18 = *v9;
            while (v17 - v18 < 0 != ((v17 - v18 ^ v17) & (v18 ^ v17)) < 0) {
                // 0x100003598
                v15 = 8 * (int64_t)v17;
                v16 = *(int64_t *)(*(int64_t *)(*(int64_t *)(v1 + 8) + v14) + v15);
                *(int64_t *)(*(int64_t *)(*(int64_t *)(result + 8) + v14) + v15) = v16;
                v17++;
                v18 = *v9;
            }
            // 0x1000035e0
            v12 = *(int32_t *)&v5;
            v13 = v18;
        }
        // 0x1000035e0
        v19 = v20 + 1;
    }
    // 0x1000035f0
    return result;
}

// Address range: 0x100003600 - 0x100003684
int64_t function_100003600(void) {
    // 0x100003600
    int64_t result; // 0x100003600
    int32_t v1 = result; // 0x100003614
    int32_t v2 = -v1; // 0x100003628
    if (v2 < 0 == (v2 & v1) < 0) {
        // 0x100003678
        return result;
    }
    int32_t v3 = 0; // 0x100003630
    int64_t v4 = 8 * (int64_t)v3; // 0x100003640
    float64_t v5 = *(float64_t *)(v4 + result); // 0x100003640
    float64_t v6; // 0x100003600
    *(float64_t *)(v4 + result) = v5 + v6 * *(float64_t *)(v4 + result);
    v3++;
    while (v3 - v1 < 0 != ((v3 - v1 ^ v3) & (v3 ^ v1)) < 0) {
        // 0x100003638
        v4 = 8 * (int64_t)v3;
        v5 = *(float64_t *)(v4 + result);
        float64_t v7; // bp-24, 0x100003600
        *(float64_t *)(v4 + result) = v5 + v7 * *(float64_t *)(v4 + result);
        v3++;
    }
    // 0x100003678
    return result;
}

// Address range: 0x100003684 - 0x1000037b8
int64_t function_100003684(void) {
    // 0x100003684
    int64_t v1; // 0x100003684
    int32_t v2 = v1; // 0x100003694
    int64_t result = function_100003070(); // 0x1000036a0
    int32_t v3 = -v2;
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x1000037a8
        return result;
    }
    int64_t * v4 = (int64_t *)(result + 8);
    int32_t v5 = 0; // 0x100003740
    int64_t v6 = 8 * (int64_t)v5; // 0x1000036f0
    float64_t * v7 = (float64_t *)(v6 + v1); // 0x1000036f0
    int32_t v8 = 0; // 0x10000372c
    int64_t v9 = 8 * (int64_t)v8; // 0x100003704
    int64_t v10 = *(int64_t *)(*v4 + v6); // 0x100003718
    *(float64_t *)(v10 + v9) = -2.0 * *v7 * *(float64_t *)(v9 + v1);
    v8++;
    while (v8 - v2 < 0 != ((v8 - v2 ^ v8) & (v8 ^ v2)) < 0) {
        // 0x1000036e8
        v9 = 8 * (int64_t)v8;
        v10 = *(int64_t *)(*v4 + v6);
        *(float64_t *)(v10 + v9) = -2.0 * *v7 * *(float64_t *)(v9 + v1);
        v8++;
    }
    // 0x10000373c
    v5++;
    int32_t v11 = v5 - v2; // 0x1000036b8
    int32_t v12 = 0; // 0x1000036c0
    while (v11 < 0 != ((v11 ^ v5) & (v5 ^ v2)) < 0) {
        // 0x1000036e8
        v6 = 8 * (int64_t)v5;
        v7 = (float64_t *)(v6 + v1);
        v8 = 0;
        v9 = 8 * (int64_t)v8;
        v10 = *(int64_t *)(*v4 + v6);
        *(float64_t *)(v10 + v9) = -2.0 * *v7 * *(float64_t *)(v9 + v1);
        v8++;
        while (v8 - v2 < 0 != ((v8 - v2 ^ v8) & (v8 ^ v2)) < 0) {
            // 0x1000036e8
            v9 = 8 * (int64_t)v8;
            v10 = *(int64_t *)(*v4 + v6);
            *(float64_t *)(v10 + v9) = -2.0 * *v7 * *(float64_t *)(v9 + v1);
            v8++;
        }
        // 0x10000373c
        v5++;
        v11 = v5 - v2;
        v12 = 0;
    }
    int64_t v13 = 8 * (int64_t)v12; // 0x100003778
    float64_t * v14 = (float64_t *)(*(int64_t *)(v13 + *v4) + v13); // 0x100003784
    *v14 = *v14 + 1.0;
    int32_t v15 = v12 + 1; // 0x10000379c
    int32_t v16 = v15 - v2; // 0x10000375c
    v12 = v15;
    while (v16 < 0 != ((v16 ^ v15) & (v15 ^ v2)) < 0) {
        // 0x10000376c
        v13 = 8 * (int64_t)v12;
        v14 = (float64_t *)(*(int64_t *)(v13 + *v4) + v13);
        *v14 = *v14 + 1.0;
        v15 = v12 + 1;
        v16 = v15 - v2;
        v12 = v15;
    }
    // 0x1000037a8
    return result;
}

// Address range: 0x1000037b8 - 0x100003834
int64_t function_1000037b8(void) {
    // 0x1000037b8
    int64_t result; // 0x1000037b8
    int32_t v1 = result; // 0x1000037c0
    int32_t v2 = 0; // 0x1000037d0
    while (v2 - v1 < 0 != ((v2 - v1 ^ v2) & (v2 ^ v1)) < 0) {
        // 0x1000037d4
        v2++;
    }
    // 0x100003824
    return result;
}

// Address range: 0x100003834 - 0x1000038a8
int64_t function_100003834(void) {
    // 0x100003834
    int64_t result; // 0x100003834
    int32_t v1 = result; // 0x100003844
    int32_t v2 = -v1; // 0x100003858
    if (v2 < 0 == (v2 & v1) < 0) {
        // 0x10000389c
        return result;
    }
    int32_t v3 = 0; // 0x100003860
    int64_t v4 = 8 * (int64_t)v3; // 0x100003870
    float64_t v5; // 0x100003834
    *(float64_t *)(v4 + result) = *(float64_t *)(v4 + result) / v5;
    v3++;
    while (v3 - v1 < 0 != ((v3 - v1 ^ v3) & (v3 ^ v1)) < 0) {
        // 0x100003868
        v4 = 8 * (int64_t)v3;
        float64_t v6; // bp-16, 0x100003834
        *(float64_t *)(v4 + result) = *(float64_t *)(v4 + result) / v6;
        v3++;
    }
    // 0x10000389c
    return result;
}

// Address range: 0x1000038a8 - 0x100003920
int64_t function_1000038a8(void) {
    // 0x1000038a8
    int64_t result; // 0x1000038a8
    int32_t v1 = result;
    int32_t v2 = -v1; // 0x1000038cc
    if (v2 < 0 == (v1 & v2) < 0) {
        // 0x100003914
        return result;
    }
    int64_t v3 = 0x100000000 * result >> 29; // 0x1000038f0
    int32_t v4 = 0; // 0x100003908
    int64_t v5 = *(int64_t *)(result + 8); // 0x1000038e0
    int64_t v6 = 8 * (int64_t)v4; // 0x1000038e8
    *(int64_t *)(v6 + result) = *(int64_t *)(*(int64_t *)(v6 + v5) + v3);
    v4++;
    int64_t v7; // 0x1000038a8
    int32_t v8 = *(int32_t *)&v7; // 0x1000038c8
    while (v4 - v8 < 0 != ((v4 - v8 ^ v4) & (v8 ^ v4)) < 0) {
        // 0x1000038dc
        v5 = *(int64_t *)(result + 8);
        v6 = 8 * (int64_t)v4;
        *(int64_t *)(v6 + result) = *(int64_t *)(*(int64_t *)(v6 + v5) + v3);
        v4++;
        v8 = *(int32_t *)&v7;
    }
    // 0x100003914
    return result;
}

// Address range: 0x100003920 - 0x1000039f0
int64_t function_100003920(void) {
    // 0x100003920
    int64_t v1; // 0x100003920
    int32_t v2 = v1;
    int32_t v3 = -v2; // 0x100003944
    if (v3 < 0 == (v2 & v3) < 0) {
        // 0x1000039d8
        return _printf("\n");
    }
    int32_t * v4 = (int32_t *)(v1 + 4); // 0x100003964
    int32_t v5 = 0; // 0x1000039cc
    int32_t v6 = *v4; // 0x100003964
    int32_t v7 = -v6; // 0x100003968
    int32_t v8; // 0x100003920
    int32_t v9; // 0x1000039ac
    int32_t v10; // 0x100003964
    int32_t v11; // 0x100003968
    int128_t v12; // 0x100003920
    if (v7 < 0 != (v6 & v7) < 0) {
        _printf(" %8.3f", (float64_t)(int64_t)v12);
        v9 = 1;
        v10 = *v4;
        v11 = v9 - v10;
        v8 = v9;
        while (v11 < 0 != ((v11 ^ v9) & (v10 ^ v9)) < 0) {
            // 0x100003978
            _printf(" %8.3f", (float64_t)(int64_t)v12);
            v9 = v8 + 1;
            v10 = *v4;
            v11 = v9 - v10;
            v8 = v9;
        }
    }
    // 0x1000039b8
    _printf("\n");
    v5++;
    while (v5 - v2 < 0 != ((v5 - v2 ^ v5) & (v5 ^ v2)) < 0) {
        // 0x10000395c
        v6 = *v4;
        v7 = -v6;
        if (v7 < 0 != (v6 & v7) < 0) {
            _printf(" %8.3f", (float64_t)(int64_t)v12);
            v9 = 1;
            v10 = *v4;
            v11 = v9 - v10;
            v8 = v9;
            while (v11 < 0 != ((v11 ^ v9) & (v10 ^ v9)) < 0) {
                // 0x100003978
                _printf(" %8.3f", (float64_t)(int64_t)v12);
                v9 = v8 + 1;
                v10 = *v4;
                v11 = v9 - v10;
                v8 = v9;
            }
        }
        // 0x1000039b8
        _printf("\n");
        v5++;
    }
    // 0x1000039d8
    return _printf("\n");
}

// Address range: 0x1000039f0 - 0x100003a44
int64_t function_1000039f0(int64_t a1, int64_t * a2, int64_t * a3) {
    // 0x1000039f0
    return ___chkstk_darwin();
}

// Address range: 0x100003a44 - 0x100003e70
int64_t function_100003a44(void) {
    // 0x100003a44
    int64_t v1; // 0x100003a44
    int64_t v2 = v1;
    int64_t v3; // 0x100003a44
    int64_t v4 = (int64_t)&v3 - *(int64_t *)(v2 - 128); // 0x100003a4c
    int64_t * v5 = (int64_t *)(v2 - 120); // 0x100003a54
    *v5 = v4;
    int64_t * v6 = (int64_t *)(v2 - 16); // 0x100003a5c
    int64_t * v7 = (int64_t *)(v2 - 56); // 0x100003a60
    *v7 = *v6;
    int32_t * v8 = (int32_t *)(v2 - 68); // 0x100003a64
    *v8 = 0;
    int32_t v9 = *(int32_t *)(*v6 + 4); // 0x100003a74
    int32_t v10 = -v9; // 0x100003a78
    int32_t * v11 = (int32_t *)(v2 - 132); // 0x100003a84
    *v11 = 0;
    if (v10 < 0 != (v9 & v10) < 0) {
        int32_t v12 = *v8; // 0x100003a90
        int32_t v13 = *(int32_t *)*v6 - 1; // 0x100003a9c
        int32_t v14 = v12 - v13; // 0x100003aa0
        *v11 = (int32_t)(v14 < 0 != ((v14 ^ v12) & (v13 ^ v12)) < 0);
        if (v14 < 0 != ((v14 ^ v12) & (v13 ^ v12)) < 0) {
            uint32_t v15 = *(int32_t *)*v6; // 0x100003ac0
            *(int64_t *)(v2 - 80) = v4;
            *(int64_t *)(v2 - 168) = 8 * (int64_t)v15 + 15 & 0xffffffff0;
            return ___chkstk_darwin();
        }
    }
    // 0x100003cf4
    function_100003160();
    int64_t * v16 = (int64_t *)(v2 - 32); // 0x100003d04
    *(int64_t *)*v16 = *(int64_t *)*v5;
    int64_t v17 = function_100003360(); // 0x100003d14
    int64_t * v18 = (int64_t *)(v2 - 24); // 0x100003d18
    *(int64_t *)*v18 = v17;
    int32_t * v19 = (int32_t *)(v2 - 112); // 0x100003d24
    int32_t * v20 = (int32_t *)(v2 - 172); // 0x100003d44
    int64_t * v21 = (int64_t *)(v2 - 64);
    *v19 = 1;
    int32_t v22 = *(int32_t *)(*v6 + 4); // 0x100003d34
    int32_t v23 = 1 - v22; // 0x100003d38
    *v20 = 0;
    if (v23 < 0 != (v23 & v22) < 0) {
        int32_t v24 = *v19; // 0x100003d50
        int32_t v25 = *(int32_t *)*v6 - 1; // 0x100003d5c
        int32_t v26 = v24 - v25; // 0x100003d60
        *v20 = (int32_t)(v26 < 0 != ((v26 ^ v24) & (v25 ^ v24)) < 0);
        while (v26 < 0 != ((v26 ^ v24) & (v25 ^ v24)) < 0) {
            int64_t v27 = function_100003360(); // 0x100003d90
            *v21 = v27;
            int32_t v28 = *v19; // 0x100003d98
            int32_t v29 = v28 - 1; // 0x100003d9c
            int64_t v30 = v27; // 0x100003da4
            if (v29 != 0 && v29 < 0 == (v28 & -v28) < 0) {
                // 0x100003dac
                function_100003160();
                v30 = *v21;
            }
            // 0x100003dbc
            *(int64_t *)*v16 = v30;
            function_100003160();
            int32_t v31 = *v19 + 1; // 0x100003de0
            *v19 = v31;
            int32_t v32 = *(int32_t *)(*v6 + 4); // 0x100003d34
            int32_t v33 = v31 - v32; // 0x100003d38
            *v20 = 0;
            if (v33 < 0 == ((v33 ^ v31) & (v32 ^ v31)) < 0) {
                // break -> 0x100003dec
                break;
            }
            v24 = *v19;
            v25 = *(int32_t *)*v6 - 1;
            v26 = v24 - v25;
            *v20 = (int32_t)(v26 < 0 != ((v26 ^ v24) & (v25 ^ v24)) < 0);
        }
    }
    // 0x100003dec
    function_100003160();
    *v7 = function_100003360();
    function_100003160();
    *(int64_t *)*v18 = *v7;
    int64_t v34 = function_1000031a0(); // 0x100003e2c
    *(int64_t *)(v2 - 184) = *(int64_t *)(v2 - 40);
    int64_t result = v34; // 0x100003e50
    if (*(int64_t *)*(int64_t *)0x100004010 != *(int64_t *)(v2 - 8)) {
        // 0x100003e58
        result = ___stack_chk_fail(v34);
    }
    // 0x100003e5c
    return result;
}

// Address range: 0x100003e70 - 0x100003f2c
int64_t entry_point(void) {
    int64_t v1 = function_100003284(); // 0x100003e98
    int64_t v2; // bp-32, 0x100003e70
    int64_t v3; // bp-40, 0x100003e70
    function_1000039f0(v1, &v2, &v3);
    _puts("Q");
    function_100003920();
    _puts("R");
    function_100003920();
    function_100003360();
    _puts("Q * R");
    function_100003920();
    function_100003160();
    function_100003160();
    function_100003160();
    function_100003160();
    return 0;
}

// Address range: 0x100003f2c - 0x100003f38
int64_t function_100003f2c(int64_t a1) {
    // 0x100003f2c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f38 - 0x100003f44
int64_t * function_100003f38(int32_t nmemb, int32_t size) {
    // 0x100003f38
    return _calloc(nmemb, size);
}

// Address range: 0x100003f44 - 0x100003f50
void function_100003f44(int64_t * ptr) {
    // 0x100003f44
    _free(ptr);
}

// Address range: 0x100003f50 - 0x100003f5c
int64_t * function_100003f50(int32_t size) {
    // 0x100003f50
    return _malloc(size);
}

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(char * format, ...) {
    // 0x100003f5c
    return _printf(format);
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(char * s) {
    // 0x100003f68
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 21
