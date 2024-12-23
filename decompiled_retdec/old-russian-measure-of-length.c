//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <ctype.h>
#include <stdint.h>
#include <stdlib.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e44(void);
float64_t function_100003e50(char * nptr);
int64_t * function_100003e5c(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003e68(char * format, ...);
char * function_100003e74(char * haystack, char * needle);
int32_t function_100003e80(int32_t c);

// --------------------- Global Variables ---------------------

char * g1; // 0x100003f40
int64_t g2 = 0x10000000003e8c; // 0x100004038

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
float64_t _atof(char * a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
char * _strstr(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003bfc - 0x100003e44
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003c14
    int64_t v2; // bp-144, 0x100003bfc
    _memcpy(&v2, &g2, 104);
    int64_t v3; // bp-248, 0x100003bfc
    _memcpy(&v3, (int64_t *)&g1, 104);
    int64_t v4; // 0x100003bfc
    if ((int32_t)v4 == 3) {
        int64_t * v5 = (int64_t *)(v4 + 16); // 0x100003c84
        char * v6 = (char *)*v5;
        char c = *v6; // 0x100003c8c
        char * v7 = v6; // 0x100003c98
        if (c != 0) {
            *(char *)*v5 = (char)_tolower((int32_t)c);
            int32_t v8 = 1; // 0x100003ccc
            int64_t v9 = *v5; // 0x100003c84
            int64_t v10 = v8; // 0x100003c88
            char v11 = *(char *)(v9 + v10); // 0x100003c8c
            char c2 = v11; // 0x100003c98
            int64_t v12 = v10; // 0x100003c98
            int32_t v13 = v8; // 0x100003c98
            while (v11 != 0) {
                // 0x100003ca0
                *(char *)(*v5 + v12) = (char)_tolower((int32_t)c2);
                v8 = v13 + 1;
                v9 = *v5;
                v10 = v8;
                v11 = *(char *)(v9 + v10);
                c2 = v11;
                v12 = v10;
                v13 = v8;
            }
            // 0x100003ce0
            v7 = (char *)v9;
        }
        char * v14 = (char *)v2;
        char * v15 = _strstr(v7, v14); // 0x100003d08
        int32_t v16 = 0; // 0x100003d14
        char * v17 = v14; // 0x100003d14
        int32_t v18 = 0; // 0x100003d14
        int64_t v19 = 0; // 0x100003d14
        char * v20; // 0x100003bfc
        int32_t v21; // 0x100003bfc
        int64_t v22; // 0x100003bfc
        if (v15 == NULL) {
            int64_t v23 = v19 + 1;
            int32_t v24 = v23;
            v20 = v14;
            int128_t v25; // 0x100003bfc
            v22 = v25;
            while (v19 < 12 != (11 - v18 & v24) < 0) {
                int64_t v26 = *(int64_t *)(8 * v23 + (int64_t)&v2); // 0x100003d04
                char * v27 = (char *)v26;
                char * v28 = _strstr((char *)*v5, v27); // 0x100003d08
                v16 = v24;
                v17 = v27;
                v18++;
                v19 = v23;
                if (v28 != NULL) {
                    goto lab_0x100003d1c;
                }
                v23 = v19 + 1;
                v24 = v23;
                v20 = v27;
                v22 = v25;
            }
        } else {
          lab_0x100003d1c:;
            int64_t v29 = *(int64_t *)(v4 + 8); // 0x100003d28
            v20 = v17;
            v21 = v16;
            v22 = (float32_t)_atof((char *)v29);
        }
        // 0x100003d5c
        _printf("%s %s is equal in length to : \n", v20, (char *)104);
        for (int32_t i = 0; i < 13; i++) {
            // 0x100003da0
            if (i != v21) {
                // 0x100003db8
                _printf("\n%lf %s", (float64_t)v22, v20);
            }
        }
    } else {
        // 0x100003c68
        _printf("Usage : %s followed by length as <value> <unit>", (char *)&g1);
    }
    // 0x100003e0c
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003e2c
        ___stack_chk_fail();
    }
    // 0x100003e30
    return 0;
}

// Address range: 0x100003e44 - 0x100003e50
int64_t function_100003e44(void) {
    // 0x100003e44
    return ___stack_chk_fail();
}

// Address range: 0x100003e50 - 0x100003e5c
float64_t function_100003e50(char * nptr) {
    // 0x100003e50
    return _atof(nptr);
}

// Address range: 0x100003e5c - 0x100003e68
int64_t * function_100003e5c(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003e5c
    return _memcpy(dest, src, n);
}

// Address range: 0x100003e68 - 0x100003e74
int32_t function_100003e68(char * format, ...) {
    // 0x100003e68
    return _printf(format);
}

// Address range: 0x100003e74 - 0x100003e80
char * function_100003e74(char * haystack, char * needle) {
    // 0x100003e74
    return _strstr(haystack, needle);
}

// Address range: 0x100003e80 - 0x100003e8c
int32_t function_100003e80(int32_t c) {
    // 0x100003e80
    return _tolower(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

