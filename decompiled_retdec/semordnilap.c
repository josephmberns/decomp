//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ab0(void);
int64_t function_100003ae8(void);
int64_t function_100003e04(void);
int64_t function_100003eb4(void);
int64_t function_100003ee8(int64_t a1);
int64_t function_100003ef4(int64_t a1, int64_t a2, int64_t a3);
int32_t function_100003f00(struct _IO_FILE * stream);
int32_t function_100003f0c(struct _IO_FILE * stream);
struct _IO_FILE * function_100003f18(char * filename, char * modes);
int32_t function_100003f24(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003f30(char * format, ...);
void function_100003f3c(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
void function_100003f48(struct _IO_FILE * stream);
int32_t function_100003f54(char * s1, char * s2);
int32_t function_100003f60(char * s);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(int64_t a1, int64_t a2, int64_t a3);
int64_t ___stack_chk_fail(int64_t a1);
int64_t ___strcpy_chk(int64_t a1, int64_t a2, int64_t a3);
int32_t _fclose(struct _IO_FILE * a1);
int32_t _fgetc(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fscanf(struct _IO_FILE * a1, char * a2, ...);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));
void _rewind(struct _IO_FILE * a1);
int32_t _strcmp(char * a1, char * a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003a04 - 0x100003ab0
int64_t entry_point(void) {
    struct _IO_FILE * v1 = _fopen("unixdict.txt", "r"); // 0x100003a3c
    while (_fgetc(v1) != -1) {
        // continue -> 0x100003a48
    }
    // 0x100003a84
    _rewind(v1);
    int64_t v2; // 0x100003a04
    return ___chkstk_darwin((int64_t)&g1, (int64_t)"r", v2);
}

// Address range: 0x100003ab0 - 0x100003ae8
int64_t function_100003ab0(void) {
    // 0x100003ab0
    int64_t v1; // 0x100003ab0
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 - 96); // 0x100003ab0
    int64_t v4; // 0x100003ab0
    *(int64_t *)(v2 - 64) = (int64_t)&v4 - v3;
    *(int64_t *)(v2 - 88) = 8 * (int64_t)*(int32_t *)(v2 - 48) + 15 & -16;
    return ___chkstk_darwin(v1, v1, v1);
}

// Address range: 0x100003ae8 - 0x100003e04
int64_t function_100003ae8(void) {
    // 0x100003ae8
    int64_t v1; // 0x100003ae8
    int64_t v2; // 0x100003ae8
    int64_t v3 = (int64_t)&v1 - *(int64_t *)(v2 - 88); // 0x100003af0
    int64_t * v4 = (int64_t *)(v2 - 72); // 0x100003af8
    *v4 = v3;
    int32_t * v5 = (int32_t *)(v2 - 40); // 0x100003afc
    *v5 = 0;
    int64_t * v6 = (int64_t *)(v2 - 80); // 0x100003b04
    int64_t v7 = v2 - 32; // 0x100003b10
    int64_t * v8 = (int64_t *)(v3 - 16); // 0x100003b14
    *v8 = v7;
    int64_t v9 = v2 - 52; // 0x100003b18
    int64_t * v10 = (int64_t *)(v3 - 8); // 0x100003b1c
    *v10 = v9;
    int32_t v11 = _fscanf((struct _IO_FILE *)*v6, "%s%n", (char **)v2, (int32_t **)v2); // 0x100003b28
    if (v11 != -1) {
        // 0x100003b40
        *(int64_t *)(v2 - 128) = (int64_t)*(int32_t *)v9 + 15 & -16;
        return ___chkstk_darwin((int64_t)v11, (int64_t)"%s%n", v2);
    }
    // 0x100003c0c
    _fclose((struct _IO_FILE *)*v6);
    int32_t * v12 = (int32_t *)(v2 - 48); // 0x100003c18
    int32_t v13 = *v12; // 0x100003c18
    _qsort((int64_t *)*v4, v13, 8, (int32_t (*)(int64_t *, int64_t *))0x100003eb4);
    *v5 = 0;
    int32_t * v14 = (int32_t *)(v2 - 44); // 0x100003c30
    *v14 = 0;
    int32_t v15 = *v5; // 0x100003c38
    int32_t v16 = *v12; // 0x100003c3c
    int32_t v17 = v15 - v16; // 0x100003c40
    int32_t * v18; // 0x100003ae8
    int64_t v19; // 0x100003ae8
    if (v17 < 0 == ((v17 ^ v15) & (v16 ^ v15)) < 0) {
        // 0x100003c0c
        v18 = (int32_t *)(v2 - 56);
        v19 = v13;
    } else {
        int64_t * v20 = (int64_t *)(v2 - 64);
        int32_t * v21 = (int32_t *)(v2 - 132);
        int64_t * v22 = (int64_t *)(v2 - 144);
        int32_t * v23 = (int32_t *)(v2 - 56);
        int64_t v24 = *(int64_t *)(8 * (int64_t)v15 + *v4); // 0x100003c5c
        int64_t v25 = *(int64_t *)*v20; // 0x100003c68
        uint32_t v26 = _strcmp((char *)v24, (char *)v25); // 0x100003c6c
        *v21 = 0;
        int32_t v27; // 0x100003c88
        int32_t v28; // 0x100003c90
        int32_t v29; // 0x100003c94
        int32_t v30; // 0x100003cb4
        int64_t v31; // 0x100003c5c
        int64_t v32; // 0x100003c68
        int32_t v33; // 0x100003c6c
        if (v26 >= 1) {
            v27 = *v14;
            v28 = *v12 - 1;
            v29 = v27 - v28;
            *v21 = (int32_t)(v29 < 0 != ((v29 ^ v27) & (v28 ^ v27)) < 0);
            while (v29 < 0 != ((v29 ^ v27) & (v28 ^ v27)) < 0) {
                // 0x100003cb0
                v30 = *v14 + 1;
                *v14 = v30;
                v31 = *(int64_t *)(8 * (int64_t)*v5 + *v4);
                v32 = *(int64_t *)(*v20 + 8 * (int64_t)v30);
                v33 = _strcmp((char *)v31, (char *)v32);
                *v21 = 0;
                if (v33 < 1) {
                    // break -> 0x100003cc0
                    break;
                }
                v27 = *v14;
                v28 = *v12 - 1;
                v29 = v27 - v28;
                *v21 = (int32_t)(v29 < 0 != ((v29 ^ v27) & (v28 ^ v27)) < 0);
            }
        }
        int64_t v34 = *(int64_t *)(8 * (int64_t)*v5 + *v4); // 0x100003cc8
        int64_t v35 = *(int64_t *)(8 * (int64_t)*v14 + *v20); // 0x100003cd4
        int32_t v36 = _strcmp((char *)v34, (char *)v35); // 0x100003cd8
        int64_t v37 = v35; // 0x100003ce4
        int64_t v38; // 0x100003d20
        int64_t v39; // 0x100003d2c
        char * v40; // 0x100003d30
        int32_t v41; // 0x100003d44
        if (v36 == 0) {
            // 0x100003cec
            *v22 = v7;
            ___strcpy_chk(v7, *(int64_t *)(8 * (int64_t)*v5 + *v4), 24);
            _strlen((char *)*v22);
            function_100003e04();
            v38 = *v22;
            v39 = *(int64_t *)(8 * (int64_t)*v5 + *v4);
            v40 = (char *)v38;
            v37 = v38;
            if (_strcmp((char *)v39, v40) >= 1) {
                // 0x100003d44
                v41 = *v23;
                *v23 = v41 + 1;
                v37 = v38;
                if (v41 < 5 != (4 - v41 & v41) < 0) {
                    // 0x100003d60
                    *v8 = *(int64_t *)(8 * (int64_t)*v5 + *v4);
                    *v10 = v7;
                    _printf("%s\t%s\n", v40, (char *)24);
                    v37 = v38;
                }
            }
        }
        int32_t v42 = *v5 + 1; // 0x100003da0
        *v5 = v42;
        int32_t v43 = *v12; // 0x100003c3c
        int32_t v44 = v42 - v43; // 0x100003c40
        v18 = v23;
        v19 = v37;
        while (v44 < 0 != ((v44 ^ v42) & (v43 ^ v42)) < 0) {
            // 0x100003d9c
            v24 = *(int64_t *)(8 * (int64_t)v42 + *v4);
            v25 = *(int64_t *)(*v20 + 8 * (int64_t)*v14);
            v26 = _strcmp((char *)v24, (char *)v25);
            *v21 = 0;
            if (v26 >= 1) {
                v27 = *v14;
                v28 = *v12 - 1;
                v29 = v27 - v28;
                *v21 = (int32_t)(v29 < 0 != ((v29 ^ v27) & (v28 ^ v27)) < 0);
                while (v29 < 0 != ((v29 ^ v27) & (v28 ^ v27)) < 0) {
                    // 0x100003cb0
                    v30 = *v14 + 1;
                    *v14 = v30;
                    v31 = *(int64_t *)(8 * (int64_t)*v5 + *v4);
                    v32 = *(int64_t *)(*v20 + 8 * (int64_t)v30);
                    v33 = _strcmp((char *)v31, (char *)v32);
                    *v21 = 0;
                    if (v33 < 1) {
                        // break -> 0x100003cc0
                        break;
                    }
                    v27 = *v14;
                    v28 = *v12 - 1;
                    v29 = v27 - v28;
                    *v21 = (int32_t)(v29 < 0 != ((v29 ^ v27) & (v28 ^ v27)) < 0);
                }
            }
            // 0x100003cc0
            v34 = *(int64_t *)(8 * (int64_t)*v5 + *v4);
            v35 = *(int64_t *)(8 * (int64_t)*v14 + *v20);
            v36 = _strcmp((char *)v34, (char *)v35);
            v37 = v35;
            if (v36 == 0) {
                // 0x100003cec
                *v22 = v7;
                ___strcpy_chk(v7, *(int64_t *)(8 * (int64_t)*v5 + *v4), 24);
                _strlen((char *)*v22);
                function_100003e04();
                v38 = *v22;
                v39 = *(int64_t *)(8 * (int64_t)*v5 + *v4);
                v40 = (char *)v38;
                v37 = v38;
                if (_strcmp((char *)v39, v40) >= 1) {
                    // 0x100003d44
                    v41 = *v23;
                    *v23 = v41 + 1;
                    v37 = v38;
                    if (v41 < 5 != (4 - v41 & v41) < 0) {
                        // 0x100003d60
                        *v8 = *(int64_t *)(8 * (int64_t)*v5 + *v4);
                        *v10 = v7;
                        _printf("%s\t%s\n", v40, (char *)24);
                        v37 = v38;
                    }
                }
            }
            // 0x100003d9c
            v42 = *v5 + 1;
            *v5 = v42;
            v43 = *v12;
            v44 = v42 - v43;
            v18 = v23;
            v19 = v37;
        }
    }
    // 0x100003dac
    *v8 = (int64_t)*v18;
    int32_t v45 = _printf("Semordnilap pairs: %d\n", v19); // 0x100003dc8
    if (*(int64_t *)*(int64_t *)0x100004010 != *(int64_t *)(v2 - 8)) {
        // 0x100003df0
        ___stack_chk_fail((int64_t)v45);
    }
    // 0x100003df4
    return 0;
}

// Address range: 0x100003e04 - 0x100003eb4
int64_t function_100003e04(void) {
    // 0x100003e04
    int64_t result; // 0x100003e04
    int32_t v1 = result; // 0x100003e0c
    int32_t v2 = v1 / 2; // 0x100003e30
    int32_t v3 = v1; // 0x100003e3c
    if (v1 > 1 == (v2 & -v2) < 0) {
        // 0x100003eac
        return result;
    }
    int32_t v4 = 0; // 0x100003e3c
    v3--;
    char * v5 = (char *)(result + (int64_t)v4); // 0x100003e50
    char * v6 = (char *)(result + (int64_t)v3); // 0x100003e64
    *v5 = *v6;
    *v6 = *v5;
    v4++;
    while (v4 - v2 < 0 != ((v4 - v2 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003e44
        v3--;
        v5 = (char *)(result + (int64_t)v4);
        v6 = (char *)(result + (int64_t)v3);
        *v5 = *v6;
        *v6 = *v5;
        v4++;
    }
    // 0x100003eac
    return result;
}

// Address range: 0x100003eb4 - 0x100003ee8
int64_t function_100003eb4(void) {
    // 0x100003eb4
    int64_t v1; // 0x100003eb4
    return _strcmp((char *)v1, (char *)v1);
}

// Address range: 0x100003ee8 - 0x100003ef4
int64_t function_100003ee8(int64_t a1) {
    // 0x100003ee8
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003ef4 - 0x100003f00
int64_t function_100003ef4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003ef4
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003f00 - 0x100003f0c
int32_t function_100003f00(struct _IO_FILE * stream) {
    // 0x100003f00
    return _fclose(stream);
}

// Address range: 0x100003f0c - 0x100003f18
int32_t function_100003f0c(struct _IO_FILE * stream) {
    // 0x100003f0c
    return _fgetc(stream);
}

// Address range: 0x100003f18 - 0x100003f24
struct _IO_FILE * function_100003f18(char * filename, char * modes) {
    // 0x100003f18
    return _fopen(filename, modes);
}

// Address range: 0x100003f24 - 0x100003f30
int32_t function_100003f24(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f24
    return _fscanf(stream, format);
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(char * format, ...) {
    // 0x100003f30
    return _printf(format);
}

// Address range: 0x100003f3c - 0x100003f48
void function_100003f3c(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003f3c
    _qsort(base, nmemb, size, compar);
}

// Address range: 0x100003f48 - 0x100003f54
void function_100003f48(struct _IO_FILE * stream) {
    // 0x100003f48
    _rewind(stream);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * s1, char * s2) {
    // 0x100003f54
    return _strcmp(s1, s2);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(char * s) {
    // 0x100003f60
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 16

