//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003300(void);
int64_t function_1000034c4(void);
int64_t function_1000034f4(void);
int64_t function_100003610(void);
int64_t function_100003794(void);
int64_t function_100003a80(void);
int64_t function_100003bc8(void);
int64_t function_100003e68(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003e74(void);
int64_t * function_100003e80(int32_t nmemb, int32_t size);
int32_t function_100003e8c(int32_t c);
int32_t function_100003e98(char * format, ...);
int32_t function_100003ea4(int32_t c);
int32_t function_100003eb0(char * nptr, char ** endptr, int32_t base);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x100000cfeedfacf; // 0x100008000
int64_t g2 = 0x200000000; // 0x100008008
int64_t g3 = 0x4b800000012; // 0x100008010
int32_t * g4 = (int32_t *)0x200085; // 0x100008018
int64_t g5 = 0x4800000019; // 0x100008020
char g6[5] = "__PA"; // 0x100008028

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memset_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t ___stack_chk_fail(void);
int64_t * _calloc(int32_t a1, int32_t a2);
int32_t _isspace(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _strtol(char * a1, char ** a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x100003300 - 0x1000034c4
int64_t function_100003300(void) {
    // 0x100003300
    int64_t v1; // 0x100003300
    int32_t v2 = v1; // 0x10000330c
    int32_t v3 = *(int32_t *)&g6;
    int32_t v4 = v2 / v3; // 0x100003328
    int32_t v5 = v4 - 1; // 0x10000334c
    int32_t v6 = v4 + 1; // 0x100003360
    if (((v5 ^ v6) & v4 + 0x7fffffff) < 0) {
        // 0x1000034b4
        return 0;
    }
    int32_t v7 = v2 % v3;
    int32_t v8 = v7 - 1;
    int32_t v9 = v7 + 1;
    int32_t v10 = 0;
    uint32_t v11 = v5;
    int32_t v12 = v10; // 0x100003380
    int32_t v13; // 0x100003300
    int32_t v14; // 0x100003300
    int32_t v15; // 0x100003300
    uint32_t v16; // 0x100003300
    int32_t v17; // 0x100003394
    int32_t v18; // 0x100003398
    int32_t v19; // 0x100003494
    int32_t v20; // 0x1000033c8
    int32_t v21; // 0x1000033f8
    int32_t v22; // 0x1000033fc
    int64_t v23; // 0x100003454
    int32_t v24; // 0x100003468
    if (v11 >= 0) {
        // 0x100003388
        v17 = *(int32_t *)&g4;
        v18 = v11 - v17;
        v12 = v10;
        if (((v8 ^ v9) & v7 + 0x7fffffff) >= 0 && v18 < 0 != ((v18 ^ v11) & (v17 ^ v11)) < 0) {
            // 0x1000033d8
            v13 = v10;
            v16 = v8;
            v14 = v13;
            if (v16 >= 0) {
                // 0x1000033ec
                v21 = *(int32_t *)&g6;
                v22 = v16 - v21;
                v14 = v13;
                if (v11 == v4 != (v16 == v7) && v22 < 0 != ((v22 ^ v16) & (v21 ^ v16)) < 0) {
                    // 0x10000343c
                    v23 = function_1000034c4();
                    *(int32_t *)(4 * (int64_t)v13 + v1) = (int32_t)v23;
                    v24 = *(int32_t *)((4 * v23 & 0xfffffffc) + g2);
                    v14 = v13 + (int32_t)(v24 != -1);
                }
            }
            // 0x100003490
            v15 = v14;
            v19 = v16 + 1;
            v20 = v19 - v9;
            v12 = v15;
            while (v20 == 0 || v20 < 0 != ((v20 ^ v19) & (v19 ^ v9)) < 0) {
                // 0x1000033d8
                v13 = v15;
                v16 = v19;
                v14 = v13;
                if (v16 >= 0) {
                    // 0x1000033ec
                    v21 = *(int32_t *)&g6;
                    v22 = v16 - v21;
                    v14 = v13;
                    if (v11 == v4 != (v16 == v7) && v22 < 0 != ((v22 ^ v16) & (v21 ^ v16)) < 0) {
                        // 0x10000343c
                        v23 = function_1000034c4();
                        *(int32_t *)(4 * (int64_t)v13 + v1) = (int32_t)v23;
                        v24 = *(int32_t *)((4 * v23 & 0xfffffffc) + g2);
                        v14 = v13 + (int32_t)(v24 != -1);
                    }
                }
                // 0x100003490
                v15 = v14;
                v19 = v16 + 1;
                v20 = v19 - v9;
                v12 = v15;
            }
        }
    }
    int32_t result = v12;
    int32_t v25 = v11 + 1; // 0x1000034a8
    int32_t v26 = v25 - v6; // 0x100003364
    while (v26 == 0 || v26 < 0 != ((v26 ^ v25) & (v25 ^ v6)) < 0) {
        // 0x100003374
        v10 = result;
        v11 = v25;
        v12 = v10;
        if (v11 >= 0) {
            // 0x100003388
            v17 = *(int32_t *)&g4;
            v18 = v11 - v17;
            v12 = v10;
            if (((v8 ^ v9) & v7 + 0x7fffffff) >= 0 && v18 < 0 != ((v18 ^ v11) & (v17 ^ v11)) < 0) {
                // 0x1000033d8
                v13 = v10;
                v16 = v8;
                v14 = v13;
                if (v16 >= 0) {
                    // 0x1000033ec
                    v21 = *(int32_t *)&g6;
                    v22 = v16 - v21;
                    v14 = v13;
                    if (v11 == v4 != (v16 == v7) && v22 < 0 != ((v22 ^ v16) & (v21 ^ v16)) < 0) {
                        // 0x10000343c
                        v23 = function_1000034c4();
                        *(int32_t *)(4 * (int64_t)v13 + v1) = (int32_t)v23;
                        v24 = *(int32_t *)((4 * v23 & 0xfffffffc) + g2);
                        v14 = v13 + (int32_t)(v24 != -1);
                    }
                }
                // 0x100003490
                v15 = v14;
                v19 = v16 + 1;
                v20 = v19 - v9;
                v12 = v15;
                while (v20 == 0 || v20 < 0 != ((v20 ^ v19) & (v19 ^ v9)) < 0) {
                    // 0x1000033d8
                    v13 = v15;
                    v16 = v19;
                    v14 = v13;
                    if (v16 >= 0) {
                        // 0x1000033ec
                        v21 = *(int32_t *)&g6;
                        v22 = v16 - v21;
                        v14 = v13;
                        if (v11 == v4 != (v16 == v7) && v22 < 0 != ((v22 ^ v16) & (v21 ^ v16)) < 0) {
                            // 0x10000343c
                            v23 = function_1000034c4();
                            *(int32_t *)(4 * (int64_t)v13 + v1) = (int32_t)v23;
                            v24 = *(int32_t *)((4 * v23 & 0xfffffffc) + g2);
                            v14 = v13 + (int32_t)(v24 != -1);
                        }
                    }
                    // 0x100003490
                    v15 = v14;
                    v19 = v16 + 1;
                    v20 = v19 - v9;
                    v12 = v15;
                }
            }
        }
        // 0x1000034a4
        result = v12;
        v25 = v11 + 1;
        v26 = v25 - v6;
    }
    // 0x1000034b4
    return result;
}

// Address range: 0x1000034c4 - 0x1000034f4
int64_t function_1000034c4(void) {
    int32_t v1 = *(int32_t *)&g6; // 0x1000034dc
    int64_t v2; // 0x1000034c4
    return v1 * (int32_t)v2 + (int32_t)v2;
}

// Address range: 0x1000034f4 - 0x100003610
int64_t function_1000034f4(void) {
    int64_t v1 = function_100003300(); // 0x10000351c
    int32_t v2 = v1; // 0x100003520
    int32_t v3 = -v2; // 0x100003534
    int64_t v4 = v1; // 0x10000353c
    if (v3 < 0 != (v3 & v2) < 0) {
        // 0x100003544
        int64_t v5; // bp-56, 0x1000034f4
        int64_t v6 = &v5; // 0x100003554
        int32_t v7 = 0; // 0x1000035d4
        int64_t v8 = 4 * (int64_t)*(int32_t *)(4 * (int64_t)v7 + v6); // 0x10000355c
        int64_t v9 = v1; // 0x100003568
        int32_t * v10; // 0x100003588
        if (*(int32_t *)(v8 + g2) == 0) {
            // 0x100003570
            v10 = (int32_t *)(g3 + v8);
            v9 = v1;
            if (*v10 == 0) {
                // 0x1000035a0
                *v10 = 1;
                v9 = function_1000034f4();
            }
        }
        int64_t v11 = v9;
        v7++;
        int32_t v12 = v7 - v2; // 0x100003534
        v4 = v11;
        while (v12 < 0 != ((v12 ^ v7) & (v7 ^ v2)) < 0) {
            int64_t v13 = v11;
            v8 = 4 * (int64_t)*(int32_t *)(4 * (int64_t)v7 + v6);
            v9 = v13;
            if (*(int32_t *)(v8 + g2) == 0) {
                // 0x100003570
                v10 = (int32_t *)(g3 + v8);
                v9 = v13;
                if (*v10 == 0) {
                    // 0x1000035a0
                    *v10 = 1;
                    v9 = function_1000034f4();
                }
            }
            // 0x1000035d0
            v11 = v9;
            v7++;
            v12 = v7 - v2;
            v4 = v11;
        }
    }
    int64_t v14 = *(int64_t *)*(int64_t *)0x100004010; // 0x1000035ec
    int64_t result = v4; // 0x1000035f8
    if (v14 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003600
        result = ___stack_chk_fail();
    }
    // 0x100003604
    return result;
}

// Address range: 0x100003610 - 0x100003794
int64_t function_100003610(void) {
    int32_t v1 = *(int32_t *)&g6; // 0x100003634
    int32_t v2 = *(int32_t *)&g4; // 0x100003648
    ___memset_chk(g3, 0, 4 * (int64_t)v1 * (int64_t)v2, -1);
    int64_t v3; // 0x100003610
    int32_t v4 = (int32_t)v3 + 1;
    int32_t v5 = *(int32_t *)&g1; // 0x100003674
    int32_t v6 = v4 - v5; // 0x100003678
    int32_t v7 = v4; // 0x100003680
    if (v6 == 0 || v6 < 0 != ((v6 ^ v4) & (v5 ^ v4)) < 0) {
        int32_t v8 = v5; // 0x1000036a4
        if (*(int32_t *)(4 * (int64_t)v7 + g5) != 0) {
            // 0x1000036ac
            function_1000034f4();
            v8 = *(int32_t *)&g1;
        }
        int32_t v9 = v8; // 0x100003674
        v7++;
        while (v7 - v9 == 0 || v7 - v9 < 0 != ((v7 - v9 ^ v7) & (v9 ^ v7)) < 0) {
            // 0x100003688
            v8 = v9;
            if (*(int32_t *)(4 * (int64_t)v7 + g5) != 0) {
                // 0x1000036ac
                function_1000034f4();
                v8 = *(int32_t *)&g1;
            }
            // 0x1000036cc
            v9 = v8;
            v7++;
        }
    }
    int32_t v10 = *(int32_t *)&g4 * *(int32_t *)&g6;
    int32_t v11 = -v10; // 0x100003704
    if (v11 < 0 == (v10 & v11) < 0) {
        // 0x100003784
        return 1;
    }
    int32_t v12 = 0; // 0x10000376c
    int64_t v13 = 4 * (int64_t)v12; // 0x100003724
    if (*(int32_t *)(v13 + g2) == 0) {
        // 0x100003738
        if (*(int32_t *)(v13 + g3) == 0) {
            // break -> 0x100003784
            break;
        }
    }
    // 0x100003768
    v12++;
    int32_t v14 = v12 - v10; // 0x100003704
    int64_t result = 1; // 0x10000370c
    while (v14 < 0 != ((v14 ^ v12) & (v12 ^ v10)) < 0) {
        // 0x100003714
        v13 = 4 * (int64_t)v12;
        if (*(int32_t *)(v13 + g2) == 0) {
            // 0x100003738
            result = 0;
            if (*(int32_t *)(v13 + g3) == 0) {
                // break -> 0x100003784
                break;
            }
        }
        // 0x100003768
        v12++;
        v14 = v12 - v10;
        result = 1;
    }
    // 0x100003784
    return result;
}

// Address range: 0x100003794 - 0x100003a80
int64_t function_100003794(void) {
    // 0x100003794
    int64_t v1; // 0x100003794
    int32_t v2 = v1; // 0x1000037a0
    int32_t v3 = v1; // 0x1000037a4
    *(int32_t *)&g6 = v2;
    *(int32_t *)&g4 = v3;
    *(int32_t *)&g1 = 0;
    int32_t v4 = v2 * v3; // 0x1000037dc
    g5 = (int64_t)_calloc(v4 + 1, 4);
    g2 = (int64_t)_calloc(v4, 4);
    int64_t result = (int64_t)_calloc(v4, 4); // 0x10000382c
    g3 = result;
    int32_t v5 = v4; // 0x100003854
    if (v4 != 0) {
        v5--;
        *(int32_t *)(4 * (int64_t)v5 + g2) = -1;
        while (v5 != 0) {
            // 0x10000385c
            v5--;
            *(int32_t *)(4 * (int64_t)v5 + g2) = -1;
        }
    }
    int32_t v6 = *(int32_t *)&g4; // 0x10000388c
    int32_t v7 = -v6; // 0x100003890
    if (v7 < 0 == (v6 & v7) < 0) {
        // 0x100003a74
        return result;
    }
    int32_t v8 = v6; // 0x10000388c
    int32_t v9 = 0; // 0x100003a68
    char * v10 = (char *)v1; // 0x100003794
    int32_t v11 = *(int32_t *)&g6; // 0x1000038b4
    int32_t v12 = -v11; // 0x1000038b8
    int32_t v13 = 0; // 0x1000038c0
    char * v14 = v10; // 0x1000038c0
    char v15; // 0x100003794
    int32_t v16; // 0x100003794
    int32_t v17; // 0x100003794
    char * v18; // 0x100003794
    char * v19; // 0x100003794
    char * v20; // 0x100003794
    char * v21; // 0x100003794
    int64_t v22; // 0x1000038d0
    char * v23; // 0x100003794
    int32_t v24; // 0x10000397c
    int64_t v25; // 0x10000399c
    int32_t v26; // 0x1000039b0
    int32_t v27; // 0x1000039b8
    int32_t v28; // 0x1000039bc
    int32_t v29; // 0x1000038b4
    int64_t v30; // 0x100003794
    int64_t v31; // 0x100003794
    if (v12 < 0 != (v11 & v12) < 0) {
        while (true) {
            // 0x1000038c8
            v22 = function_1000034c4();
            v18 = v14;
            v19 = v14;
            if (_isspace((int32_t)*v14) != 0) {
                v23 = (char *)((int64_t)v18 + 1);
                v18 = v23;
                v19 = v23;
                while (_isspace((int32_t)*v23) != 0) {
                    // 0x1000038f8
                    v23 = (char *)((int64_t)v18 + 1);
                    v18 = v23;
                    v19 = v23;
                }
            }
            // 0x100003908
            v20 = v19;
            v15 = 46;
            switch (*v20) {
                case 46: {
                    goto lab_0x100003a30;
                }
                case 95: {
                    // 0x100003938
                    *(int32_t *)(g2 + (0x100000000 * v22 >> 30)) = 0;
                    goto lab_0x1000039f0;
                }
                default: {
                    // 0x100003958
                    v24 = _strtol(v20, NULL, 10);
                    v25 = 0x100000000 * v22 >> 30;
                    *(int32_t *)(g2 + v25) = v24;
                    *(int32_t *)(g5 + (int64_t)(4 * v24)) = (int32_t)v22;
                    v26 = *(int32_t *)(g2 + v25);
                    v27 = *(int32_t *)&g1;
                    v28 = v26 - v27;
                    if (v28 != 0 && v28 < 0 == ((v28 ^ v26) & (v27 ^ v26)) < 0) {
                        // 0x1000039cc
                        *(int32_t *)&g1 = v26;
                    }
                    goto lab_0x1000039f0;
                }
            }
        }
        // 0x1000038a8
        v31 = v30;
        v16 = *(int32_t *)&g4;
        v17 = v29;
        v10 = v21;
    }
    int64_t result2 = result;
    v9++;
    int32_t v32 = v9 - v8; // 0x100003890
    while (v32 < 0 != ((v32 ^ v9) & (v8 ^ v9)) < 0) {
        // 0x1000038a8
        v12 = -v11;
        v13 = 0;
        v14 = v10;
        if (v12 < 0 != (v11 & v12) < 0) {
            while (true) {
                // 0x1000038c8
                v22 = function_1000034c4();
                v18 = v14;
                v19 = v14;
                if (_isspace((int32_t)*v14) != 0) {
                    v23 = (char *)((int64_t)v18 + 1);
                    v18 = v23;
                    v19 = v23;
                    while (_isspace((int32_t)*v23) != 0) {
                        // 0x1000038f8
                        v23 = (char *)((int64_t)v18 + 1);
                        v18 = v23;
                        v19 = v23;
                    }
                }
                // 0x100003908
                v20 = v19;
                v15 = 46;
                switch (*v20) {
                    case 46: {
                        goto lab_0x100003a30;
                    }
                    case 95: {
                        // 0x100003938
                        *(int32_t *)(g2 + (0x100000000 * v22 >> 30)) = 0;
                        goto lab_0x1000039f0;
                    }
                    default: {
                        // 0x100003958
                        v24 = _strtol(v20, NULL, 10);
                        v25 = 0x100000000 * v22 >> 30;
                        *(int32_t *)(g2 + v25) = v24;
                        *(int32_t *)(g5 + (int64_t)(4 * v24)) = (int32_t)v22;
                        v26 = *(int32_t *)(g2 + v25);
                        v27 = *(int32_t *)&g1;
                        v28 = v26 - v27;
                        if (v28 != 0 && v28 < 0 == ((v28 ^ v26) & (v27 ^ v26)) < 0) {
                            // 0x1000039cc
                            *(int32_t *)&g1 = v26;
                        }
                        goto lab_0x1000039f0;
                    }
                }
            }
            // 0x1000038a8
            v31 = v30;
            v16 = *(int32_t *)&g4;
            v17 = v29;
            v10 = v21;
        }
        // 0x100003a64
        v9++;
        v32 = v9 - v8;
    }
    // 0x100003a74
    return result2;
  lab_0x100003a30:;
    char * v33 = v20;
    int32_t v34 = _isspace((int32_t)v15); // 0x100003a1c
    char * v35; // 0x100003794
    while (v34 == 0) {
        char * v36 = (char *)((int64_t)v33 + 1);
        char v37 = *v36; // 0x1000039f8
        char v38 = v37; // 0x100003a0c
        char * v39 = v36; // 0x100003a0c
        if (v37 == 0) {
            // 0x1000039f4
            v35 = v36;
            goto lab_0x100003a50;
        }
        v33 = v39;
        v34 = _isspace((int32_t)v38);
    }
    // 0x100003a30
    v35 = v33;
    goto lab_0x100003a50;
  lab_0x1000039f0:;
    char v42 = *v20;
    v15 = v42;
    v35 = v20;
    if (v42 == 0) {
        goto lab_0x100003a50;
    } else {
        goto lab_0x100003a30;
    }
  lab_0x100003a50:;
    int32_t v40 = v13 + 1; // 0x100003a54
    v29 = *(int32_t *)&g6;
    int32_t v41 = v40 - v29; // 0x1000038b8
    v13 = v40;
    v14 = v35;
    if (v41 < 0 == ((v41 ^ v40) & (v29 ^ v40)) < 0) {
        // break -> 0x1000038a8
        goto lab_0x1000038a8;
    }
    goto lab_0x1000038c8;
}

// Address range: 0x100003a80 - 0x100003bc8
int64_t function_100003a80(void) {
    // 0x100003a80
    int64_t v1; // 0x100003a80
    int32_t result = _printf("\n%s:\n", (char *)v1); // 0x100003aa4
    int32_t v2 = *(int32_t *)&g4; // 0x100003abc
    int32_t v3 = -v2; // 0x100003ac0
    if (v3 < 0 == (v2 & v3) < 0) {
        // 0x100003bbc
        return result;
    }
    int32_t v4 = 0; // 0x100003ac8
    int32_t v5 = *(int32_t *)&g6; // 0x100003ae4
    int32_t v6 = -v5; // 0x100003ae8
    int32_t v7; // 0x100003a80
    int64_t v8; // 0x100003b10
    int32_t v9; // 0x100003b18
    int32_t v10; // 0x100003b94
    int32_t v11; // 0x100003ae4
    int32_t v12; // 0x100003ae8
    char * v13; // 0x100003b6c
    if (v6 < 0 != (v5 & v6) < 0) {
        v8 = function_1000034c4();
        v9 = *(int32_t *)((4 * v8 & 0xfffffffc) + g2);
        v13 = " __";
        if (v9 != 0) {
            // 0x100003b44
            v13 = v9 != -1 ? " %2d" : "   ";
        }
        // 0x100003b74
        _printf(v13);
        v10 = 1;
        v11 = *(int32_t *)&g6;
        v12 = v10 - v11;
        v7 = v10;
        while (v12 < 0 != ((v12 ^ v10) & (v11 ^ v10)) < 0) {
            // 0x100003af8
            v8 = function_1000034c4();
            v9 = *(int32_t *)((4 * v8 & 0xfffffffc) + g2);
            v13 = " __";
            if (v9 != 0) {
                // 0x100003b44
                v13 = v9 != -1 ? " %2d" : "   ";
            }
            // 0x100003b74
            _printf(v13);
            v10 = v7 + 1;
            v11 = *(int32_t *)&g6;
            v12 = v10 - v11;
            v7 = v10;
        }
    }
    // 0x100003ba4
    v4++;
    int32_t result2 = _putchar(10); // 0x100003bb4
    int32_t v14 = *(int32_t *)&g4; // 0x100003abc
    int32_t v15 = v4 - v14; // 0x100003ac0
    while (v15 < 0 != ((v15 ^ v4) & (v14 ^ v4)) < 0) {
        // 0x100003ad8
        v5 = *(int32_t *)&g6;
        v6 = -v5;
        if (v6 < 0 != (v5 & v6) < 0) {
            v8 = function_1000034c4();
            v9 = *(int32_t *)((4 * v8 & 0xfffffffc) + g2);
            v13 = " __";
            if (v9 != 0) {
                // 0x100003b44
                v13 = v9 != -1 ? " %2d" : "   ";
            }
            // 0x100003b74
            _printf(v13);
            v10 = 1;
            v11 = *(int32_t *)&g6;
            v12 = v10 - v11;
            v7 = v10;
            while (v12 < 0 != ((v12 ^ v10) & (v11 ^ v10)) < 0) {
                // 0x100003af8
                v8 = function_1000034c4();
                v9 = *(int32_t *)((4 * v8 & 0xfffffffc) + g2);
                v13 = " __";
                if (v9 != 0) {
                    // 0x100003b44
                    v13 = v9 != -1 ? " %2d" : "   ";
                }
                // 0x100003b74
                _printf(v13);
                v10 = v7 + 1;
                v11 = *(int32_t *)&g6;
                v12 = v10 - v11;
                v7 = v10;
            }
        }
        // 0x100003ba4
        v4++;
        result2 = _putchar(10);
        v14 = *(int32_t *)&g4;
        v15 = v4 - v14;
    }
    // 0x100003bbc
    return result2;
}

// Address range: 0x100003bc8 - 0x100003dfc
int64_t function_100003bc8(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003bdc
    int64_t v2; // 0x100003bc8
    int32_t v3 = v2; // 0x100003be8
    int64_t v4 = 0x100000000 * v2 >> 30; // 0x100003bfc
    int32_t * v5 = (int32_t *)(g2 + v4);
    int32_t v6 = *v5; // 0x100003bfc
    int64_t result = 0; // 0x100003c08
    int64_t v7; // 0x100003c48
    int32_t v8; // 0x100003c48
    if (v6 == 0 || v6 == v3) {
        // 0x100003c38
        v7 = 0x100000000 * v2 >> 30;
        v8 = *(int32_t *)(g5 + v7);
        result = 0;
        if (v8 == 0 || v8 == (int32_t)v2) {
            // 0x100003c8c
            result = 1;
            if (*(int32_t *)&g1 == v3) {
                goto lab_0x100003dc0;
            } else {
                // 0x100003cb4
                *v5 = v3;
                if ((int32_t)function_100003610() == 0) {
                    goto lab_0x100003d88;
                } else {
                    int32_t v9 = function_100003300(); // 0x100003d18
                    int32_t v10 = -v9; // 0x100003d2c
                    int32_t v11 = 0; // 0x100003d34
                    if (v10 < 0 == (v10 & v9) < 0) {
                        goto lab_0x100003d88;
                    } else {
                        result = 1;
                        while ((int32_t)function_100003bc8() == 0) {
                            int32_t v12 = v11 + 1; // 0x100003d78
                            int32_t v13 = v12 - v9; // 0x100003d2c
                            v11 = v12;
                            if (v13 < 0 == ((v13 ^ v12) & (v12 ^ v9)) < 0) {
                                goto lab_0x100003d88;
                            }
                            result = 1;
                        }
                        goto lab_0x100003dc0;
                    }
                }
            }
        } else {
            goto lab_0x100003dc0;
        }
    } else {
        goto lab_0x100003dc0;
    }
  lab_0x100003d88:
    // 0x100003d88
    *(int32_t *)(g2 + v4) = v6;
    *(int32_t *)(g5 + v7) = v8;
    result = 0;
    goto lab_0x100003dc0;
  lab_0x100003dc0:
    // 0x100003dc0
    if (*(int64_t *)*(int64_t *)0x100004010 != v1) {
        // 0x100003de8
        ___stack_chk_fail();
    }
    // 0x100003dec
    return result;
}

// Address range: 0x100003dfc - 0x100003e68
int64_t entry_point(void) {
    // 0x100003dfc
    function_100003794();
    function_100003a80();
    function_100003bc8();
    function_100003a80();
    return 0;
}

// Address range: 0x100003e68 - 0x100003e74
int64_t function_100003e68(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003e68
    return ___memset_chk(a1, a2, a3, a4);
}

// Address range: 0x100003e74 - 0x100003e80
int64_t function_100003e74(void) {
    // 0x100003e74
    return ___stack_chk_fail();
}

// Address range: 0x100003e80 - 0x100003e8c
int64_t * function_100003e80(int32_t nmemb, int32_t size) {
    // 0x100003e80
    return _calloc(nmemb, size);
}

// Address range: 0x100003e8c - 0x100003e98
int32_t function_100003e8c(int32_t c) {
    // 0x100003e8c
    return _isspace(c);
}

// Address range: 0x100003e98 - 0x100003ea4
int32_t function_100003e98(char * format, ...) {
    // 0x100003e98
    return _printf(format);
}

// Address range: 0x100003ea4 - 0x100003eb0
int32_t function_100003ea4(int32_t c) {
    // 0x100003ea4
    return _putchar(c);
}

// Address range: 0x100003eb0 - 0x100003ebc
int32_t function_100003eb0(char * nptr, char ** endptr, int32_t base) {
    // 0x100003eb0
    return _strtol(nptr, endptr, base);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 15

