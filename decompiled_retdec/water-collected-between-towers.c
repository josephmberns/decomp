//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003afc(void);
int64_t function_100003bc0(void);
int32_t function_100003f28(char * nptr);
int64_t * function_100003f34(int32_t size);
int32_t function_100003f40(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _atoi(char * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003afc - 0x100003bc0
int64_t function_100003afc(void) {
    // 0x100003afc
    int64_t v1; // 0x100003afc
    int32_t v2 = v1; // 0x100003b04
    int32_t v3 = v1; // 0x100003b08
    int32_t v4 = v2 - v3; // 0x100003b28
    if (v4 != 0 && v4 < 0 == ((v4 ^ v2) & (int32_t)(v1 ^ v1)) < 0) {
        // 0x100003bb4
        return 0;
    }
    int32_t v5 = *(int32_t *)(v1 + (0x100000000 * v1 >> 30)); // 0x100003b40
    int32_t v6 = v2; // 0x100003ba8
    int32_t result = 0; // 0x100003b98
    int32_t v7 = *(int32_t *)(4 * (int64_t)v6 + v1); // 0x100003b4c
    int32_t v8 = v5 - v7; // 0x100003b50
    result += (v8 == 0 | v8 < 0 != ((v8 ^ v5) & (v7 ^ v5)) < 0 ? 0 : v8);
    v6++;
    while (v6 - v3 == 0 || v6 - v3 < 0 != ((v6 - v3 ^ v6) & (v6 ^ v3)) < 0) {
        // 0x100003b38
        v7 = *(int32_t *)(4 * (int64_t)v6 + v1);
        v8 = v5 - v7;
        result += (v8 == 0 | v8 < 0 != ((v8 ^ v5) & (v7 ^ v5)) < 0 ? 0 : v8);
        v6++;
    }
    // 0x100003bb4
    return result;
}

// Address range: 0x100003bc0 - 0x100003e34
int64_t function_100003bc0(void) {
    // 0x100003bc0
    int64_t v1; // 0x100003bc0
    int32_t v2 = v1; // 0x100003bd0
    if (v2 < 3 != (2 - v2 & v2) < 0) {
        // 0x100003e24
        return 0;
    }
    int32_t v3 = v2 - 1; // 0x100003c08
    int32_t v4 = 1 - v2; // 0x100003c0c
    int32_t result = 0; // 0x100003c14
    int32_t v5; // 0x100003bc0
    int32_t v6; // 0x100003bc0
    int32_t v7; // 0x100003bc0
    int32_t v8; // 0x100003bc0
    int32_t v9; // 0x100003bc0
    int32_t v10; // 0x100003bc0
    int32_t v11; // 0x100003bc0
    int32_t v12; // 0x100003bc0
    if (v4 < 0 != (v4 & v3) < 0) {
        int32_t v13 = v2 - 2; // 0x100003c28
        int32_t v14 = 0; // 0x100003e0c
        int32_t v15 = 0;
        int32_t v16 = 0;
        int32_t v17 = v15; // 0x100003c34
        int32_t v18; // 0x100003bc0
        int32_t v19 = v18; // 0x100003c34
        int32_t v20 = v14; // 0x100003c34
        int32_t v21 = v16; // 0x100003c34
        int32_t v22 = v13; // 0x100003c34
        int32_t v23 = v15; // 0x100003c34
        int32_t v24 = v16; // 0x100003c34
        int32_t v25 = v18; // 0x100003c34
        int64_t v26; // 0x100003bc0
        int32_t v27; // 0x100003bc0
        int32_t v28; // 0x100003bc0
        int32_t v29; // 0x100003bc0
        int32_t v30; // 0x100003bc0
        int32_t v31; // 0x100003bc0
        int32_t v32; // 0x100003bc0
        int32_t v33; // 0x100003bc0
        int32_t v34; // 0x100003bc0
        int32_t v35; // 0x100003bc0
        int32_t v36; // 0x100003bc0
        int32_t v37; // 0x100003bc0
        int32_t v38; // 0x100003bc0
        int32_t v39; // 0x100003bc0
        int32_t v40; // 0x100003bc0
        int32_t v41; // 0x100003c44
        int32_t v42; // 0x100003c54
        int32_t v43; // 0x100003c58
        int32_t v44; // 0x100003c88
        int32_t v45; // 0x100003ca0
        int32_t v46; // 0x100003cb0
        int32_t v47; // 0x100003d30
        int32_t v48; // 0x100003d34
        int32_t v49; // 0x100003d70
        int32_t v50; // 0x100003d74
        if (v14 != v13) {
            v34 = v21;
            v27 = v20;
            v29 = v19;
            v37 = v17;
            v41 = *(int32_t *)(4 * (int64_t)v27 + v1);
            v42 = *(int32_t *)(v1 + (int64_t)(4 * v27 + 4));
            v43 = v41 - v42;
            v22 = v27;
            v23 = v37;
            v24 = v34;
            v25 = v29;
            while (v43 != 0 && v43 < 0 == ((v43 ^ v41) & (v42 ^ v41)) < 0) {
                // 0x100003c80
                v39 = v27 + 1;
                v44 = v39 - v2;
                v10 = v39;
                v12 = v27;
                v5 = v29;
                v7 = v34;
                v8 = v34;
                v32 = v29;
                if (v44 < 0 == ((v44 ^ v39) & (v39 ^ v2)) < 0) {
                    // 0x100003db4
                    v33 = v32;
                    v22 = v27;
                    v23 = v37;
                    v24 = v8;
                    v25 = v33;
                    if (v8 != 1) {
                        // break -> 0x100003e08
                        break;
                    }
                    // 0x100003dc8
                    v31 = v33;
                    v35 = 0;
                    v28 = v33;
                    v26 = function_100003afc();
                } else {
                    while (true) {
                        // 0x100003c98
                        v36 = v7;
                        v30 = v5;
                        v11 = v10;
                        v45 = *(int32_t *)(4 * (int64_t)v11 + v1);
                        v46 = v45 - v41;
                        if (v46 < 0 == ((v46 ^ v45) & (v45 ^ v41)) < 0) {
                            // break -> 0x100003cc0
                            break;
                        }
                        // 0x100003cfc
                        v9 = v36;
                        v6 = v30;
                        if (v11 == v3) {
                            goto lab_0x100003da4;
                        } else {
                            // 0x100003d18
                            v47 = *(int32_t *)(v1 + (int64_t)(4 * v11 + 4));
                            v48 = v45 - v47;
                            v9 = v36;
                            v6 = v30;
                            if (v48 < 0 == ((v48 ^ v45) & (v47 ^ v45)) < 0) {
                                goto lab_0x100003da4;
                            } else {
                                // 0x100003d44
                                v40 = v12;
                                if (v36 == 0) {
                                    // 0x100003d84
                                    v9 = 1;
                                    v6 = v40 + 2;
                                    goto lab_0x100003da4;
                                } else {
                                    // 0x100003d58
                                    v49 = *(int32_t *)(4 * (int64_t)v30 + v1);
                                    v50 = v47 - v49;
                                    v9 = v36;
                                    v6 = v30;
                                    if (v50 < 0 == ((v50 ^ v47) & (v49 ^ v47)) < 0) {
                                        // 0x100003d84
                                        v9 = 1;
                                        v6 = v40 + 2;
                                        goto lab_0x100003da4;
                                    } else {
                                        goto lab_0x100003da4;
                                    }
                                }
                            }
                        }
                    }
                    // 0x100003cc0
                    v31 = v30;
                    v35 = v36;
                    v28 = v11;
                    v26 = function_100003afc();
                }
                // 0x100003c20
                v38 = v37 + (int32_t)v26;
                v17 = v38;
                v19 = v31;
                v20 = v28;
                v21 = v35;
                v22 = v13;
                v23 = v38;
                v24 = v35;
                v25 = v31;
                if (v28 == v13) {
                    // break -> 0x100003e08
                    break;
                }
                v34 = v21;
                v27 = v20;
                v29 = v19;
                v37 = v17;
                v41 = *(int32_t *)(4 * (int64_t)v27 + v1);
                v42 = *(int32_t *)(v1 + (int64_t)(4 * v27 + 4));
                v43 = v41 - v42;
                v22 = v27;
                v23 = v37;
                v24 = v34;
                v25 = v29;
            }
        }
        // 0x100003e08
        v16 = v24;
        v15 = v23;
        v14 = v22 + 1;
        int32_t v51 = v14 - v3; // 0x100003c0c
        v18 = v25;
        result = v15;
        while (v51 < 0 != ((v51 ^ v14) & (v14 ^ v3)) < 0) {
            // 0x100003c20
            v17 = v15;
            v19 = v18;
            v20 = v14;
            v21 = v16;
            v22 = v13;
            v23 = v15;
            v24 = v16;
            v25 = v18;
            if (v14 != v13) {
                v34 = v21;
                v27 = v20;
                v29 = v19;
                v37 = v17;
                v41 = *(int32_t *)(4 * (int64_t)v27 + v1);
                v42 = *(int32_t *)(v1 + (int64_t)(4 * v27 + 4));
                v43 = v41 - v42;
                v22 = v27;
                v23 = v37;
                v24 = v34;
                v25 = v29;
                while (v43 != 0 && v43 < 0 == ((v43 ^ v41) & (v42 ^ v41)) < 0) {
                    // 0x100003c80
                    v39 = v27 + 1;
                    v44 = v39 - v2;
                    v10 = v39;
                    v12 = v27;
                    v5 = v29;
                    v7 = v34;
                    v8 = v34;
                    v32 = v29;
                    if (v44 < 0 == ((v44 ^ v39) & (v39 ^ v2)) < 0) {
                        // 0x100003db4
                        v33 = v32;
                        v22 = v27;
                        v23 = v37;
                        v24 = v8;
                        v25 = v33;
                        if (v8 != 1) {
                            // break -> 0x100003e08
                            break;
                        }
                        // 0x100003dc8
                        v31 = v33;
                        v35 = 0;
                        v28 = v33;
                        v26 = function_100003afc();
                    } else {
                        while (true) {
                            // 0x100003c98
                            v36 = v7;
                            v30 = v5;
                            v11 = v10;
                            v45 = *(int32_t *)(4 * (int64_t)v11 + v1);
                            v46 = v45 - v41;
                            if (v46 < 0 == ((v46 ^ v45) & (v45 ^ v41)) < 0) {
                                // break -> 0x100003cc0
                                break;
                            }
                            // 0x100003cfc
                            v9 = v36;
                            v6 = v30;
                            if (v11 == v3) {
                                goto lab_0x100003da4;
                            } else {
                                // 0x100003d18
                                v47 = *(int32_t *)(v1 + (int64_t)(4 * v11 + 4));
                                v48 = v45 - v47;
                                v9 = v36;
                                v6 = v30;
                                if (v48 < 0 == ((v48 ^ v45) & (v47 ^ v45)) < 0) {
                                    goto lab_0x100003da4;
                                } else {
                                    // 0x100003d44
                                    v40 = v12;
                                    if (v36 == 0) {
                                        // 0x100003d84
                                        v9 = 1;
                                        v6 = v40 + 2;
                                        goto lab_0x100003da4;
                                    } else {
                                        // 0x100003d58
                                        v49 = *(int32_t *)(4 * (int64_t)v30 + v1);
                                        v50 = v47 - v49;
                                        v9 = v36;
                                        v6 = v30;
                                        if (v50 < 0 == ((v50 ^ v47) & (v49 ^ v47)) < 0) {
                                            // 0x100003d84
                                            v9 = 1;
                                            v6 = v40 + 2;
                                            goto lab_0x100003da4;
                                        } else {
                                            goto lab_0x100003da4;
                                        }
                                    }
                                }
                            }
                        }
                        // 0x100003cc0
                        v31 = v30;
                        v35 = v36;
                        v28 = v11;
                        v26 = function_100003afc();
                    }
                    // 0x100003c20
                    v38 = v37 + (int32_t)v26;
                    v17 = v38;
                    v19 = v31;
                    v20 = v28;
                    v21 = v35;
                    v22 = v13;
                    v23 = v38;
                    v24 = v35;
                    v25 = v31;
                    if (v28 == v13) {
                        // break -> 0x100003e08
                        break;
                    }
                    v34 = v21;
                    v27 = v20;
                    v29 = v19;
                    v37 = v17;
                    v41 = *(int32_t *)(4 * (int64_t)v27 + v1);
                    v42 = *(int32_t *)(v1 + (int64_t)(4 * v27 + 4));
                    v43 = v41 - v42;
                    v22 = v27;
                    v23 = v37;
                    v24 = v34;
                    v25 = v29;
                }
            }
            // 0x100003e08
            v16 = v24;
            v15 = v23;
            v14 = v22 + 1;
            v51 = v14 - v3;
            v18 = v25;
            result = v15;
        }
    }
    // 0x100003e24
    return result;
  lab_0x100003da4:;
    int32_t v52 = v11 + 1;
    int32_t v53 = v52 - v2; // 0x100003c88
    v10 = v52;
    v12 = v11;
    v5 = v6;
    v7 = v9;
    v8 = v9;
    if (v53 < 0 == ((v53 ^ v52) & (v52 ^ v2)) < 0) {
        goto lab_0x100003db4;
    }
    goto lab_0x100003c98;
}

// Address range: 0x100003e34 - 0x100003f28
int64_t entry_point(void) {
    // 0x100003e34
    int64_t v1; // 0x100003e34
    int32_t v2 = v1; // 0x100003e44
    if (v2 == 1) {
        // 0x100003e60
        _printf("Usage : %s <followed by space separated series of integers>", (char *)v1);
        // 0x100003f18
        return 0;
    }
    int64_t v3 = (int64_t)_malloc(4 * v2 - 4); // 0x100003e8c
    int32_t v4 = 1 - v2; // 0x100003ea8
    int32_t v5 = 1; // 0x100003eb0
    if (v4 < 0 != (v4 & v2) < 0) {
        int32_t v6 = _atoi((char *)*(int64_t *)(8 * (int64_t)v5 + v1)); // 0x100003ec4
        *(int32_t *)((int64_t)(4 * v5 - 4) + v3) = v6;
        v5++;
        while (v5 - v2 < 0 != ((v5 - v2 ^ v5) & (v5 ^ v2)) < 0) {
            // 0x100003eb8
            v6 = _atoi((char *)*(int64_t *)(8 * (int64_t)v5 + v1));
            *(int32_t *)((int64_t)(4 * v5 - 4) + v3) = v6;
            v5++;
        }
    }
    // 0x100003eec
    function_100003bc0();
    _printf("Water collected : %d", v1 + 0xffffffff & 0xffffffff);
    // 0x100003f18
    return 0;
}

// Address range: 0x100003f28 - 0x100003f34
int32_t function_100003f28(char * nptr) {
    // 0x100003f28
    return _atoi(nptr);
}

// Address range: 0x100003f34 - 0x100003f40
int64_t * function_100003f34(int32_t size) {
    // 0x100003f34
    return _malloc(size);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(char * format, ...) {
    // 0x100003f40
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

