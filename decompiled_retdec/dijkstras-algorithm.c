//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003390(void);
int64_t function_1000034e4(void);
int64_t function_100003624(void);
int64_t function_1000036ac(void);
int64_t function_100003824(void);
int64_t function_1000038fc(void);
int64_t function_100003a68(void);
int64_t function_100003ca0(void);
int64_t * function_100003f5c(int32_t nmemb, int32_t size);
int64_t * function_100003f68(int32_t size);
int32_t function_100003f74(char * format, ...);
int64_t * function_100003f80(int64_t * ptr, int32_t size);

// ------- Dynamically Linked Functions Without Header --------

int64_t * _calloc(int32_t a1, int32_t a2);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int64_t * _realloc(int64_t * a1, int32_t a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003390 - 0x1000034e4
int64_t function_100003390(void) {
    // 0x100003390
    int64_t v1; // 0x100003390
    int32_t v2 = v1; // 0x1000033a0
    int32_t * v3 = (int32_t *)(v1 + 12); // 0x1000033a8
    int32_t v4 = *v3; // 0x1000033a8
    int32_t v5 = v2 + 1; // 0x1000033b0
    int32_t v6 = v4 - v5; // 0x1000033b4
    int64_t v7; // 0x100003390
    if (v6 < 0 != ((v6 ^ v4) & (v4 ^ v5)) < 0) {
        int32_t v8 = 2 * v4; // 0x1000033d0
        int32_t v9 = v2 - v8; // 0x1000033d0
        int32_t v10 = v9 < 0 == ((v9 ^ v2) & (v8 ^ v2)) < 0 ? v2 + 4 : v8;
        int64_t * v11 = (int64_t *)v1; // 0x10000341c
        int64_t v12 = (int64_t)_realloc(v11, 8 * v10); // 0x10000341c
        *v11 = v12;
        int32_t v13 = *v3; // 0x10000342c
        int32_t v14 = v13 - v10; // 0x100003440
        if (v14 < 0 != ((v14 ^ v13) & (v13 ^ v10)) < 0) {
            *(int64_t *)(8 * (int64_t)v13 + v12) = 0;
            int32_t v15 = v13 + 1; // 0x10000346c
            int32_t v16 = v15 - v10; // 0x100003440
            int32_t v17 = v15; // 0x100003448
            while (v16 < 0 != ((v16 ^ v15) & (v15 ^ v10)) < 0) {
                // 0x100003450
                *(int64_t *)(8 * (int64_t)v17 + v12) = 0;
                v15 = v17 + 1;
                v16 = v15 - v10;
                v17 = v15;
            }
        }
        // 0x100003478
        *v3 = v10;
        v7 = v12;
    }
    int64_t v18 = 0x100000000 * v1 >> 29; // 0x100003494
    int64_t result = v7; // 0x1000034a0
    if (*(int64_t *)(v7 + v18) == 0) {
        // 0x1000034a8
        result = (int64_t)_calloc(1, 32);
        *(int64_t *)(v18 + result) = result;
        int32_t * v19 = (int32_t *)(v1 + 8); // 0x1000034c8
        *v19 = *v19 + 1;
    }
    // 0x1000034d8
    return result;
}

// Address range: 0x1000034e4 - 0x100003624
int64_t function_1000034e4(void) {
    // 0x1000034e4
    function_100003390();
    int64_t v1; // 0x1000034e4
    int64_t v2 = *(int64_t *)(function_100003390() + (0x100000000 * v1 - 0x6100000000 >> 29)); // 0x10000353c
    int32_t * v3 = (int32_t *)(v2 + 8); // 0x100003548
    int32_t v4 = *v3; // 0x100003548
    int32_t * v5 = (int32_t *)(v2 + 12); // 0x100003550
    int32_t v6 = *v5; // 0x100003550
    int32_t v7 = v4 - v6; // 0x100003554
    int64_t * v8; // 0x1000034e4
    if (v7 < 0 == ((v7 ^ v4) & (v6 ^ v4)) < 0) {
        int32_t v9 = v6 == 0 ? 4 : 2 * v6;
        *v5 = v9;
        int64_t * v10 = (int64_t *)v2;
        *v10 = (int64_t)_realloc((int64_t *)*v10, 8 * v9);
        v8 = v10;
    } else {
        // 0x1000034e4
        v8 = (int64_t *)v2;
    }
    int64_t * v11 = _calloc(1, 8); // 0x1000035d4
    int64_t result = (int64_t)v11; // 0x1000035d4
    *(int32_t *)v11 = (int32_t)v1 - 97;
    *(int32_t *)(result + 4) = (int32_t)v1;
    int32_t v12 = *v3; // 0x100003604
    *v3 = v12 + 1;
    *(int64_t *)(8 * (int64_t)v12 + *v8) = result;
    return result;
}

// Address range: 0x100003624 - 0x1000036ac
int64_t function_100003624(void) {
    // 0x100003624
    int64_t v1; // 0x100003624
    int32_t v2 = v1; // 0x100003630
    int64_t * v3 = _calloc(1, 32); // 0x10000363c
    int64_t result = (int64_t)v3; // 0x10000363c
    int32_t v4 = v2 + 1; // 0x100003648
    *v3 = (int64_t)_calloc(v4, 4);
    *(int64_t *)(result + 8) = (int64_t)_calloc(v4, 4);
    *(int64_t *)(result + 16) = (int64_t)_calloc(v2, 4);
    return result;
}

// Address range: 0x1000036ac - 0x100003824
int64_t function_1000036ac(void) {
    // 0x1000036ac
    int64_t result; // 0x1000036ac
    int64_t * v1 = (int64_t *)(result + 16); // 0x1000036c0
    int64_t v2 = 0x100000000 * result >> 30; // 0x1000036c8
    int32_t v3 = *(int32_t *)(*v1 + v2); // 0x1000036c8
    int32_t v4 = v3; // 0x1000036d4
    if (v3 == 0) {
        int32_t * v5 = (int32_t *)(result + 24); // 0x1000036e0
        v4 = *v5 + 1;
        *v5 = v4;
    }
    int32_t v6 = result; // 0x1000036b8
    int32_t v7 = v4;
    int64_t * v8 = (int64_t *)(result + 8);
    int32_t v9 = v7 - 1; // 0x10000372c
    int32_t v10 = v7; // 0x100003734
    if (v9 != 0 && v9 < 0 == (v7 & -v7) < 0) {
        int32_t v11 = v7;
        int32_t v12 = v11 / 2;
        int64_t v13 = 4 * (int64_t)v12; // 0x100003748
        int32_t v14 = *(int32_t *)(v13 + *v8); // 0x100003748
        int32_t v15 = v14 - v6; // 0x100003750
        v10 = v11;
        while (v15 < 0 == ((v15 ^ v14) & (v14 ^ v6)) < 0) {
            int64_t v16 = 4 * (int64_t)v11; // 0x100003780
            int32_t * v17 = (int32_t *)(v16 + result); // 0x100003780
            *v17 = *(int32_t *)(v13 + result);
            int64_t v18 = *v8; // 0x100003788
            *(int32_t *)(v18 + v16) = *(int32_t *)(v18 + v13);
            *(int32_t *)(4 * (int64_t)*v17 + *v1) = v11;
            v10 = v12;
            if ((v11 & -2) == 2 || v11 < 2 != (v12 & -v12) < 0) {
                // break -> 0x1000037e0
                break;
            }
            v11 = v12;
            v12 = v11 / 2;
            v13 = 4 * (int64_t)v12;
            v14 = *(int32_t *)(v13 + *v8);
            v15 = v14 - v6;
            v10 = v11;
        }
    }
    int64_t v19 = 4 * (int64_t)v10; // 0x1000037f0
    *(int32_t *)(v19 + result) = (int32_t)result;
    *(int32_t *)(*v8 + v19) = v6;
    *(int32_t *)(*v1 + v2) = v10;
    return result;
}

// Address range: 0x100003824 - 0x1000038fc
int64_t function_100003824(void) {
    // 0x100003824
    int64_t v1; // 0x100003824
    int32_t v2 = v1; // 0x10000382c
    int32_t v3 = v1; // 0x100003830
    int32_t v4 = *(int32_t *)(v1 + 24); // 0x100003848
    int32_t v5 = v3 - v4; // 0x10000384c
    int32_t v6 = v2; // 0x100003854
    if (v5 == 0 || v5 < 0 != ((v5 ^ v3) & (v4 ^ v3)) < 0) {
        int64_t v7 = *(int64_t *)(v1 + 8); // 0x100003860
        int32_t v8 = *(int32_t *)(v7 + (0x100000000 * v1 >> 30)); // 0x100003868
        int32_t v9 = *(int32_t *)(v7 + (0x100000000 * v1 >> 30)); // 0x100003878
        int32_t v10 = v8 - v9; // 0x10000387c
        v6 = v10 < 0 == ((v10 ^ v8) & (v9 ^ v8)) < 0 ? v2 : v3;
    }
    int32_t v11 = v1; // 0x100003834
    int32_t v12 = v11 - v4; // 0x1000038a4
    int32_t result = v6; // 0x1000038ac
    if (v12 == 0 || v12 < 0 != ((v12 ^ v11) & (v4 ^ v11)) < 0) {
        int64_t v13 = *(int64_t *)(v1 + 8); // 0x1000038b8
        int32_t v14 = *(int32_t *)(v13 + (0x100000000 * v1 >> 30)); // 0x1000038c0
        int32_t v15 = *(int32_t *)(v13 + 4 * (int64_t)v6); // 0x1000038d0
        int32_t v16 = v14 - v15; // 0x1000038d4
        result = v16 < 0 == ((v16 ^ v14) & (v15 ^ v14)) < 0 ? v6 : v11;
    }
    // 0x1000038f0
    return result;
}

// Address range: 0x1000038fc - 0x100003a68
int64_t function_1000038fc(void) {
    int64_t v1 = function_100003824(); // 0x10000394c
    int32_t v2 = v1; // 0x100003950
    int64_t v3; // 0x1000038fc
    int32_t * v4 = (int32_t *)(v3 + 24); // 0x10000395c
    int64_t * v5 = (int64_t *)(v3 + 8);
    int64_t * v6 = (int64_t *)(v3 + 16);
    int32_t v7 = 1; // 0x100003968
    int64_t v8 = v1; // 0x100003968
    if (*v4 != v2) {
        int32_t v9 = 1;
        int32_t v10 = v2;
        int64_t v11 = 0x100000000 * v1 >> 30; // 0x100003980
        int64_t v12 = 4 * (int64_t)v9; // 0x100003990
        int32_t * v13 = (int32_t *)(v12 + v1); // 0x100003990
        *v13 = *(int32_t *)(v11 + v1);
        int64_t v14 = *v5; // 0x100003998
        *(int32_t *)(v14 + v12) = *(int32_t *)(v14 + v11);
        *(int32_t *)(4 * (int64_t)*v13 + *v6) = v9;
        int64_t v15 = function_100003824(); // 0x10000394c
        int32_t v16 = v15; // 0x100003950
        v7 = v10;
        v8 = v15;
        while (*v4 != v16) {
            // 0x100003974
            v9 = v10;
            v10 = v16;
            v11 = 0x100000000 * v15 >> 30;
            v12 = 4 * (int64_t)v9;
            v13 = (int32_t *)(v12 + v15);
            *v13 = *(int32_t *)(v11 + v15);
            v14 = *v5;
            *(int32_t *)(v14 + v12) = *(int32_t *)(v14 + v11);
            *(int32_t *)(4 * (int64_t)*v13 + *v6) = v9;
            v15 = function_100003824();
            v16 = v15;
            v7 = v10;
            v8 = v15;
        }
    }
    int64_t v17 = v8;
    int64_t v18 = 4 * (int64_t)v7; // 0x100003a00
    int32_t * v19 = (int32_t *)(v18 + v17); // 0x100003a00
    *v19 = *(int32_t *)((0x100000000 * v17 >> 30) + v17);
    int64_t v20 = *v5; // 0x100003a08
    *(int32_t *)(v20 + v18) = *(int32_t *)(4 * (int64_t)*v4 + v20);
    *(int32_t *)(4 * (int64_t)*v19 + *v6) = v7;
    *v4 = *v4 - 1;
    return (int64_t)*(int32_t *)(v3 + 4);
}

// Address range: 0x100003a68 - 0x100003ca0
int64_t function_100003a68(void) {
    // 0x100003a68
    int64_t v1; // 0x100003a68
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x100003aa8
    int32_t v3 = *v2; // 0x100003aa8
    int32_t v4 = -v3; // 0x100003aac
    int32_t v5 = 0; // 0x100003ab4
    if (v4 < 0 != (v3 & v4) < 0) {
        int64_t v6 = *(int64_t *)(8 * (int64_t)v5 + v1); // 0x100003ac8
        *(int32_t *)(v6 + 16) = 0x7fffffff;
        *(int32_t *)(v6 + 20) = 0;
        *(int32_t *)(v6 + 24) = 0;
        v5++;
        int32_t v7 = *v2; // 0x100003aa8
        while (v5 - v7 < 0 != ((v5 - v7 ^ v5) & (v7 ^ v5)) < 0) {
            // 0x100003abc
            v6 = *(int64_t *)(8 * (int64_t)v5 + v1);
            *(int32_t *)(v6 + 16) = 0x7fffffff;
            *(int32_t *)(v6 + 20) = 0;
            *(int32_t *)(v6 + 24) = 0;
            v5++;
            v7 = *v2;
        }
    }
    // 0x100003b00
    *(int32_t *)(*(int64_t *)((0x100000000 * v1 - 0x6100000000 >> 29) + v1) + 16) = 0;
    int64_t v8 = function_100003624(); // 0x100003b24
    int64_t result = function_1000036ac(); // 0x100003b3c
    if (*(int32_t *)(v8 + 24) == 0) {
        // 0x100003c94
        return result;
    }
    int64_t v9 = function_1000038fc(); // 0x100003b60
    int32_t v10 = v9; // 0x100003b64
    int64_t result2 = v9; // 0x100003b78
    while ((int32_t)v1 - 97 != v10) {
        int64_t v11 = *(int64_t *)((0x100000000 * v9 >> 29) + v9); // 0x100003b90
        *(int32_t *)(v11 + 24) = 1;
        int32_t * v12 = (int32_t *)(v11 + 8); // 0x100003bb4
        int32_t v13 = *v12; // 0x100003bb4
        int32_t v14 = -v13; // 0x100003bb8
        int64_t v15 = v9; // 0x100003bc0
        if (v14 < 0 != (v13 & v14) < 0) {
            int32_t * v16 = (int32_t *)(v11 + 16);
            int32_t v17 = 0; // 0x100003c84
            int64_t v18 = v9;
            int32_t v19 = v13;
            int64_t v20 = *(int64_t *)(*(int64_t *)v11 + 8 * (int64_t)v17); // 0x100003bd4
            int64_t v21 = *(int64_t *)(8 * (int64_t)*(int32_t *)v20 + v18); // 0x100003bec
            int32_t v22 = v19; // 0x100003c04
            int64_t v23 = v18; // 0x100003c04
            int32_t * v24; // 0x100003c18
            int32_t v25; // 0x100003c1c
            int32_t * v26; // 0x100003c24
            int32_t v27; // 0x100003c24
            int32_t v28; // 0x100003c28
            int64_t v29; // 0x100003c74
            if (*(int32_t *)(v21 + 24) == 0) {
                // 0x100003c0c
                v24 = (int32_t *)(v20 + 4);
                v25 = *v24 + *v16;
                v26 = (int32_t *)(v21 + 16);
                v27 = *v26;
                v28 = v25 - v27;
                v22 = v19;
                v23 = v18;
                if (v28 == 0 || v28 < 0 != ((v28 ^ v25) & (v25 ^ v27)) < 0) {
                    // 0x100003c38
                    *(int32_t *)(v21 + 20) = v10;
                    *v26 = *v24 + *v16;
                    v29 = function_1000036ac();
                    v22 = *v12;
                    v23 = v29;
                }
            }
            int64_t v30 = v23;
            int32_t v31 = v22; // 0x100003bb4
            v17++;
            int32_t v32 = v17 - v31; // 0x100003bb8
            v15 = v30;
            while (v32 < 0 != ((v32 ^ v17) & (v31 ^ v17)) < 0) {
                // 0x100003bc8
                v18 = v30;
                v19 = v31;
                v20 = *(int64_t *)(*(int64_t *)v11 + 8 * (int64_t)v17);
                v21 = *(int64_t *)(8 * (int64_t)*(int32_t *)v20 + v18);
                v22 = v19;
                v23 = v18;
                if (*(int32_t *)(v21 + 24) == 0) {
                    // 0x100003c0c
                    v24 = (int32_t *)(v20 + 4);
                    v25 = *v24 + *v16;
                    v26 = (int32_t *)(v21 + 16);
                    v27 = *v26;
                    v28 = v25 - v27;
                    v22 = v19;
                    v23 = v18;
                    if (v28 == 0 || v28 < 0 != ((v28 ^ v25) & (v25 ^ v27)) < 0) {
                        // 0x100003c38
                        *(int32_t *)(v21 + 20) = v10;
                        *v26 = *v24 + *v16;
                        v29 = function_1000036ac();
                        v22 = *v12;
                        v23 = v29;
                    }
                }
                // 0x100003c80
                v30 = v23;
                v31 = v22;
                v17++;
                v32 = v17 - v31;
                v15 = v30;
            }
        }
        // 0x100003b44
        result2 = v15;
        if (*(int32_t *)(v8 + 24) == 0) {
            // break -> 0x100003c94
            break;
        }
        v9 = function_1000038fc();
        v10 = v9;
        result2 = v9;
    }
    // 0x100003c94
    return result2;
}

// Address range: 0x100003ca0 - 0x100003e38
int64_t function_100003ca0(void) {
    // 0x100003ca0
    int64_t v1; // 0x100003ca0
    int32_t v2 = (int32_t)v1 - 97; // 0x100003cb8
    int64_t v3 = *(int64_t *)(8 * (int64_t)v2 + v1); // 0x100003ccc
    int32_t * v4 = (int32_t *)(v3 + 16);
    int32_t v5 = 1; // 0x100003d4c
    int64_t v6 = v3; // 0x100003d40
    int32_t v7 = 1; // 0x100003ca0
    switch (*v4) {
        case 0x7fffffff: {
            // 0x100003e2c
            return _printf("no path\n");
        }
        default: {
            v6 = *(int64_t *)(8 * (int64_t)*(int32_t *)(v6 + 20) + v1);
            v5++;
            v7 = v5;
            while (*(int32_t *)(v6 + 16) != 0) {
                // 0x100003d30
                v6 = *(int64_t *)(8 * (int64_t)*(int32_t *)(v6 + 20) + v1);
                v5++;
                v7 = v5;
            }
        }
        case 0: {
            int64_t v8 = (int64_t)_malloc(v7); // 0x100003d5c
            *(char *)(v8 + (int64_t)(v7 - 1)) = (char)v2 + 97;
            if (*v4 == 0) {
                // 0x100003e2c
                return _printf("%d %.*s\n", v1, v1, (char *)v1);
            }
            int32_t v9 = v7 - 2; // 0x100003dbc
            int32_t v10 = 0; // 0x100003ca0
            int32_t * v11 = (int32_t *)(v3 + 20); // 0x100003da8
            int32_t v12 = *v11; // 0x100003da8
            *(char *)((int64_t)(v9 - v10) + v8) = (char)v12 + 97;
            int64_t v13 = *(int64_t *)(8 * (int64_t)*v11 + v8); // 0x100003ddc
            v10++;
            while (*(int32_t *)(v13 + 16) != 0) {
                // 0x100003da4
                v11 = (int32_t *)(v13 + 20);
                v12 = *v11;
                *(char *)((int64_t)(v9 - v10) + v8) = (char)v12 + 97;
                v13 = *(int64_t *)(8 * (int64_t)*v11 + v8);
                v10++;
            }
            // break -> 0x100003df4
            break;
        }
    }
    // 0x100003e2c
    return _printf("%d %.*s\n", v1, v1, (char *)v1);
}

// Address range: 0x100003e38 - 0x100003f5c
int64_t entry_point(void) {
    // 0x100003e38
    _calloc(1, 16);
    function_1000034e4();
    function_1000034e4();
    function_1000034e4();
    function_1000034e4();
    function_1000034e4();
    function_1000034e4();
    function_1000034e4();
    function_1000034e4();
    function_1000034e4();
    function_100003a68();
    function_100003ca0();
    return 0;
}

// Address range: 0x100003f5c - 0x100003f68
int64_t * function_100003f5c(int32_t nmemb, int32_t size) {
    // 0x100003f5c
    return _calloc(nmemb, size);
}

// Address range: 0x100003f68 - 0x100003f74
int64_t * function_100003f68(int32_t size) {
    // 0x100003f68
    return _malloc(size);
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(char * format, ...) {
    // 0x100003f74
    return _printf(format);
}

// Address range: 0x100003f80 - 0x100003f8c
int64_t * function_100003f80(int64_t * ptr, int32_t size) {
    // 0x100003f80
    return _realloc(ptr, size);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 13

