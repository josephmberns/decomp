//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000036d4(void);
int64_t function_100003718(void);
int64_t function_100003934(void);
int64_t function_100003b6c(void);
int64_t function_100003e44(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t function_100003e50(int64_t a1, int64_t a2, int64_t a3, char * a4);
int64_t function_100003e5c(void);
int64_t function_100003e68(int64_t a1, int64_t a2, int64_t a3);
int64_t function_100003e74(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t function_100003e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t * function_100003e8c(int32_t nmemb, int32_t size);
void function_100003e98(int64_t * ptr);
int64_t * function_100003ea4(int32_t size);
int32_t function_100003eb0(char * format, ...);
void function_100003ebc(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
char * function_100003ec8(char * s, int32_t c);
int32_t function_100003ed4(char * s1, char * s2);
int32_t function_100003ee0(char * s);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memmove_chk(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t ___sprintf_chk(int64_t a1, int64_t a2, int64_t a3, char * a4);
int64_t ___stack_chk_fail(void);
int64_t ___strcpy_chk(int64_t a1, int64_t a2, int64_t a3);
int64_t ___strncat_chk(int64_t a1, int64_t a2, int32_t a3, int64_t a4);
int64_t ___strncpy_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));
char * _strchr(char * a1, int32_t a2);
int32_t _strcmp(char * a1, char * a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x1000036d4 - 0x100003718
int64_t function_1000036d4(void) {
    // 0x1000036d4
    int64_t v1; // 0x1000036d4
    return _strcmp((char *)v1, (char *)v1);
}

// Address range: 0x100003718 - 0x100003934
int64_t function_100003718(void) {
    // 0x100003718
    int64_t v1; // 0x100003718
    char * v2 = (char *)v1; // 0x100003724
    int32_t v3 = _strlen(v2); // 0x100003730
    if (_strchr(v2, 2) != NULL || _strchr(v2, 3) != NULL) {
        // 0x100003924
        return 1;
    }
    int32_t v4 = v3 + 2; // 0x100003734
    int32_t v5 = v3 + 3; // 0x100003784
    int64_t * v6 = _calloc(v5, 1); // 0x100003794
    int64_t v7 = (int64_t)v6; // 0x100003794
    ___sprintf_chk(v7, 0, -1, "%c%s%c");
    int64_t * v8 = _malloc(8 * v4); // 0x1000037d8
    int64_t v9 = (int64_t)v8; // 0x1000037d8
    int32_t v10 = -2 - v3;
    if (v10 < 0 == (v10 & v4) < 0) {
        // 0x100003884
        _qsort(v8, v4, 8, (int32_t (*)(int64_t *, int64_t *))0x1000036d4);
        // 0x10000390c
        _free(v8);
        _free(v6);
        // 0x100003924
        return 0;
    }
    int32_t v11 = 0;
    int64_t v12 = (int64_t)_calloc(v5, 1); // 0x100003814
    int64_t v13 = v11; // 0x100003824
    ___strcpy_chk(v12, v13 + v7, -1);
    if (v11 >= 1) {
        // 0x100003848
        ___strncat_chk(v12, v7, v11, -1);
    }
    // 0x100003860
    *(int64_t *)(8 * v13 + v9) = v12;
    int32_t v14 = v11 + 1; // 0x100003878
    while (v14 - v4 < 0 != ((v14 - v4 ^ v14) & (v14 ^ v4)) < 0) {
        // 0x100003800
        v11 = v14;
        v12 = (int64_t)_calloc(v5, 1);
        v13 = v11;
        ___strcpy_chk(v12, v13 + v7, -1);
        if (v11 >= 1) {
            // 0x100003848
            ___strncat_chk(v12, v7, v11, -1);
        }
        // 0x100003860
        *(int64_t *)(8 * v13 + v9) = v12;
        v14 = v11 + 1;
    }
    // 0x1000038bc
    _qsort(v8, v4, 8, (int32_t (*)(int64_t *, int64_t *))0x1000036d4);
    int32_t v15 = 0; // 0x100003900
    int64_t v16 = v15; // 0x1000038c0
    int64_t * v17 = (int64_t *)(8 * v16 + v9); // 0x1000038c4
    *(char *)(v1 + v16) = *(char *)(*v17 + (int64_t)(v3 + 1));
    _free((int64_t *)*v17);
    v15++;
    while (v15 - v4 < 0 != ((v15 - v4 ^ v15) & (v15 ^ v4)) < 0) {
        // 0x1000038bc
        v16 = v15;
        v17 = (int64_t *)(8 * v16 + v9);
        *(char *)(v1 + v16) = *(char *)(*v17 + (int64_t)(v3 + 1));
        _free((int64_t *)*v17);
        v15++;
    }
    // 0x10000390c
    _free(v8);
    _free(v6);
    // 0x100003924
    return 0;
}

// Address range: 0x100003934 - 0x100003b6c
int64_t function_100003934(void) {
    // 0x100003934
    int64_t v1; // 0x100003934
    int32_t v2 = _strlen((char *)v1); // 0x10000394c
    int64_t * v3 = _malloc(8 * v2); // 0x100003960
    int32_t v4 = -v2;
    if (v4 < 0 == (v2 & v4) < 0) {
        // 0x100003b58
        _free(v3);
        return &g1;
    }
    int64_t v5 = (int64_t)v3; // 0x100003960
    int32_t v6 = 0; // 0x1000039b4
    *(int64_t *)(8 * (int64_t)v6 + v5) = (int64_t)_calloc(v2 + 1, 1);
    v6++;
    int32_t v7 = v6 - v2; // 0x100003978
    int32_t v8 = 0; // 0x100003980
    while (v7 < 0 != ((v7 ^ v6) & (v6 ^ v2)) < 0) {
        // 0x100003988
        *(int64_t *)(8 * (int64_t)v6 + v5) = (int64_t)_calloc(v2 + 1, 1);
        v6++;
        v7 = v6 - v2;
        v8 = 0;
    }
    int32_t v9 = 0; // 0x100003a50
    int64_t v10 = v9; // 0x100003a04
    int64_t * v11 = (int64_t *)(8 * v10 + v5); // 0x100003a08
    int64_t v12 = *v11; // 0x100003a08
    ___memmove_chk(v12 + 1, v12, v2, -1);
    *(char *)*v11 = *(char *)(v1 + v10);
    v9++;
    while (v9 - v2 < 0 != ((v9 - v2 ^ v9) & (v9 ^ v2)) < 0) {
        // 0x100003a00
        v10 = v9;
        v11 = (int64_t *)(8 * v10 + v5);
        v12 = *v11;
        ___memmove_chk(v12 + 1, v12, v2, -1);
        *(char *)*v11 = *(char *)(v1 + v10);
        v9++;
    }
    // 0x100003a5c
    _qsort(v3, v2, 8, (int32_t (*)(int64_t *, int64_t *))0x1000036d4);
    int32_t v13 = v8 + 1; // 0x100003a7c
    int32_t v14 = v13 - v2; // 0x1000039d0
    v8 = v13;
    while (v14 < 0 != ((v14 ^ v13) & (v13 ^ v2)) < 0) {
        // 0x100003a00
        v9 = 0;
        v10 = v9;
        v11 = (int64_t *)(8 * v10 + v5);
        v12 = *v11;
        ___memmove_chk(v12 + 1, v12, v2, -1);
        *(char *)*v11 = *(char *)(v1 + v10);
        v9++;
        while (v9 - v2 < 0 != ((v9 - v2 ^ v9) & (v9 ^ v2)) < 0) {
            // 0x100003a00
            v10 = v9;
            v11 = (int64_t *)(8 * v10 + v5);
            v12 = *v11;
            ___memmove_chk(v12 + 1, v12, v2, -1);
            *(char *)*v11 = *(char *)(v1 + v10);
            v9++;
        }
        // 0x100003a5c
        _qsort(v3, v2, 8, (int32_t (*)(int64_t *, int64_t *))0x1000036d4);
        v13 = v8 + 1;
        v14 = v13 - v2;
        v8 = v13;
    }
    int32_t v15 = 0; // 0x100003b08
    int64_t v16 = *(int64_t *)(8 * (int64_t)v15 + v5); // 0x100003ab0
    while (*(char *)(v16 + (int64_t)(v2 - 1)) != 3) {
        // 0x100003a90
        v15++;
        int32_t v17 = v15 - v2; // 0x100003a98
        if (v17 < 0 == ((v17 ^ v15) & (v15 ^ v2)) < 0) {
            goto lab_0x100003b14;
        }
        v16 = *(int64_t *)(8 * (int64_t)v15 + v5);
    }
    // 0x100003ad0
    ___strncpy_chk(v1, v16 + 1, (int64_t)(v2 - 2), -1);
  lab_0x100003b14:;
    int32_t v18 = 0; // 0x100003934
    _free((int64_t *)*(int64_t *)(8 * (int64_t)v18 + v5));
    int32_t v19 = v18 + 1; // 0x100003b4c
    int32_t v20 = v19 - v2; // 0x100003b24
    v18 = v19;
    while (v20 < 0 != ((v20 ^ v19) & (v19 ^ v2)) < 0) {
        // 0x100003b34
        _free((int64_t *)*(int64_t *)(8 * (int64_t)v18 + v5));
        v19 = v18 + 1;
        v20 = v19 - v2;
        v18 = v19;
    }
    // 0x100003b58
    _free(v3);
    return &g1;
}

// Address range: 0x100003b6c - 0x100003c20
int64_t function_100003b6c(void) {
    // 0x100003b6c
    int64_t v1; // 0x100003b6c
    int64_t result = ___strcpy_chk(v1, v1, -1); // 0x100003b8c
    while (true) {
        // 0x100003b94
        int64_t v2; // 0x100003b6c
        char * v3 = (char *)v2;
        switch (*v3) {
            case 0: {
                // 0x100003c14
                return result;
            }
            case 2: {
                // 0x100003bc4
                *v3 = 94;
                // break -> 0x100003c04
                break;
            }
            case 3: {
                // 0x100003bec
                *v3 = 124;
                // break -> 0x100003c04
                break;
            }
        }
        // 0x100003c04
        v2++;
    }
    // 0x100003c14
    return result;
}

// Address range: 0x100003c20 - 0x100003e44
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004018; // 0x100003c34
    char * v2 = "banana"; // bp-72, 0x100003c48
    for (int64_t i = 0; i < 6; i++) {
        int64_t v3 = *(int64_t *)(8 * i + (int64_t)&v2); // 0x100003cb0
        int32_t v4 = _strlen((char *)v3); // 0x100003cb4
        int32_t v5 = v4 + 1; // 0x100003cc4
        int64_t * v6 = _calloc(v5, 1); // 0x100003cd8
        function_100003b6c();
        _printf("%s\n", v6);
        _printf(" --> ");
        int64_t * v7 = _calloc(v4 + 3, 1); // 0x100003d2c
        if ((int32_t)function_100003718() == 1) {
            // 0x100003d60
            _printf("ERROR: String can't contain STX or ETX\n");
        } else {
            // 0x100003d70
            function_100003b6c();
            _printf("%s\n", v6);
        }
        int64_t * v8 = _calloc(v5, 1); // 0x100003dac
        function_100003934();
        function_100003b6c();
        _printf(" --> %s\n\n", v6);
        _free(v6);
        _free(v7);
        _free(v8);
    }
    // 0x100003e10
    if (*(int64_t *)*(int64_t *)0x100004018 != v1) {
        // 0x100003e30
        ___stack_chk_fail();
    }
    // 0x100003e34
    return 0;
}

// Address range: 0x100003e44 - 0x100003e50
int64_t function_100003e44(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    // 0x100003e44
    return ___memmove_chk(a1, a2, a3, a4);
}

// Address range: 0x100003e50 - 0x100003e5c
int64_t function_100003e50(int64_t a1, int64_t a2, int64_t a3, char * a4) {
    // 0x100003e50
    return ___sprintf_chk(a1, a2, a3, a4);
}

// Address range: 0x100003e5c - 0x100003e68
int64_t function_100003e5c(void) {
    // 0x100003e5c
    return ___stack_chk_fail();
}

// Address range: 0x100003e68 - 0x100003e74
int64_t function_100003e68(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003e68
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003e74 - 0x100003e80
int64_t function_100003e74(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    // 0x100003e74
    return ___strncat_chk(a1, a2, a3, a4);
}

// Address range: 0x100003e80 - 0x100003e8c
int64_t function_100003e80(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003e80
    return ___strncpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003e8c - 0x100003e98
int64_t * function_100003e8c(int32_t nmemb, int32_t size) {
    // 0x100003e8c
    return _calloc(nmemb, size);
}

// Address range: 0x100003e98 - 0x100003ea4
void function_100003e98(int64_t * ptr) {
    // 0x100003e98
    _free(ptr);
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

// Address range: 0x100003ebc - 0x100003ec8
void function_100003ebc(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003ebc
    _qsort(base, nmemb, size, compar);
}

// Address range: 0x100003ec8 - 0x100003ed4
char * function_100003ec8(char * s, int32_t c) {
    // 0x100003ec8
    return _strchr(s, c);
}

// Address range: 0x100003ed4 - 0x100003ee0
int32_t function_100003ed4(char * s1, char * s2) {
    // 0x100003ed4
    return _strcmp(s1, s2);
}

// Address range: 0x100003ee0 - 0x100003eec
int32_t function_100003ee0(char * s) {
    // 0x100003ee0
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 19

