//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b30(void);
int64_t function_100003f1c(int64_t a1);
void function_100003f28(int64_t * s, int32_t n);
int64_t * function_100003f34(int64_t * dest, int64_t * src, int32_t n);
int64_t * function_100003f40(int64_t * s, int32_t c, int32_t n);
int32_t function_100003f4c(char * format, ...);
char * function_100003f58(char * s);
int32_t function_100003f64(char * s);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
void _bzero(int64_t * a1, int32_t a2);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003b30 - 0x100003e2c
int64_t function_100003b30(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003b48
    int64_t v2; // 0x100003b30
    char * v3 = (char *)v2; // 0x100003b50
    int32_t v4 = _strlen(v3); // 0x100003b6c
    int64_t v5; // bp-544, 0x100003b30
    _bzero(&v5, 512);
    int64_t v6; // bp-800, 0x100003b30
    _memset(&v6, 0, 256);
    int32_t v7 = -v4;
    int64_t v8 = &v5;
    int32_t v9 = 0; // 0x100003bac
    int32_t v10 = 0; // 0x100003bac
    int32_t v11 = 0; // 0x100003bac
    if (v7 < 0 != (v4 & v7) < 0) {
        char * v12 = (char *)(v2 + (int64_t)v10); // 0x100003bbc
        int32_t * v13 = (int32_t *)(4 * (int64_t)*v12 + v8); // 0x100003bc8
        int32_t v14 = *v13 + 1; // 0x100003bcc
        *v13 = v14;
        int32_t v15 = v14 - v11; // 0x100003bd8
        int32_t v16 = v11; // 0x100003be0
        if (v15 != 0 && v15 < 0 == ((v15 ^ v14) & (v14 ^ v11)) < 0) {
            // 0x100003be8
            v16 = *(int32_t *)(4 * (int64_t)*v12 + v8);
        }
        // 0x100003c08
        v11 = v16;
        v10++;
        int32_t v17 = v10 - v4; // 0x100003ba4
        v9 = v11;
        while (v17 < 0 != ((v17 ^ v10) & (v10 ^ v4)) < 0) {
            // 0x100003bb4
            v12 = (char *)(v2 + (int64_t)v10);
            v13 = (int32_t *)(4 * (int64_t)*v12 + v8);
            v14 = *v13 + 1;
            *v13 = v14;
            v15 = v14 - v11;
            v16 = v11;
            if (v15 != 0 && v15 < 0 == ((v15 ^ v14) & (v14 ^ v11)) < 0) {
                // 0x100003be8
                v16 = *(int32_t *)(4 * (int64_t)*v12 + v8);
            }
            // 0x100003c08
            v11 = v16;
            v10++;
            v17 = v10 - v4;
            v9 = v11;
        }
    }
    int32_t * v18 = (int32_t *)v2; // 0x100003b54
    int64_t v19 = &v6;
    int32_t v20 = 0;
    int32_t v21 = 0;
    int32_t * v22 = (int32_t *)(4 * (int64_t)v21 + v8); // 0x100003c44
    int32_t v23 = *v22; // 0x100003c44
    *v22 = v23 - 1;
    int32_t v24 = v20; // 0x100003c58
    int32_t v25; // 0x100003b30
    int32_t v26; // 0x100003c6c
    int32_t v27; // 0x100003c44
    if (v23 != 0) {
        // 0x100003c60
        v26 = v20 + 1;
        *(char *)((int64_t)v20 + v19) = (char)v21;
        v27 = *v22;
        *v22 = v27 - 1;
        v24 = v26;
        while (v27 != 0) {
            // 0x100003c60
            v25 = v26;
            v26 = v25 + 1;
            *(char *)((int64_t)v25 + v19) = (char)v21;
            v27 = *v22;
            *v22 = v27 - 1;
            v24 = v26;
        }
    }
    int32_t v28 = v21 + 1; // 0x100003c88
    while (v21 < 127 != (126 - v21 & v28) < 0) {
        // 0x100003c38
        v20 = v24;
        v21 = v28;
        v22 = (int32_t *)(4 * (int64_t)v21 + v8);
        v23 = *v22;
        *v22 = v23 - 1;
        v24 = v20;
        if (v23 != 0) {
            // 0x100003c60
            v26 = v20 + 1;
            *(char *)((int64_t)v20 + v19) = (char)v21;
            v27 = *v22;
            *v22 = v27 - 1;
            v24 = v26;
            while (v27 != 0) {
                // 0x100003c60
                v25 = v26;
                v26 = v25 + 1;
                *(char *)((int64_t)v25 + v19) = (char)v21;
                v27 = *v22;
                *v22 = v27 - 1;
                v24 = v26;
            }
        }
        // 0x100003c84
        v28 = v21 + 1;
    }
    int64_t result = (int64_t)_strdup(v3); // 0x100003c98
    int32_t v29 = 0; // 0x100003cb8
    if (v7 < 0 == (v4 & v7) < 0) {
        // 0x100003d7c
        *v18 = 0;
    } else {
        while (true) {
            char * v30 = (char *)((int64_t)v29 + result);
            int32_t v31 = 0;
            char * v32 = (char *)((int64_t)v31 + v19);
            while (*v30 != *v32) {
                int32_t v33 = v31 + 1; // 0x100003d5c
                int32_t v34 = v33 - v4; // 0x100003cd0
                if (v34 < 0 == ((v34 ^ v33) & (v33 ^ v4)) < 0) {
                    goto lab_0x100003d6c;
                }
                v31 = v33;
                v32 = (char *)((int64_t)v31 + v19);
            }
            unsigned char v35 = *(char *)((int64_t)((v31 + v9) % v4) + v19); // 0x100003d28
            *v30 = v35 % 128;
            *v32 = *v32 | -128;
          lab_0x100003d6c:
            // 0x100003d6c
            v29++;
            int32_t v36 = v29 - v4; // 0x100003cb0
            if (v36 < 0 == ((v36 ^ v29) & (v29 ^ v4)) < 0) {
                // break -> 0x100003da4
                break;
            }
        }
        // 0x100003da4
        *v18 = 0;
        int32_t v37 = 0; // 0x100003de0
        int64_t v38 = v37; // 0x100003da8
        char v39 = *(char *)(v2 + v38); // 0x100003db8
        int64_t v40; // 0x100003b30
        *v18 = *(int32_t *)&v40 + (int32_t)(*(char *)(v38 + result) == v39);
        v37++;
        while (v37 - v4 < 0 != ((v37 - v4 ^ v37) & (v37 ^ v4)) < 0) {
            // 0x100003da4
            v38 = v37;
            v39 = *(char *)(v2 + v38);
            *v18 = *(int32_t *)&v40 + (int32_t)(*(char *)(v38 + result) == v39);
            v37++;
        }
    }
    // 0x100003dec
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003e14
        ___stack_chk_fail(result);
    }
    // 0x100003e18
    return result;
}

// Address range: 0x100003e2c - 0x100003f1c
int64_t entry_point(void) {
    // 0x100003e2c
    int64_t v1; // bp-80, 0x100003e2c
    int64_t * v2 = _memcpy(&v1, (int64_t *)"p?", 56); // 0x100003e5c
    int32_t v3 = 0; // 0x100003e7c
    int64_t v4 = (int64_t)v2; // 0x100003e7c
    if (v1 != 0) {
        function_100003b30();
        int64_t v5; // bp-92, 0x100003e2c
        int64_t v6; // 0x100003e2c
        int32_t v7 = _printf("%s %s (%d)\n", &v5, (char *)56, v6); // 0x100003ed0
        v3++;
        while (*(int64_t *)(8 * (int64_t)v3 + (int64_t)&v1) != 0) {
            // 0x100003e84
            function_100003b30();
            v7 = _printf("%s %s (%d)\n", &v5, (char *)56, v6);
            v3++;
        }
        // 0x100003e68
        v4 = v7;
    }
    int64_t v8 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ef4
    if (v8 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f08
        ___stack_chk_fail(v4);
    }
    // 0x100003f0c
    return 0;
}

// Address range: 0x100003f1c - 0x100003f28
int64_t function_100003f1c(int64_t a1) {
    // 0x100003f1c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f28 - 0x100003f34
void function_100003f28(int64_t * s, int32_t n) {
    // 0x100003f28
    _bzero(s, n);
}

// Address range: 0x100003f34 - 0x100003f40
int64_t * function_100003f34(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003f34
    return _memcpy(dest, src, n);
}

// Address range: 0x100003f40 - 0x100003f4c
int64_t * function_100003f40(int64_t * s, int32_t c, int32_t n) {
    // 0x100003f40
    return _memset(s, c, n);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(char * format, ...) {
    // 0x100003f4c
    return _printf(format);
}

// Address range: 0x100003f58 - 0x100003f64
char * function_100003f58(char * s) {
    // 0x100003f58
    return _strdup(s);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * s) {
    // 0x100003f64
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9

