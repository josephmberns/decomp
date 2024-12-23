//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ----------------- Float Types Definitions ------------------

typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003318(void);
int64_t function_1000033d8(void);
int64_t function_100003d4c(int64_t a1);
int32_t function_100003d58(char * format, ...);
int32_t function_100003d64(char * s);
int32_t function_100003d70(void);
void function_100003d7c(int32_t seed);
int32_t function_100003d88(char * s, char * format, ...);
int32_t function_100003d94(int32_t * timer);

// --------------------- Global Variables ---------------------

float128_t g1 = 2.12199579145933796095262875903977762e-314L; // 0x100003f90
int64_t g2 = 0x10000000003da0; // 0x100008000
int32_t g3 = 4; // 0x100008020
int32_t g4 = 1; // 0x100008024
int32_t g5 = -0x1120531; // 0x100008028
int32_t g6 = 0x100000c; // 0x10000802c

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _sscanf(char * a1, char * a2, ...);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003318 - 0x1000033d8
int64_t function_100003318(void) {
    float128_t v1 = g1; // bp-40, 0x100003340
    int32_t v2 = 4 - g3; // 0x10000335c
    if (v2 < 0 == (v2 & g3) < 0) {
        // 0x1000033a4
        return ___chkstk_darwin();
    }
    int64_t v3 = &v1;
    int32_t v4 = 4; // 0x100003398
    int32_t v5 = _rand(); // 0x10000336c
    int32_t * v6 = (int32_t *)(4 * (int64_t)(v5 - 4 * v5 / 4) + v3); // 0x100003388
    *v6 = *v6 + 1;
    v4++;
    while (v4 - g3 < 0 != ((v4 - g3 ^ v4) & (g3 ^ v4)) < 0) {
        // 0x10000336c
        v5 = _rand();
        v6 = (int32_t *)(4 * (int64_t)(v5 - 4 * v5 / 4) + v3);
        *v6 = *v6 + 1;
        v4++;
    }
    // 0x1000033a4
    return ___chkstk_darwin();
}

// Address range: 0x1000033d8 - 0x100003a44
int64_t function_1000033d8(void) {
    // 0x1000033d8
    int64_t v1; // 0x1000033d8
    int64_t v2 = v1;
    int64_t v3; // 0x1000033d8
    int64_t v4 = (int64_t)&v3 - *(int64_t *)(v2 - 88); // 0x1000033e0
    int64_t * v5 = (int64_t *)(v2 - 80); // 0x1000033e8
    *v5 = v4;
    int32_t * v6 = (int32_t *)(v2 - 60); // 0x1000033f0
    *v6 = 0;
    int32_t v7 = -g3; // 0x100003404
    int32_t * v8; // 0x1000033d8
    char * v9; // 0x1000033d8
    int32_t * v10; // 0x1000033d8
    int64_t * v11; // 0x1000033d8
    int32_t * v12; // 0x1000033d8
    int64_t * v13; // 0x1000033d8
    int32_t * v14; // 0x1000033d8
    int64_t * v15; // 0x1000033d8
    if (v7 < 0 != (g3 & v7) < 0) {
        // 0x100003414
        v8 = (int32_t *)(v2 - 64);
        int64_t v16 = v2 - 32;
        int64_t * v17 = (int64_t *)(v2 - 152);
        v9 = (char *)(v2 - 65);
        v10 = (int32_t *)(v2 - 156);
        int32_t * v18 = (int32_t *)(v2 - 160);
        v11 = (int64_t *)(v2 - 168);
        int64_t * v19 = (int64_t *)(v2 - 128);
        v12 = (int32_t *)(v2 - 132);
        int32_t * v20 = (int32_t *)(v2 - 136);
        v13 = (int64_t *)(v2 - 144);
        int64_t * v21 = (int64_t *)(v2 - 104);
        v14 = (int32_t *)(v2 - 108);
        int32_t * v22 = (int32_t *)(v2 - 112);
        v15 = (int64_t *)(v2 - 120);
        int32_t v23 = _rand(); // 0x100003414
        int32_t v24 = v23 - 4 * v23 / 4; // 0x100003424
        *v8 = v24;
        char v25; // 0x1000035b4
        int32_t v26; // 0x1000035bc
        char v27; // 0x100003770
        int32_t v28; // 0x100003778
        char v29; // 0x10000392c
        int32_t v30; // 0x100003934
        int32_t v31; // 0x100003478
        int64_t v32; // 0x100003484
        int32_t v33; // 0x1000033d8
        int64_t v34; // 0x1000033d8
        int32_t * v35; // 0x1000039c4
        if (*(int32_t *)(4 * (int64_t)v24 + v16) != 0) {
            // 0x10000344c
            *(int32_t *)(v2 - 92) = v24;
            if (v24 == 2) {
                // 0x100003478
                v31 = *v8;
                v32 = *(int64_t *)(8 * (int64_t)v31 + (int64_t)&g2);
                *v21 = v32;
                *v9 = *(char *)(*v21 + (int64_t)(_rand() % 10));
                *v14 = 0;
                if (*(char *)&g5 != 0) {
                    while (true) {
                        // 0x1000034d4
                        *v22 = 1;
                        if (*v9 == 73) {
                            // 0x1000035d4
                            *v14 = 1;
                            goto lab_0x1000035e0;
                        } else {
                            // 0x1000034f0
                            *v22 = 1;
                            if (*v9 == 108) {
                                // 0x1000035d4
                                *v14 = 1;
                                goto lab_0x1000035e0;
                            } else {
                                // 0x10000350c
                                *v22 = 1;
                                if (*v9 == 49) {
                                    // 0x1000035d4
                                    *v14 = 1;
                                    goto lab_0x1000035e0;
                                } else {
                                    // 0x100003528
                                    *v22 = 1;
                                    if (*v9 == 79) {
                                        // 0x1000035d4
                                        *v14 = 1;
                                        goto lab_0x1000035e0;
                                    } else {
                                        // 0x100003544
                                        *v22 = 1;
                                        if (*v9 == 48) {
                                            // 0x1000035d4
                                            *v14 = 1;
                                            goto lab_0x1000035e0;
                                        } else {
                                            // 0x100003560
                                            *v22 = 1;
                                            if (*v9 == 53) {
                                                // 0x1000035d4
                                                *v14 = 1;
                                                goto lab_0x1000035e0;
                                            } else {
                                                // 0x10000357c
                                                *v22 = 1;
                                                if (*v9 == 83) {
                                                    // 0x1000035d4
                                                    *v14 = 1;
                                                    goto lab_0x1000035e0;
                                                } else {
                                                    // 0x100003598
                                                    *v22 = 1;
                                                    if (*v9 == 50) {
                                                        // 0x1000035d4
                                                        *v14 = 1;
                                                        goto lab_0x1000035e0;
                                                    } else {
                                                        // 0x1000035d4
                                                        v25 = *v9;
                                                        v26 = v25 == 90;
                                                        *v22 = v26;
                                                        *v14 = v26;
                                                        if (v25 != 90) {
                                                            // break -> 0x10000361c
                                                            break;
                                                        }
                                                        goto lab_0x1000035e0;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                // 0x10000361c
                *(char *)(*v5 + (int64_t)*v6) = *v9;
            } else {
                // 0x100003464
                v33 = *v8;
                v34 = *(int64_t *)(8 * (int64_t)v33 + (int64_t)&g2);
                if (v24 == 3) {
                    // 0x100003634
                    *v19 = v34;
                    *v9 = *(char *)(*v19 + (int64_t)(_rand() % 30));
                    *v12 = 0;
                    if (*(char *)&g5 != 0) {
                        while (true) {
                            // 0x100003690
                            *v20 = 1;
                            if (*v9 == 73) {
                                // 0x100003790
                                *v12 = 1;
                                goto lab_0x10000379c;
                            } else {
                                // 0x1000036ac
                                *v20 = 1;
                                if (*v9 == 108) {
                                    // 0x100003790
                                    *v12 = 1;
                                    goto lab_0x10000379c;
                                } else {
                                    // 0x1000036c8
                                    *v20 = 1;
                                    if (*v9 == 49) {
                                        // 0x100003790
                                        *v12 = 1;
                                        goto lab_0x10000379c;
                                    } else {
                                        // 0x1000036e4
                                        *v20 = 1;
                                        if (*v9 == 79) {
                                            // 0x100003790
                                            *v12 = 1;
                                            goto lab_0x10000379c;
                                        } else {
                                            // 0x100003700
                                            *v20 = 1;
                                            if (*v9 == 48) {
                                                // 0x100003790
                                                *v12 = 1;
                                                goto lab_0x10000379c;
                                            } else {
                                                // 0x10000371c
                                                *v20 = 1;
                                                if (*v9 == 53) {
                                                    // 0x100003790
                                                    *v12 = 1;
                                                    goto lab_0x10000379c;
                                                } else {
                                                    // 0x100003738
                                                    *v20 = 1;
                                                    if (*v9 == 83) {
                                                        // 0x100003790
                                                        *v12 = 1;
                                                        goto lab_0x10000379c;
                                                    } else {
                                                        // 0x100003754
                                                        *v20 = 1;
                                                        if (*v9 == 50) {
                                                            // 0x100003790
                                                            *v12 = 1;
                                                            goto lab_0x10000379c;
                                                        } else {
                                                            // 0x100003790
                                                            v27 = *v9;
                                                            v28 = v27 == 90;
                                                            *v20 = v28;
                                                            *v12 = v28;
                                                            if (v27 != 90) {
                                                                // break -> 0x1000037d8
                                                                break;
                                                            }
                                                            goto lab_0x10000379c;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    // 0x1000037d8
                    *(char *)(*v5 + (int64_t)*v6) = *v9;
                } else {
                    // 0x1000037f0
                    *v17 = v34;
                    *v9 = *(char *)(*v17 + (int64_t)(_rand() % 26));
                    *v10 = 0;
                    if (*(char *)&g5 != 0) {
                        while (true) {
                            // 0x10000384c
                            *v18 = 1;
                            if (*v9 == 73) {
                                // 0x10000394c
                                *v10 = 1;
                                goto lab_0x100003958;
                            } else {
                                // 0x100003868
                                *v18 = 1;
                                if (*v9 == 108) {
                                    // 0x10000394c
                                    *v10 = 1;
                                    goto lab_0x100003958;
                                } else {
                                    // 0x100003884
                                    *v18 = 1;
                                    if (*v9 == 49) {
                                        // 0x10000394c
                                        *v10 = 1;
                                        goto lab_0x100003958;
                                    } else {
                                        // 0x1000038a0
                                        *v18 = 1;
                                        if (*v9 == 79) {
                                            // 0x10000394c
                                            *v10 = 1;
                                            goto lab_0x100003958;
                                        } else {
                                            // 0x1000038bc
                                            *v18 = 1;
                                            if (*v9 == 48) {
                                                // 0x10000394c
                                                *v10 = 1;
                                                goto lab_0x100003958;
                                            } else {
                                                // 0x1000038d8
                                                *v18 = 1;
                                                if (*v9 == 53) {
                                                    // 0x10000394c
                                                    *v10 = 1;
                                                    goto lab_0x100003958;
                                                } else {
                                                    // 0x1000038f4
                                                    *v18 = 1;
                                                    if (*v9 == 83) {
                                                        // 0x10000394c
                                                        *v10 = 1;
                                                        goto lab_0x100003958;
                                                    } else {
                                                        // 0x100003910
                                                        *v18 = 1;
                                                        if (*v9 == 50) {
                                                            // 0x10000394c
                                                            *v10 = 1;
                                                            goto lab_0x100003958;
                                                        } else {
                                                            // 0x10000394c
                                                            v29 = *v9;
                                                            v30 = v29 == 90;
                                                            *v18 = v30;
                                                            *v10 = v30;
                                                            if (v29 != 90) {
                                                                // break -> 0x100003994
                                                                break;
                                                            }
                                                            goto lab_0x100003958;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    // 0x100003994
                    *(char *)(*v5 + (int64_t)*v6) = *v9;
                }
            }
            // 0x1000039ac
            *v6 = *v6 + 1;
            v35 = (int32_t *)(4 * (int64_t)*v8 + v16);
            *v35 = *v35 - 1;
        }
        int32_t v36 = *v6; // 0x1000033f8
        while (v36 - g3 < 0 != ((v36 - g3 ^ v36) & (g3 ^ v36)) < 0) {
            // 0x100003414
            v23 = _rand();
            v24 = v23 - 4 * v23 / 4;
            *v8 = v24;
            if (*(int32_t *)(4 * (int64_t)v24 + v16) != 0) {
                // 0x10000344c
                *(int32_t *)(v2 - 92) = v24;
                if (v24 == 2) {
                    // 0x100003478
                    v31 = *v8;
                    v32 = *(int64_t *)(8 * (int64_t)v31 + (int64_t)&g2);
                    *v21 = v32;
                    *v9 = *(char *)(*v21 + (int64_t)(_rand() % 10));
                    *v14 = 0;
                    if (*(char *)&g5 != 0) {
                        while (true) {
                            // 0x1000034d4
                            *v22 = 1;
                            if (*v9 == 73) {
                                // 0x1000035d4
                                *v14 = 1;
                                goto lab_0x1000035e0;
                            } else {
                                // 0x1000034f0
                                *v22 = 1;
                                if (*v9 == 108) {
                                    // 0x1000035d4
                                    *v14 = 1;
                                    goto lab_0x1000035e0;
                                } else {
                                    // 0x10000350c
                                    *v22 = 1;
                                    if (*v9 == 49) {
                                        // 0x1000035d4
                                        *v14 = 1;
                                        goto lab_0x1000035e0;
                                    } else {
                                        // 0x100003528
                                        *v22 = 1;
                                        if (*v9 == 79) {
                                            // 0x1000035d4
                                            *v14 = 1;
                                            goto lab_0x1000035e0;
                                        } else {
                                            // 0x100003544
                                            *v22 = 1;
                                            if (*v9 == 48) {
                                                // 0x1000035d4
                                                *v14 = 1;
                                                goto lab_0x1000035e0;
                                            } else {
                                                // 0x100003560
                                                *v22 = 1;
                                                if (*v9 == 53) {
                                                    // 0x1000035d4
                                                    *v14 = 1;
                                                    goto lab_0x1000035e0;
                                                } else {
                                                    // 0x10000357c
                                                    *v22 = 1;
                                                    if (*v9 == 83) {
                                                        // 0x1000035d4
                                                        *v14 = 1;
                                                        goto lab_0x1000035e0;
                                                    } else {
                                                        // 0x100003598
                                                        *v22 = 1;
                                                        if (*v9 == 50) {
                                                            // 0x1000035d4
                                                            *v14 = 1;
                                                            goto lab_0x1000035e0;
                                                        } else {
                                                            // 0x1000035d4
                                                            v25 = *v9;
                                                            v26 = v25 == 90;
                                                            *v22 = v26;
                                                            *v14 = v26;
                                                            if (v25 != 90) {
                                                                // break -> 0x10000361c
                                                                break;
                                                            }
                                                            goto lab_0x1000035e0;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    // 0x10000361c
                    *(char *)(*v5 + (int64_t)*v6) = *v9;
                } else {
                    // 0x100003464
                    v33 = *v8;
                    v34 = *(int64_t *)(8 * (int64_t)v33 + (int64_t)&g2);
                    if (v24 == 3) {
                        // 0x100003634
                        *v19 = v34;
                        *v9 = *(char *)(*v19 + (int64_t)(_rand() % 30));
                        *v12 = 0;
                        if (*(char *)&g5 != 0) {
                            while (true) {
                                // 0x100003690
                                *v20 = 1;
                                if (*v9 == 73) {
                                    // 0x100003790
                                    *v12 = 1;
                                    goto lab_0x10000379c;
                                } else {
                                    // 0x1000036ac
                                    *v20 = 1;
                                    if (*v9 == 108) {
                                        // 0x100003790
                                        *v12 = 1;
                                        goto lab_0x10000379c;
                                    } else {
                                        // 0x1000036c8
                                        *v20 = 1;
                                        if (*v9 == 49) {
                                            // 0x100003790
                                            *v12 = 1;
                                            goto lab_0x10000379c;
                                        } else {
                                            // 0x1000036e4
                                            *v20 = 1;
                                            if (*v9 == 79) {
                                                // 0x100003790
                                                *v12 = 1;
                                                goto lab_0x10000379c;
                                            } else {
                                                // 0x100003700
                                                *v20 = 1;
                                                if (*v9 == 48) {
                                                    // 0x100003790
                                                    *v12 = 1;
                                                    goto lab_0x10000379c;
                                                } else {
                                                    // 0x10000371c
                                                    *v20 = 1;
                                                    if (*v9 == 53) {
                                                        // 0x100003790
                                                        *v12 = 1;
                                                        goto lab_0x10000379c;
                                                    } else {
                                                        // 0x100003738
                                                        *v20 = 1;
                                                        if (*v9 == 83) {
                                                            // 0x100003790
                                                            *v12 = 1;
                                                            goto lab_0x10000379c;
                                                        } else {
                                                            // 0x100003754
                                                            *v20 = 1;
                                                            if (*v9 == 50) {
                                                                // 0x100003790
                                                                *v12 = 1;
                                                                goto lab_0x10000379c;
                                                            } else {
                                                                // 0x100003790
                                                                v27 = *v9;
                                                                v28 = v27 == 90;
                                                                *v20 = v28;
                                                                *v12 = v28;
                                                                if (v27 != 90) {
                                                                    // break -> 0x1000037d8
                                                                    break;
                                                                }
                                                                goto lab_0x10000379c;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        // 0x1000037d8
                        *(char *)(*v5 + (int64_t)*v6) = *v9;
                    } else {
                        // 0x1000037f0
                        *v17 = v34;
                        *v9 = *(char *)(*v17 + (int64_t)(_rand() % 26));
                        *v10 = 0;
                        if (*(char *)&g5 != 0) {
                            while (true) {
                                // 0x10000384c
                                *v18 = 1;
                                if (*v9 == 73) {
                                    // 0x10000394c
                                    *v10 = 1;
                                    goto lab_0x100003958;
                                } else {
                                    // 0x100003868
                                    *v18 = 1;
                                    if (*v9 == 108) {
                                        // 0x10000394c
                                        *v10 = 1;
                                        goto lab_0x100003958;
                                    } else {
                                        // 0x100003884
                                        *v18 = 1;
                                        if (*v9 == 49) {
                                            // 0x10000394c
                                            *v10 = 1;
                                            goto lab_0x100003958;
                                        } else {
                                            // 0x1000038a0
                                            *v18 = 1;
                                            if (*v9 == 79) {
                                                // 0x10000394c
                                                *v10 = 1;
                                                goto lab_0x100003958;
                                            } else {
                                                // 0x1000038bc
                                                *v18 = 1;
                                                if (*v9 == 48) {
                                                    // 0x10000394c
                                                    *v10 = 1;
                                                    goto lab_0x100003958;
                                                } else {
                                                    // 0x1000038d8
                                                    *v18 = 1;
                                                    if (*v9 == 53) {
                                                        // 0x10000394c
                                                        *v10 = 1;
                                                        goto lab_0x100003958;
                                                    } else {
                                                        // 0x1000038f4
                                                        *v18 = 1;
                                                        if (*v9 == 83) {
                                                            // 0x10000394c
                                                            *v10 = 1;
                                                            goto lab_0x100003958;
                                                        } else {
                                                            // 0x100003910
                                                            *v18 = 1;
                                                            if (*v9 == 50) {
                                                                // 0x10000394c
                                                                *v10 = 1;
                                                                goto lab_0x100003958;
                                                            } else {
                                                                // 0x10000394c
                                                                v29 = *v9;
                                                                v30 = v29 == 90;
                                                                *v18 = v30;
                                                                *v10 = v30;
                                                                if (v29 != 90) {
                                                                    // break -> 0x100003994
                                                                    break;
                                                                }
                                                                goto lab_0x100003958;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        // 0x100003994
                        *(char *)(*v5 + (int64_t)*v6) = *v9;
                    }
                }
                // 0x1000039ac
                *v6 = *v6 + 1;
                v35 = (int32_t *)(4 * (int64_t)*v8 + v16);
                *v35 = *v35 - 1;
            }
            // 0x1000033f8
            v36 = *v6;
        }
    }
    int64_t v37 = *v5; // 0x1000039d4
    *(char *)(v37 + (int64_t)g3) = 0;
    *(int64_t *)(v4 - 16) = v37;
    int64_t v38 = _printf("%s\n", (char *)v1); // 0x1000039fc
    *(int64_t *)(v2 - 176) = *(int64_t *)(v2 - 48);
    int64_t result = v38; // 0x100003a24
    if (*(int64_t *)*(int64_t *)0x100004010 != *(int64_t *)(v2 - 8)) {
        // 0x100003a2c
        result = ___stack_chk_fail(v38);
    }
    // 0x100003a30
    return result;
  lab_0x1000035e0:;
    int32_t v39 = *v8; // 0x1000035e0
    int64_t v40 = *(int64_t *)(8 * (int64_t)v39 + (int64_t)&g2); // 0x1000035ec
    *v15 = v40;
    *v9 = *(char *)(*v15 + (int64_t)(_rand() % 10));
    *v14 = 0;
    if (*(char *)&g5 == 0) {
        // break -> 0x10000361c
        goto lab_0x10000361c;
    }
    goto lab_0x1000034d4;
  lab_0x10000379c:;
    int32_t v41 = *v8; // 0x10000379c
    int64_t v42 = *(int64_t *)(8 * (int64_t)v41 + (int64_t)&g2); // 0x1000037a8
    *v13 = v42;
    *v9 = *(char *)(*v13 + (int64_t)(_rand() % 30));
    *v12 = 0;
    if (*(char *)&g5 == 0) {
        // break -> 0x1000037d8
        goto lab_0x1000037d8;
    }
    goto lab_0x100003690;
  lab_0x100003958:;
    int32_t v43 = *v8; // 0x100003958
    int64_t v44 = *(int64_t *)(8 * (int64_t)v43 + (int64_t)&g2); // 0x100003964
    *v11 = v44;
    *v9 = *(char *)(*v11 + (int64_t)(_rand() % 26));
    *v10 = 0;
    if (*(char *)&g5 == 0) {
        // break -> 0x100003994
        goto lab_0x100003994;
    }
    goto lab_0x10000384c;
}

// Address range: 0x100003a44 - 0x100003d08
int64_t entry_point(void) {
    // 0x100003a44
    int64_t v1; // 0x100003a44
    int32_t v2 = v1; // 0x100003a54
    int32_t v3 = _time(NULL); // 0x100003a60
    g6 = v3;
    int32_t v4 = 1 - v2; // 0x100003a88
    if (v4 < 0 != (v4 & v2) < 0) {
        int64_t v5 = *(int64_t *)(v1 + 8); // 0x100003aa0
        uint64_t v6 = (int64_t)*(char *)(v5 + 1) + 0xffffff9d & 0xffffffff; // 0x100003aac
        int64_t result = v3; // 0x100003abc
        if (v6 >= 16 == (v6 != 16)) {
            // 0x100003c7c
            _printf("Help:\nThis program generates a random password.\nCommands:Set password length: -l [integer]\nSet password count: -c [integer]\nSet seed: -s [integer]\nExclude similiar characters: -e\nDisplay help: -h");
            result = 0;
        }
        // 0x100003ac0
        return result;
    }
    // 0x100003ca4
    _srand(v3);
    int32_t v7 = -g4; // 0x100003cc8
    if (v7 < 0 == (g4 & v7) < 0) {
        // 0x100003ac0
        return 0;
    }
    int32_t v8 = 0; // 0x100003cd0
    function_100003318();
    v8++;
    while (v8 - g4 < 0 != ((v8 - g4 ^ v8) & (g4 ^ v8)) < 0) {
        // 0x100003cd8
        function_100003318();
        v8++;
    }
    // 0x100003ac0
    return 0;
}

// Address range: 0x100003d4c - 0x100003d58
int64_t function_100003d4c(int64_t a1) {
    // 0x100003d4c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003d58 - 0x100003d64
int32_t function_100003d58(char * format, ...) {
    // 0x100003d58
    return _printf(format);
}

// Address range: 0x100003d64 - 0x100003d70
int32_t function_100003d64(char * s) {
    // 0x100003d64
    return _puts(s);
}

// Address range: 0x100003d70 - 0x100003d7c
int32_t function_100003d70(void) {
    // 0x100003d70
    return _rand();
}

// Address range: 0x100003d7c - 0x100003d88
void function_100003d7c(int32_t seed) {
    // 0x100003d7c
    _srand(seed);
}

// Address range: 0x100003d88 - 0x100003d94
int32_t function_100003d88(char * s, char * format, ...) {
    // 0x100003d88
    return _sscanf(s, format);
}

// Address range: 0x100003d94 - 0x100003da0
int32_t function_100003d94(int32_t * timer) {
    // 0x100003d94
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10

