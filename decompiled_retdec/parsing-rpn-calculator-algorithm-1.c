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

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000039bc(void);
int64_t function_1000039f4(void);
int64_t function_100003a64(int64_t a1);
int64_t function_100003ac0(void);
int64_t function_100003ec8(int64_t a1);
void function_100003ed4(void);
int32_t function_100003ee0(struct _IO_FILE * stream, char * format, ...);
float64_t function_100003eec(float64_t a1, float64_t a2);
int32_t function_100003ef8(char * format, ...);
int32_t function_100003f04(int32_t c);
float64_t function_100003f10(char * nptr, char ** endptr);
char * function_100003f1c(char * s, char * delim);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x100000cfeedfacf; // 0x100008000
float64_t * g2 = (float64_t *)0x200000000; // 0x100008008
int32_t g3;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
void _abort(void);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
float64_t _pow(float64_t a1, float64_t a2);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
float64_t _strtod(char * a1, char ** a2);
char * _strtok(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x1000039bc - 0x1000039f4
int64_t function_1000039bc(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004010; // 0x1000039d4
    int64_t v2; // 0x1000039bc
    _fprintf((struct _IO_FILE *)v1, "%s", (char *)v2);
    _abort();
    return &g3;
}

// Address range: 0x1000039f4 - 0x100003a64
int64_t function_1000039f4(void) {
    int32_t v1 = *(int32_t *)&g1; // 0x100003a0c
    int32_t v2 = v1; // 0x100003a18
    int64_t result; // 0x1000039f4
    if (v1 < 256 == (255 - v1 & v1) < 0) {
        int64_t v3 = function_1000039bc(); // 0x100003a28
        v2 = *(int32_t *)&g1;
        result = v3;
    }
    // 0x100003a30
    *(int32_t *)&g1 = v2 + 1;
    float64_t v4; // 0x1000039f4
    *(int64_t *)(8 * (int64_t)v2 + (int64_t)&g2) = (int64_t)v4;
    return result;
}

// Address range: 0x100003a64 - 0x100003ac0
int64_t function_100003a64(int64_t a1) {
    int32_t v1 = *(int32_t *)&g1; // 0x100003a74
    int32_t v2 = v1; // 0x100003a80
    int64_t result; // 0x100003a64
    if (v1 == 0) {
        int64_t v3 = function_1000039bc(); // 0x100003a90
        v2 = *(int32_t *)&g1;
        result = v3;
    }
    // 0x100003a98
    *(int32_t *)&g1 = v2 - 1;
    return result;
}

// Address range: 0x100003ac0 - 0x100003e40
int64_t function_100003ac0(void) {
    // 0x100003ac0
    int64_t v1; // 0x100003ac0
    char * v2 = _strtok((char *)v1, " \t\n\r\f"); // 0x100003ae4
    if (v2 != NULL) {
        // 0x100003b04
        int64_t v3; // bp-56, 0x100003ac0
        char v4 = &v3;
        float64_t v5; // 0x100003ac0
        int64_t v6 = v5;
        float64_t v7 = _strtod(v2, (char **)&v3); // 0x100003b0c
        uint64_t v8 = v3; // 0x100003b14
        uint64_t v9 = (int64_t)v2; // 0x100003b18
        float64_t v10; // 0x100003ac0
        float64_t v11; // 0x100003ac0
        float64_t v12; // 0x100003ac0
        float64_t v13; // 0x100003ac0
        float64_t v14; // 0x100003ac0
        float64_t v15; // 0x100003ac0
        float64_t v16; // 0x100003ac0
        float64_t v17; // 0x100003ac0
        float64_t v18; // 0x100003ac0
        float64_t v19; // 0x100003ac0
        int64_t v20; // 0x100003ac0
        float64_t v21; // 0x100003ac0
        float64_t v22; // 0x100003ac0
        float64_t v23; // 0x100003ac0
        float64_t v24; // 0x100003ac0
        float64_t v25; // 0x100003cf0
        char * v26; // 0x100003ac0
        int32_t v27; // 0x100003ac0
        int64_t v28; // 0x100003d18
        float64_t v29; // 0x100003b94
        float64_t v30; // 0x100003bf0
        float64_t v31; // 0x100003c4c
        float64_t v32; // 0x100003ca8
        float64_t v33; // 0x100003d04
        int128_t v34; // 0x100003ac0
        if (v8 == v9 || v8 < v9) {
            // 0x100003b44
            v25 = v14;
            v24 = v13;
            v23 = v12;
            v22 = v11;
            v21 = v10;
            switch (*v26) {
                case 43: {
                    // 0x100003b5c
                    _printf("%c:", v4);
                    function_100003a64((int64_t)&g3);
                    function_100003a64((int64_t)v21);
                    v29 = 2 * v21;
                    function_1000039f4();
                    v15 = v29;
                    v16 = v29;
                    v17 = v29;
                    v18 = v29;
                    v19 = v29;
                    v20 = v29;
                    v27 = (float32_t)v7;
                    // break -> 0x100003d60
                    break;
                }
                case 45: {
                    // 0x100003bb8
                    _printf("%c:", v4);
                    function_100003a64((int64_t)&g3);
                    function_100003a64((int64_t)v22);
                    v30 = 0.0;
                    function_1000039f4();
                    v15 = v30;
                    v16 = v30;
                    v17 = v30;
                    v18 = v30;
                    v19 = v30;
                    v20 = v30;
                    v27 = (float32_t)v7;
                    // break -> 0x100003d60
                    break;
                }
                case 42: {
                    // 0x100003c14
                    _printf("%c:", v4);
                    function_100003a64((int64_t)&g3);
                    function_100003a64((int64_t)v23);
                    v31 = v23 * v23;
                    function_1000039f4();
                    v15 = v31;
                    v16 = v31;
                    v17 = v31;
                    v18 = v31;
                    v19 = v31;
                    v20 = v31;
                    v27 = (float32_t)v7;
                    // break -> 0x100003d60
                    break;
                }
                case 47: {
                    // 0x100003c70
                    _printf("%c:", v4);
                    function_100003a64((int64_t)&g3);
                    function_100003a64((int64_t)v24);
                    v32 = 1.0;
                    function_1000039f4();
                    v15 = v32;
                    v16 = v32;
                    v17 = v32;
                    v18 = v32;
                    v19 = v32;
                    v20 = v32;
                    v27 = (float32_t)v7;
                    // break -> 0x100003d60
                    break;
                }
                case 94: {
                    // 0x100003ccc
                    _printf("%c:", v4);
                    function_100003a64((int64_t)&g3);
                    function_100003a64((int64_t)v25);
                    v33 = _pow(v7, (float64_t)(int64_t)v34);
                    function_1000039f4();
                    v15 = v21;
                    v16 = v22;
                    v17 = v23;
                    v18 = v24;
                    v19 = v25;
                    v20 = v25;
                    v27 = (float32_t)v33;
                    // break -> 0x100003d60
                    break;
                }
                default: {
                    // 0x100003d10
                    v28 = *(int64_t *)*(int64_t *)0x100004010;
                    _fprintf((struct _IO_FILE *)v28, "'%c': ", (char)v1);
                    function_1000039bc();
                    v15 = v21;
                    v16 = v22;
                    v17 = v23;
                    v18 = v24;
                    v19 = v25;
                    v20 = v6;
                    v27 = (float32_t)v7;
                    // break -> 0x100003d60
                    break;
                }
            }
        } else {
            // 0x100003b2c
            _printf(" :");
            function_1000039f4();
            v15 = v6;
            v16 = v6;
            v17 = v6;
            v18 = v6;
            v19 = v6;
            v20 = v6;
            v27 = (float32_t)v7;
        }
        int32_t v35 = *(int32_t *)&g1; // 0x100003d68
        float64_t v36 = v15; // 0x100003d90
        float64_t v37 = v16; // 0x100003d90
        float64_t v38 = v17; // 0x100003d90
        float64_t v39 = v18; // 0x100003d90
        float64_t v40 = v19; // 0x100003d90
        int64_t v41 = v20; // 0x100003d90
        int32_t v42; // 0x100003ac0
        int64_t v43; // 0x100003ac0
        if (v35 != 0) {
            // 0x100003dc4
            v42 = v35;
            v42--;
            v43 = *(int64_t *)(8 * (int64_t)v42 + (int64_t)&g2);
            _printf(" %g", (float64_t)(int64_t)v27);
            while (v42 != 0) {
                // 0x100003dc4
                v42--;
                v43 = *(int64_t *)(8 * (int64_t)v42 + (int64_t)&g2);
                _printf(" %g", (float64_t)(int64_t)v27);
            }
            // 0x100003d98
            v36 = v43;
            v37 = v43;
            v38 = v43;
            v39 = v43;
            v40 = v43;
            v41 = v43;
        }
        int64_t v44 = v41;
        _putchar(10);
        char * v45 = _strtok(NULL, " \t\n\r\f"); // 0x100003df8
        v10 = v36;
        v11 = v37;
        v12 = v38;
        v13 = v39;
        v14 = v40;
        while (v45 != NULL) {
            // 0x100003b04
            v26 = v45;
            v6 = v44;
            v7 = _strtod(v26, (char **)&v3);
            v8 = v3;
            v9 = (int64_t)v26;
            if (v8 == v9 || v8 < v9) {
                // 0x100003b44
                v25 = v14;
                v24 = v13;
                v23 = v12;
                v22 = v11;
                v21 = v10;
                switch (*v26) {
                    case 43: {
                        // 0x100003b5c
                        _printf("%c:", v4);
                        function_100003a64((int64_t)&g3);
                        function_100003a64((int64_t)v21);
                        v29 = 2 * v21;
                        function_1000039f4();
                        v15 = v29;
                        v16 = v29;
                        v17 = v29;
                        v18 = v29;
                        v19 = v29;
                        v20 = v29;
                        v27 = (float32_t)v7;
                        // break -> 0x100003d60
                        break;
                    }
                    case 45: {
                        // 0x100003bb8
                        _printf("%c:", v4);
                        function_100003a64((int64_t)&g3);
                        function_100003a64((int64_t)v22);
                        v30 = 0.0;
                        function_1000039f4();
                        v15 = v30;
                        v16 = v30;
                        v17 = v30;
                        v18 = v30;
                        v19 = v30;
                        v20 = v30;
                        v27 = (float32_t)v7;
                        // break -> 0x100003d60
                        break;
                    }
                    case 42: {
                        // 0x100003c14
                        _printf("%c:", v4);
                        function_100003a64((int64_t)&g3);
                        function_100003a64((int64_t)v23);
                        v31 = v23 * v23;
                        function_1000039f4();
                        v15 = v31;
                        v16 = v31;
                        v17 = v31;
                        v18 = v31;
                        v19 = v31;
                        v20 = v31;
                        v27 = (float32_t)v7;
                        // break -> 0x100003d60
                        break;
                    }
                    case 47: {
                        // 0x100003c70
                        _printf("%c:", v4);
                        function_100003a64((int64_t)&g3);
                        function_100003a64((int64_t)v24);
                        v32 = 1.0;
                        function_1000039f4();
                        v15 = v32;
                        v16 = v32;
                        v17 = v32;
                        v18 = v32;
                        v19 = v32;
                        v20 = v32;
                        v27 = (float32_t)v7;
                        // break -> 0x100003d60
                        break;
                    }
                    case 94: {
                        // 0x100003ccc
                        _printf("%c:", v4);
                        function_100003a64((int64_t)&g3);
                        function_100003a64((int64_t)v25);
                        v33 = _pow(v7, (float64_t)(int64_t)v34);
                        function_1000039f4();
                        v15 = v21;
                        v16 = v22;
                        v17 = v23;
                        v18 = v24;
                        v19 = v25;
                        v20 = v25;
                        v27 = (float32_t)v33;
                        // break -> 0x100003d60
                        break;
                    }
                    default: {
                        // 0x100003d10
                        v28 = *(int64_t *)*(int64_t *)0x100004010;
                        _fprintf((struct _IO_FILE *)v28, "'%c': ", (char)v1);
                        function_1000039bc();
                        v15 = v21;
                        v16 = v22;
                        v17 = v23;
                        v18 = v24;
                        v19 = v25;
                        v20 = v6;
                        v27 = (float32_t)v7;
                        // break -> 0x100003d60
                        break;
                    }
                }
            } else {
                // 0x100003b2c
                _printf(" :");
                function_1000039f4();
                v15 = v6;
                v16 = v6;
                v17 = v6;
                v18 = v6;
                v19 = v6;
                v20 = v6;
                v27 = (float32_t)v7;
            }
            // 0x100003d60
            v35 = *(int32_t *)&g1;
            v36 = v15;
            v37 = v16;
            v38 = v17;
            v39 = v18;
            v40 = v19;
            v41 = v20;
            if (v35 != 0) {
                // 0x100003dc4
                v42 = v35;
                v42--;
                v43 = *(int64_t *)(8 * (int64_t)v42 + (int64_t)&g2);
                _printf(" %g", (float64_t)(int64_t)v27);
                while (v42 != 0) {
                    // 0x100003dc4
                    v42--;
                    v43 = *(int64_t *)(8 * (int64_t)v42 + (int64_t)&g2);
                    _printf(" %g", (float64_t)(int64_t)v27);
                }
                // 0x100003d98
                v36 = v43;
                v37 = v43;
                v38 = v43;
                v39 = v43;
                v40 = v43;
                v41 = v43;
            }
            // 0x100003d98
            v44 = v41;
            _putchar(10);
            v45 = _strtok(NULL, " \t\n\r\f");
            v10 = v36;
            v11 = v37;
            v12 = v38;
            v13 = v39;
            v14 = v40;
        }
    }
    // 0x100003e04
    if (*(int32_t *)&g1 != 1) {
        // 0x100003e20
        function_1000039bc();
    }
    // 0x100003e30
    return function_100003a64((int64_t)&g3);
}

// Address range: 0x100003e40 - 0x100003ec8
int64_t entry_point(void) {
    // 0x100003e40
    function_100003ac0();
    int128_t v1; // 0x100003e40
    int32_t v2 = _printf("%g\n", (float64_t)(int64_t)v1); // 0x100003e90
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ea0
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003eb4
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003eb8
    return 0;
}

// Address range: 0x100003ec8 - 0x100003ed4
int64_t function_100003ec8(int64_t a1) {
    // 0x100003ec8
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003ed4 - 0x100003ee0
void function_100003ed4(void) {
    // 0x100003ed4
    _abort();
}

// Address range: 0x100003ee0 - 0x100003eec
int32_t function_100003ee0(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003ee0
    return _fprintf(stream, format);
}

// Address range: 0x100003eec - 0x100003ef8
float64_t function_100003eec(float64_t a1, float64_t a2) {
    // 0x100003eec
    return _pow(a1, a2);
}

// Address range: 0x100003ef8 - 0x100003f04
int32_t function_100003ef8(char * format, ...) {
    // 0x100003ef8
    return _printf(format);
}

// Address range: 0x100003f04 - 0x100003f10
int32_t function_100003f04(int32_t c) {
    // 0x100003f04
    return _putchar(c);
}

// Address range: 0x100003f10 - 0x100003f1c
float64_t function_100003f10(char * nptr, char ** endptr) {
    // 0x100003f10
    return _strtod(nptr, endptr);
}

// Address range: 0x100003f1c - 0x100003f28
char * function_100003f1c(char * s, char * delim) {
    // 0x100003f1c
    return _strtok(s, delim);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 13
