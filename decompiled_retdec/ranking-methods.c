//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000034d8(void);
int64_t function_10000358c(void);
int64_t function_100003694(void);
int64_t function_10000379c(void);
int64_t function_100003a58(void);
int64_t function_100003d08(void);
int32_t function_100003e80(struct _IO_FILE * stream);
struct _IO_FILE * function_100003e8c(char * filename, char * modes);
int32_t function_100003e98(struct _IO_FILE * stream, char * format, ...);
int64_t * function_100003ea4(int32_t size);
int32_t function_100003eb0(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _fclose(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fscanf(struct _IO_FILE * a1, char * a2, ...);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x1000034d8 - 0x10000358c
int64_t function_1000034d8(void) {
    // 0x1000034d8
    int64_t v1; // 0x1000034d8
    int32_t v2 = v1; // 0x1000034e8
    int32_t v3 = -v2; // 0x100003508
    int32_t result = _printf("\n\nOrdinal Ranking\n---------------"); // 0x100003510
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003580
        return result;
    }
    int32_t v4 = 0; // 0x100003574
    v4++;
    int32_t v5 = v4 - v2; // 0x100003508
    result = _printf("\n%d\t%d\t%s", v1, v1, (char *)v1);
    while (v5 < 0 != ((v5 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003518
        v4++;
        v5 = v4 - v2;
        result = _printf("\n%d\t%d\t%s", v1, v1, (char *)v1);
    }
    // 0x100003580
    return result;
}

// Address range: 0x10000358c - 0x100003694
int64_t function_10000358c(void) {
    // 0x10000358c
    int64_t v1; // 0x10000358c
    int32_t v2 = v1; // 0x10000359c
    int32_t v3 = -v2; // 0x1000035c4
    int32_t result = _printf("\n\nStandard Ranking\n----------------"); // 0x1000035cc
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003688
        return result;
    }
    int32_t v4 = 0; // 0x100003634
    v4++;
    int32_t v5 = v4 - v2; // 0x1000035c4
    result = _printf("\n%d\t%d\t%s", v1, v1, (char *)v1);
    while (v5 < 0 != ((v5 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x1000035d4
        v4++;
        v5 = v4 - v2;
        result = _printf("\n%d\t%d\t%s", v1, v1, (char *)v1);
    }
    // 0x100003688
    return result;
}

// Address range: 0x100003694 - 0x10000379c
int64_t function_100003694(void) {
    // 0x100003694
    int64_t v1; // 0x100003694
    int32_t v2 = v1; // 0x1000036a4
    int32_t v3 = -v2; // 0x1000036cc
    int32_t result = _printf("\n\nDense Ranking\n-------------"); // 0x1000036d4
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003790
        return result;
    }
    int32_t v4 = 0; // 0x10000373c
    v4++;
    int32_t v5 = v4 - v2; // 0x1000036cc
    result = _printf("\n%d\t%d\t%s", v1, v1, (char *)v1);
    while (v5 < 0 != ((v5 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x1000036dc
        v4++;
        v5 = v4 - v2;
        result = _printf("\n%d\t%d\t%s", v1, v1, (char *)v1);
    }
    // 0x100003790
    return result;
}

// Address range: 0x10000379c - 0x100003a58
int64_t function_10000379c(void) {
    // 0x10000379c
    int64_t v1; // 0x10000379c
    int32_t v2 = v1; // 0x1000037ac
    _printf("\n\nModified Ranking\n----------------");
    int32_t v3 = v2 - 1; // 0x1000037cc
    int32_t v4 = 1 - v2; // 0x1000037d0
    char * v5 = (char *)v1;
    if (v4 < 0 == (v4 & v3) < 0) {
        // 0x1000039f4
        return _printf("\n%d\t%d\t%s", v1, v1, v5);
    }
    int32_t v6 = 0;
    int32_t v7 = v6 + 1;
    int32_t v8 = *(int32_t *)(104 * (int64_t)v7 + v1); // 0x100003808
    int32_t v9 = v7; // 0x100003814
    int32_t v10; // 0x10000379c
    int32_t v11; // 0x10000379c
    int32_t v12; // 0x10000379c
    int32_t v13; // 0x10000379c
    int32_t v14; // 0x10000379c
    int32_t v15; // 0x1000038b8
    int32_t v16; // 0x1000038e0
    int32_t v17; // 0x10000392c
    int32_t v18; // 0x100003930
    int32_t v19; // 0x1000039bc
    int32_t v20; // 0x100003930
    if (*(int32_t *)(104 * (int64_t)v6 + v1) != v8) {
        // 0x10000381c
        _printf("\n%d\t%d\t%s", v1, v1, v5);
        v11 = 1;
        v12 = v6 + 1;
        v15 = *(int32_t *)(104 * (int64_t)(v6 + 2) + v1);
        while (*(int32_t *)(104 * (int64_t)v12 + v1) == v15) {
            // 0x1000038f0
            v16 = v12 - v3;
            v10 = v11 + 1;
            if (v16 < 0 == ((v16 ^ v12) & (v12 ^ v3)) < 0) {
                // break -> 0x100003924
                break;
            }
            v14 = v12;
            v11 = v10;
            v12 = v14 + 1;
            v15 = *(int32_t *)(104 * (int64_t)(v14 + 2) + v1);
        }
        // 0x100003924
        v17 = v11 - 1;
        v18 = 1 - v11;
        if (v18 < 0 != (v18 & v17) < 0) {
            _printf("\n%d\t%d\t%s", v1, v1, v5);
            v19 = 1;
            v20 = v19 - v17;
            v13 = v19;
            while (v20 < 0 != ((v20 ^ v19) & (v19 ^ v17)) < 0) {
                // 0x100003940
                _printf("\n%d\t%d\t%s", v1, v1, v5);
                v19 = v13 + 1;
                v20 = v19 - v17;
                v13 = v19;
            }
        }
        // 0x1000039c8
        v9 = v11 + v6;
    }
    // 0x1000039e4
    while (v9 - v3 < 0 != ((v9 - v3 ^ v9) & (v9 ^ v3)) < 0) {
        // 0x1000037e0
        v6 = v9;
        v7 = v6 + 1;
        v8 = *(int32_t *)(104 * (int64_t)v7 + v1);
        v9 = v7;
        if (*(int32_t *)(104 * (int64_t)v6 + v1) != v8) {
            // 0x10000381c
            _printf("\n%d\t%d\t%s", v1, v1, v5);
            v11 = 1;
            v12 = v6 + 1;
            v15 = *(int32_t *)(104 * (int64_t)(v6 + 2) + v1);
            while (*(int32_t *)(104 * (int64_t)v12 + v1) == v15) {
                // 0x1000038f0
                v16 = v12 - v3;
                v10 = v11 + 1;
                if (v16 < 0 == ((v16 ^ v12) & (v12 ^ v3)) < 0) {
                    // break -> 0x100003924
                    break;
                }
                v14 = v12;
                v11 = v10;
                v12 = v14 + 1;
                v15 = *(int32_t *)(104 * (int64_t)(v14 + 2) + v1);
            }
            // 0x100003924
            v17 = v11 - 1;
            v18 = 1 - v11;
            if (v18 < 0 != (v18 & v17) < 0) {
                _printf("\n%d\t%d\t%s", v1, v1, v5);
                v19 = 1;
                v20 = v19 - v17;
                v13 = v19;
                while (v20 < 0 != ((v20 ^ v19) & (v19 ^ v17)) < 0) {
                    // 0x100003940
                    _printf("\n%d\t%d\t%s", v1, v1, v5);
                    v19 = v13 + 1;
                    v20 = v19 - v17;
                    v13 = v19;
                }
            }
            // 0x1000039c8
            v9 = v11 + v6;
        }
    }
    // 0x1000039f4
    return _printf("\n%d\t%d\t%s", v1, v1, v5);
}

// Address range: 0x100003a58 - 0x100003d08
int64_t function_100003a58(void) {
    // 0x100003a58
    int64_t v1; // 0x100003a58
    int32_t v2 = v1; // 0x100003a68
    int64_t result = _printf("\n\nFractional Ranking\n------------------"); // 0x100003a7c
    int32_t v3 = -v2; // 0x100003a90
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003cfc
        return result;
    }
    char * v4 = (char *)v1;
    float32_t v5 = 0.0f; // 0x100003a58
    int32_t v6 = 0; // 0x100003cf0
    int64_t v7 = result; // 0x100003a58
    float32_t v8; // 0x100003a58
    float32_t v9; // 0x100003cd4
    int128_t v10; // 0x100003a58
    int64_t v11; // 0x100003a58
    while (true) {
      lab_0x100003aa0:;
        int32_t v12 = v6;
        v9 = v5;
        if (v2 - 1 == v12) {
            goto lab_0x100003af8;
        } else {
            int64_t v13 = v7;
            int32_t v14 = v12 + 1; // 0x100003ad8
            int32_t v15 = *(int32_t *)(104 * (int64_t)v14 + v1); // 0x100003ae4
            int32_t v16 = v14; // 0x100003af0
            if (*(int32_t *)(104 * (int64_t)v12 + v1) == v15) {
                float32_t v17 = 1.40129846e-45f;
                int32_t v18 = v16;
                int32_t v19 = (int32_t)v17 + 1; // 0x100003c08
                int32_t v20 = v18 + 1; // 0x100003bcc
                int32_t v21 = *(int32_t *)(104 * (int64_t)v20 + v1); // 0x100003bd8
                while (*(int32_t *)(104 * (int64_t)v18 + v1) == v21) {
                    // 0x100003bec
                    v17 = v19;
                    v18 = v20;
                    v19 = (int32_t)v17 + 1;
                    v20 = v18 + 1;
                    v21 = *(int32_t *)(104 * (int64_t)v20 + v1);
                }
                int64_t v22 = v13; // 0x100003c3c
                if ((int32_t)v17 > -1 != (v19 & -(int32_t)v17) < 0) {
                    int32_t v23 = _printf("\n%.1f\t%d\t%s", (float64_t)(int64_t)v10, v1, v4); // 0x100003cb4
                    int32_t v24 = 1; // 0x100003cc0
                    int32_t v25 = v24 - v19; // 0x100003c34
                    int32_t v26 = v24; // 0x100003c3c
                    while (v25 < 0 != ((v25 ^ v24) & (v24 ^ v19)) < 0) {
                        // 0x100003c44
                        v23 = _printf("\n%.1f\t%d\t%s", (float64_t)(int64_t)v10, v1, v4);
                        v24 = v26 + 1;
                        v25 = v24 - v19;
                        v26 = v24;
                    }
                    // 0x100003c2c
                    v22 = v23;
                }
                // 0x100003ccc
                v8 = (int32_t)v17 + (int32_t)v9;
                v11 = v22;
                goto lab_0x100003cec;
            } else {
                goto lab_0x100003af8;
            }
        }
    }
  lab_0x100003cfc:;
    // 0x100003cfc
    int64_t result2; // 0x100003a58
    return result2;
  lab_0x100003af8:
    // 0x100003af8
    v8 = v9;
    v11 = _printf("\n%.1f\t%d\t%s", (float64_t)(int64_t)v10, v1, v4);
    goto lab_0x100003cec;
  lab_0x100003cec:
    // 0x100003cec
    v6 = (int32_t)v8 + 1;
    int32_t v27 = v6 - v2; // 0x100003a90
    v5 = v6;
    v7 = v11;
    result2 = v11;
    if (v27 < 0 == ((v27 ^ v6) & (v6 ^ v2)) < 0) {
        // break -> 0x100003cfc
        goto lab_0x100003cfc;
    }
    goto lab_0x100003aa0;
}

// Address range: 0x100003d08 - 0x100003e24
int64_t function_100003d08(void) {
    // 0x100003d08
    int64_t v1; // 0x100003d08
    struct _IO_FILE * v2 = _fopen((char *)v1, "r"); // 0x100003d24
    int64_t * v3 = (int64_t *)v1; // 0x100003d44
    _fscanf(v2, "%d", v3);
    int32_t v4; // 0x100003d08
    _malloc(104 * v4);
    int32_t v5 = -v4; // 0x100003d6c
    if (v5 < 0 != (v4 & v5) < 0) {
        int32_t v6 = 0; // 0x100003dc8
        _fscanf(v2, "%d%s", v3, (char **)v1);
        v6++;
        while (v6 - v4 < 0 != ((v6 - v4 ^ v6) & (v6 ^ v4)) < 0) {
            // 0x100003d7c
            _fscanf(v2, "%d%s", v3, (char **)v1);
            v6++;
        }
    }
    // 0x100003dd4
    _fclose(v2);
    function_1000034d8();
    function_10000358c();
    function_100003694();
    function_10000379c();
    return function_100003a58();
}

// Address range: 0x100003e24 - 0x100003e80
int64_t entry_point(void) {
    // 0x100003e24
    int64_t v1; // 0x100003e24
    if ((int32_t)v1 == 2) {
        // 0x100003e60
        function_100003d08();
    } else {
        // 0x100003e50
        _printf("Usage %s <score list file>", (char *)v1);
    }
    // 0x100003e70
    return 0;
}

// Address range: 0x100003e80 - 0x100003e8c
int32_t function_100003e80(struct _IO_FILE * stream) {
    // 0x100003e80
    return _fclose(stream);
}

// Address range: 0x100003e8c - 0x100003e98
struct _IO_FILE * function_100003e8c(char * filename, char * modes) {
    // 0x100003e8c
    return _fopen(filename, modes);
}

// Address range: 0x100003e98 - 0x100003ea4
int32_t function_100003e98(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003e98
    return _fscanf(stream, format);
}

// Address range: 0x100003ea4 - 0x100003eb0
int64_t * function_100003ea4(int32_t size) {
    // 0x100003ea4
    return _malloc(size);
}

// Address range: 0x100003eb0 - 0x100003ebc
int32_t function_100003eb0(char * format, ...) {
    // 0x100003eb0
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12

