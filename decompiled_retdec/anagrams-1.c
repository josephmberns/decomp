//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_10000382c(void);
int64_t function_1000039dc(void);
int64_t function_100003aa8(void);
int64_t function_100003ed0(int64_t a1);
int64_t function_100003edc(int64_t a1, int64_t a2, int64_t a3);
int32_t function_100003ee8(struct _IO_FILE * stream);
char * function_100003ef4(char * s, int32_t n, struct _IO_FILE * stream);
struct _IO_FILE * function_100003f00(char * filename, char * modes);
int32_t function_100003f0c(struct _IO_FILE * stream, char * format, ...);
int64_t * function_100003f18(int32_t size);
int32_t function_100003f24(char * format, ...);
int32_t function_100003f30(char * s1, char * s2);
char * function_100003f3c(char * s);
int32_t function_100003f48(char * s);

// --------------------- Global Variables ---------------------

int16_t * g1 = (int16_t *)0xc004d001f0006; // 0x100008000
int64_t g2 = 0x100000cfeedfacf; // 0x1000080c0
int64_t g3 = 0x200000000; // 0x1000080c8

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t ___strcpy_chk(int64_t a1, int64_t a2, int64_t a3);
int32_t _fclose(struct _IO_FILE * a1);
char * _fgets(char * a1, int32_t a2, struct _IO_FILE * a3);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _strcmp(char * a1, char * a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x10000382c - 0x1000039dc
int64_t function_10000382c(void) {
    // 0x10000382c
    int64_t result; // 0x10000382c
    ___strcpy_chk(result, result, -1);
    char * v1 = (char *)result;
    uint64_t v2 = result + (int64_t)_strlen(v1); // 0x100003864
    int64_t v3 = v2 - 1;
    char * v4 = (char *)v3;
    int64_t v5 = result + 1;
    int32_t v6 = 0; // 0x10000389c
    char * v7; // 0x10000382c
    char * v8; // 0x10000382c
    int64_t v9; // 0x10000382c
    int32_t v10; // 0x10000382c
    int32_t v11; // 0x10000382c
    char * v12; // 0x10000382c
    char * v13; // 0x10000382c
    int64_t v14; // 0x10000382c
    int64_t v15; // 0x10000382c
    int32_t v16; // 0x1000038b4
    int64_t v17; // 0x1000038fc
    char v18; // 0x1000038a8
    int32_t v19; // 0x1000038a8
    char v20; // 0x1000038b0
    if (v1 < v4) {
        v18 = *v4;
        v19 = v18;
        v20 = *v1;
        v16 = v19 - (int32_t)v20;
        v11 = 0;
        if (v16 != 0 && v16 < 0 == ((v16 ^ v19) & (int32_t)(v20 ^ v18)) < 0) {
            // 0x1000038c4
            *v4 = v20;
            *v1 = v18;
            v11 = 1;
        }
        // 0x1000038f8
        v17 = v9 + 1;
        v7 = (char *)v17;
        v14 = v3 - 1;
        v12 = (char *)v14;
        v6 = v11;
        v15 = v14;
        v9 = v17;
        v10 = v11;
        while (v7 < v12) {
            // 0x1000038a4
            v8 = v7;
            v13 = v12;
            v18 = *v13;
            v19 = v18;
            v20 = *v8;
            v16 = v19 - (int32_t)v20;
            v11 = v10;
            if (v16 != 0 && v16 < 0 == ((v16 ^ v19) & (int32_t)(v20 ^ v18)) < 0) {
                // 0x1000038c4
                *v13 = v20;
                *v8 = v18;
                v11 = 1;
            }
            // 0x1000038f8
            v17 = v9 + 1;
            v7 = (char *)v17;
            v14 = v15 - 1;
            v12 = (char *)v14;
            v6 = v11;
            v15 = v14;
            v9 = v17;
            v10 = v11;
        }
    }
    int32_t v21 = v6; // 0x10000393c
    int32_t v22 = v6; // 0x10000393c
    char * v23; // 0x10000382c
    int64_t v24; // 0x10000382c
    int32_t v25; // 0x10000382c
    char * v26; // 0x10000382c
    int64_t v27; // 0x10000382c
    int64_t v28; // 0x10000382c
    char v29; // 0x100003948
    int32_t v30; // 0x100003948
    char v31; // 0x100003950
    int32_t v32; // 0x100003954
    if (v2 > v5) {
        v23 = (char *)v24;
        v26 = (char *)v5;
        v29 = *v26;
        v30 = v29;
        v31 = *v23;
        v32 = v30 - (int32_t)v31;
        v25 = v21;
        if (v32 != 0 && v32 < 0 == ((v32 ^ v30) & (int32_t)(v31 ^ v29)) < 0) {
            // 0x100003964
            *v26 = v31;
            *v23 = v29;
            v25 = 1;
        }
        // 0x100003998
        v27 = v5 + 1;
        v28 = v27;
        v24++;
        v21 = v25;
        v22 = v25;
        while (v27 != v2) {
            // 0x100003944
            v23 = (char *)v24;
            v26 = (char *)v28;
            v29 = *v26;
            v30 = v29;
            v31 = *v23;
            v32 = v30 - (int32_t)v31;
            v25 = v21;
            if (v32 != 0 && v32 < 0 == ((v32 ^ v30) & (int32_t)(v31 ^ v29)) < 0) {
                // 0x100003964
                *v26 = v31;
                *v23 = v29;
                v25 = 1;
            }
            // 0x100003998
            v27 = v28 + 1;
            v28 = v27;
            v24++;
            v21 = v25;
            v22 = v25;
        }
    }
    while (v22 != 0) {
        // 0x100003870
        v6 = 0;
        if (v1 < v4) {
            v18 = *v4;
            v19 = v18;
            v20 = *v1;
            v16 = v19 - (int32_t)v20;
            v11 = 0;
            if (v16 != 0 && v16 < 0 == ((v16 ^ v19) & (int32_t)(v20 ^ v18)) < 0) {
                // 0x1000038c4
                *v4 = v20;
                *v1 = v18;
                v11 = 1;
            }
            // 0x1000038f8
            v17 = v9 + 1;
            v7 = (char *)v17;
            v14 = v3 - 1;
            v12 = (char *)v14;
            v6 = v11;
            v15 = v14;
            v9 = v17;
            v10 = v11;
            while (v7 < v12) {
                // 0x1000038a4
                v8 = v7;
                v13 = v12;
                v18 = *v13;
                v19 = v18;
                v20 = *v8;
                v16 = v19 - (int32_t)v20;
                v11 = v10;
                if (v16 != 0 && v16 < 0 == ((v16 ^ v19) & (int32_t)(v20 ^ v18)) < 0) {
                    // 0x1000038c4
                    *v13 = v20;
                    *v8 = v18;
                    v11 = 1;
                }
                // 0x1000038f8
                v17 = v9 + 1;
                v7 = (char *)v17;
                v14 = v15 - 1;
                v12 = (char *)v14;
                v6 = v11;
                v15 = v14;
                v9 = v17;
                v10 = v11;
            }
        }
        // 0x10000392c
        v21 = v6;
        v22 = v6;
        if (v2 > v5) {
            v23 = (char *)v24;
            v26 = (char *)v5;
            v29 = *v26;
            v30 = v29;
            v31 = *v23;
            v32 = v30 - (int32_t)v31;
            v25 = v21;
            if (v32 != 0 && v32 < 0 == ((v32 ^ v30) & (int32_t)(v31 ^ v29)) < 0) {
                // 0x100003964
                *v26 = v31;
                *v23 = v29;
                v25 = 1;
            }
            // 0x100003998
            v27 = v5 + 1;
            v28 = v27;
            v24++;
            v21 = v25;
            v22 = v25;
            while (v27 != v2) {
                // 0x100003944
                v23 = (char *)v24;
                v26 = (char *)v28;
                v29 = *v26;
                v30 = v29;
                v31 = *v23;
                v32 = v30 - (int32_t)v31;
                v25 = v21;
                if (v32 != 0 && v32 < 0 == ((v32 ^ v30) & (int32_t)(v31 ^ v29)) < 0) {
                    // 0x100003964
                    *v26 = v31;
                    *v23 = v29;
                    v25 = 1;
                }
                // 0x100003998
                v27 = v28 + 1;
                v28 = v27;
                v24++;
                v21 = v25;
                v22 = v25;
            }
        }
    }
    // 0x1000039cc
    return result;
}

// Address range: 0x1000039dc - 0x100003aa8
int64_t function_1000039dc(void) {
    // 0x1000039dc
    int64_t v1; // 0x1000039dc
    char v2 = *(char *)v1; // 0x100003a04
    if (v2 == 0) {
        // 0x100003a8c
        return 0x1ff316f % (int32_t)v1;
    }
    uint32_t v3 = 0x1ff316f;
    int16_t v4 = *(int16_t *)(2 * ((int64_t)v2 % 96) + (int64_t)&g1); // 0x100003a3c
    int32_t v5 = v3 / 16 ^ 0x5c5cf5c ^ 32 * (int32_t)v4 + 2 * v3 & 0x3ffffffe; // 0x100003a70
    int64_t v6; // 0x1000039dc
    int64_t v7 = v6 + 1; // 0x100003a80
    char v8 = *(char *)v7; // 0x100003a04
    while (v8 != 0) {
        // 0x100003a18
        v3 = v5;
        v4 = *(int16_t *)(2 * ((int64_t)v8 % 96) + (int64_t)&g1);
        v5 = v3 / 16 ^ 0x5c5cf5c ^ 32 * (int32_t)v4 + 2 * v3 & 0x3ffffffe;
        v7++;
        v8 = *(char *)v7;
    }
    // 0x100003a8c
    return v5 % (int32_t)v1;
}

// Address range: 0x100003aa8 - 0x100003da4
int64_t function_100003aa8(void) {
    // 0x100003aa8
    int64_t v1; // 0x100003aa8
    struct _IO_FILE * v2 = (struct _IO_FILE *)v1; // 0x100003ac4
    int64_t v3; // bp-64, 0x100003aa8
    char * v4 = _fgets((char *)&v3, 40, v2); // 0x100003ae4
    int32_t result = 2; // 0x100003af0
    if (v4 != NULL) {
        int32_t v5 = 2;
        char v6 = *(char *)&v3; // 0x100003b08
        char v7 = v6; // 0x100003b1c
        char * v8 = (char *)&v3; // 0x100003b1c
        char * v9; // 0x100003aa8
        char * v10; // 0x100003aa8
        char * v11; // 0x100003aa8
        char v12; // 0x100003b08
        if (v6 != 0) {
            v10 = (char *)&v3;
            v8 = v10;
            while (v7 != 10) {
                // 0x100003b4c
                v11 = (char *)((int64_t)v10 + 1);
                v12 = *v11;
                v7 = v12;
                v9 = v11;
                v8 = v11;
                if (v12 == 0) {
                    // break -> 0x100003b5c
                    break;
                }
                v10 = v9;
                v8 = v10;
            }
        }
        // 0x100003b5c
        *v8 = 0;
        char * v13 = (char *)function_10000382c(); // 0x100003b70
        int64_t v14 = function_1000039dc(); // 0x100003b7c
        int64_t * v15 = (int64_t *)((0x100000000 * v14 >> 29) + (int64_t)&g3);
        int64_t v16 = *v15;
        int64_t v17 = v16; // 0x100003bbc
        int64_t * v18 = v15; // 0x100003bbc
        int64_t * v19; // 0x100003aa8
        int16_t * v20; // 0x100003aa8
        int64_t v21; // 0x100003aa8
        int64_t v22; // 0x100003aa8
        int64_t * v23; // 0x100003aa8
        int64_t v24; // 0x100003aa8
        int64_t * v25; // 0x100003c24
        int64_t v26; // 0x100003c24
        int16_t * v27; // 0x100003aa8
        int64_t * v28; // 0x100003aa8
        int64_t v29; // 0x100003bc8
        if (v16 == 0) {
            // 0x100003c20
            v25 = _malloc(40);
            v26 = (int64_t)v25;
            *(int64_t *)(v26 + 8) = 0;
            *v25 = (int64_t)_strdup(v13);
            v27 = (int16_t *)(v26 + 32);
            *v27 = 0;
            v28 = (int64_t *)(v26 + 16);
            *v28 = 0;
            *(int64_t *)(v26 + 24) = 0;
            *v18 = v26;
            v20 = v27;
            v19 = v28;
            v24 = v26;
        } else {
            v22 = v17;
            v29 = *(int64_t *)v22;
            while (_strcmp((char *)v29, v13) != 0) {
                // 0x100003bf0
                v23 = (int64_t *)(v22 + 8);
                v21 = *v23;
                v18 = v23;
                if (v21 == 0) {
                    goto lab_0x100003c20;
                }
                v22 = v21;
                v29 = *(int64_t *)v22;
            }
            // 0x100003c6c
            v20 = (int16_t *)(v22 + 32);
            v19 = (int64_t *)(v22 + 16);
            v24 = v22;
        }
        int64_t v30 = v24;
        int64_t * v31 = _malloc(16); // 0x100003c70
        int64_t v32 = (int64_t)v31; // 0x100003c70
        *v31 = (int64_t)_strdup((char *)&v3);
        *(int64_t *)(v32 + 8) = *v19;
        *v19 = v32;
        int16_t v33 = *v20 + 1; // 0x100003cac
        *v20 = v33;
        int32_t v34 = v33; // 0x100003cbc
        int32_t v35 = v5 - v34; // 0x100003cc0
        int32_t v36; // 0x100003aa8
        if (v35 < 0 == ((v35 ^ v5) & (v5 ^ v34)) < 0) {
            // 0x100003cf4
            v36 = v5;
            if (v5 == v34) {
                // 0x100003d10
                *(int64_t *)(v30 + 24) = g2;
                g2 = v30;
                v36 = v5;
            }
        } else {
            // 0x100003cd0
            g2 = v30;
            *(int64_t *)(v30 + 24) = 0;
            v36 = v34;
        }
        int32_t v37 = v36;
        char * v38 = _fgets((char *)&v3, 40, v2); // 0x100003ae4
        result = v37;
        while (v38 != NULL) {
            // 0x100003b04
            v5 = v37;
            v6 = *(char *)&v3;
            v7 = v6;
            v8 = (char *)&v3;
            if (v6 != 0) {
                v10 = (char *)&v3;
                v8 = v10;
                while (v7 != 10) {
                    // 0x100003b4c
                    v11 = (char *)((int64_t)v10 + 1);
                    v12 = *v11;
                    v7 = v12;
                    v9 = v11;
                    v8 = v11;
                    if (v12 == 0) {
                        // break -> 0x100003b5c
                        break;
                    }
                    v10 = v9;
                    v8 = v10;
                }
            }
            // 0x100003b5c
            *v8 = 0;
            v13 = (char *)function_10000382c();
            v14 = function_1000039dc();
            v15 = (int64_t *)((0x100000000 * v14 >> 29) + (int64_t)&g3);
            v16 = *v15;
            v17 = v16;
            v18 = v15;
            if (v16 == 0) {
                // 0x100003c20
                v25 = _malloc(40);
                v26 = (int64_t)v25;
                *(int64_t *)(v26 + 8) = 0;
                *v25 = (int64_t)_strdup(v13);
                v27 = (int16_t *)(v26 + 32);
                *v27 = 0;
                v28 = (int64_t *)(v26 + 16);
                *v28 = 0;
                *(int64_t *)(v26 + 24) = 0;
                *v18 = v26;
                v20 = v27;
                v19 = v28;
                v24 = v26;
            } else {
                v22 = v17;
                v29 = *(int64_t *)v22;
                while (_strcmp((char *)v29, v13) != 0) {
                    // 0x100003bf0
                    v23 = (int64_t *)(v22 + 8);
                    v21 = *v23;
                    v18 = v23;
                    if (v21 == 0) {
                        goto lab_0x100003c20;
                    }
                    v22 = v21;
                    v29 = *(int64_t *)v22;
                }
                // 0x100003c6c
                v20 = (int16_t *)(v22 + 32);
                v19 = (int64_t *)(v22 + 16);
                v24 = v22;
            }
            // 0x100003c6c
            v30 = v24;
            v31 = _malloc(16);
            v32 = (int64_t)v31;
            *v31 = (int64_t)_strdup((char *)&v3);
            *(int64_t *)(v32 + 8) = *v19;
            *v19 = v32;
            v33 = *v20 + 1;
            *v20 = v33;
            v34 = v33;
            v35 = v5 - v34;
            if (v35 < 0 == ((v35 ^ v5) & (v5 ^ v34)) < 0) {
                // 0x100003cf4
                v36 = v5;
                if (v5 == v34) {
                    // 0x100003d10
                    *(int64_t *)(v30 + 24) = g2;
                    g2 = v30;
                    v36 = v5;
                }
            } else {
                // 0x100003cd0
                g2 = v30;
                *(int64_t *)(v30 + 24) = 0;
                v36 = v34;
            }
            // 0x100003d30
            v37 = v36;
            v38 = _fgets((char *)&v3, 40, v2);
            result = v37;
        }
    }
    int32_t v39 = _printf("%d words in dictionary max ana=%d\n", 40, v1); // 0x100003d64
    int64_t v40 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003d7c
    if (v40 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003d90
        ___stack_chk_fail((int64_t)v39);
    }
    // 0x100003d94
    return result;
}

// Address range: 0x100003da4 - 0x100003ed0
int64_t entry_point(void) {
    struct _IO_FILE * v1 = _fopen("unixdict.txt", "r"); // 0x100003dc4
    function_100003aa8();
    _fclose(v1);
    struct _IO_FILE * v2 = _fopen("anaout.txt", "w"); // 0x100003dec
    if (g2 == 0) {
        // 0x100003eb8
        _fclose(v2);
        return 0;
    }
    int64_t v3 = g2;
    int64_t v4; // 0x100003da4
    _fprintf(v2, "%d:", v4);
    int64_t v5 = *(int64_t *)(v3 + 16);
    int64_t v6 = v5; // 0x100003e58
    int64_t v7; // 0x100003da4
    if (v5 != 0) {
        _fprintf(v2, "%s, ", (char *)v4);
        v7 = *(int64_t *)(v6 + 8);
        v6 = v7;
        while (v7 != 0) {
            // 0x100003e60
            _fprintf(v2, "%s, ", (char *)v4);
            v7 = *(int64_t *)(v6 + 8);
            v6 = v7;
        }
    }
    // 0x100003e94
    _fprintf(v2, (char *)0x100003f9c);
    v3 += 24;
    while (v3 != 0) {
        // 0x100003e18
        _fprintf(v2, "%d:", v4);
        v5 = *(int64_t *)(v3 + 16);
        v6 = v5;
        if (v5 != 0) {
            _fprintf(v2, "%s, ", (char *)v4);
            v7 = *(int64_t *)(v6 + 8);
            v6 = v7;
            while (v7 != 0) {
                // 0x100003e60
                _fprintf(v2, "%s, ", (char *)v4);
                v7 = *(int64_t *)(v6 + 8);
                v6 = v7;
            }
        }
        // 0x100003e94
        _fprintf(v2, (char *)0x100003f9c);
        v3 += 24;
    }
    // 0x100003eb8
    _fclose(v2);
    return 0;
}

// Address range: 0x100003ed0 - 0x100003edc
int64_t function_100003ed0(int64_t a1) {
    // 0x100003ed0
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003edc - 0x100003ee8
int64_t function_100003edc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003edc
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003ee8 - 0x100003ef4
int32_t function_100003ee8(struct _IO_FILE * stream) {
    // 0x100003ee8
    return _fclose(stream);
}

// Address range: 0x100003ef4 - 0x100003f00
char * function_100003ef4(char * s, int32_t n, struct _IO_FILE * stream) {
    // 0x100003ef4
    return _fgets(s, n, stream);
}

// Address range: 0x100003f00 - 0x100003f0c
struct _IO_FILE * function_100003f00(char * filename, char * modes) {
    // 0x100003f00
    return _fopen(filename, modes);
}

// Address range: 0x100003f0c - 0x100003f18
int32_t function_100003f0c(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f0c
    return _fprintf(stream, format);
}

// Address range: 0x100003f18 - 0x100003f24
int64_t * function_100003f18(int32_t size) {
    // 0x100003f18
    return _malloc(size);
}

// Address range: 0x100003f24 - 0x100003f30
int32_t function_100003f24(char * format, ...) {
    // 0x100003f24
    return _printf(format);
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(char * s1, char * s2) {
    // 0x100003f30
    return _strcmp(s1, s2);
}

// Address range: 0x100003f3c - 0x100003f48
char * function_100003f3c(char * s) {
    // 0x100003f3c
    return _strdup(s);
}

// Address range: 0x100003f48 - 0x100003f54
int32_t function_100003f48(char * s) {
    // 0x100003f48
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 15

