//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003810(void);
int64_t function_1000039a0(void);
int64_t function_100003af4(void);
int64_t function_100003cc8(void);
int64_t function_100003e08(int64_t * a1, int64_t a2, int64_t a3, char * a4);
int64_t function_100003e14(void);
int32_t function_100003e20(int64_t * ptr, int32_t size, int32_t n, struct _IO_FILE * stream);
struct _IO_FILE * function_100003e2c(char * command, char * modes);
int32_t function_100003e38(char * format, ...);
void function_100003e44(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
int64_t * function_100003e50(int64_t * ptr, int32_t size);
int32_t function_100003e5c(char * s);
char * function_100003e68(char * haystack, char * needle);
int32_t function_100003e74(char * nptr, char ** endptr, int32_t base);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___sprintf_chk(int64_t * a1, int64_t a2, int64_t a3, char * a4);
int64_t ___stack_chk_fail(void);
int32_t _fread(int64_t * a1, int32_t a2, int32_t a3, struct _IO_FILE * a4);
struct _IO_FILE * _popen(char * a1, char * a2);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));
int64_t * _realloc(int64_t * a1, int32_t a2);
int32_t _strlen(char * a1);
char * _strstr(char * a1, char * a2);
int32_t _strtol(char * a1, char ** a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x100003810 - 0x1000039a0
int64_t function_100003810(void) {
    // 0x100003810
    int64_t v1; // bp-1056, 0x100003810
    ___sprintf_chk(&v1, 0, 1024, "wget -q \"%s\" -O -");
    struct _IO_FILE * v2 = _popen((char *)&v1, "r"); // 0x100003874
    int64_t result = 0; // 0x100003888
    if (v2 != NULL) {
        int64_t * v3 = _realloc(NULL, 1025); // 0x1000038d4
        int64_t v4 = (int64_t)v3; // 0x1000038d4
        int32_t v5 = _fread(v3, 1, 1024, v2); // 0x10000390c
        int32_t v6 = 0; // 0x100003924
        result = v4;
        int64_t v7 = v4; // 0x100003924
        if (v5 >= 1) {
            int64_t v8 = v4 + (int64_t)v5; // 0x100003938
            int64_t v9 = (int64_t)_realloc((int64_t *)v4, v6 + 2049);
            int64_t v10 = v8 == 0 ? v9 : v8;
            int32_t v11 = _fread((int64_t *)v10, 1, 1024, v2); // 0x10000390c
            int64_t v12 = v9; // 0x100003924
            v6 += 1024;
            result = v9;
            v7 = v10;
            while (v11 >= 1) {
                // 0x100003930
                v8 = v10 + (int64_t)v11;
                v9 = (int64_t)_realloc((int64_t *)v12, v6 + 2049);
                v10 = v8 == 0 ? v9 : v8;
                v11 = _fread((int64_t *)v10, 1, 1024, v2);
                v12 = v9;
                v6 += 1024;
                result = v9;
                v7 = v10;
            }
        }
        // 0x100003944
        *(char *)(v7 + 1) = 0;
    }
    int64_t v13 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003974
    if (v13 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003988
        ___stack_chk_fail();
    }
    // 0x10000398c
    return result;
}

// Address range: 0x1000039a0 - 0x100003af4
int64_t function_1000039a0(void) {
    // 0x1000039a0
    int64_t v1; // 0x1000039a0
    int32_t * v2 = (int32_t *)v1; // 0x1000039b0
    *v2 = 0;
    char * v3 = _strstr((char *)v1, "Category:"); // 0x1000039d0
    if (v3 == NULL) {
        // 0x100003ae4
        return 0;
    }
    int64_t result = 0;
    int64_t v4 = (int64_t)v3 + 9; // 0x1000039f8
    while (v4 != 0) {
        // 0x100003a20
        int64_t v5; // 0x1000039a0
        int32_t v6 = *(int32_t *)&v5;
        result = (int64_t)_realloc((int64_t *)result, 8 * v6 + 8);
        *(int64_t *)(8 * (int64_t)v6 + result) = v4;
        char * v7 = (char *)v4;
        int64_t v8 = v4 + 1;
        int64_t v9 = v8; // 0x100003a88
        while (*v7 != 34) {
            // 0x100003a70
            v7 = (char *)v9;
            v8 = v9 + 1;
            v9 = v8;
        }
        // 0x100003ad0
        *v7 = 0;
        *v2 = *(int32_t *)&v5 + 1;
        char * v10 = _strstr((char *)v8, "Category:"); // 0x1000039d0
        if (v10 == NULL) {
            // break -> 0x100003ae4
            break;
        }
        v4 = (int64_t)v10 + 9;
    }
    // 0x100003ae4
    return result;
}

// Address range: 0x100003af4 - 0x100003cc8
int64_t function_100003af4(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003b0c
    int64_t v2; // 0x100003af4
    int32_t v3 = v2; // 0x100003b1c
    int32_t v4 = -v3; // 0x100003b3c
    int64_t result = 0; // 0x100003b44
    int32_t v5 = 0; // 0x100003b44
    if (v4 < 0 != (v4 & v3) < 0) {
        char * v6 = (char *)v2;
        int64_t v7 = 0;
        int32_t v8 = 0;
        int32_t v9 = 0;
        int64_t v10; // bp-1056, 0x100003af4
        ___sprintf_chk(&v10, 0, 1024, "/wiki/Category:%s");
        char * v11 = _strstr(v6, (char *)&v10); // 0x100003b84
        int64_t v12 = v7; // 0x100003b98
        int32_t v13 = v8; // 0x100003b98
        char * v14 = v6; // 0x100003b98
        int32_t v15; // 0x100003bb0
        char * v16; // 0x100003bbc
        char * v17; // 0x100003bcc
        int32_t v18; // 0x100003bf4
        int64_t v19; // 0x100003c0c
        int64_t v20; // 0x100003c38
        if (v11 != NULL) {
            // 0x100003ba4
            v15 = _strlen((char *)&v10);
            v16 = (char *)((int64_t)v15 + (int64_t)v11);
            v17 = _strstr(v16, "</a> (");
            v12 = v7;
            v13 = v8;
            v14 = v16;
            if (v17 != NULL) {
                // 0x100003bec
                v18 = v8 + 1;
                v19 = (int64_t)_realloc((int64_t *)v7, 16 * v18);
                v20 = 16 * (int64_t)v8 + v19;
                *(int64_t *)v20 = *(int64_t *)(8 * (int64_t)v9 + v2);
                *(int32_t *)(v20 + 8) = _strtol((char *)((int64_t)v17 + 6), NULL, 10);
                v12 = v19;
                v13 = v18;
                v14 = v16;
            }
        }
        // 0x100003c6c
        v6 = v14;
        int32_t v21 = v13;
        int64_t v22 = v12;
        int32_t v23 = v9 + 1; // 0x100003c70
        int32_t v24 = v23 - v3; // 0x100003b3c
        result = v22;
        v5 = v21;
        while (v24 < 0 != ((v24 ^ v23) & (v23 ^ v3)) < 0) {
            // 0x100003b4c
            v7 = v22;
            v8 = v21;
            v9 = v23;
            ___sprintf_chk(&v10, 0, 1024, "/wiki/Category:%s");
            v11 = _strstr(v6, (char *)&v10);
            v12 = v7;
            v13 = v8;
            v14 = v6;
            if (v11 != NULL) {
                // 0x100003ba4
                v15 = _strlen((char *)&v10);
                v16 = (char *)((int64_t)v15 + (int64_t)v11);
                v17 = _strstr(v16, "</a> (");
                v12 = v7;
                v13 = v8;
                v14 = v16;
                if (v17 != NULL) {
                    // 0x100003bec
                    v18 = v8 + 1;
                    v19 = (int64_t)_realloc((int64_t *)v7, 16 * v18);
                    v20 = 16 * (int64_t)v8 + v19;
                    *(int64_t *)v20 = *(int64_t *)(8 * (int64_t)v9 + v2);
                    *(int32_t *)(v20 + 8) = _strtol((char *)((int64_t)v17 + 6), NULL, 10);
                    v12 = v19;
                    v13 = v18;
                    v14 = v16;
                }
            }
            // 0x100003c6c
            v6 = v14;
            v21 = v13;
            v22 = v12;
            v23 = v9 + 1;
            v24 = v23 - v3;
            result = v22;
            v5 = v21;
        }
    }
    // 0x100003c7c
    *(int32_t *)v2 = v5;
    if (*(int64_t *)*(int64_t *)0x100004010 != v1) {
        // 0x100003cb0
        ___stack_chk_fail();
    }
    // 0x100003cb4
    return result;
}

// Address range: 0x100003cc8 - 0x100003d38
int64_t function_100003cc8(void) {
    // 0x100003cc8
    int64_t v1; // 0x100003cc8
    int32_t v2 = *(int32_t *)(v1 + 8); // 0x100003cd8
    int32_t v3 = *(int32_t *)(v1 + 8); // 0x100003ce4
    int32_t v4 = v2 - v3; // 0x100003cf4
    return v4 < 0 == ((v4 ^ v2) & (v3 ^ v2)) < 0 ? (int64_t)(v4 != 0) : 0xffffffff;
}

// Address range: 0x100003d38 - 0x100003e08
int64_t entry_point(void) {
    // 0x100003d38
    function_100003810();
    function_1000039a0();
    function_100003810();
    int32_t v1; // 0x100003d38
    _qsort((int64_t *)function_100003af4(), v1, 16, (int32_t (*)(int64_t *, int64_t *))0x100003cc8);
    int32_t v2 = v1 - 1; // 0x100003da0
    if (v2 < 0) {
        // 0x100003df8
        return 0;
    }
    for (int32_t i = v2; i >= 0; i--) {
        // 0x100003db8
        _printf("%4d %s\n", (int64_t)v1, (char *)16);
    }
    // 0x100003df8
    return 0;
}

// Address range: 0x100003e08 - 0x100003e14
int64_t function_100003e08(int64_t * a1, int64_t a2, int64_t a3, char * a4) {
    // 0x100003e08
    return ___sprintf_chk(a1, a2, a3, a4);
}

// Address range: 0x100003e14 - 0x100003e20
int64_t function_100003e14(void) {
    // 0x100003e14
    return ___stack_chk_fail();
}

// Address range: 0x100003e20 - 0x100003e2c
int32_t function_100003e20(int64_t * ptr, int32_t size, int32_t n, struct _IO_FILE * stream) {
    // 0x100003e20
    return _fread(ptr, size, n, stream);
}

// Address range: 0x100003e2c - 0x100003e38
struct _IO_FILE * function_100003e2c(char * command, char * modes) {
    // 0x100003e2c
    return _popen(command, modes);
}

// Address range: 0x100003e38 - 0x100003e44
int32_t function_100003e38(char * format, ...) {
    // 0x100003e38
    return _printf(format);
}

// Address range: 0x100003e44 - 0x100003e50
void function_100003e44(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003e44
    _qsort(base, nmemb, size, compar);
}

// Address range: 0x100003e50 - 0x100003e5c
int64_t * function_100003e50(int64_t * ptr, int32_t size) {
    // 0x100003e50
    return _realloc(ptr, size);
}

// Address range: 0x100003e5c - 0x100003e68
int32_t function_100003e5c(char * s) {
    // 0x100003e5c
    return _strlen(s);
}

// Address range: 0x100003e68 - 0x100003e74
char * function_100003e68(char * haystack, char * needle) {
    // 0x100003e68
    return _strstr(haystack, needle);
}

// Address range: 0x100003e74 - 0x100003e80
int32_t function_100003e74(char * nptr, char ** endptr, int32_t base) {
    // 0x100003e74
    return _strtol(nptr, endptr, base);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 15

