//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000032f0(void);
int64_t function_100003450(void);
int64_t function_1000036dc(void);
int64_t function_100003df0(int64_t a1);
int64_t * function_100003dfc(int32_t nmemb, int32_t size);
float64_t function_100003e08(float64_t a1);
void function_100003e14(int64_t * ptr);
int64_t * function_100003e20(int32_t size);
int32_t function_100003e2c(char * format, ...);
void function_100003e38(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
char * function_100003e44(int32_t category, char * locale);

// --------------------- Global Variables ---------------------

float64_t g1 = 1.0e+6; // 0x100003e50
float128_t g2 = 4.24399158390680721358775060643269284e-314L; // 0x100003e58
char * g3; // 0x100003ed4
int32_t g4;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _calloc(int32_t a1, int32_t a2);
float64_t _cbrt(float64_t a1);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));
char * _setlocale(int32_t a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x1000032f0 - 0x100003450
int64_t function_1000032f0(void) {
    // 0x1000032f0
    int64_t v1; // 0x1000032f0
    int32_t v2 = v1; // 0x1000032fc
    int32_t v3 = v2 + 1; // 0x100003304
    int64_t * v4 = _calloc(v3, 1); // 0x100003314
    int64_t result = (int64_t)v4; // 0x100003314
    *(char *)v4 = 1;
    *(char *)(result + 1) = 1;
    int32_t v5 = 3 - v2; // 0x100003344
    int32_t v6 = 4; // 0x10000334c
    if (v5 < 0 != (v5 & v3) < 0) {
        *(char *)((int64_t)v6 + result) = 1;
        v6 += 2;
        while (v6 - v3 < 0 != ((v6 - v3 ^ v6) & (v6 ^ v3)) < 0) {
            // 0x100003354
            *(char *)((int64_t)v6 + result) = 1;
            v6 += 2;
        }
    }
    int32_t v7 = 8 - v2; // 0x1000033a0
    if (v7 < 0 == (v7 & v3) < 0) {
        // 0x100003440
        return result;
    }
    int32_t v8 = 3;
    int32_t v9 = 9;
    int32_t v10 = v9 - v3; // 0x1000033c8
    int32_t v11; // 0x100003400
    if (v10 < 0 != ((v10 ^ v9) & (v9 ^ v3)) < 0) {
        // 0x1000033d8
        v11 = v9;
        *(char *)((int64_t)v11 + result) = 1;
        v11 += 2 * v8;
        while (v11 - v3 < 0 != ((v11 - v3 ^ v11) & (v11 ^ v3)) < 0) {
            // 0x1000033d8
            *(char *)((int64_t)v11 + result) = 1;
            v11 += 2 * v8;
        }
    }
    int32_t v12 = v8 + 2; // 0x100003414
    int32_t v13 = v12; // 0x10000342c
    while (*(char *)((int64_t)v12 + result) % 2 != 0) {
        // 0x100003410
        v12 = v13 + 2;
        v13 = v12;
    }
    int32_t v14 = v12 * v12; // 0x100003390
    while (v14 - v3 < 0 != ((v14 - v3 ^ v14) & (v14 ^ v3)) < 0) {
        // 0x1000033c0
        v8 = v12;
        v9 = v14;
        v10 = v9 - v3;
        if (v10 < 0 != ((v10 ^ v9) & (v9 ^ v3)) < 0) {
            // 0x1000033d8
            v11 = v9;
            *(char *)((int64_t)v11 + result) = 1;
            v11 += 2 * v8;
            while (v11 - v3 < 0 != ((v11 - v3 ^ v11) & (v11 ^ v3)) < 0) {
                // 0x1000033d8
                *(char *)((int64_t)v11 + result) = 1;
                v11 += 2 * v8;
            }
        }
        // 0x100003410
        v12 = v8 + 2;
        v13 = v12;
        while (*(char *)((int64_t)v12 + result) % 2 != 0) {
            // 0x100003410
            v12 = v13 + 2;
            v13 = v12;
        }
        // 0x100003388
        v14 = v12 * v12;
    }
    // 0x100003440
    return result;
}

// Address range: 0x100003450 - 0x1000036dc
int64_t function_100003450(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003464
    int64_t v2; // 0x100003450
    int32_t v3 = v2; // 0x10000346c
    int64_t result; // 0x100003450
    if (v3 < 2 != (1 - v3 & v3) < 0) {
        // 0x1000036d0
        return result;
    }
    float128_t v4 = g2; // bp-64, 0x1000034a0
    int32_t v5 = v3 / 2; // 0x1000034b8
    int32_t v6 = 0; // 0x1000034cc
    int32_t v7 = v3; // 0x1000034cc
    if (2 * v5 == v3) {
        int32_t v8 = 0;
        int32_t v9 = v5;
        int32_t v10 = v8 + 1; // 0x1000034e0
        *(int32_t *)(4 * (int64_t)v8 + v2) = 2;
        int32_t v11 = v9 / 2; // 0x1000034b8
        v6 = v10;
        v7 = v9;
        while (v9 == 2 * v11) {
            // 0x1000034d4
            v8 = v10;
            v9 = v11;
            v10 = v8 + 1;
            *(int32_t *)(4 * (int64_t)v8 + v2) = 2;
            v11 = v9 / 2;
            v6 = v10;
            v7 = v9;
        }
    }
    int32_t v12 = v6; // 0x100003520
    int32_t v13 = v7; // 0x100003520
    int32_t v14 = v7; // 0x100003520
    if (v7 % 3 == 0) {
        int32_t v15 = v6 + 1; // 0x100003534
        *(int32_t *)(4 * (int64_t)v6 + v2) = 3;
        v14 /= 3;
        v12 = v15;
        v13 = v14;
        while (v14 % 3 == 0) {
            int32_t v16 = v15;
            v15 = v16 + 1;
            *(int32_t *)(4 * (int64_t)v16 + v2) = 3;
            v14 /= 3;
            v12 = v15;
            v13 = v14;
        }
    }
    int32_t v17 = v12; // 0x100003574
    int32_t v18 = v13; // 0x100003574
    int32_t v19 = v13; // 0x100003574
    if (v13 % 5 == 0) {
        int32_t v20 = v12 + 1; // 0x100003588
        *(int32_t *)(4 * (int64_t)v12 + v2) = 5;
        v19 /= 5;
        v17 = v20;
        v18 = v19;
        while (v19 % 5 == 0) {
            int32_t v21 = v20;
            v20 = v21 + 1;
            *(int32_t *)(4 * (int64_t)v21 + v2) = 5;
            v19 /= 5;
            v17 = v20;
            v18 = v19;
        }
    }
    int32_t v22 = 49 - v18; // 0x1000035c8
    int32_t v23 = v17; // 0x1000035d0
    int32_t v24 = v18; // 0x1000035d0
    if (v22 == 0 || v22 < 0 != (v22 & v18) < 0) {
        int64_t v25 = &v4;
        int32_t v26 = 7;
        int32_t v27 = 0;
        int32_t v28; // 0x100003450
        int32_t v29; // 0x100003450
        int32_t v30; // 0x100003450
        int32_t v31; // 0x100003450
        int32_t v32; // 0x100003634
        int32_t v33; // 0x100003648
        if (v18 % v26 == 0) {
            // 0x1000035fc
            *(int32_t *)(4 * (int64_t)v17 + v2) = v26;
            v30 = v17 + 1;
            v31 = v26;
            v28 = v27;
            v29 = v18 / v26;
        } else {
            // 0x10000362c
            v32 = *(int32_t *)(4 * (int64_t)v27 + v25);
            v33 = v27 + 1;
            v30 = v17;
            v31 = v32 + v26;
            v28 = v33 - 8 * v33 / 8;
            v29 = v18;
        }
        int32_t v34 = v29;
        int32_t v35 = v31;
        int32_t v36 = v30;
        int32_t v37 = v35 * v35; // 0x1000035c0
        int32_t v38 = v37 - v34; // 0x1000035c8
        v23 = v36;
        v24 = v34;
        while (v38 == 0 || v38 < 0 != ((v38 ^ v37) & (v34 ^ v37)) < 0) {
            int32_t v39 = v36;
            v26 = v35;
            v27 = v28;
            int32_t v40 = v34;
            if (v40 % v26 == 0) {
                // 0x1000035fc
                *(int32_t *)(4 * (int64_t)v39 + v2) = v26;
                v30 = v39 + 1;
                v31 = v26;
                v28 = v27;
                v29 = v40 / v26;
            } else {
                // 0x10000362c
                v32 = *(int32_t *)(4 * (int64_t)v27 + v25);
                v33 = v27 + 1;
                v30 = v39;
                v31 = v32 + v26;
                v28 = v33 - 8 * v33 / 8;
                v29 = v40;
            }
            // 0x100003664
            v34 = v29;
            v35 = v31;
            v36 = v30;
            v37 = v35 * v35;
            v38 = v37 - v34;
            v23 = v36;
            v24 = v34;
        }
    }
    int32_t v41 = v24;
    int32_t v42 = v41 - 1; // 0x10000366c
    int32_t v43 = v23; // 0x100003674
    if (v42 != 0 && v42 < 0 == (v41 & -v41) < 0) {
        // 0x10000367c
        *(int32_t *)(4 * (int64_t)v23 + v2) = v41;
        v43 = v23 + 1;
    }
    // 0x1000036ac
    *(int32_t *)v2 = v43;
    if (*(int64_t *)*(int64_t *)0x100004008 == v1) {
        // 0x1000036d0
        return result;
    }
    // 0x1000036d0
    return ___stack_chk_fail(v2);
}

// Address range: 0x1000036dc - 0x10000375c
int64_t function_1000036dc(void) {
    // 0x1000036dc
    int64_t v1; // 0x1000036dc
    int32_t v2 = v1;
    int32_t v3 = v2 - (int32_t)v1; // 0x100003708
    int64_t result = v3 < 0 == ((v3 ^ v2) & (int32_t)(v1 ^ v1)) < 0 ? (int64_t)(v3 != 0) : 0xffffffff;
    return result;
}

// Address range: 0x10000375c - 0x100003df0
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003788
    int128_t v2; // 0x10000375c
    _cbrt((float64_t)(int64_t)v2);
    int64_t v3 = function_1000032f0(); // 0x1000037b8
    int32_t v4 = 0;
    int32_t v5 = 0;
    unsigned char v6 = *(char *)(v3 + (int64_t)v5); // 0x1000037ec
    v4 += (int32_t)(v6 % 2 == 0);
    int32_t v7 = v5 + 1; // 0x100003810
    while (v5 < 0x28b09 != (0x28b08 - v5 & v7) < 0) {
        // 0x1000037e0
        v5 = v7;
        v6 = *(char *)(v3 + (int64_t)v5);
        v4 += (int32_t)(v6 % 2 == 0);
        v7 = v5 + 1;
    }
    int64_t * v8 = _malloc(4 * v4); // 0x100003824
    int64_t v9 = (int64_t)v8; // 0x100003824
    int32_t v10 = 0;
    int32_t v11 = 0;
    int32_t v12 = v11; // 0x100003860
    if (*(char *)(v3 + (int64_t)v10) % 2 == 0) {
        // 0x100003868
        *(int32_t *)(4 * (int64_t)v11 + v9) = v10;
        v12 = v11 + 1;
    }
    int32_t v13 = v10 + 1; // 0x100003890
    while (v10 < 0x28b09 != (0x28b08 - v10 & v13) < 0) {
        // 0x100003850
        v10 = v13;
        v11 = v12;
        v12 = v11;
        if (*(char *)(v3 + (int64_t)v10) % 2 == 0) {
            // 0x100003868
            *(int32_t *)(4 * (int64_t)v11 + v9) = v10;
            v12 = v11 + 1;
        }
        // 0x10000388c
        v13 = v10 + 1;
    }
    int64_t * v14 = _malloc(0xcd140); // 0x1000038a4
    int64_t v15 = (int64_t)v14; // 0x1000038a4
    _printf("Sphenic numbers less than 1,000:\n");
    int32_t v16 = v4 - 2; // 0x1000038c8
    int32_t v17 = 2 - v4; // 0x1000038cc
    int32_t v18 = 0; // 0x1000038d4
    if (v17 < 0 != (v17 & v16) < 0) {
        int32_t v19 = g1; // 0x1000037a8
        int32_t v20 = v4 - 1;
        int32_t v21 = 0;
        int32_t v22 = 0;
        int32_t * v23 = (int32_t *)(4 * (int64_t)v21 + v9); // 0x1000038e4
        int32_t v24 = *v23; // 0x1000038e4
        int32_t v25 = v24 - v19; // 0x1000038ec
        v18 = v22;
        while (v25 == 0 || v25 < 0 != ((v25 ^ v24) & (v24 ^ v19)) < 0) {
            // 0x100003910
            v21++;
            int32_t v26 = v21 - v20; // 0x10000391c
            int32_t v27 = v24; // 0x100003924
            int32_t v28 = v21; // 0x100003924
            int32_t v29 = v22; // 0x100003924
            int32_t v30 = v22; // 0x100003924
            if (v26 < 0 != ((v26 ^ v21) & (v21 ^ v20)) < 0) {
                int32_t v31 = v29;
                int32_t v32 = v28;
                int32_t v33 = *(int32_t *)(4 * (int64_t)v32 + v9) * v27; // 0x100003948
                int32_t v34 = v33 * *(int32_t *)((int64_t)(4 * v32 + 4) + v9); // 0x100003964
                v30 = v31;
                while (v34 < 0xf4240 != (0xf423f - v34 & v34) < 0) {
                    int32_t v35 = v32 + 1;
                    int32_t v36 = v35 - v4; // 0x100003994
                    int32_t v37 = v35; // 0x10000399c
                    int32_t v38 = v31; // 0x10000399c
                    int32_t v39 = v31; // 0x10000399c
                    if (v36 < 0 != ((v36 ^ v35) & (v35 ^ v4)) < 0) {
                        int32_t v40 = v38;
                        int32_t v41 = v37;
                        int32_t v42 = *(int32_t *)(4 * (int64_t)v41 + v9) * v33; // 0x1000039b8
                        v39 = v40;
                        while (v42 < 0xf4240 != (0xf423f - v42 & v42) < 0) {
                            int32_t v43 = v40 + 1; // 0x1000039e8
                            *(int32_t *)(4 * (int64_t)v40 + v15) = v42;
                            int32_t v44 = v41 + 1;
                            int32_t v45 = v44 - v4; // 0x100003994
                            v37 = v44;
                            v38 = v43;
                            v39 = v43;
                            if (v45 < 0 == ((v45 ^ v44) & (v44 ^ v4)) < 0) {
                                // break -> 0x100003a0c
                                break;
                            }
                            v40 = v38;
                            v41 = v37;
                            v42 = *(int32_t *)(4 * (int64_t)v41 + v9) * v33;
                            v39 = v40;
                        }
                    }
                    int32_t v46 = v39;
                    int32_t v47 = v35 - v20; // 0x10000391c
                    v30 = v46;
                    if (v47 < 0 == ((v47 ^ v35) & (v35 ^ v20)) < 0) {
                        // break -> 0x100003a20
                        break;
                    }
                    // 0x100003a0c
                    v31 = v46;
                    v32 = v35;
                    v33 = *(int32_t *)(4 * (int64_t)v32 + v9) * *v23;
                    v34 = v33 * *(int32_t *)((int64_t)(4 * v32 + 4) + v9);
                    v30 = v31;
                }
            }
            // 0x100003a20
            v22 = v30;
            int32_t v48 = v21 - v16; // 0x1000038cc
            v18 = v22;
            if (v48 < 0 == ((v48 ^ v21) & (v21 ^ v16)) < 0) {
                // break -> 0x100003a30
                break;
            }
            v23 = (int32_t *)(4 * (int64_t)v21 + v9);
            v24 = *v23;
            v25 = v24 - v19;
            v18 = v22;
        }
    }
    int64_t v49 = v18; // 0x100003a34
    _qsort(v14, v18, 4, (int32_t (*)(int64_t *, int64_t *))0x1000036dc);
    int32_t v50 = *(int32_t *)v14; // 0x100003a58
    int32_t v51 = 0; // 0x100003a64
    if (v50 < 1000 != (999 - v50 & v50) < 0) {
        _printf("%3d ", v49);
        v51++;
        if (v51 % 15 == 0) {
            // 0x100003abc
            _printf("\n");
        }
        int32_t v52 = *(int32_t *)(4 * (int64_t)v51 + v15); // 0x100003a58
        while (v52 < 1000 != (999 - v52 & v52) < 0) {
            // 0x100003a70
            _printf("%3d ", v49);
            v51++;
            if (v51 % 15 == 0) {
                // 0x100003abc
                _printf("\n");
            }
            // 0x100003ad0
            v52 = *(int32_t *)(4 * (int64_t)v51 + v15);
        }
    }
    // 0x100003ae0
    _printf("\nSphenic triplets less than 10,000:\n");
    int32_t v53 = v18 - 2; // 0x100003b04
    int32_t v54 = 2 - v18; // 0x100003b08
    int32_t v55 = 0; // 0x100003b10
    if (v54 < 0 != (v54 & v53) < 0) {
        int32_t v56 = 0;
        int32_t v57 = *(int32_t *)(4 * (int64_t)v55 + v15); // 0x100003b20
        int32_t v58 = 4 * v55; // 0x100003b30
        int32_t v59 = v56; // 0x100003b48
        int32_t v60; // 0x100003b7c
        if (*(int32_t *)((int64_t)(v58 + 4) + v15) == v57 + 1) {
            // 0x100003b50
            v59 = v56;
            if (*(int32_t *)((int64_t)(v58 + 8) + v15) == v57 + 2) {
                // 0x100003b78
                v60 = v56 + 1;
                v59 = v60;
                if (v57 < 0x270e != (0x270d - v57 & v57) < 0) {
                    // 0x100003b9c
                    _printf("[%d, %d, %d] ", v49, 4, 0x1000036dc);
                    v59 = v60;
                    if (v60 % 3 == 0) {
                        // 0x100003bfc
                        _printf("\n");
                        v59 = v60;
                    }
                }
            }
        }
        // 0x100003c3c
        v55++;
        while (v55 - v53 < 0 != ((v55 - v53 ^ v55) & (v55 ^ v53)) < 0) {
            // 0x100003b18
            v56 = v59;
            v57 = *(int32_t *)(4 * (int64_t)v55 + v15);
            v58 = 4 * v55;
            v59 = v56;
            if (*(int32_t *)((int64_t)(v58 + 4) + v15) == v57 + 1) {
                // 0x100003b50
                v59 = v56;
                if (*(int32_t *)((int64_t)(v58 + 8) + v15) == v57 + 2) {
                    // 0x100003b78
                    v60 = v56 + 1;
                    v59 = v60;
                    if (v57 < 0x270e != (0x270d - v57 & v57) < 0) {
                        // 0x100003b9c
                        _printf("[%d, %d, %d] ", v49, 4, 0x1000036dc);
                        v59 = v60;
                        if (v60 % 3 == 0) {
                            // 0x100003bfc
                            _printf("\n");
                            v59 = v60;
                        }
                    }
                }
            }
            // 0x100003c3c
            v55++;
        }
    }
    // 0x100003c4c
    _setlocale(4, (char *)&g3);
    _printf("\nThere are %'d sphenic numbers less than 1,000,000.\n", (int64_t)&g3);
    _printf("There are %'d sphenic triplets less than 1,000,000.\n", (int64_t)&g3);
    int32_t v61 = 0; // bp-144, 0x100003cac
    int64_t v62; // bp-64, 0x10000375c
    int64_t v63 = &v62; // 0x100003cb4
    function_100003450();
    _printf("The 200,000th sphenic number is %'d (", v63);
    int32_t v64 = -v61; // 0x100003ce8
    if (v64 < 0 != (v61 & v64) < 0) {
        int32_t v65 = 0;
        _printf("%d", v63);
        int32_t v66 = v61 - 1; // 0x100003d24
        int32_t v67 = v65 - v66; // 0x100003d28
        int32_t v68 = v61; // 0x100003d30
        if (v67 < 0 != ((v67 ^ v65) & (v66 ^ v65)) < 0) {
            // 0x100003d38
            _printf("*");
            v68 = v61;
        }
        int32_t v69 = v65 + 1; // 0x100003d50
        while (v69 - v68 < 0 != ((v69 - v68 ^ v69) & (v68 ^ v69)) < 0) {
            // 0x100003cf8
            v65 = v69;
            _printf("%d", v63);
            v66 = v61 - 1;
            v67 = v65 - v66;
            v68 = v61;
            if (v67 < 0 != ((v67 ^ v65) & (v66 ^ v65)) < 0) {
                // 0x100003d38
                _printf("*");
                v68 = v61;
            }
            // 0x100003d4c
            v69 = v65 + 1;
        }
    }
    // 0x100003d5c
    _printf(").\n");
    _printf("The 5,000th sphenic triplet is [%d, %d, %d].\n", v63, (int64_t)&v61, 0x1000036dc);
    _free((int64_t *)v3);
    _free(v8);
    _free(v14);
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003ddc
        ___stack_chk_fail((int64_t)&g4);
    }
    // 0x100003de0
    return 0;
}

// Address range: 0x100003df0 - 0x100003dfc
int64_t function_100003df0(int64_t a1) {
    // 0x100003df0
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003dfc - 0x100003e08
int64_t * function_100003dfc(int32_t nmemb, int32_t size) {
    // 0x100003dfc
    return _calloc(nmemb, size);
}

// Address range: 0x100003e08 - 0x100003e14
float64_t function_100003e08(float64_t a1) {
    // 0x100003e08
    return _cbrt(a1);
}

// Address range: 0x100003e14 - 0x100003e20
void function_100003e14(int64_t * ptr) {
    // 0x100003e14
    _free(ptr);
}

// Address range: 0x100003e20 - 0x100003e2c
int64_t * function_100003e20(int32_t size) {
    // 0x100003e20
    return _malloc(size);
}

// Address range: 0x100003e2c - 0x100003e38
int32_t function_100003e2c(char * format, ...) {
    // 0x100003e2c
    return _printf(format);
}

// Address range: 0x100003e38 - 0x100003e44
void function_100003e38(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003e38
    _qsort(base, nmemb, size, compar);
}

// Address range: 0x100003e44 - 0x100003e50
char * function_100003e44(int32_t category, char * locale) {
    // 0x100003e44
    return _setlocale(category, locale);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12

