//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <unistd.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ae4(void);
int64_t function_100003f30(void);
int32_t function_100003f3c(char * nptr);
void function_100003f48(int32_t status);
int32_t function_100003f54(struct _IO_FILE * stream, char * format, ...);
int64_t * function_100003f60(int64_t * s, int32_t c, int32_t n);
int32_t function_100003f6c(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t * g1; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _atoi(char * a1);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ae4 - 0x100003e38
int64_t function_100003ae4(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003afc
    int64_t v2; // 0x100003ae4
    int32_t v3 = v2; // 0x100003b04
    uint32_t v4 = 32 - v3;
    int32_t v5 = -1 << v4; // 0x100003b30
    int64_t v6; // bp-548, 0x100003ae4
    int64_t * v7 = _memset(&v6, 0, 132); // 0x100003b40
    int32_t v8 = v3 - 3; // 0x100003b50
    int64_t v9; // bp-416, 0x100003ae4
    int64_t v10 = &v9;
    int64_t v11 = 4 * (int64_t)v8;
    int32_t * v12 = (int32_t *)(v11 + v10);
    int64_t v13; // bp-160, 0x100003ae4
    int64_t v14 = &v13;
    int32_t * v15 = (int32_t *)(v11 + v14);
    int64_t v16; // bp-288, 0x100003ae4
    int64_t v17 = &v16;
    int32_t v18 = 0;
    uint32_t v19 = 1 << v4;
    int32_t v20 = 4 * v19; // 0x100003b88
    int32_t v21 = v18; // 0x100003ba0
    int32_t v22; // 0x100003ae4
    int64_t v23; // 0x100003ae4
    int64_t v24; // 0x100003ae4
    int64_t v25; // bp-544, 0x100003ae4
    int32_t v26; // 0x100003ae4
    int32_t v27; // 0x100003ae4
    int32_t v28; // 0x100003ae4
    int32_t v29; // 0x100003ae4
    int32_t v30; // 0x100003ae4
    int32_t v31; // 0x100003ae4
    int32_t * v32; // 0x100003ae4
    int32_t * v33; // 0x100003ae4
    int32_t * v34; // 0x100003ae4
    int32_t * v35; // 0x100003ae4
    int32_t * v36; // 0x100003ae4
    int32_t * v37; // 0x100003ae4
    int32_t v38; // 0x100003ae4
    uint32_t v39; // 0x100003ae4
    int32_t v40; // 0x100003ae4
    int32_t v41; // 0x100003bd0
    int32_t v42; // 0x100003bf0
    int32_t v43; // 0x100003c24
    int32_t v44; // 0x100003c7c
    int32_t v45; // 0x100003ae4
    uint32_t v46; // 0x100003ccc
    int64_t v47; // 0x100003ce0
    int64_t v48; // 0x100003cf4
    int32_t * v49; // 0x100003cf4
    int32_t * v50; // 0x100003d14
    int32_t v51; // 0x100003d28
    int32_t v52; // 0x100003d58
    if (v20 != 0) {
        // 0x100003ba8
        v41 = v20;
        v29 = v18;
        while (true) {
            // 0x100003ba8
            v39 = v41;
            *v12 = v39 | v19;
            v41 = 2 * v39;
            *v15 = v41 | v20;
            v42 = v39 / 2 | v19 / 4;
            *(int32_t *)(v11 + v17) = v42;
            v43 = v5 & -1 - (*v15 | v42 | *v12);
            v25 = v43;
            v28 = v29;
            v40 = v43;
            v32 = (int32_t *)&v25;
            v38 = v8;
            v26 = v29;
            if (v43 != 0) {
                while (true) {
                    // 0x100003c58
                    v27 = v26;
                    v23 = v38;
                    v33 = v32;
                    v52 = v40;
                    v34 = v33;
                    v24 = v23;
                    v30 = v27;
                    v37 = v34;
                    while (v24 != 0) {
                        // 0x100003c6c
                        v31 = v52;
                        v44 = v31 & -v31;
                        if (v44 == v31) {
                            // 0x100003c6c
                            v22 = v24;
                            v35 = v34;
                        } else {
                            // 0x100003ca8
                            v45 = v24;
                            *v34 = v44 ^ v31 | v45;
                            v22 = v45;
                            v35 = (int32_t *)((int64_t)v34 + 4);
                        }
                        // 0x100003cc8
                        v36 = v35;
                        v46 = v22 - 1;
                        v47 = 4 * v24;
                        v48 = 4 * (int64_t)v46;
                        v49 = (int32_t *)(v48 + v14);
                        *v49 = 2 * (*(int32_t *)(v47 + v14) | v44);
                        v50 = (int32_t *)(v48 + v17);
                        *v50 = (*(int32_t *)(v47 + v17) | v44) / 2;
                        v51 = *(int32_t *)(v47 + v10) | v44;
                        *(int32_t *)(v48 + v10) = v51;
                        v52 = v5 & -1 - (*v49 | v51 | *v50);
                        v30 = v27;
                        v37 = v36;
                        if (v52 == 0) {
                            // break -> 0x100003da0
                            break;
                        }
                        // 0x100003d78
                        v23 = v24 - 1;
                        v33 = v36;
                        if (v46 == 0) {
                            // 0x100003d8c
                            v30 = v27 + 1;
                            v37 = v36;
                            goto lab_0x100003da0;
                        }
                        v34 = v33;
                        v24 = v23;
                        v30 = v27;
                        v37 = v34;
                    }
                    goto lab_0x100003da0;
                }
            }
            // 0x100003b94
            v29 = v28;
            v21 = v29;
            if (v41 == 0) {
                // break -> 0x100003de4
                break;
            }
        }
    }
    int32_t v53 = v21;
    int32_t v54 = 2 * v19; // 0x100003de8
    while (v54 != 0) {
        // 0x100003b84
        v18 = v53;
        v19 = v54;
        v20 = 4 * v19;
        v21 = v18;
        if (v20 != 0) {
            // 0x100003ba8
            v41 = v20;
            v29 = v18;
            while (true) {
                // 0x100003ba8
                v39 = v41;
                *v12 = v39 | v19;
                v41 = 2 * v39;
                *v15 = v41 | v20;
                v42 = v39 / 2 | v19 / 4;
                *(int32_t *)(v11 + v17) = v42;
                v43 = v5 & -1 - (*v15 | v42 | *v12);
                v25 = v43;
                v28 = v29;
                v40 = v43;
                v32 = (int32_t *)&v25;
                v38 = v8;
                v26 = v29;
                if (v43 != 0) {
                    while (true) {
                        // 0x100003c58
                        v27 = v26;
                        v23 = v38;
                        v33 = v32;
                        v52 = v40;
                        v34 = v33;
                        v24 = v23;
                        v30 = v27;
                        v37 = v34;
                        while (v24 != 0) {
                            // 0x100003c6c
                            v31 = v52;
                            v44 = v31 & -v31;
                            if (v44 == v31) {
                                // 0x100003c6c
                                v22 = v24;
                                v35 = v34;
                            } else {
                                // 0x100003ca8
                                v45 = v24;
                                *v34 = v44 ^ v31 | v45;
                                v22 = v45;
                                v35 = (int32_t *)((int64_t)v34 + 4);
                            }
                            // 0x100003cc8
                            v36 = v35;
                            v46 = v22 - 1;
                            v47 = 4 * v24;
                            v48 = 4 * (int64_t)v46;
                            v49 = (int32_t *)(v48 + v14);
                            *v49 = 2 * (*(int32_t *)(v47 + v14) | v44);
                            v50 = (int32_t *)(v48 + v17);
                            *v50 = (*(int32_t *)(v47 + v17) | v44) / 2;
                            v51 = *(int32_t *)(v47 + v10) | v44;
                            *(int32_t *)(v48 + v10) = v51;
                            v52 = v5 & -1 - (*v49 | v51 | *v50);
                            v30 = v27;
                            v37 = v36;
                            if (v52 == 0) {
                                // break -> 0x100003da0
                                break;
                            }
                            // 0x100003d78
                            v23 = v24 - 1;
                            v33 = v36;
                            if (v46 == 0) {
                                // 0x100003d8c
                                v30 = v27 + 1;
                                v37 = v36;
                                goto lab_0x100003da0;
                            }
                            v34 = v33;
                            v24 = v23;
                            v30 = v27;
                            v37 = v34;
                        }
                        goto lab_0x100003da0;
                    }
                }
                // 0x100003b94
                v29 = v28;
                v21 = v29;
                if (v41 == 0) {
                    // break -> 0x100003de4
                    break;
                }
            }
        }
        // 0x100003de4
        v53 = v21;
        v54 = 2 * v19;
    }
    // 0x100003df4
    *(int32_t *)&g1 = 2 * v53;
    int64_t result = (int64_t)v7; // 0x100003e1c
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003e24
        result = ___stack_chk_fail();
    }
    // 0x100003e28
    return result;
  lab_0x100003da0:;
    int32_t * v55 = (int32_t *)((int64_t)v37 - 4); // 0x100003da8
    uint32_t v56 = *v55; // 0x100003dac
    int32_t v57 = v56 & -32; // 0x100003dc0
    v28 = v30;
    v40 = v57;
    v32 = v55;
    v38 = v56 % 32;
    v26 = v30;
    if (v57 == 0) {
        // break -> 0x100003b94
        goto lab_0x100003b94;
    }
    goto lab_0x100003c58;
}

// Address range: 0x100003e38 - 0x100003f30
int64_t entry_point(void) {
    // 0x100003e38
    int64_t v1; // 0x100003e38
    int32_t v2 = v1; // 0x100003e48
    int32_t v3 = v2 - 1; // 0x100003e54
    int32_t v4; // 0x100003e38
    if (v3 == 0 || v3 < 0 != (v2 & -v2) < 0) {
        // 0x100003e84
        v4 = 8;
        goto lab_0x100003e90;
    } else {
        int32_t v5 = _atoi((char *)*(int64_t *)(v1 + 8)); // 0x100003e6c
        v4 = v5;
        if (v5 < 1) {
            // 0x100003e84
            v4 = 8;
            goto lab_0x100003e90;
        } else {
            goto lab_0x100003e90;
        }
    }
  lab_0x100003e90:;
    int32_t v6 = v4;
    int32_t v7 = v6 - 27; // 0x100003e94
    if (v7 != 0 && v7 < 0 == (26 - v6 & v6) < 0) {
        int64_t v8 = *(int64_t *)0x100004010; // 0x100003ea8
        _fprintf((struct _IO_FILE *)*(int64_t *)v8, "Value too large, abort\n");
        _exit(1);
        // UNREACHABLE
    }
    if (v6 < 4 == (3 - v6 & v6) < 0) {
        // 0x100003ef4
        function_100003ae4();
    } else {
        // 0x100003ed8
        *(int32_t *)&g1 = (int32_t)(v6 == 1);
    }
    // 0x100003f00
    _printf("\nSolutions: %d\n", v1);
    return 0;
}

// Address range: 0x100003f30 - 0x100003f3c
int64_t function_100003f30(void) {
    // 0x100003f30
    return ___stack_chk_fail();
}

// Address range: 0x100003f3c - 0x100003f48
int32_t function_100003f3c(char * nptr) {
    // 0x100003f3c
    return _atoi(nptr);
}

// Address range: 0x100003f48 - 0x100003f54
void function_100003f48(int32_t status) {
    // 0x100003f48
    _exit(status);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f54
    return _fprintf(stream, format);
}

// Address range: 0x100003f60 - 0x100003f6c
int64_t * function_100003f60(int64_t * s, int32_t c, int32_t n) {
    // 0x100003f60
    return _memset(s, c, n);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(char * format, ...) {
    // 0x100003f6c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

