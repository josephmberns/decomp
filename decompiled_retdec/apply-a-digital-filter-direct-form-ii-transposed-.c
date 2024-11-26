//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;
typedef long double float128_t;

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003838(void);
int64_t function_100003948(void);
int64_t function_100003bdc(void);
int64_t function_100003e84(void);
int64_t function_100003e90(int64_t a1, int64_t a2, int64_t a3);
int64_t function_100003e9c(int64_t a1, char * a2, int64_t a3);
float64_t function_100003ea8(char * nptr);
int64_t * function_100003eb4(int32_t nmemb, int32_t size);
int32_t function_100003ec0(struct _IO_FILE * stream);
char * function_100003ecc(char * s, int32_t n, struct _IO_FILE * stream);
struct _IO_FILE * function_100003ed8(char * filename, char * modes);
int32_t function_100003ee4(struct _IO_FILE * stream, char * format, ...);
int64_t * function_100003ef0(int32_t size);
int32_t function_100003efc(char * format, ...);
int32_t function_100003f08(char * s);
char * function_100003f14(char * s, char * delim);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int64_t ___strcat_chk(int64_t a1, int64_t a2, int64_t a3);
int64_t ___strcpy_chk(int64_t a1, char * a2, int64_t a3);
float64_t _atof(char * a1);
int64_t * _calloc(int32_t a1, int32_t a2);
int32_t _fclose(struct _IO_FILE * a1);
char * _fgets(char * a1, int32_t a2, struct _IO_FILE * a3);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);
char * _strtok(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003838 - 0x100003948
int64_t function_100003838(void) {
    // 0x100003838
    int64_t v1; // 0x100003838
    char * v2 = (char *)v1;
    char v3 = *v2; // 0x100003860
    int32_t v4 = 0; // 0x10000386c
    int32_t v5 = 1; // 0x10000386c
    int32_t v6 = 4; // 0x10000386c
    if (v3 != 0) {
        v4++;
        v5 += (int32_t)(v3 == 32);
        char v7 = *(char *)(v1 + (int64_t)v4); // 0x100003860
        while (v7 != 0) {
            // 0x100003874
            v4++;
            v5 += (int32_t)(v7 == 32);
            v7 = *(char *)(v1 + (int64_t)v4);
        }
        // 0x100003858
        v6 = 4 * v5;
    }
    int64_t result = (int64_t)_malloc(v6); // 0x1000038b8
    char * v8 = _strtok(v2, " "); // 0x1000038d4
    if (v8 == NULL) {
        // 0x100003934
        return result;
    }
    int32_t v9 = 0; // 0x100003838
    _atof(v8);
    float64_t v10; // 0x100003838
    *(float32_t *)(4 * (int64_t)v9 + result) = (float32_t)v10;
    char * v11 = _strtok(NULL, " "); // 0x100003928
    v9++;
    while (v11 != NULL) {
        // 0x1000038f8
        _atof(v11);
        *(float32_t *)(4 * (int64_t)v9 + result) = (float32_t)v10;
        v11 = _strtok(NULL, " ");
        v9++;
    }
    // 0x100003934
    return result;
}

// Address range: 0x100003948 - 0x100003bdc
int64_t function_100003948(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003960
    int64_t v2; // 0x100003948
    struct _IO_FILE * v3 = _fopen((char *)v2, "r"); // 0x100003978
    int64_t v4; // bp-1032, 0x100003948
    _fgets((char *)&v4, 1000, v3);
    int64_t v5 = function_100003838(); // 0x10000399c
    _fgets((char *)&v4, 1000, v3);
    int64_t v6 = function_100003838(); // 0x1000039cc
    _fgets((char *)&v4, 1000, v3);
    int64_t v7 = function_100003838(); // 0x1000039fc
    _fclose(v3);
    int32_t v8; // 0x100003948
    int64_t result = (int64_t)_calloc(v8, 4); // 0x100003a20
    int32_t v9 = -v8; // 0x100003a40
    if (v9 < 0 != (v8 & v9) < 0) {
        int32_t v10 = -v8; // 0x100003a68
        int32_t v11 = -v8; // 0x100003ae8
        int32_t v12 = 0;
        float32_t v13; // 0x100003948
        float32_t v14 = v13; // 0x100003a70
        float32_t v15 = v13; // 0x100003a70
        float32_t v16; // 0x100003ab4
        int32_t v17; // 0x100003948
        uint32_t v18; // 0x100003a80
        int32_t v19; // 0x100003acc
        int32_t v20; // 0x100003a68
        float32_t v21; // 0x100003a9c
        float32_t v22; // 0x100003ab0
        float32_t v23; // 0x100003ab8
        if (v10 < 0 != (v8 & v10) < 0) {
            v17 = 0;
            v18 = v12 - v17;
            v23 = v13;
            if (v18 >= 0) {
                // 0x100003a94
                v21 = *(float32_t *)(4 * (int64_t)v17 + (int64_t)(float64_t)(float128_t)(int128_t)v6);
                v22 = *(float32_t *)((int64_t)(4 * v18) + (int64_t)(float64_t)(float128_t)(int128_t)v7);
                v23 = v13 + v21 * v22;
            }
            // 0x100003ac8
            v19 = v17 + 1;
            v20 = v19 - v8;
            v14 = v23;
            v15 = v23;
            while (v20 < 0 != ((v20 ^ v19) & (v19 ^ v8)) < 0) {
                // 0x100003a78
                v17 = v19;
                v16 = v23;
                v18 = v12 - v17;
                v23 = v16;
                if (v18 >= 0) {
                    // 0x100003a94
                    v21 = *(float32_t *)(4 * (int64_t)v17 + (int64_t)(float64_t)(float128_t)(int128_t)v6);
                    v22 = *(float32_t *)((int64_t)(4 * v18) + (int64_t)(float64_t)(float128_t)(int128_t)v7);
                    v23 = v16 + v21 * v22;
                }
                // 0x100003ac8
                v19 = v17 + 1;
                v20 = v19 - v8;
                v14 = v23;
                v15 = v23;
            }
        }
        float32_t v24 = v15; // 0x100003af0
        float32_t v25 = v14; // 0x100003af0
        float32_t v26; // 0x100003b34
        int32_t v27; // 0x100003948
        uint32_t v28; // 0x100003b00
        int32_t v29; // 0x100003b4c
        int32_t v30; // 0x100003ae8
        float32_t v31; // 0x100003b1c
        float32_t v32; // 0x100003b38
        if (v11 < 0 != (v8 & v11) < 0) {
            v27 = 0;
            v26 = v24;
            v28 = v12 - v27;
            v32 = v26;
            if (v28 >= 0) {
                // 0x100003b14
                v31 = *(float32_t *)(4 * (int64_t)v27 + (int64_t)(float64_t)(float128_t)(int128_t)v5);
                v32 = v26 - v31 * *(float32_t *)((int64_t)(4 * v28) + result);
            }
            // 0x100003b48
            v29 = v27 + 1;
            v30 = v29 - v8;
            v25 = v32;
            while (v30 < 0 != ((v30 ^ v29) & (v29 ^ v8)) < 0) {
                // 0x100003af8
                v27 = v29;
                v26 = v32;
                v28 = v12 - v27;
                v32 = v26;
                if (v28 >= 0) {
                    // 0x100003b14
                    v31 = *(float32_t *)(4 * (int64_t)v27 + (int64_t)(float64_t)(float128_t)(int128_t)v5);
                    v32 = v26 - v31 * *(float32_t *)((int64_t)(4 * v28) + result);
                }
                // 0x100003b48
                v29 = v27 + 1;
                v30 = v29 - v8;
                v25 = v32;
            }
        }
        float32_t v33 = *(float32_t *)(int64_t)(float64_t)(float128_t)(int128_t)v5; // 0x100003b5c
        float32_t v34 = v25 / v33; // 0x100003b64
        *(float32_t *)(4 * (int64_t)v12 + result) = v34;
        int32_t v35 = v12 + 1; // 0x100003b84
        while (v35 - v8 < 0 != ((v35 - v8 ^ v35) & (v35 ^ v8)) < 0) {
            // 0x100003b58
            v12 = v35;
            v14 = v34;
            v15 = v34;
            float32_t v36 = v34; // 0x100003a70
            if (v10 < 0 != (v8 & v10) < 0) {
                v17 = 0;
                v16 = v36;
                v18 = v12 - v17;
                v23 = v16;
                if (v18 >= 0) {
                    // 0x100003a94
                    v21 = *(float32_t *)(4 * (int64_t)v17 + (int64_t)(float64_t)(float128_t)(int128_t)v6);
                    v22 = *(float32_t *)((int64_t)(4 * v18) + (int64_t)(float64_t)(float128_t)(int128_t)v7);
                    v23 = v16 + v21 * v22;
                }
                // 0x100003ac8
                v19 = v17 + 1;
                v20 = v19 - v8;
                v14 = v23;
                v15 = v23;
                while (v20 < 0 != ((v20 ^ v19) & (v19 ^ v8)) < 0) {
                    // 0x100003a78
                    v17 = v19;
                    v16 = v23;
                    v18 = v12 - v17;
                    v23 = v16;
                    if (v18 >= 0) {
                        // 0x100003a94
                        v21 = *(float32_t *)(4 * (int64_t)v17 + (int64_t)(float64_t)(float128_t)(int128_t)v6);
                        v22 = *(float32_t *)((int64_t)(4 * v18) + (int64_t)(float64_t)(float128_t)(int128_t)v7);
                        v23 = v16 + v21 * v22;
                    }
                    // 0x100003ac8
                    v19 = v17 + 1;
                    v20 = v19 - v8;
                    v14 = v23;
                    v15 = v23;
                }
            }
            // 0x100003ae0
            v24 = v15;
            v25 = v14;
            if (v11 < 0 != (v8 & v11) < 0) {
                v27 = 0;
                v26 = v24;
                v28 = v12 - v27;
                v32 = v26;
                if (v28 >= 0) {
                    // 0x100003b14
                    v31 = *(float32_t *)(4 * (int64_t)v27 + (int64_t)(float64_t)(float128_t)(int128_t)v5);
                    v32 = v26 - v31 * *(float32_t *)((int64_t)(4 * v28) + result);
                }
                // 0x100003b48
                v29 = v27 + 1;
                v30 = v29 - v8;
                v25 = v32;
                while (v30 < 0 != ((v30 ^ v29) & (v29 ^ v8)) < 0) {
                    // 0x100003af8
                    v27 = v29;
                    v26 = v32;
                    v28 = v12 - v27;
                    v32 = v26;
                    if (v28 >= 0) {
                        // 0x100003b14
                        v31 = *(float32_t *)(4 * (int64_t)v27 + (int64_t)(float64_t)(float128_t)(int128_t)v5);
                        v32 = v26 - v31 * *(float32_t *)((int64_t)(4 * v28) + result);
                    }
                    // 0x100003b48
                    v29 = v27 + 1;
                    v30 = v29 - v8;
                    v25 = v32;
                }
            }
            // 0x100003b58
            v33 = *(float32_t *)(int64_t)(float64_t)(float128_t)(int128_t)v5;
            v34 = v25 / v33;
            *(float32_t *)(4 * (int64_t)v12 + result) = v34;
            v35 = v12 + 1;
        }
    }
    // 0x100003b90
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003bc0
        ___stack_chk_fail();
    }
    // 0x100003bc4
    return result;
}

// Address range: 0x100003bdc - 0x100003d30
int64_t function_100003bdc(void) {
    // 0x100003bdc
    int64_t v1; // 0x100003bdc
    int32_t v2 = v1; // 0x100003bec
    int128_t v3; // 0x100003bdc
    if (v1 == 0) {
        // 0x100003c08
        _printf("[");
        int32_t v4 = -v2; // 0x100003c24
        if (v4 < 0 == (v4 & v2) < 0) {
            // 0x100003d24
            return _printf("\b\b]");
        }
        int32_t v5 = 0; // 0x100003c60
        _printf("%.12f, ", (float64_t)(int64_t)v3);
        v5++;
        while (v5 - v2 < 0 != ((v5 - v2 ^ v5) & (v5 ^ v2)) < 0) {
            // 0x100003c34
            _printf("%.12f, ", (float64_t)(int64_t)v3);
            v5++;
        }
        // 0x100003d24
        return _printf("\b\b]");
    }
    struct _IO_FILE * v6 = _fopen((char *)v1, "w"); // 0x100003c88
    int32_t v7 = v2 - 1; // 0x100003ca0
    int32_t v8 = 1 - v2; // 0x100003ca4
    if (v8 < 0 != (v8 & v7) < 0) {
        _fprintf(v6, "%.12f, ", (float64_t)(int64_t)v3);
        int32_t v9 = 1; // 0x100003ce4
        int32_t v10 = v9 - v7; // 0x100003ca4
        int32_t v11 = v9; // 0x100003cac
        while (v10 < 0 != ((v10 ^ v9) & (v9 ^ v7)) < 0) {
            // 0x100003cb4
            _fprintf(v6, "%.12f, ", (float64_t)(int64_t)v3);
            v9 = v11 + 1;
            v10 = v9 - v7;
            v11 = v9;
        }
    }
    // 0x100003cf0
    _fprintf(v6, "%.12f", (float64_t)(int64_t)v3);
    // 0x100003d24
    return _fclose(v6);
}

// Address range: 0x100003d30 - 0x100003e84
int64_t entry_point(void) {
    // 0x100003d30
    int64_t v1; // 0x100003d30
    int32_t v2 = v1; // 0x100003d40
    if (v2 < 2 != (1 - v2 & v2) < 0) {
        // 0x100003d70
        _printf("Usage : %s <name of signal data file and optional output file.>", (char *)v1);
        // 0x100003e74
        return 0;
    }
    int32_t v3 = v2 - 3; // 0x100003d60
    if (v3 != 0 && v3 < 0 == (2 - v2 & v2) < 0) {
        // 0x100003d70
        _printf("Usage : %s <name of signal data file and optional output file.>", (char *)v1);
        // 0x100003e74
        return 0;
    }
    int64_t v4; // 0x100003d30
    if (v2 != 2) {
        int64_t * v5 = (int64_t *)(v1 + 16);
        char * v6; // 0x100003d30
        int64_t v7 = (int64_t)_malloc(_strlen((char *)*v5) + 1 + _strlen(v6));
        ___strcpy_chk(v7, "written to ", -1);
        int64_t v8 = *v5; // 0x100003e1c
        ___strcat_chk(v7, v8, -1);
        v4 = v8;
    }
    // 0x100003e30
    _printf("Filtered signal %s", (char *)v4);
    function_100003948();
    function_100003bdc();
    // 0x100003e74
    return 0;
}

// Address range: 0x100003e84 - 0x100003e90
int64_t function_100003e84(void) {
    // 0x100003e84
    return ___stack_chk_fail();
}

// Address range: 0x100003e90 - 0x100003e9c
int64_t function_100003e90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003e90
    return ___strcat_chk(a1, a2, a3);
}

// Address range: 0x100003e9c - 0x100003ea8
int64_t function_100003e9c(int64_t a1, char * a2, int64_t a3) {
    // 0x100003e9c
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003ea8 - 0x100003eb4
float64_t function_100003ea8(char * nptr) {
    // 0x100003ea8
    return _atof(nptr);
}

// Address range: 0x100003eb4 - 0x100003ec0
int64_t * function_100003eb4(int32_t nmemb, int32_t size) {
    // 0x100003eb4
    return _calloc(nmemb, size);
}

// Address range: 0x100003ec0 - 0x100003ecc
int32_t function_100003ec0(struct _IO_FILE * stream) {
    // 0x100003ec0
    return _fclose(stream);
}

// Address range: 0x100003ecc - 0x100003ed8
char * function_100003ecc(char * s, int32_t n, struct _IO_FILE * stream) {
    // 0x100003ecc
    return _fgets(s, n, stream);
}

// Address range: 0x100003ed8 - 0x100003ee4
struct _IO_FILE * function_100003ed8(char * filename, char * modes) {
    // 0x100003ed8
    return _fopen(filename, modes);
}

// Address range: 0x100003ee4 - 0x100003ef0
int32_t function_100003ee4(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003ee4
    return _fprintf(stream, format);
}

// Address range: 0x100003ef0 - 0x100003efc
int64_t * function_100003ef0(int32_t size) {
    // 0x100003ef0
    return _malloc(size);
}

// Address range: 0x100003efc - 0x100003f08
int32_t function_100003efc(char * format, ...) {
    // 0x100003efc
    return _printf(format);
}

// Address range: 0x100003f08 - 0x100003f14
int32_t function_100003f08(char * s) {
    // 0x100003f08
    return _strlen(s);
}

// Address range: 0x100003f14 - 0x100003f20
char * function_100003f14(char * s, char * delim) {
    // 0x100003f14
    return _strtok(s, delim);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 17
