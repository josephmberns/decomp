//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003850(void);
int64_t function_1000038a4(void);
int64_t function_100003924(void);
int64_t function_100003b24(void);
int64_t function_100003e50(int64_t a1);
int64_t * function_100003e5c(int32_t nmemb, int32_t size);
int32_t function_100003e68(struct _IO_FILE * stream, char * format, ...);
void function_100003e74(int64_t * ptr);
int64_t * function_100003e80(int32_t size);
int64_t * function_100003e8c(int64_t * dest, int64_t * src, int32_t n);
int64_t * function_100003e98(int64_t * s, int32_t c, int32_t n);
int32_t function_100003ea4(char * s);
void function_100003eb0(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
char * function_100003ebc(char * s);
int32_t function_100003ec8(char * nptr, char ** endptr, int32_t base);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x10000000003ed4; // 0x100004068
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _calloc(int32_t a1, int32_t a2);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _puts(char * a1);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));
int32_t _strtol(char * a1, char ** a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x100003850 - 0x1000038a4
int64_t function_100003850(void) {
    int64_t result = 0; // 0x10000386c
    int64_t v1; // 0x100003850
    if (v1 != 0) {
        int64_t * v2 = (int64_t *)v1; // 0x10000387c
        _free(v2);
        _free((int64_t *)*(int64_t *)(v1 + 8));
        _free(v2);
        result = &g2;
    }
    // 0x100003898
    return result;
}

// Address range: 0x1000038a4 - 0x100003924
int64_t function_1000038a4(void) {
    // 0x1000038a4
    int64_t v1; // 0x1000038a4
    char v2 = *(char *)v1; // 0x1000038c4
    if (v2 == 0) {
        // 0x100003918
        return 0;
    }
    int32_t v3 = 0x1000000 * (int32_t)v1 >> 24; // 0x1000038e0
    int32_t result = 0;
    result += (int32_t)(v3 == (int32_t)v2);
    int64_t v4; // 0x1000038a4
    int64_t v5 = v4 + 1; // 0x10000390c
    char v6 = *(char *)v5; // 0x1000038c4
    while (v6 != 0) {
        // 0x1000038d8
        result += (int32_t)(v3 == (int32_t)v6);
        v5++;
        v6 = *(char *)v5;
    }
    // 0x100003918
    return result;
}

// Address range: 0x100003924 - 0x100003b24
int64_t function_100003924(void) {
    // 0x100003924
    int64_t v1; // 0x100003924
    char * v2 = (char *)v1; // 0x100003930
    int64_t * v3 = _calloc(1, 24); // 0x10000393c
    if (v3 == NULL) {
        // 0x100003b14
        return 0;
    }
    char * v4 = _strdup(v2); // 0x100003964
    *v3 = (int64_t)v4;
    if (v4 == NULL) {
        // 0x100003988
        function_100003850();
        // 0x100003b14
        return 0;
    }
    int64_t result = (int64_t)v3; // 0x10000393c
    int64_t v5 = function_1000038a4(); // 0x1000039a0
    int64_t * v6 = _malloc((int32_t)((0x100000000 * v5 + 0x100000000) / 0x40000000)); // 0x1000039c0
    int64_t * v7 = (int64_t *)(result + 8); // 0x1000039c8
    *v7 = (int64_t)v6;
    if (v6 == NULL) {
        // 0x1000039e4
        function_100003850();
        // 0x100003b14
        return 0;
    }
    int32_t v8 = v5; // 0x1000039a4
    *(int32_t *)(result + 16) = v8 + 1;
    int32_t v9 = -v8; // 0x100003a1c
    if (v8 != 0 && v9 < 0 == (v9 & v8) < 0) {
        // 0x100003b14
        return result;
    }
    char * v10 = v2;
    int32_t v11 = 0; // 0x100003ac8
    char * v12; // bp-72, 0x100003924
    int32_t v13; // 0x100003a68
    while (true) {
      lab_0x100003a4c:
        // 0x100003a4c
        if (*v10 == 0) {
            // break -> 0x100003b14
            break;
        }
        // 0x100003a58
        v12 = NULL;
        v13 = _strtol(v10, &v12, 10);
        switch (*v12) {
            case 0: {
                goto lab_0x100003ab4;
            }
            case 46: {
                goto lab_0x100003ab4;
            }
            default: {
                // 0x100003aa4
                function_100003850();
                // 0x100003b14
                return 0;
            }
        }
    }
    // 0x100003b14
    return result;
  lab_0x100003ab4:;
    int32_t v14 = v11;
    v11 = v14 + 1;
    *(int32_t *)(*v7 + 4 * (int64_t)v14) = v13;
    char * v15 = v12; // 0x100003ad4
    v10 = *v15 == 0 ? v15 : (char *)((int64_t)v15 + 1);
    int32_t v16 = v11 - v8; // 0x100003a1c
    if (v16 != 0 && v16 < 0 == ((v16 ^ v11) & (v11 ^ v8)) < 0) {
        return result;
    }
    goto lab_0x100003a4c;
}

// Address range: 0x100003b24 - 0x100003ca4
int64_t function_100003b24(void) {
    // 0x100003b24
    int64_t v1; // 0x100003b24
    int32_t v2 = *(int32_t *)(v1 + 16); // 0x100003b5c
    int32_t v3 = -v2; // 0x100003b60
    int32_t v4 = *(int32_t *)(v1 + 16);
    if (v3 < 0 != (v2 & v3) < 0) {
        int32_t v5 = 0;
        while (v5 - v4 < 0 != ((v5 - v4 ^ v5) & (v5 ^ v4)) < 0) {
            int64_t v6 = 4 * (int64_t)v5;
            int32_t v7 = *(int32_t *)(*(int64_t *)(v1 + 8) + v6); // 0x100003bac
            int32_t v8 = *(int32_t *)(*(int64_t *)(v1 + 8) + v6); // 0x100003bbc
            int32_t v9 = v7 - v8; // 0x100003bc0
            if (v9 < 0 != ((v9 ^ v7) & (v8 ^ v7)) < 0) {
                // 0x100003c98
                return 0xffffffff;
            }
            // 0x100003bdc
            if (v9 != 0) {
                // 0x100003c98
                return 1;
            }
            int32_t v10 = v5 + 1; // 0x100003c2c
            int32_t v11 = v10 - v2; // 0x100003b60
            if (v11 < 0 == ((v11 ^ v10) & (v10 ^ v2)) < 0) {
                // break -> 0x100003c38
                break;
            }
            v5 = v10;
        }
    }
    int32_t v12 = v2 - v4; // 0x100003c48
    int64_t result = 0xffffffff; // 0x100003c50
    if (v12 < 0 == ((v12 ^ v2) & (v4 ^ v2)) < 0) {
        // 0x100003c64
        result = v12 != 0;
    }
    // 0x100003c98
    return result;
}

// Address range: 0x100003ca4 - 0x100003e50
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003cb8
    int64_t v2; // bp-72, 0x100003ca4
    _memcpy(&v2, &g1, 48);
    int64_t v3; // bp-120, 0x100003ca4
    _memset(&v3, 0, 48);
    int64_t v4 = &v3;
    int32_t v5 = 0; // 0x100003ca4
    uint64_t v6 = 0;
    int64_t v7 = function_100003924(); // 0x100003d24
    *(int64_t *)(8 * v6 + v4) = v7;
    int64_t v8; // 0x100003ca4
    while (v7 != 0) {
        int32_t v9 = v5;
        int64_t v10 = v6 + 1;
        v5 = v9 + 1;
        if (v6 < 5 == (4 - v9 & (int32_t)v10) < 0) {
            // 0x100003d7c
            _qsort(&v3, 6, 8, (int32_t (*)(int64_t *, int64_t *))0x100003b24);
            v8 = 0;
            goto lab_0x100003db0;
        }
        v6 = v10;
        v7 = function_100003924();
        *(int64_t *)(8 * v6 + v4) = v7;
    }
    // 0x100003d4c
    _fprintf((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004010, "Out of memory\n");
    goto lab_0x100003ddc;
  lab_0x100003ddc:;
    int64_t v11 = function_100003850(); // 0x100003e04
    int32_t v12 = 1; // 0x100003e10
    int32_t v13 = v12; // 0x100003df0
    while (v12 != 6) {
        // 0x100003df8
        v11 = function_100003850();
        v12 = v13 + 1;
        v13 = v12;
    }
    // 0x100003e1c
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003e3c
        ___stack_chk_fail(v11);
    }
    // 0x100003e40
    return 0;
  lab_0x100003db0:
    // 0x100003db0
    _puts((char *)*(int64_t *)*(int64_t *)(8 * v8 + v4));
    int64_t v14 = v8 + 1;
    v8 = v14;
    if (v14 == 6) {
        goto lab_0x100003ddc;
    } else {
        goto lab_0x100003db0;
    }
}

// Address range: 0x100003e50 - 0x100003e5c
int64_t function_100003e50(int64_t a1) {
    // 0x100003e50
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003e5c - 0x100003e68
int64_t * function_100003e5c(int32_t nmemb, int32_t size) {
    // 0x100003e5c
    return _calloc(nmemb, size);
}

// Address range: 0x100003e68 - 0x100003e74
int32_t function_100003e68(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003e68
    return _fprintf(stream, format);
}

// Address range: 0x100003e74 - 0x100003e80
void function_100003e74(int64_t * ptr) {
    // 0x100003e74
    _free(ptr);
}

// Address range: 0x100003e80 - 0x100003e8c
int64_t * function_100003e80(int32_t size) {
    // 0x100003e80
    return _malloc(size);
}

// Address range: 0x100003e8c - 0x100003e98
int64_t * function_100003e8c(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003e8c
    return _memcpy(dest, src, n);
}

// Address range: 0x100003e98 - 0x100003ea4
int64_t * function_100003e98(int64_t * s, int32_t c, int32_t n) {
    // 0x100003e98
    return _memset(s, c, n);
}

// Address range: 0x100003ea4 - 0x100003eb0
int32_t function_100003ea4(char * s) {
    // 0x100003ea4
    return _puts(s);
}

// Address range: 0x100003eb0 - 0x100003ebc
void function_100003eb0(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003eb0
    _qsort(base, nmemb, size, compar);
}

// Address range: 0x100003ebc - 0x100003ec8
char * function_100003ebc(char * s) {
    // 0x100003ebc
    return _strdup(s);
}

// Address range: 0x100003ec8 - 0x100003ed4
int32_t function_100003ec8(char * nptr, char ** endptr, int32_t base) {
    // 0x100003ec8
    return _strtol(nptr, endptr, base);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 16

