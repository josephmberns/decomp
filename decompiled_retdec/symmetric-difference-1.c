//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003bd4(void);
int64_t function_100003cdc(void);
int64_t function_100003d8c(void);
int64_t function_100003e50(void);
int32_t function_100003f54(char * format, ...);
int32_t function_100003f60(char * s1, char * s2);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _strcmp(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003bd4 - 0x100003cdc
int64_t function_100003bd4(void) {
    // 0x100003bd4
    int64_t v1; // 0x100003bd4
    int32_t v2 = v1; // 0x100003be4
    int32_t v3 = -v2; // 0x100003bf8
    int64_t result; // 0x100003bd4
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003cd0
        return result;
    }
    int32_t v4 = 1 - v2;
    if (v4 < 0 == (v4 & v2) < 0) {
        // 0x100003cd0
        return result;
    }
    int32_t v5 = 1;
    int64_t * v6 = (int64_t *)v1;
    int32_t v7 = v5;
    int64_t * v8 = (int64_t *)(8 * (int64_t)v7 + v1); // 0x100003c38
    int64_t v9 = *v8; // 0x100003c38
    int64_t v10; // 0x100003bd4
    int64_t v11 = v10; // 0x100003c44
    int64_t v12; // 0x100003c54
    int32_t v13; // 0x100003c80
    if (v9 != 0) {
        // 0x100003c4c
        v12 = *v6;
        v11 = v10;
        if (v12 != 0) {
            // 0x100003c68
            v13 = _strcmp((char *)v12, (char *)v9);
            v11 = v13;
            if (v13 == 0) {
                // 0x100003c94
                *v8 = 0;
                v11 = 0;
            }
        }
    }
    int64_t result2 = v11;
    v7++;
    int32_t v14 = v7 - v2; // 0x100003c20
    int64_t v15; // 0x100003bd4
    while (v14 < 0 != ((v14 ^ v7) & (v7 ^ v2)) < 0) {
        // 0x100003c30
        v15 = result2;
        v8 = (int64_t *)(8 * (int64_t)v7 + v1);
        v9 = *v8;
        v11 = v15;
        if (v9 != 0) {
            // 0x100003c4c
            v12 = *v6;
            v11 = v15;
            if (v12 != 0) {
                // 0x100003c68
                v13 = _strcmp((char *)v12, (char *)v9);
                v11 = v13;
                if (v13 == 0) {
                    // 0x100003c94
                    *v8 = 0;
                    v11 = 0;
                }
            }
        }
        // 0x100003cac
        result2 = v11;
        v7++;
        v14 = v7 - v2;
    }
    int32_t v16 = v5 + 1;
    int32_t v17 = v16 - v2;
    while (v17 < 0 != ((v17 ^ v16) & (v16 ^ v2)) < 0) {
        int32_t v18 = v5;
        v5 = v16;
        v6 = (int64_t *)(8 * (int64_t)v18 + v1);
        v7 = v5;
        v15 = result2;
        v8 = (int64_t *)(8 * (int64_t)v7 + v1);
        v9 = *v8;
        v11 = v15;
        if (v9 != 0) {
            // 0x100003c4c
            v12 = *v6;
            v11 = v15;
            if (v12 != 0) {
                // 0x100003c68
                v13 = _strcmp((char *)v12, (char *)v9);
                v11 = v13;
                if (v13 == 0) {
                    // 0x100003c94
                    *v8 = 0;
                    v11 = 0;
                }
            }
        }
        // 0x100003cac
        result2 = v11;
        v7++;
        v14 = v7 - v2;
        while (v14 < 0 != ((v14 ^ v7) & (v7 ^ v2)) < 0) {
            // 0x100003c30
            v15 = result2;
            v8 = (int64_t *)(8 * (int64_t)v7 + v1);
            v9 = *v8;
            v11 = v15;
            if (v9 != 0) {
                // 0x100003c4c
                v12 = *v6;
                v11 = v15;
                if (v12 != 0) {
                    // 0x100003c68
                    v13 = _strcmp((char *)v12, (char *)v9);
                    v11 = v13;
                    if (v13 == 0) {
                        // 0x100003c94
                        *v8 = 0;
                        v11 = 0;
                    }
                }
            }
            // 0x100003cac
            result2 = v11;
            v7++;
            v14 = v7 - v2;
        }
        // 0x100003c18
        v16 = v5 + 1;
        v17 = v16 - v2;
    }
    // 0x100003cd0
    return result2;
}

// Address range: 0x100003cdc - 0x100003d8c
int64_t function_100003cdc(void) {
    // 0x100003cdc
    int64_t v1; // 0x100003cdc
    int32_t v2 = v1; // 0x100003cec
    int32_t v3 = -v2; // 0x100003d04
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003d7c
        return 0;
    }
    int32_t v4 = 0; // 0x100003d0c
    int64_t v5 = *(int64_t *)(8 * (int64_t)v4 + v1); // 0x100003d1c
    if (v5 != 0) {
        // 0x100003d30
        if (_strcmp((char *)v5, (char *)v1) == 0) {
            // break -> 0x100003d7c
            break;
        }
    }
    // 0x100003d64
    v4++;
    int32_t v6 = v4 - v2; // 0x100003d04
    int64_t result = 0; // 0x100003d0c
    while (v6 < 0 != ((v6 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003d14
        v5 = *(int64_t *)(8 * (int64_t)v4 + v1);
        if (v5 != 0) {
            // 0x100003d30
            result = 1;
            if (_strcmp((char *)v5, (char *)v1) == 0) {
                // break -> 0x100003d7c
                break;
            }
        }
        // 0x100003d64
        v4++;
        v6 = v4 - v2;
        result = 0;
    }
    // 0x100003d7c
    return result;
}

// Address range: 0x100003d8c - 0x100003e50
int64_t function_100003d8c(void) {
    // 0x100003d8c
    int64_t v1; // 0x100003d8c
    int32_t v2 = v1; // 0x100003d9c
    int32_t v3 = -v2; // 0x100003db8
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003e44
        int64_t result; // 0x100003d8c
        return result;
    }
    int32_t v4 = 0; // 0x100003e38
    int64_t v5; // 0x100003d8c
    int64_t result2 = v5; // 0x100003ddc
    int64_t v6; // 0x100003df8
    if (*(int64_t *)(8 * (int64_t)v4 + v1) != 0) {
        // 0x100003de4
        v6 = function_100003cdc();
        result2 = v6;
        if ((int32_t)v6 == 0) {
            // 0x100003e0c
            result2 = _printf("  %s\n", (char *)(v1 & 0xffffffff));
        }
    }
    // 0x100003e34
    v4++;
    int32_t v7 = v4 - v2; // 0x100003db8
    while (v7 < 0 != ((v7 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003dc8
        if (*(int64_t *)(8 * (int64_t)v4 + v1) != 0) {
            // 0x100003de4
            v6 = function_100003cdc();
            result2 = v6;
            if ((int32_t)v6 == 0) {
                // 0x100003e0c
                result2 = _printf("  %s\n", (char *)(v1 & 0xffffffff));
            }
        }
        // 0x100003e34
        v4++;
        v7 = v4 - v2;
    }
    // 0x100003e44
    return result2;
}

// Address range: 0x100003e50 - 0x100003ea0
int64_t function_100003e50(void) {
    // 0x100003e50
    function_100003d8c();
    return function_100003d8c();
}

// Address range: 0x100003ea0 - 0x100003f54
int64_t entry_point(void) {
    // 0x100003ea0
    function_100003bd4();
    function_100003bd4();
    _printf("A \\ B:\n");
    function_100003d8c();
    _printf("\nB \\ A:\n");
    function_100003d8c();
    _printf("\nA ^ B:\n");
    function_100003e50();
    return 0;
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * format, ...) {
    // 0x100003f54
    return _printf(format);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(char * s1, char * s2) {
    // 0x100003f60
    return _strcmp(s1, s2);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

