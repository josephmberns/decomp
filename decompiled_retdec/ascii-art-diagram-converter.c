//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_10000381c(void);
int64_t function_100003858(void);
int64_t function_100003968(void);
int64_t function_100003ca8(void);
int64_t function_100003d8c(void);
int64_t function_100003d98(int64_t a1, int64_t * a2, int64_t a3);
int32_t function_100003da4(char * format, ...);
int32_t function_100003db0(char * s);
char * function_100003dbc(char * s, int32_t c);
int32_t function_100003dc8(char * s);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x10000000003dd4; // 0x100008000
int32_t * g2 = (int32_t *)0x100000cfeedfacf; // 0x100008070
int64_t g3 = 0x100000c; // 0x100008074
int64_t g4 = 0x200000000; // 0x100008078
int64_t g5 = 0x1200000002; // 0x10000807c
int64_t g6 = 0x50800000012; // 0x100008080
int64_t g7 = 0x20008500000508; // 0x100008084
int32_t * g8 = (int32_t *)0x200085; // 0x100008088
int32_t * g9 = (int32_t *)0x1900000000; // 0x10000808c
int32_t * g10 = (int32_t *)0x4800000019; // 0x100008090

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int64_t ___strcpy_chk(int64_t a1, int64_t * a2, int64_t a3);
int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);
char * _strchr(char * a1, int32_t a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003720 - 0x10000381c
int64_t entry_point(void) {
    // 0x100003720
    _printf("Extract meta-data from bit-encoded text form\n");
    function_10000381c();
    *(int32_t *)&g9 = 0;
    int32_t v1 = 0;
    int64_t v2 = *(int64_t *)(8 * (int64_t)v1 + (int64_t)&g1); // 0x100003774
    while (v2 != 0) {
        // 0x100003794
        if ((int32_t)function_100003858() < 1) {
            // 0x1000037c4
            function_100003968();
        }
        int32_t v3 = v1 + 1; // 0x1000037fc
        if (v1 < 13 == (12 - v1 & v3) < 0) {
            // break -> 0x100003808
            break;
        }
        v1 = v3;
        v2 = *(int64_t *)(8 * (int64_t)v1 + (int64_t)&g1);
    }
    // 0x100003808
    function_100003ca8();
    return 0;
}

// Address range: 0x10000381c - 0x100003858
int64_t function_10000381c(void) {
    // 0x10000381c
    *(int32_t *)&g2 = 1024;
    *(int32_t *)&g4 = 12;
    *(int32_t *)&g5 = 34;
    *(int32_t *)&g6 = 56;
    *(int32_t *)&g7 = 78;
    *(int32_t *)&g3 = 0xb50a;
    int64_t result; // 0x10000381c
    return result;
}

// Address range: 0x100003858 - 0x100003968
int64_t function_100003858(void) {
    // 0x100003858
    int64_t v1; // 0x100003858
    char * v2 = _strchr((char *)v1, 43); // 0x100003870
    if (v2 == NULL) {
        // 0x100003958
        return 0;
    }
    int64_t v3 = (int64_t)v2;
    int64_t v4 = 0; // 0x1000038c0
    int32_t v5 = 0; // 0x1000038c0
    if (_strlen(v2) == 1) {
        // 0x100003958
        return 0;
    }
    int32_t v6 = 0; // 0x1000038c0
    int32_t result = 0; // 0x1000038dc
    while (*(char *)(v4 + v3) == 43) {
        // 0x1000038e4
        result = 0;
        if (*(char *)((int64_t)(v5 + 1) + v3) != 45) {
            // break -> 0x100003958
            break;
        }
        // 0x100003904
        result = 0;
        if (*(char *)((int64_t)(v5 + 2) + v3) != 45) {
            // break -> 0x100003958
            break;
        }
        // 0x10000392c
        v6++;
        v5 += 3;
        v4 = v5;
        result = v6;
        if ((int64_t)_strlen(v2) - 1 <= v4) {
            // break -> 0x100003958
            break;
        }
        result = 0;
    }
    // 0x100003958
    return result;
}

// Address range: 0x100003968 - 0x100003ca8
int64_t function_100003968(void) {
    // 0x100003968
    int64_t v1; // 0x100003968
    char * v2 = _strchr((char *)v1, 124); // 0x1000039a8
    int64_t result = 0; // 0x1000039bc
    if (v2 != NULL) {
        // 0x1000039c8
        int64_t v3; // bp-104, 0x100003968
        int64_t v4 = &v3;
        int64_t v5 = (int64_t)v2 + 1; // 0x1000039cc
        char * v6 = _strchr((char *)v5, 124); // 0x1000039dc
        result = 0;
        if (v6 != NULL) {
            int32_t v7 = 15;
            int64_t v8 = (int64_t)v6 - v5; // 0x100003a04
            int32_t v9 = v8; // 0x100003a08
            *(char *)((v8 & 0xffffffff) + v4) = 0;
            int32_t v10 = 0; // 0x100003a3c
            int32_t v11 = 0; // 0x100003a3c
            int32_t v12; // 0x100003968
            int32_t v13; // 0x100003968
            char v14; // 0x100003a4c
            int32_t v15; // 0x100003a4c
            int32_t v16; // 0x100003a50
            int32_t v17; // 0x100003a98
            if (v9 != 0) {
                v12 = 0;
                v14 = *(char *)(v5 + (int64_t)v10);
                v15 = v14;
                v16 = v15 - 32;
                v13 = v12;
                if (v16 != 0 && v16 < 0 == (31 - v15 & v15) < 0) {
                    // 0x100003a60
                    *(char *)((int64_t)v12 + v4) = v14;
                    v13 = v12 + 1;
                }
                // 0x100003a94
                v17 = v10 + 1;
                v10 = v17;
                v11 = v13;
                while (v17 != v9) {
                    // 0x100003a44
                    v12 = v13;
                    v14 = *(char *)(v5 + (int64_t)v10);
                    v15 = v14;
                    v16 = v15 - 32;
                    v13 = v12;
                    if (v16 != 0 && v16 < 0 == (31 - v15 & v15) < 0) {
                        // 0x100003a60
                        *(char *)((int64_t)v12 + v4) = v14;
                        v13 = v12 + 1;
                    }
                    // 0x100003a94
                    v17 = v10 + 1;
                    v10 = v17;
                    v11 = v13;
                }
            }
            // 0x100003aa4
            *(char *)((int64_t)v11 + v4) = 0;
            uint32_t v18 = v9 + 1; // 0x100003abc
            uint32_t v19 = *(int32_t *)&g9; // 0x100003acc
            *(int32_t *)&g9 = v19 + 1;
            int64_t v20 = 96 * (int64_t)v19; // 0x100003ae0
            int32_t * v21 = (int32_t *)(v20 + (int64_t)&g10); // 0x100003af0
            ___strcpy_chk(v20 + (int64_t)&g10 + 12, &v3, -1);
            *v21 = v18 / 3;
            int32_t * v22; // 0x100003968
            int32_t v23; // 0x100003968
            int32_t v24; // 0x100003968
            int32_t v25; // 0x100003968
            int32_t v26; // 0x100003968
            int32_t v27; // 0x100003968
            int32_t v28; // 0x100003968
            int32_t v29; // 0x100003968
            int32_t v30; // 0x100003968
            int32_t v31; // 0x100003968
            int32_t v32; // 0x100003968
            uint32_t v33; // 0x100003968
            int32_t v34; // 0x100003968
            uint32_t v35; // 0x100003c3c
            int32_t v36; // 0x100003c58
            uint32_t v37; // 0x100003b94
            int32_t v38; // 0x100003ba4
            int32_t v39; // 0x100003bb0
            int32_t * v40; // 0x100003bb8
            int32_t v41; // 0x100003bc0
            int32_t v42; // 0x100003b58
            int32_t v43; // 0x100003b70
            int32_t v44; // 0x100003b80
            int32_t v45; // 0x100003bf4
            if (v18 < 48) {
                // 0x100003b38
                v22 = (int32_t *)(v20 + (int64_t)&g10 + 4);
                v23 = *v22;
                v24 = v23;
                v28 = v7;
                v25 = v23;
                v29 = v7;
                if (v18 >= 3) {
                    v42 = v28 - 1;
                    v43 = 1 << v28 | v24;
                    *v22 = v43;
                    v44 = 1;
                    v24 = v43;
                    v34 = v44;
                    v28 = v42;
                    v25 = v43;
                    v29 = v42;
                    while (v44 < *v21) {
                        // 0x100003b54
                        v42 = v28 - 1;
                        v43 = 1 << v28 | v24;
                        *v22 = v43;
                        v44 = v34 + 1;
                        v24 = v43;
                        v34 = v44;
                        v28 = v42;
                        v25 = v43;
                        v29 = v42;
                    }
                }
                // 0x100003b8c
                v30 = v29;
                v37 = *(int32_t *)&g8;
                v38 = *(int32_t *)(4 * (int64_t)v37 + (int64_t)&g2);
                v39 = v25 & v38;
                v40 = (int32_t *)(v20 + (int64_t)&g10 + 8);
                *v40 = v39;
                v41 = *v22;
                v26 = v39;
                v32 = v41;
                v27 = v41;
                if (v41 % 2 == 0) {
                    v33 = v32;
                    v45 = v26 / 2;
                    v26 = v45;
                    v32 = v33 / 2;
                    while ((v33 & 2) == 0) {
                        // 0x100003be0
                        v33 = v32;
                        v45 = v26 / 2;
                        v26 = v45;
                        v32 = v33 / 2;
                    }
                    // 0x100003bcc
                    *v40 = v45;
                    v27 = *v22;
                }
                // 0x100003c00
                v31 = v30;
                if (v27 == 15) {
                    // 0x100003c18
                    *(int32_t *)&g8 = *(int32_t *)&g8 + 1;
                    v31 = v30;
                }
            } else {
                // 0x100003c34
                v35 = *(int32_t *)&g8;
                *(int32_t *)&g8 = v35 + 1;
                v36 = *(int32_t *)(4 * (int64_t)v35 + (int64_t)&g2);
                *(int32_t *)(v20 + (int64_t)&g10 + 8) = v36;
                v31 = v7;
            }
            int64_t v46 = v18;
            char * v47 = _strchr(v6, 124); // 0x1000039a8
            result = v46;
            while (v47 != NULL) {
                int64_t v48 = (int64_t)v47 + 1; // 0x1000039cc
                char * v49 = _strchr((char *)v48, 124); // 0x1000039dc
                result = v46;
                if (v49 == NULL) {
                    // break -> 0x100003c6c
                    break;
                }
                v7 = v31;
                int64_t v50 = v48;
                v8 = (int64_t)v49 - v50;
                v9 = v8;
                *(char *)((v8 & 0xffffffff) + v4) = 0;
                v10 = 0;
                v11 = 0;
                if (v9 != 0) {
                    v12 = 0;
                    v14 = *(char *)(v50 + (int64_t)v10);
                    v15 = v14;
                    v16 = v15 - 32;
                    v13 = v12;
                    if (v16 != 0 && v16 < 0 == (31 - v15 & v15) < 0) {
                        // 0x100003a60
                        *(char *)((int64_t)v12 + v4) = v14;
                        v13 = v12 + 1;
                    }
                    // 0x100003a94
                    v17 = v10 + 1;
                    v10 = v17;
                    v11 = v13;
                    while (v17 != v9) {
                        // 0x100003a44
                        v12 = v13;
                        v14 = *(char *)(v50 + (int64_t)v10);
                        v15 = v14;
                        v16 = v15 - 32;
                        v13 = v12;
                        if (v16 != 0 && v16 < 0 == (31 - v15 & v15) < 0) {
                            // 0x100003a60
                            *(char *)((int64_t)v12 + v4) = v14;
                            v13 = v12 + 1;
                        }
                        // 0x100003a94
                        v17 = v10 + 1;
                        v10 = v17;
                        v11 = v13;
                    }
                }
                // 0x100003aa4
                *(char *)((int64_t)v11 + v4) = 0;
                v18 = v9 + 1;
                v19 = *(int32_t *)&g9;
                *(int32_t *)&g9 = v19 + 1;
                v20 = 96 * (int64_t)v19;
                v21 = (int32_t *)(v20 + (int64_t)&g10);
                ___strcpy_chk(v20 + (int64_t)&g10 + 12, &v3, -1);
                *v21 = v18 / 3;
                if (v18 < 48) {
                    // 0x100003b38
                    v22 = (int32_t *)(v20 + (int64_t)&g10 + 4);
                    v23 = *v22;
                    v24 = v23;
                    v28 = v7;
                    v25 = v23;
                    v29 = v7;
                    if (v18 >= 3) {
                        v42 = v28 - 1;
                        v43 = 1 << v28 | v24;
                        *v22 = v43;
                        v44 = 1;
                        v24 = v43;
                        v34 = v44;
                        v28 = v42;
                        v25 = v43;
                        v29 = v42;
                        while (v44 < *v21) {
                            // 0x100003b54
                            v42 = v28 - 1;
                            v43 = 1 << v28 | v24;
                            *v22 = v43;
                            v44 = v34 + 1;
                            v24 = v43;
                            v34 = v44;
                            v28 = v42;
                            v25 = v43;
                            v29 = v42;
                        }
                    }
                    // 0x100003b8c
                    v30 = v29;
                    v37 = *(int32_t *)&g8;
                    v38 = *(int32_t *)(4 * (int64_t)v37 + (int64_t)&g2);
                    v39 = v25 & v38;
                    v40 = (int32_t *)(v20 + (int64_t)&g10 + 8);
                    *v40 = v39;
                    v41 = *v22;
                    v26 = v39;
                    v32 = v41;
                    v27 = v41;
                    if (v41 % 2 == 0) {
                        v33 = v32;
                        v45 = v26 / 2;
                        v26 = v45;
                        v32 = v33 / 2;
                        while ((v33 & 2) == 0) {
                            // 0x100003be0
                            v33 = v32;
                            v45 = v26 / 2;
                            v26 = v45;
                            v32 = v33 / 2;
                        }
                        // 0x100003bcc
                        *v40 = v45;
                        v27 = *v22;
                    }
                    // 0x100003c00
                    v31 = v30;
                    if (v27 == 15) {
                        // 0x100003c18
                        *(int32_t *)&g8 = *(int32_t *)&g8 + 1;
                        v31 = v30;
                    }
                } else {
                    // 0x100003c34
                    v35 = *(int32_t *)&g8;
                    *(int32_t *)&g8 = v35 + 1;
                    v36 = *(int32_t *)(4 * (int64_t)v35 + (int64_t)&g2);
                    *(int32_t *)(v20 + (int64_t)&g10 + 8) = v36;
                    v31 = v7;
                }
                // 0x100003c68
                v46 = v18;
                v47 = _strchr(v49, 124);
                result = v46;
            }
        }
    }
    int64_t v51 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003c80
    if (v51 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003c94
        ___stack_chk_fail();
    }
    // 0x100003c98
    return result;
}

// Address range: 0x100003ca8 - 0x100003d8c
int64_t function_100003ca8(void) {
    // 0x100003ca8
    _printf("-name-bits-mask-data-\n");
    int32_t v1 = 0;
    int32_t v2 = *(int32_t *)(96 * (int64_t)v1 + (int64_t)&g10); // 0x100003cfc
    while (v2 != 0) {
        // 0x100003d14
        int64_t v3; // 0x100003ca8
        _printf("%10s %2d X%04x = %u\n", (char *)v3, v3, (int32_t)v3, (int32_t)v3);
        int32_t v4 = v1 + 1; // 0x100003d68
        if (v1 < 19 == (18 - v1 & v4) < 0) {
            // break -> 0x100003d74
            break;
        }
        v1 = v4;
        v2 = *(int32_t *)(96 * (int64_t)v1 + (int64_t)&g10);
    }
    // 0x100003d74
    return _puts("bye..");
}

// Address range: 0x100003d8c - 0x100003d98
int64_t function_100003d8c(void) {
    // 0x100003d8c
    return ___stack_chk_fail();
}

// Address range: 0x100003d98 - 0x100003da4
int64_t function_100003d98(int64_t a1, int64_t * a2, int64_t a3) {
    // 0x100003d98
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003da4 - 0x100003db0
int32_t function_100003da4(char * format, ...) {
    // 0x100003da4
    return _printf(format);
}

// Address range: 0x100003db0 - 0x100003dbc
int32_t function_100003db0(char * s) {
    // 0x100003db0
    return _puts(s);
}

// Address range: 0x100003dbc - 0x100003dc8
char * function_100003dbc(char * s, int32_t c) {
    // 0x100003dbc
    return _strchr(s, c);
}

// Address range: 0x100003dc8 - 0x100003dd4
int32_t function_100003dc8(char * s) {
    // 0x100003dc8
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 11
