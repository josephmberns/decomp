//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003928(void);
int64_t function_10000397c(void);
int64_t function_1000039e4(void);
int64_t function_100003f64(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t * function_100003f70(int32_t size);
int64_t * function_100003f7c(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003f88(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x8010; // 0x100008000
int64_t g2 = 0x100000cfeedfacf; // 0x100008008

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memcpy_chk(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003928 - 0x10000397c
int64_t function_100003928(void) {
    // 0x100003928
    int64_t v1; // 0x100003928
    int32_t v2 = v1; // 0x100003934
    int64_t * v3 = _malloc(v2 + 8); // 0x100003944
    int64_t result = (int64_t)v3; // 0x100003944
    *v3 = 0;
    ___memcpy_chk(result + 8, v1, v2, -1);
    return result;
}

// Address range: 0x10000397c - 0x1000039e4
int64_t function_10000397c(void) {
    int64_t v1; // 0x10000397c
    int64_t result = v1;
    int64_t * v2 = (int64_t *)result;
    int64_t v3 = *v2; // 0x10000399c
    while (v3 != 0) {
        // 0x100003998
        result = v3;
        v2 = (int64_t *)result;
        v3 = *v2;
    }
    // 0x1000039c0
    *v2 = function_100003928();
    return result;
}

// Address range: 0x1000039e4 - 0x100003a7c
int64_t function_1000039e4(void) {
    // 0x1000039e4
    int64_t v1; // 0x1000039e4
    int32_t v2 = v1; // 0x1000039fc
    int64_t result = function_100003928(); // 0x100003a04
    int32_t v3 = (int32_t)v1 + 1;
    int32_t v4 = v3 - v2; // 0x100003a2c
    int32_t v5 = v3; // 0x100003a34
    if (v4 != 0 && v4 < 0 == ((v4 ^ v3) & (v3 ^ v2)) < 0) {
        // 0x100003a6c
        return result;
    }
    int64_t v6 = function_100003928(); // 0x100003a44
    *(int64_t *)result = v6;
    v5++;
    while (v5 - v2 == 0 || v5 - v2 < 0 != ((v5 - v2 ^ v5) & (v5 ^ v2)) < 0) {
        int64_t v7 = v6;
        v6 = function_100003928();
        *(int64_t *)v7 = v6;
        v5++;
    }
    // 0x100003a6c
    return result;
}

// Address range: 0x100003a7c - 0x100003f64
int64_t entry_point(void) {
    int64_t v1 = 0; // bp-88, 0x100003a9c
    g1 = &v1;
    int64_t v2 = function_1000039e4(); // 0x100003ab8
    int64_t v3 = v2; // bp-112, 0x100003ac0
    int64_t v4 = &v3; // 0x100003ad8
    g2 = v4;
    int64_t v5 = v4; // 0x100003b08
    if (v2 != 0) {
        // 0x100003b10
        int64_t v6; // bp-136, 0x100003a7c
        int64_t v7 = &v6;
        int64_t v8; // bp-160, 0x100003a7c
        int64_t v9 = &v8;
        int32_t v10 = *(int32_t *)(v2 + 8); // 0x100003b24
        int64_t v11 = function_1000039e4(); // 0x100003b5c
        v6 = v11;
        g2 = v7;
        int64_t v12 = v7; // 0x100003bac
        int64_t v13; // 0x100003a7c
        int32_t v14; // 0x100003a7c
        int32_t v15; // 0x100003bc8
        int64_t v16; // 0x100003c00
        int64_t v17; // 0x100003d90
        int64_t * v18; // 0x100003da8
        int64_t v19; // 0x100003ba0
        int32_t v20; // 0x100003c6c
        int64_t * v21; // 0x100003d70
        int64_t v22; // 0x100003c44
        int64_t v23; // 0x100003d44
        if (v11 != 0) {
            // 0x100003bb4
            v14 = v10 * v10;
            v15 = *(int32_t *)(v11 + 8);
            v16 = function_1000039e4();
            v8 = v16;
            g2 = v9;
            v13 = v9;
            if (v16 != 0) {
                // 0x100003c58
                v20 = *(int32_t *)(v16 + 8);
                if (v15 * v15 + v14 == v20 * v20) {
                    // 0x100003cd4
                    if (*(int64_t *)g1 == 0) {
                        // 0x100003d24
                        v23 = function_100003928();
                        *(int64_t *)g1 = v23;
                    } else {
                        // 0x100003cf0
                        function_10000397c();
                    }
                }
                // 0x100003d64
                v21 = (int64_t *)g2;
                *v21 = *(int64_t *)*v21;
                v22 = *(int64_t *)g2;
                v13 = g2;
                while (v22 != 0) {
                    // 0x100003c58
                    v20 = *(int32_t *)(v22 + 8);
                    if (v15 * v15 + v14 == v20 * v20) {
                        // 0x100003cd4
                        if (*(int64_t *)g1 == 0) {
                            // 0x100003d24
                            v23 = function_100003928();
                            *(int64_t *)g1 = v23;
                        } else {
                            // 0x100003cf0
                            function_10000397c();
                        }
                    }
                    // 0x100003d64
                    v21 = (int64_t *)g2;
                    *v21 = *(int64_t *)*v21;
                    v22 = *(int64_t *)g2;
                    v13 = g2;
                }
            }
            // 0x100003d84
            v17 = *(int64_t *)(v13 + 16);
            g2 = v17;
            v18 = (int64_t *)v17;
            *v18 = *(int64_t *)*v18;
            v19 = *(int64_t *)g2;
            v12 = g2;
            while (v19 != 0) {
                // 0x100003bb4
                v15 = *(int32_t *)(v19 + 8);
                v16 = function_1000039e4();
                v8 = v16;
                g2 = v9;
                v13 = v9;
                if (v16 != 0) {
                    // 0x100003c58
                    v20 = *(int32_t *)(v16 + 8);
                    if (v15 * v15 + v14 == v20 * v20) {
                        // 0x100003cd4
                        if (*(int64_t *)g1 == 0) {
                            // 0x100003d24
                            v23 = function_100003928();
                            *(int64_t *)g1 = v23;
                        } else {
                            // 0x100003cf0
                            function_10000397c();
                        }
                    }
                    // 0x100003d64
                    v21 = (int64_t *)g2;
                    *v21 = *(int64_t *)*v21;
                    v22 = *(int64_t *)g2;
                    v13 = g2;
                    while (v22 != 0) {
                        // 0x100003c58
                        v20 = *(int32_t *)(v22 + 8);
                        if (v15 * v15 + v14 == v20 * v20) {
                            // 0x100003cd4
                            if (*(int64_t *)g1 == 0) {
                                // 0x100003d24
                                v23 = function_100003928();
                                *(int64_t *)g1 = v23;
                            } else {
                                // 0x100003cf0
                                function_10000397c();
                            }
                        }
                        // 0x100003d64
                        v21 = (int64_t *)g2;
                        *v21 = *(int64_t *)*v21;
                        v22 = *(int64_t *)g2;
                        v13 = g2;
                    }
                }
                // 0x100003d84
                v17 = *(int64_t *)(v13 + 16);
                g2 = v17;
                v18 = (int64_t *)v17;
                *v18 = *(int64_t *)*v18;
                v19 = *(int64_t *)g2;
                v12 = g2;
            }
        }
        int64_t v24 = *(int64_t *)(v12 + 16); // 0x100003dc8
        g2 = v24;
        int64_t * v25 = (int64_t *)v24; // 0x100003de0
        *v25 = *(int64_t *)*v25;
        int64_t v26 = *(int64_t *)g2; // 0x100003afc
        v5 = g2;
        while (v26 != 0) {
            // 0x100003b10
            v10 = *(int32_t *)(v26 + 8);
            v11 = function_1000039e4();
            v6 = v11;
            g2 = v7;
            v12 = v7;
            if (v11 != 0) {
                // 0x100003bb4
                v14 = v10 * v10;
                v15 = *(int32_t *)(v11 + 8);
                v16 = function_1000039e4();
                v8 = v16;
                g2 = v9;
                v13 = v9;
                if (v16 != 0) {
                    // 0x100003c58
                    v20 = *(int32_t *)(v16 + 8);
                    if (v15 * v15 + v14 == v20 * v20) {
                        // 0x100003cd4
                        if (*(int64_t *)g1 == 0) {
                            // 0x100003d24
                            v23 = function_100003928();
                            *(int64_t *)g1 = v23;
                        } else {
                            // 0x100003cf0
                            function_10000397c();
                        }
                    }
                    // 0x100003d64
                    v21 = (int64_t *)g2;
                    *v21 = *(int64_t *)*v21;
                    v22 = *(int64_t *)g2;
                    v13 = g2;
                    while (v22 != 0) {
                        // 0x100003c58
                        v20 = *(int32_t *)(v22 + 8);
                        if (v15 * v15 + v14 == v20 * v20) {
                            // 0x100003cd4
                            if (*(int64_t *)g1 == 0) {
                                // 0x100003d24
                                v23 = function_100003928();
                                *(int64_t *)g1 = v23;
                            } else {
                                // 0x100003cf0
                                function_10000397c();
                            }
                        }
                        // 0x100003d64
                        v21 = (int64_t *)g2;
                        *v21 = *(int64_t *)*v21;
                        v22 = *(int64_t *)g2;
                        v13 = g2;
                    }
                }
                // 0x100003d84
                v17 = *(int64_t *)(v13 + 16);
                g2 = v17;
                v18 = (int64_t *)v17;
                *v18 = *(int64_t *)*v18;
                v19 = *(int64_t *)g2;
                v12 = g2;
                while (v19 != 0) {
                    // 0x100003bb4
                    v15 = *(int32_t *)(v19 + 8);
                    v16 = function_1000039e4();
                    v8 = v16;
                    g2 = v9;
                    v13 = v9;
                    if (v16 != 0) {
                        // 0x100003c58
                        v20 = *(int32_t *)(v16 + 8);
                        if (v15 * v15 + v14 == v20 * v20) {
                            // 0x100003cd4
                            if (*(int64_t *)g1 == 0) {
                                // 0x100003d24
                                v23 = function_100003928();
                                *(int64_t *)g1 = v23;
                            } else {
                                // 0x100003cf0
                                function_10000397c();
                            }
                        }
                        // 0x100003d64
                        v21 = (int64_t *)g2;
                        *v21 = *(int64_t *)*v21;
                        v22 = *(int64_t *)g2;
                        v13 = g2;
                        while (v22 != 0) {
                            // 0x100003c58
                            v20 = *(int32_t *)(v22 + 8);
                            if (v15 * v15 + v14 == v20 * v20) {
                                // 0x100003cd4
                                if (*(int64_t *)g1 == 0) {
                                    // 0x100003d24
                                    v23 = function_100003928();
                                    *(int64_t *)g1 = v23;
                                } else {
                                    // 0x100003cf0
                                    function_10000397c();
                                }
                            }
                            // 0x100003d64
                            v21 = (int64_t *)g2;
                            *v21 = *(int64_t *)*v21;
                            v22 = *(int64_t *)g2;
                            v13 = g2;
                        }
                    }
                    // 0x100003d84
                    v17 = *(int64_t *)(v13 + 16);
                    g2 = v17;
                    v18 = (int64_t *)v17;
                    *v18 = *(int64_t *)*v18;
                    v19 = *(int64_t *)g2;
                    v12 = g2;
                }
            }
            // 0x100003dbc
            v24 = *(int64_t *)(v12 + 16);
            g2 = v24;
            v25 = (int64_t *)v24;
            *v25 = *(int64_t *)*v25;
            v26 = *(int64_t *)g2;
            v5 = g2;
        }
    }
    // 0x100003df4
    g2 = *(int64_t *)(v5 + 16);
    int64_t v27 = g1;
    *(int64_t *)(*(int64_t *)(v27 + 16) + 8) = *(int64_t *)v27;
    int64_t v28 = *(int64_t *)(g1 + 16); // 0x100003e24
    g1 = v28;
    int64_t v29 = *(int64_t *)(v28 + 8); // 0x100003e30
    int64_t v30 = v29; // bp-224, 0x100003e40
    g2 = &v30;
    int64_t v31; // bp-196, 0x100003a7c
    _memcpy(&v31, (int64_t *)(v29 + 8), 12);
    int64_t v32 = g2; // 0x100003e78
    int64_t v33 = *(int64_t *)v32; // 0x100003e7c
    if (v33 == 0) {
        // 0x100003f3c
        g2 = *(int64_t *)(v32 + 16);
        return 0;
    }
    int64_t v34 = v33 + 8; // 0x100003ea8
    _memcpy(&v31, (int64_t *)v34, 12);
    int64_t v35; // 0x100003a7c
    _printf("%d, %d, %d\n", v34, 12, v35);
    int64_t * v36 = (int64_t *)g2; // 0x100003f28
    *v36 = *(int64_t *)*v36;
    int64_t v37 = *(int64_t *)g2; // 0x100003e7c
    while (v37 != 0) {
        // 0x100003e90
        v34 = v37 + 8;
        _memcpy(&v31, (int64_t *)v34, 12);
        _printf("%d, %d, %d\n", v34, 12, v35);
        v36 = (int64_t *)g2;
        *v36 = *(int64_t *)*v36;
        v37 = *(int64_t *)g2;
    }
    // 0x100003f3c
    g2 += 16;
    return 0;
}

// Address range: 0x100003f64 - 0x100003f70
int64_t function_100003f64(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    // 0x100003f64
    return ___memcpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f70 - 0x100003f7c
int64_t * function_100003f70(int32_t size) {
    // 0x100003f70
    return _malloc(size);
}

// Address range: 0x100003f7c - 0x100003f88
int64_t * function_100003f7c(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f7c
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f88 - 0x100003f94
int32_t function_100003f88(char * format, ...) {
    // 0x100003f88
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8
