//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(int64_t a1);
int64_t function_1000035a4(void);
int64_t function_100003bec(void);
int64_t function_100003e50(char * a1, char * a2, int64_t a3, char * a4);
int64_t function_100003e5c(void);
int64_t function_100003e68(int64_t a1);
void function_100003e74(int64_t * s, int32_t n);
void function_100003e80(int32_t status);
void function_100003e8c(int64_t * ptr);
int64_t * function_100003e98(int32_t size);
int64_t * function_100003ea4(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003eb0(char * format, ...);
int32_t function_100003ebc(char * s);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___assert_rtn(char * a1, char * a2, int64_t a3, char * a4);
int64_t ___chkstk_darwin(int64_t a1);
int64_t ___memset_chk(void);
int64_t ___stack_chk_fail(int64_t a1);
void _bzero(int64_t * a1, int32_t a2);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x1000035a4 - 0x100003bec
int64_t function_1000035a4(void) {
    // 0x1000035a4
    int64_t v1; // 0x1000035a4
    int32_t v2 = _strlen((char *)v1); // 0x1000035d0
    int64_t v3 = 0; // 0x1000035e4
    uint64_t v4; // 0x1000035a4
    uint64_t v5; // 0x1000035d0
    int64_t v6; // 0x100003684
    if (v2 == 0) {
        goto lab_0x100003bb8;
    } else {
        // 0x1000035f0
        if (v2 != _strlen((char *)v1)) {
            // 0x100003620
            ___assert_rtn("best_shuffle", "best-shuffle-1.c", 16, "len == strlen(result)");
        }
        // 0x100003674
        v5 = (int64_t)v2;
        int64_t v7; // bp-2072, 0x1000035a4
        _bzero(&v7, 1020);
        v6 = &v7;
        int64_t v8 = 0; // 0x1000036dc
        uint64_t v9 = 0;
        char * v10 = (char *)(v8 + v1); // 0x10000367c
        int64_t * v11 = (int64_t *)(8 * (int64_t)*v10 + v6); // 0x100003690
        *v11 = *v11 + 1;
        uint64_t v12 = *(int64_t *)(8 * (int64_t)*v10 + v6); // 0x1000036a8
        v4 = v9 < v12 ? v12 : v9;
        v8++;
        while (v8 < v5) {
            // 0x100003674
            v9 = v4;
            v10 = (char *)(v8 + v1);
            v11 = (int64_t *)(8 * (int64_t)*v10 + v6);
            *v11 = *v11 + 1;
            v12 = *(int64_t *)(8 * (int64_t)*v10 + v6);
            v4 = v9 < v12 ? v12 : v9;
            v8++;
        }
        if (v4 == 0) {
            // 0x100003738
            ___assert_rtn("best_shuffle", "best-shuffle-1.c", 29, "fmax > 0 && fmax <= len");
            goto lab_0x10000375c;
        } else {
            if (v4 != v5 && v4 >= v5) {
                // 0x100003738
                ___assert_rtn("best_shuffle", "best-shuffle-1.c", 29, "fmax > 0 && fmax <= len");
                goto lab_0x10000375c;
            } else {
                goto lab_0x10000375c;
            }
        }
    }
  lab_0x100003bb8:;
    int64_t v13 = *(int64_t *)*(int64_t *)0x100004020; // 0x100003bc4
    int64_t result = v3; // 0x100003bd0
    if (v13 != *(int64_t *)*(int64_t *)0x100004020) {
        // 0x100003bd8
        result = ___stack_chk_fail(v3);
    }
    // 0x100003bdc
    return result;
  lab_0x10000375c:;
    int32_t v14 = 8 * v2; // 0x100003764
    int64_t * v15 = _malloc(v14); // 0x100003764
    int64_t v16 = (int64_t)v15; // 0x100003764
    int64_t v17 = 0; // 0x100003778
    if (v15 == NULL) {
        // 0x100003780
        _exit(1);
        // UNREACHABLE
    }
    int64_t v18 = 0;
    int64_t v19 = v17; // 0x1000037bc
    int64_t v20 = v17; // 0x1000037bc
    int64_t v21; // 0x1000035a4
    int64_t v22; // 0x1000035a4
    int64_t v23; // 0x1000035a4
    int64_t v24; // 0x10000382c
    if (*(int64_t *)(8 * v18 + v6) != 0) {
        v21 = v19;
        v23 = 0;
        v22 = v21;
        if (v18 == (int64_t)*(char *)(v23 + v1)) {
            // 0x100003804
            *(int64_t *)(8 * v21 + v16) = v23;
            v22 = v21 + 1;
        }
        // 0x100003828
        v24 = v23 + 1;
        v20 = v22;
        while (v24 < v5) {
            // 0x1000037e4
            v21 = v22;
            v23 = v24;
            v22 = v21;
            if (v18 == (int64_t)*(char *)(v23 + v1)) {
                // 0x100003804
                *(int64_t *)(8 * v21 + v16) = v23;
                v22 = v21 + 1;
            }
            // 0x100003828
            v24 = v23 + 1;
            v20 = v22;
        }
    }
    int64_t v25 = v18 + 1; // 0x100003844
    v17 = v20;
    while (v25 != 255) {
        // 0x1000037a8
        v18 = v25;
        v19 = v17;
        v20 = v17;
        if (*(int64_t *)(8 * v18 + v6) != 0) {
            v21 = v19;
            v23 = 0;
            v22 = v21;
            if (v18 == (int64_t)*(char *)(v23 + v1)) {
                // 0x100003804
                *(int64_t *)(8 * v21 + v16) = v23;
                v22 = v21 + 1;
            }
            // 0x100003828
            v24 = v23 + 1;
            v20 = v22;
            while (v24 < v5) {
                // 0x1000037e4
                v21 = v22;
                v23 = v24;
                v22 = v21;
                if (v18 == (int64_t)*(char *)(v23 + v1)) {
                    // 0x100003804
                    *(int64_t *)(8 * v21 + v16) = v23;
                    v22 = v21 + 1;
                }
                // 0x100003828
                v24 = v23 + 1;
                v20 = v22;
            }
        }
        // 0x100003840
        v25 = v18 + 1;
        v17 = v20;
    }
    int64_t * v26 = _malloc(v14); // 0x100003858
    int64_t v27 = (int64_t)v26; // 0x100003858
    int64_t v28 = 0; // 0x10000386c
    int64_t v29 = 0; // 0x10000386c
    int64_t v30 = 0; // 0x10000386c
    if (v26 == NULL) {
        // 0x100003874
        _exit(1);
        // UNREACHABLE
    }
    int64_t v31 = *(int64_t *)(8 * v29 + v16); // 0x1000038ac
    *(int64_t *)(8 * v30 + v27) = v31;
    uint64_t v32 = v29 + v4; // 0x1000038c4
    int64_t v33 = v28 + 1;
    int64_t v34 = v30 + 1; // 0x100003904
    v28 = v32 < v5 ? v28 : v33;
    v29 = v32 < v5 ? v32 : v33;
    v30 = v34;
    while (v34 < v5) {
        // 0x1000038a4
        v31 = *(int64_t *)(8 * v29 + v16);
        *(int64_t *)(8 * v30 + v27) = v31;
        v32 = v29 + v4;
        v33 = v28 + 1;
        v34 = v30 + 1;
        v28 = v32 < v5 ? v28 : v33;
        v29 = v32 < v5 ? v32 : v33;
        v30 = v34;
    }
    uint64_t v35 = v5 - 1; // 0x100003914
    uint64_t v36 = v35 / v4 + 1; // 0x100003920
    if (v36 == 0) {
        // 0x100003978
        ___assert_rtn("best_shuffle", "best-shuffle-1.c", 58, "grp > 0 && grp <= len");
        goto lab_0x10000399c;
    } else {
        if (v36 != v5 && v36 >= v5) {
            // 0x100003978
            ___assert_rtn("best_shuffle", "best-shuffle-1.c", 58, "grp > 0 && grp <= len");
            goto lab_0x10000399c;
        } else {
            goto lab_0x10000399c;
        }
    }
  lab_0x10000399c:;
    uint64_t v37 = v35 % v4 + 1; // 0x1000039b4
    if (v37 == 0) {
        // 0x100003a0c
        ___assert_rtn("best_shuffle", "best-shuffle-1.c", 62, "lng > 0 && lng <= len");
        goto lab_0x100003a30;
    } else {
        if (v37 != v5 && v37 >= v5) {
            // 0x100003a0c
            ___assert_rtn("best_shuffle", "best-shuffle-1.c", 62, "lng > 0 && lng <= len");
            goto lab_0x100003a30;
        } else {
            goto lab_0x100003a30;
        }
    }
  lab_0x100003a30:
    if (v4 != 0) {
        int64_t v38 = v16 - 8;
        int64_t v39 = 0; // 0x100003b24
        int64_t v40 = 0;
        int64_t v41 = *(int64_t *)(8 * v40 + v27); // 0x100003a5c
        uint64_t v42 = v36 - (int64_t)(v39 >= v37); // 0x100003a84
        int64_t v43 = 1; // 0x100003aa8
        int64_t v44; // 0x100003ac0
        int64_t v45; // 0x100003ae4
        if (v42 > 1) {
            v44 = 8 * (v43 + v40);
            *(int64_t *)(v44 + v38) = *(int64_t *)(v44 + v27);
            v45 = v43 + 1;
            v43 = v45;
            while (v45 != v42) {
                // 0x100003ab0
                v44 = 8 * (v43 + v40);
                *(int64_t *)(v44 + v38) = *(int64_t *)(v44 + v27);
                v45 = v43 + 1;
                v43 = v45;
            }
        }
        int64_t v46 = v42 + v40; // 0x100003b00
        *(int64_t *)(8 * v46 + v38) = v41;
        v39++;
        while (v39 != v4) {
            // 0x100003a54
            v40 = v46;
            v41 = *(int64_t *)(8 * v40 + v27);
            v42 = v36 - (int64_t)(v39 >= v37);
            v43 = 1;
            if (v42 > 1) {
                v44 = 8 * (v43 + v40);
                *(int64_t *)(v44 + v38) = *(int64_t *)(v44 + v27);
                v45 = v43 + 1;
                v43 = v45;
                while (v45 != v42) {
                    // 0x100003ab0
                    v44 = 8 * (v43 + v40);
                    *(int64_t *)(v44 + v38) = *(int64_t *)(v44 + v27);
                    v45 = v43 + 1;
                    v43 = v45;
                }
            }
            // 0x100003af0
            v46 = v42 + v40;
            *(int64_t *)(8 * v46 + v38) = v41;
            v39++;
        }
    }
    // 0x100003b60
    *(char *)(v1 + v5) = 0;
    int64_t v47 = 0; // 0x1000035a4
    int64_t v48 = 8 * v47; // 0x100003b6c
    char v49 = *(char *)(*(int64_t *)(v48 + v16) + v1); // 0x100003b74
    *(char *)(*(int64_t *)(v48 + v27) + v1) = v49;
    int64_t v50 = v47 + 1; // 0x100003b98
    v47 = v50;
    while (v50 < v5) {
        // 0x100003b60
        v48 = 8 * v47;
        v49 = *(char *)(*(int64_t *)(v48 + v16) + v1);
        *(char *)(*(int64_t *)(v48 + v27) + v1) = v49;
        v50 = v47 + 1;
        v47 = v50;
    }
    // 0x100003ba4
    _free(v15);
    _free(v26);
    v3 = &g1;
    goto lab_0x100003bb8;
}

// Address range: 0x100003bec - 0x100003d08
int64_t function_100003bec(void) {
    // 0x100003bec
    int64_t v1; // 0x100003bec
    int64_t v2; // 0x100003bec
    int64_t v3; // 0x100003bec
    int64_t v4; // 0x100003bec
    if (_strlen((char *)v1) != _strlen((char *)v1)) {
        // 0x100003c3c
        ___assert_rtn("display", "best-shuffle-1.c", 85, "len == strlen(txt2)");
        v2 = (int64_t)"best-shuffle-1.c";
        v3 = 85;
        v4 = (int64_t)"len == strlen(txt2)";
    }
    // 0x100003c60
    return _printf("%s, %s, (%u)\n", (char *)v2, (char *)v3, (int32_t)v4);
}

// Address range: 0x100003d08 - 0x100003e50
int64_t entry_point(int64_t a1) {
    // 0x100003d08
    int64_t v1; // bp-88, 0x100003d08
    _memcpy(&v1, (int64_t *)"j?", 72);
    return ___chkstk_darwin((int64_t)_strlen((char *)v1));
}

// Address range: 0x100003e50 - 0x100003e5c
int64_t function_100003e50(char * a1, char * a2, int64_t a3, char * a4) {
    // 0x100003e50
    return ___assert_rtn(a1, a2, a3, a4);
}

// Address range: 0x100003e5c - 0x100003e68
int64_t function_100003e5c(void) {
    // 0x100003e5c
    return ___memset_chk();
}

// Address range: 0x100003e68 - 0x100003e74
int64_t function_100003e68(int64_t a1) {
    // 0x100003e68
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003e74 - 0x100003e80
void function_100003e74(int64_t * s, int32_t n) {
    // 0x100003e74
    _bzero(s, n);
}

// Address range: 0x100003e80 - 0x100003e8c
void function_100003e80(int32_t status) {
    // 0x100003e80
    _exit(status);
}

// Address range: 0x100003e8c - 0x100003e98
void function_100003e8c(int64_t * ptr) {
    // 0x100003e8c
    _free(ptr);
}

// Address range: 0x100003e98 - 0x100003ea4
int64_t * function_100003e98(int32_t size) {
    // 0x100003e98
    return _malloc(size);
}

// Address range: 0x100003ea4 - 0x100003eb0
int64_t * function_100003ea4(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003ea4
    return _memcpy(dest, src, n);
}

// Address range: 0x100003eb0 - 0x100003ebc
int32_t function_100003eb0(char * format, ...) {
    // 0x100003eb0
    return _printf(format);
}

// Address range: 0x100003ebc - 0x100003ec8
int32_t function_100003ebc(char * s) {
    // 0x100003ebc
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 13

