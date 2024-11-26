//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003a28(void);
int64_t function_100003da0(void);
void function_100003efc(void);
int32_t function_100003f08(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003f14(int32_t c);
float64_t function_100003f20(float64_t a1, float64_t a2);
int32_t function_100003f2c(char * format, ...);
int32_t function_100003f38(char * s);
float64_t function_100003f44(char * nptr, char ** endptr);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

void _abort(void);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _isspace(int32_t a1);
float64_t _pow(float64_t a1, float64_t a2);
int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);
float64_t _strtod(char * a1, char ** a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003a28 - 0x100003da0
int64_t function_100003a28(void) {
    // 0x100003a28
    int64_t v1; // 0x100003a28
    uint64_t v2 = v1;
    int64_t v3 = v1 - 1;
    char * v4 = (char *)v3;
    char * v5 = v4;
    char * v6 = v4; // 0x100003a68
    char * v7 = v4; // 0x100003a68
    int64_t v8 = v3; // 0x100003a68
    if (v2 <= v3) {
        while (_isspace((int32_t)*v6) != 0) {
            int64_t v9 = (int64_t)v5 - 1;
            v6 = (char *)v9;
            v5 = v6;
            v7 = v6;
            v8 = v9;
            if (v2 > v9) {
                goto lab_0x100003aac;
            }
        }
        // 0x100003a8c
        v7 = v5;
        v8 = (int64_t)v5;
    }
  lab_0x100003aac:;
    int64_t v10 = v8;
    char * v11 = v7; // 0x100003ad0
    int64_t v12 = v10; // 0x100003ad0
    char * v13 = v7; // 0x100003ad0
    if (v2 != v10 && v2 <= v10) {
        v13 = v11;
        while (_isspace((int32_t)*(char *)(v12 - 1)) == 0) {
            int64_t v14 = (int64_t)v11 - 1; // 0x100003b08
            char * v15 = (char *)v14;
            v11 = v15;
            v12 = v14;
            v13 = v15;
            if (v2 == v14 || v2 > v14) {
                // break -> 0x100003b14
                break;
            }
            v13 = v11;
        }
    }
    char * v16 = v13; // 0x100003d84
    uint64_t v17 = (int64_t)v16;
    if (v2 > v17) {
        // 0x100003b2c
        _fprintf((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004000, "underflow\n");
        _abort();
    }
    float64_t v18 = _strtod(v16, &v5); // 0x100003b50
    char * v19 = v5; // 0x100003b58
    int64_t result = v18; // 0x100003b68
    if (v19 >= v16 != v19 != v16) {
        // 0x100003b70
        switch (*v16) {
            case 43: {
                // 0x100003b88
                function_100003a28();
                result = function_100003a28();
                // break -> 0x100003d84
                break;
            }
            case 45: {
                // 0x100003be0
                function_100003a28();
                result = function_100003a28();
                // break -> 0x100003d84
                break;
            }
            case 42: {
                // 0x100003c38
                function_100003a28();
                result = function_100003a28();
                // break -> 0x100003d84
                break;
            }
            case 47: {
                // 0x100003c90
                function_100003a28();
                result = function_100003a28();
                // break -> 0x100003d84
                break;
            }
            case 94: {
                // 0x100003ce8
                function_100003a28();
                function_100003a28();
                int128_t v20; // 0x100003a28
                result = _pow(v18, (float64_t)(int64_t)v20);
                // break -> 0x100003d84
                break;
            }
            default: {
                int64_t * v21 = (int64_t *)*(int64_t *)0x100004000; // 0x100003d34
                _fprintf((struct _IO_FILE *)*v21, "'%c': ", (char)v1);
                _fprintf((struct _IO_FILE *)*v21, "unknown token\n");
                _abort();
                result = &g1;
                // break -> 0x100003d84
                break;
            }
        }
    }
    // 0x100003d84
    *(int64_t *)v1 = v17;
    return result;
}

// Address range: 0x100003da0 - 0x100003eb4
int64_t function_100003da0(void) {
    // 0x100003da0
    int64_t v1; // 0x100003da0
    uint64_t v2 = v1;
    int64_t v3 = v2 + (int64_t)_strlen((char *)v2); // bp-32, 0x100003dcc
    int64_t v4 = v3; // 0x100003de4
    int64_t v5 = v4; // 0x100003dfc
    int64_t result = function_100003a28(); // 0x100003dfc
    if (v4 != v2 && v4 >= v2) {
        int32_t v6 = _isspace((int32_t)*(char *)(v4 - 1)); // 0x100003e0c
        v5 = v3;
        result = 0;
        while (v6 != 0) {
            int64_t v7 = v3 - 1; // 0x100003e30
            v3 = v7;
            if (v7 == v2 || v7 < v2) {
                // 0x100003de4
                v5 = v7;
                result = v6;
                goto lab_0x100003e3c;
            }
            v6 = _isspace((int32_t)*(char *)(v7 - 1));
            v5 = v3;
            result = 0;
        }
    }
    goto lab_0x100003e3c;
  lab_0x100003e3c:
    // 0x100003e3c
    if (v5 == v2) {
        // 0x100003e54
        return result;
    }
    int64_t * v8 = (int64_t *)*(int64_t *)0x100004000; // 0x100003e70
    int64_t v9 = *v8; // 0x100003e70
    _fprintf((struct _IO_FILE *)v9, "\"%.*s\": ", (int64_t)&v3, (char *)v1);
    _fprintf((struct _IO_FILE *)*v8, "front garbage\n");
    _abort();
    return &g1;
}

// Address range: 0x100003eb4 - 0x100003efc
int64_t entry_point(void) {
    // 0x100003eb4
    function_100003da0();
    int128_t v1; // 0x100003eb4
    _printf("%g\n", (float64_t)(int64_t)v1);
    return 0;
}

// Address range: 0x100003efc - 0x100003f08
void function_100003efc(void) {
    // 0x100003efc
    _abort();
}

// Address range: 0x100003f08 - 0x100003f14
int32_t function_100003f08(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f08
    return _fprintf(stream, format);
}

// Address range: 0x100003f14 - 0x100003f20
int32_t function_100003f14(int32_t c) {
    // 0x100003f14
    return _isspace(c);
}

// Address range: 0x100003f20 - 0x100003f2c
float64_t function_100003f20(float64_t a1, float64_t a2) {
    // 0x100003f20
    return _pow(a1, a2);
}

// Address range: 0x100003f2c - 0x100003f38
int32_t function_100003f2c(char * format, ...) {
    // 0x100003f2c
    return _printf(format);
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(char * s) {
    // 0x100003f38
    return _strlen(s);
}

// Address range: 0x100003f44 - 0x100003f50
float64_t function_100003f44(char * nptr, char ** endptr) {
    // 0x100003f44
    return _strtod(nptr, endptr);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10
