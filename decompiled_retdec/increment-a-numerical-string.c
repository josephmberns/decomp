//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003a20(void);
int64_t function_100003dc4(void);
int64_t function_100003ecc(int64_t a1, int64_t a2, int64_t a3);
void function_100003ed8(int64_t * ptr);
int64_t * function_100003ee4(int32_t size);
int32_t function_100003ef0(char * format, ...);
int64_t * function_100003efc(int64_t * ptr, int32_t size);
int32_t function_100003f08(char * s1, char * s2);
int32_t function_100003f14(char * s);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___strcpy_chk(int64_t a1, int64_t a2, int64_t a3);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int64_t * _realloc(int64_t * a1, int32_t a2);
int32_t _strcmp(char * a1, char * a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003a20 - 0x100003dc4
int64_t function_100003a20(void) {
    // 0x100003a20
    int64_t v1; // 0x100003a20
    char * v2 = (char *)v1; // 0x100003a2c
    if (_strcmp(v2, "-1") == 0) {
        // 0x100003a8c
        *v2 = 48;
        *(char *)(v1 + 1) = 0;
        // 0x100003db4
        return (int64_t)v2;
    }
    char v3 = v1;
    int32_t v4 = _strlen(v2); // 0x100003ab0
    bool v5 = v3 == 45 | v3 == 43;
    int32_t v6 = v5;
    int32_t v7 = v4; // 0x100003b18
    v7--;
    while ((v7 - v6) < 0 == (v7 & -((v7 - v6))) < 0) {
        char v8 = *(char *)(v1 + (int64_t)v7); // 0x100003b44
        if ((v3 != 45 ? 57 : 48) != (int32_t)v8) {
            goto lab_0x100003c54;
        }
        v7--;
    }
    if (v3 != 45) {
        char * v9 = v2; // 0x100003bb4
        if (!v5) {
            // 0x100003bbc
            v9 = (char *)_realloc((int64_t *)v1, v4 + 2);
        }
        // 0x100003bdc
        *v9 = 49;
        int32_t v10 = v4 - v6; // 0x100003c00
        int32_t v11 = 1 - v10; // 0x100003c04
        int64_t v12 = (int64_t)v9;
        int32_t v13 = 1; // 0x100003c0c
        if (v11 == 0 || v11 < 0 != (v11 & v10) < 0) {
            *(char *)((int64_t)v13 + v12) = 48;
            int32_t v14 = v13 + 1; // 0x100003c30
            int32_t v15 = v14 - v10; // 0x100003c04
            v13 = v14;
            while (v15 == 0 || v15 < 0 != ((v15 ^ v14) & (v14 ^ v10)) < 0) {
                // 0x100003c14
                *(char *)((int64_t)v13 + v12) = 48;
                v14 = v13 + 1;
                v15 = v14 - v10;
                v13 = v14;
            }
            // 0x100003c3c
            *(char *)(v12 + (int64_t)(v4 + 1)) = 0;
            // 0x100003db4
            return (int64_t)v9;
        }
        // 0x100003c3c
        *(char *)(v12 + (int64_t)(v4 + 1)) = 0;
        // 0x100003db4
        return (int64_t)v9;
    }
  lab_0x100003c54:
    if (v3 == 45 && v7 == v6) {
        // 0x100003c80
        if (*(char *)(v1 + 1) == 49) {
            int32_t v16 = v4 - v6; // 0x100003cb0
            int32_t v17 = 1 - v16; // 0x100003cb4
            int32_t v18 = 1; // 0x100003cbc
            if (v17 < 0 != (v17 & v16) < 0) {
                *(char *)(v1 + (int64_t)v18) = 57;
                int32_t v19 = v18 + 1; // 0x100003ce0
                int32_t v20 = v19 - v16; // 0x100003cb4
                v18 = v19;
                while (v20 < 0 != ((v20 ^ v19) & (v19 ^ v16)) < 0) {
                    // 0x100003cc4
                    *(char *)(v1 + (int64_t)v18) = 57;
                    v19 = v18 + 1;
                    v20 = v19 - v16;
                    v18 = v19;
                }
            }
            // 0x100003cec
            *(char *)(v1 + (int64_t)(v4 - 1)) = 0;
            // 0x100003db4
            return (int64_t)v2;
        }
    }
    int32_t v21 = v4 - 1;
    int32_t v22 = v21 - v7; // 0x100003d1c
    if (v22 != 0 && v22 < 0 == ((v22 ^ v21) & (v7 ^ v21)) < 0) {
        char v23 = v3 != 45 ? 48 : 57; // 0x100003d54
        int32_t v24 = v21;
        *(char *)(v1 + (int64_t)v24) = v23;
        v24--;
        while (v24 - v7 != 0 && v24 - v7 < 0 == ((v24 - v7 ^ v24) & (v24 ^ v7)) < 0) {
            // 0x100003d2c
            *(char *)(v1 + (int64_t)v24) = v23;
            v24--;
        }
    }
    char * v25 = (char *)(v1 + (int64_t)v7); // 0x100003d94
    *v25 = *v25 + (v3 != 45 ? 1 : -1);
    // 0x100003db4
    return (int64_t)v2;
}

// Address range: 0x100003dc4 - 0x100003e44
int64_t function_100003dc4(void) {
    // 0x100003dc4
    int64_t v1; // 0x100003dc4
    char * v2 = (char *)v1; // 0x100003dd8
    ___strcpy_chk((int64_t)_malloc(_strlen(v2)), v1, -1);
    _printf("text: %s\n", v2);
    int64_t v3 = function_100003a20(); // 0x100003e10
    _printf("  ->: %s\n", v2);
    _free((int64_t *)v3);
    return &g1;
}

// Address range: 0x100003e44 - 0x100003ecc
int64_t entry_point(void) {
    // 0x100003e44
    function_100003dc4();
    function_100003dc4();
    function_100003dc4();
    function_100003dc4();
    function_100003dc4();
    function_100003dc4();
    function_100003dc4();
    function_100003dc4();
    return 0;
}

// Address range: 0x100003ecc - 0x100003ed8
int64_t function_100003ecc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003ecc
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003ed8 - 0x100003ee4
void function_100003ed8(int64_t * ptr) {
    // 0x100003ed8
    _free(ptr);
}

// Address range: 0x100003ee4 - 0x100003ef0
int64_t * function_100003ee4(int32_t size) {
    // 0x100003ee4
    return _malloc(size);
}

// Address range: 0x100003ef0 - 0x100003efc
int32_t function_100003ef0(char * format, ...) {
    // 0x100003ef0
    return _printf(format);
}

// Address range: 0x100003efc - 0x100003f08
int64_t * function_100003efc(int64_t * ptr, int32_t size) {
    // 0x100003efc
    return _realloc(ptr, size);
}

// Address range: 0x100003f08 - 0x100003f14
int32_t function_100003f08(char * s1, char * s2) {
    // 0x100003f08
    return _strcmp(s1, s2);
}

// Address range: 0x100003f14 - 0x100003f20
int32_t function_100003f14(char * s) {
    // 0x100003f14
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10

