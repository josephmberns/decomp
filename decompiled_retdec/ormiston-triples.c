//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003750(void);
int64_t function_1000038b0(void);
int64_t function_100003ef0(int64_t a1);
int64_t * function_100003efc(int32_t nmemb, int32_t size);
void function_100003f08(int64_t * ptr);
int64_t * function_100003f14(int32_t size);
int32_t function_100003f20(char * format, ...);
char * function_100003f2c(int32_t category, char * locale);

// --------------------- Global Variables ---------------------

char * g1; // 0x100003f68
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
char * _setlocale(int32_t a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003750 - 0x1000038b0
int64_t function_100003750(void) {
    // 0x100003750
    int64_t v1; // 0x100003750
    uint64_t v2 = v1 + 1; // 0x100003768
    int64_t * v3 = _calloc((int32_t)v2, 1); // 0x100003774
    int64_t result = (int64_t)v3; // 0x100003774
    *(char *)v3 = 1;
    *(char *)(result + 1) = 1;
    for (int64_t i = 4; i < v2; i += 2) {
        // 0x1000037b4
        *(char *)(i + result) = 1;
    }
    // 0x1000037e8
    if (v2 <= 9) {
        // 0x1000038a0
        return result;
    }
    int64_t v4 = 3;
    int64_t v5 = 9;
    if (v5 < v2) {
        for (int64_t i = v5; i < v2; i += 2 * v4) {
            // 0x100003838
            *(char *)(i + result) = 1;
        }
    }
    int64_t v6 = v4 + 2; // 0x100003874
    int64_t v7 = v6; // 0x10000388c
    while (*(char *)(v6 + result) % 2 != 0) {
        // 0x100003870
        v6 = v7 + 2;
        v7 = v6;
    }
    int64_t v8 = v6 * v6; // 0x1000037f0
    while (v8 < v2) {
        // 0x100003820
        v4 = v6;
        v5 = v8;
        if (v5 < v2) {
            for (int64_t i = v5; i < v2; i += 2 * v4) {
                // 0x100003838
                *(char *)(i + result) = 1;
            }
        }
        // 0x100003870
        v6 = v4 + 2;
        v7 = v6;
        while (*(char *)(v6 + result) % 2 != 0) {
            // 0x100003870
            v6 = v7 + 2;
            v7 = v6;
        }
        // 0x1000037e8
        v8 = v6 * v6;
    }
    // 0x1000038a0
    return result;
}

// Address range: 0x1000038b0 - 0x100003954
int64_t function_1000038b0(void) {
    // 0x1000038b0
    int64_t result; // 0x1000038b0
    if (result == 0) {
        // 0x1000038d0
        *(int64_t *)result = 0;
        *(int64_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int32_t *)(result + 20) = 1;
        // 0x10000394c
        return result;
    }
    int32_t * v1 = (int32_t *)(result + 20); // 0x1000038f0
    *v1 = 1;
    *(char *)result = (char)(result % 10);
    if (result < 10) {
        // 0x10000394c
        return result;
    }
    int64_t v2; // 0x1000038b0
    uint64_t v3 = v2;
    uint64_t v4 = v3 / 10; // 0x10000393c
    int32_t v5 = *v1;
    *v1 = v5 + 1;
    *(char *)(result + (int64_t)v5) = (char)(v4 % 10);
    while (v3 >= 100) {
        // 0x10000390c
        v3 = v4;
        v4 = v3 / 10;
        v5 = *v1;
        *v1 = v5 + 1;
        *(char *)(result + (int64_t)v5) = (char)(v4 % 10);
    }
    // 0x10000394c
    return result;
}

// Address range: 0x100003954 - 0x100003ef0
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x10000397c
    int64_t v2 = function_100003750(); // 0x100003990
    int64_t v3 = 0;
    for (int64_t i = 0; i < 0x2540be400; i++) {
        // 0x1000039b8
        v3 += (int64_t)(*(char *)(i + v2) % 2 == 0);
    }
    int64_t * v4 = _malloc(8 * (int32_t)v3); // 0x1000039fc
    int64_t v5 = (int64_t)v4; // 0x1000039fc
    int64_t v6 = 0;
    int64_t v7 = 0;
    int64_t v8 = v6; // 0x100003a38
    if (*(char *)(v7 + v2) % 2 == 0) {
        // 0x100003a40
        *(int64_t *)(8 * v6 + v5) = v7;
        v8 = v6 + 1;
    }
    int64_t v9 = v7 + 1; // 0x100003a64
    while (v9 != 0x2540be400) {
        // 0x100003a28
        v6 = v8;
        v7 = v9;
        v8 = v6;
        if (*(char *)(v7 + v2) % 2 == 0) {
            // 0x100003a40
            *(int64_t *)(8 * v6 + v5) = v7;
            v8 = v6 + 1;
        }
        // 0x100003a60
        v9 = v7 + 1;
    }
    // 0x100003a70
    _free((int64_t *)v2);
    int64_t v10 = v3 - 2; // 0x100003a94
    int64_t v11; // 0x100003954
    int64_t v12; // bp-272, 0x100003954
    int64_t v13; // 0x100003954
    int64_t v14; // 0x100003954
    int64_t v15; // 0x100003954
    int32_t v16; // 0x100003954
    int32_t v17; // 0x100003954
    int32_t v18; // 0x100003954
    int32_t v19; // 0x100003954
    int32_t v20; // 0x100003954
    int32_t v21; // 0x100003954
    int64_t v22; // 0x100003954
    int64_t v23; // 0x100003954
    int64_t v24; // 0x100003954
    uint64_t v25; // 0x100003ab0
    if (v10 == 0) {
        // 0x100003a70
        v11 = &v12;
    } else {
        // 0x100003aa8
        int32_t v26; // 0x100003954
        int32_t v27 = -v26;
        float128_t v28; // bp-64, 0x100003954
        int64_t v29 = &v28;
        int64_t v30; // bp-264, 0x100003954
        v23 = &v30;
        v24 = &v12;
        v22 = 0;
        v13 = 0x3b9aca00;
        while (true) {
          lab_0x100003aa8:
            // 0x100003aa8
            v14 = v13;
            v17 = v16;
            v20 = v19;
            int64_t v31 = 8 * v22 + v5;
            v25 = *(int64_t *)v31;
            int64_t v32 = *(int64_t *)(v31 + 8); // 0x100003ac4
            v15 = v14;
            v18 = v17;
            v21 = v20;
            if ((v32 - v25) % 18 == 0) {
                // 0x100003b0c
                v15 = v14;
                v18 = v17;
                v21 = v20;
                if ((*(int64_t *)(v31 + 16) - v32) % 18 == 0) {
                    // 0x100003b3c
                    function_1000038b0();
                    int32_t v33 = 0; // 0x100003b78
                    if (v27 < 0 == (v26 & v27) < 0) {
                        // 0x100003cc0
                        function_1000038b0();
                        function_1000038b0();
                        goto lab_0x100003cd8;
                    } else {
                        char v34 = *(char *)((int64_t)v33 + v29); // 0x100003b8c
                        int64_t v35 = *(int64_t *)(8 * (int64_t)v34 + v5); // 0x100003b98
                        int32_t v36 = v33 + 1; // 0x100003ba8
                        int32_t v37 = v36 - v26; // 0x100003b70
                        v33 = v36;
                        int64_t v38 = v35; // 0x100003b78
                        while (v37 < 0 != ((v37 ^ v36) & (v36 ^ v26)) < 0) {
                            // 0x100003b80
                            v34 = *(char *)((int64_t)v33 + v29);
                            v35 = *(int64_t *)(8 * (int64_t)v34 + v5) * v38;
                            v36 = v33 + 1;
                            v37 = v36 - v26;
                            v33 = v36;
                            v38 = v35;
                        }
                        // 0x100003bf8
                        function_1000038b0();
                        int32_t v39 = 0; // 0x100003c20
                        char v40 = *(char *)((int64_t)v39 + v29); // 0x100003c04
                        int64_t v41 = *(int64_t *)(8 * (int64_t)v40 + v5); // 0x100003c10
                        v39++;
                        int32_t v42 = v39 - v26; // 0x100003be8
                        int64_t v43 = v41; // 0x100003bf0
                        while (v42 < 0 != ((v42 ^ v39) & (v39 ^ v26)) < 0) {
                            // 0x100003bf8
                            v40 = *(char *)((int64_t)v39 + v29);
                            v41 = *(int64_t *)(8 * (int64_t)v40 + v5) * v43;
                            v39++;
                            v42 = v39 - v26;
                            v43 = v41;
                        }
                        // 0x100003c2c
                        v15 = v14;
                        v18 = v17;
                        v21 = v20;
                        if (v35 == v41) {
                            // 0x100003c8c
                            function_1000038b0();
                            int32_t v44 = 0; // 0x100003cb4
                            char v45 = *(char *)((int64_t)v44 + v29); // 0x100003c98
                            int64_t v46 = *(int64_t *)(8 * (int64_t)v45 + v5); // 0x100003ca4
                            v44++;
                            int32_t v47 = v44 - v26; // 0x100003c7c
                            int64_t v48 = v46; // 0x100003c84
                            while (v47 < 0 != ((v47 ^ v44) & (v44 ^ v26)) < 0) {
                                // 0x100003c8c
                                v45 = *(char *)((int64_t)v44 + v29);
                                v46 = *(int64_t *)(8 * (int64_t)v45 + v5) * v48;
                                v44++;
                                v47 = v44 - v26;
                                v48 = v46;
                            }
                            // 0x100003cc0
                            v15 = v14;
                            v18 = v17;
                            v21 = v20;
                            if (v35 == v46) {
                                goto lab_0x100003cd8;
                            } else {
                                goto lab_0x100003d5c;
                            }
                        } else {
                            goto lab_0x100003d5c;
                        }
                    }
                } else {
                    goto lab_0x100003d5c;
                }
            } else {
                goto lab_0x100003d5c;
            }
        }
    }
  lab_0x100003d6c:;
    // 0x100003d6c
    int32_t v49; // 0x100003954
    int32_t v50; // 0x100003954
    *(int32_t *)(4 * (int64_t)v50 + v11) = v49;
    _printf("Smallest members of first 25 Ormiston triples:\n");
    _setlocale(4, (char *)&g1);
    _printf("%'10ld  ", (int32_t)&g1);
    int64_t v51 = 1; // 0x100003dd8
    if ((char)v51 % 5 == 0) {
        // 0x100003dfc
        _printf("\n");
    }
    int64_t v52 = v51; // 0x100003dac
    while (v51 != 25) {
        // 0x100003db4
        _printf("%'10ld  ", (int32_t)&g1);
        v51 = v52 + 1;
        if ((char)v51 % 5 == 0) {
            // 0x100003dfc
            _printf("\n");
        }
        // 0x100003e10
        v52 = v51;
    }
    // 0x100003e20
    _printf("\n");
    int64_t v53; // 0x100003954
    _printf("%'d Ormiston triples before %'ld\n", (int64_t)&g1, (int32_t)v53);
    _printf("\n");
    int64_t v54 = 1; // 0x100003ea4
    int64_t v55 = v54; // 0x100003e4c
    while (v54 != 2) {
        // 0x100003e54
        _printf("%'d Ormiston triples before %'ld\n", (int64_t)&g1, (int32_t)v53);
        _printf("\n");
        v54 = v55 + 1;
        v55 = v54;
    }
    // 0x100003eb0
    _free(v4);
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003ed8
        ___stack_chk_fail((int64_t)&g2);
    }
    // 0x100003edc
    return 0;
  lab_0x100003d5c:;
    int64_t v56 = v22 + 1; // 0x100003d60
    v22 = v56;
    v19 = v21;
    v16 = v18;
    v13 = v15;
    v11 = v24;
    v49 = v18;
    v50 = v21;
    if (v56 == v10) {
        // break -> 0x100003d6c
        goto lab_0x100003d6c;
    }
    goto lab_0x100003aa8;
  lab_0x100003cd8:
    if (v17 < 25 != (24 - v17 & v17) < 0) {
        // 0x100003cec
        *(int64_t *)(8 * (int64_t)v17 + v23) = v25;
    }
    int64_t v57 = v14; // 0x100003d10
    int32_t v58 = v20; // 0x100003d10
    if (v25 >= v14) {
        // 0x100003d18
        *(int32_t *)(4 * (int64_t)v20 + v24) = v17;
        v57 = 10 * v14;
        v58 = v20 + 1;
    }
    // 0x100003d48
    v15 = v57;
    v18 = v17 + 1;
    v21 = v58;
    goto lab_0x100003d5c;
}

// Address range: 0x100003ef0 - 0x100003efc
int64_t function_100003ef0(int64_t a1) {
    // 0x100003ef0
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003efc - 0x100003f08
int64_t * function_100003efc(int32_t nmemb, int32_t size) {
    // 0x100003efc
    return _calloc(nmemb, size);
}

// Address range: 0x100003f08 - 0x100003f14
void function_100003f08(int64_t * ptr) {
    // 0x100003f08
    _free(ptr);
}

// Address range: 0x100003f14 - 0x100003f20
int64_t * function_100003f14(int32_t size) {
    // 0x100003f14
    return _malloc(size);
}

// Address range: 0x100003f20 - 0x100003f2c
int32_t function_100003f20(char * format, ...) {
    // 0x100003f20
    return _printf(format);
}

// Address range: 0x100003f2c - 0x100003f38
char * function_100003f2c(int32_t category, char * locale) {
    // 0x100003f2c
    return _setlocale(category, locale);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9

