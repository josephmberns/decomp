//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003860(void);
int64_t function_1000039ac(void);
int64_t function_100003af8(void);
int64_t * function_100003f24(int32_t nmemb, int32_t size);
int32_t function_100003f30(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t * _calloc(int32_t a1, int32_t a2);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003860 - 0x1000039ac
int64_t function_100003860(void) {
    // 0x100003860
    int64_t result; // 0x100003860
    int32_t v1 = result; // 0x100003868
    int32_t v2 = -v1;
    if (v2 < 0 == (v2 & v1) < 0) {
        // 0x1000039a4
        return result;
    }
    int32_t v3 = 0;
    int64_t * v4 = (int64_t *)(8 * (int64_t)v3 + result);
    int64_t * v5 = (int64_t *)(result + (int64_t)(8 * v3 - 8));
    int32_t v6 = 0;
    int32_t v7 = v3 - v6; // 0x1000038b4
    int64_t v8; // 0x100003934
    int32_t v9; // 0x100003940
    int64_t v10; // 0x100003958
    if (v7 < 0 == ((v7 ^ v3) & (v6 ^ v3)) < 0) {
        if (v3 == v6 || v6 == 0) {
            // 0x10000390c
            *(int32_t *)(*v4 + 4 * (int64_t)v6) = 1;
        } else {
            // 0x100003928
            v8 = *v5;
            v9 = *(int32_t *)(v8 + (int64_t)(4 * v6 - 4));
            v10 = 4 * (int64_t)v6;
            *(int32_t *)(*v4 + v10) = *(int32_t *)(v8 + v10) + v9;
        }
    } else {
        // 0x1000038c4
        *(int32_t *)(*v4 + 4 * (int64_t)v6) = 0;
    }
    int32_t v11 = v6 + 1; // 0x100003984
    while (v11 - v1 < 0 != ((v11 - v1 ^ v11) & (v11 ^ v1)) < 0) {
        // 0x1000038ac
        v6 = v11;
        v7 = v3 - v6;
        if (v7 < 0 == ((v7 ^ v3) & (v6 ^ v3)) < 0) {
            if (v3 == v6 || v6 == 0) {
                // 0x10000390c
                *(int32_t *)(*v4 + 4 * (int64_t)v6) = 1;
            } else {
                // 0x100003928
                v8 = *v5;
                v9 = *(int32_t *)(v8 + (int64_t)(4 * v6 - 4));
                v10 = 4 * (int64_t)v6;
                *(int32_t *)(*v4 + v10) = *(int32_t *)(v8 + v10) + v9;
            }
        } else {
            // 0x1000038c4
            *(int32_t *)(*v4 + 4 * (int64_t)v6) = 0;
        }
        // 0x100003980
        v11 = v6 + 1;
    }
    int32_t v12 = v3 + 1; // 0x100003998
    while (v12 - v1 < 0 != ((v12 - v1 ^ v12) & (v12 ^ v1)) < 0) {
        // 0x1000038ac
        v3 = v12;
        v4 = (int64_t *)(8 * (int64_t)v3 + result);
        v5 = (int64_t *)(result + (int64_t)(8 * v3 - 8));
        v6 = 0;
        v7 = v3 - v6;
        if (v7 < 0 == ((v7 ^ v3) & (v6 ^ v3)) < 0) {
            if (v3 == v6 || v6 == 0) {
                // 0x10000390c
                *(int32_t *)(*v4 + 4 * (int64_t)v6) = 1;
            } else {
                // 0x100003928
                v8 = *v5;
                v9 = *(int32_t *)(v8 + (int64_t)(4 * v6 - 4));
                v10 = 4 * (int64_t)v6;
                *(int32_t *)(*v4 + v10) = *(int32_t *)(v8 + v10) + v9;
            }
        } else {
            // 0x1000038c4
            *(int32_t *)(*v4 + 4 * (int64_t)v6) = 0;
        }
        // 0x100003980
        v11 = v6 + 1;
        while (v11 - v1 < 0 != ((v11 - v1 ^ v11) & (v11 ^ v1)) < 0) {
            // 0x1000038ac
            v6 = v11;
            v7 = v3 - v6;
            if (v7 < 0 == ((v7 ^ v3) & (v6 ^ v3)) < 0) {
                if (v3 == v6 || v6 == 0) {
                    // 0x10000390c
                    *(int32_t *)(*v4 + 4 * (int64_t)v6) = 1;
                } else {
                    // 0x100003928
                    v8 = *v5;
                    v9 = *(int32_t *)(v8 + (int64_t)(4 * v6 - 4));
                    v10 = 4 * (int64_t)v6;
                    *(int32_t *)(*v4 + v10) = *(int32_t *)(v8 + v10) + v9;
                }
            } else {
                // 0x1000038c4
                *(int32_t *)(*v4 + 4 * (int64_t)v6) = 0;
            }
            // 0x100003980
            v11 = v6 + 1;
        }
        // 0x100003994
        v12 = v3 + 1;
    }
    // 0x1000039a4
    return result;
}

// Address range: 0x1000039ac - 0x100003af8
int64_t function_1000039ac(void) {
    // 0x1000039ac
    int64_t result; // 0x1000039ac
    int32_t v1 = result; // 0x1000039b4
    int32_t v2 = -v1;
    if (v2 < 0 == (v2 & v1) < 0) {
        // 0x100003af0
        return result;
    }
    int32_t v3 = 0;
    int64_t * v4 = (int64_t *)(8 * (int64_t)v3 + result);
    int64_t * v5 = (int64_t *)(result + (int64_t)(8 * v3 - 8));
    int32_t v6 = 0;
    int32_t v7 = v3 - v6; // 0x100003a00
    int64_t v8; // 0x100003a8c
    int32_t v9; // 0x100003a8c
    int64_t v10; // 0x100003a98
    int32_t v11; // 0x100003aa4
    if (v7 == 0 || v7 < 0 != ((v7 ^ v3) & (v6 ^ v3)) < 0) {
        if (v3 == 0 || v3 == v6) {
            // 0x100003a58
            *(int32_t *)(*v4 + 4 * (int64_t)v6) = 1;
        } else {
            // 0x100003a74
            v8 = 4 * v6 - 4;
            v9 = *(int32_t *)(*v5 + v8);
            v10 = *v4;
            v11 = *(int32_t *)(v10 + v8);
            *(int32_t *)(v10 + 4 * (int64_t)v6) = v11 + v9;
        }
    } else {
        // 0x100003a10
        *(int32_t *)(*v4 + 4 * (int64_t)v6) = 0;
    }
    int32_t v12 = v6 + 1; // 0x100003ad0
    while (v12 - v1 < 0 != ((v12 - v1 ^ v12) & (v12 ^ v1)) < 0) {
        // 0x1000039f8
        v6 = v12;
        v7 = v3 - v6;
        if (v7 == 0 || v7 < 0 != ((v7 ^ v3) & (v6 ^ v3)) < 0) {
            if (v3 == 0 || v3 == v6) {
                // 0x100003a58
                *(int32_t *)(*v4 + 4 * (int64_t)v6) = 1;
            } else {
                // 0x100003a74
                v8 = 4 * v6 - 4;
                v9 = *(int32_t *)(*v5 + v8);
                v10 = *v4;
                v11 = *(int32_t *)(v10 + v8);
                *(int32_t *)(v10 + 4 * (int64_t)v6) = v11 + v9;
            }
        } else {
            // 0x100003a10
            *(int32_t *)(*v4 + 4 * (int64_t)v6) = 0;
        }
        // 0x100003acc
        v12 = v6 + 1;
    }
    int32_t v13 = v3 + 1; // 0x100003ae4
    while (v13 - v1 < 0 != ((v13 - v1 ^ v13) & (v13 ^ v1)) < 0) {
        // 0x1000039f8
        v3 = v13;
        v4 = (int64_t *)(8 * (int64_t)v3 + result);
        v5 = (int64_t *)(result + (int64_t)(8 * v3 - 8));
        v6 = 0;
        v7 = v3 - v6;
        if (v7 == 0 || v7 < 0 != ((v7 ^ v3) & (v6 ^ v3)) < 0) {
            if (v3 == 0 || v3 == v6) {
                // 0x100003a58
                *(int32_t *)(*v4 + 4 * (int64_t)v6) = 1;
            } else {
                // 0x100003a74
                v8 = 4 * v6 - 4;
                v9 = *(int32_t *)(*v5 + v8);
                v10 = *v4;
                v11 = *(int32_t *)(v10 + v8);
                *(int32_t *)(v10 + 4 * (int64_t)v6) = v11 + v9;
            }
        } else {
            // 0x100003a10
            *(int32_t *)(*v4 + 4 * (int64_t)v6) = 0;
        }
        // 0x100003acc
        v12 = v6 + 1;
        while (v12 - v1 < 0 != ((v12 - v1 ^ v12) & (v12 ^ v1)) < 0) {
            // 0x1000039f8
            v6 = v12;
            v7 = v3 - v6;
            if (v7 == 0 || v7 < 0 != ((v7 ^ v3) & (v6 ^ v3)) < 0) {
                if (v3 == 0 || v3 == v6) {
                    // 0x100003a58
                    *(int32_t *)(*v4 + 4 * (int64_t)v6) = 1;
                } else {
                    // 0x100003a74
                    v8 = 4 * v6 - 4;
                    v9 = *(int32_t *)(*v5 + v8);
                    v10 = *v4;
                    v11 = *(int32_t *)(v10 + v8);
                    *(int32_t *)(v10 + 4 * (int64_t)v6) = v11 + v9;
                }
            } else {
                // 0x100003a10
                *(int32_t *)(*v4 + 4 * (int64_t)v6) = 0;
            }
            // 0x100003acc
            v12 = v6 + 1;
        }
        // 0x100003ae0
        v13 = v3 + 1;
    }
    // 0x100003af0
    return result;
}

// Address range: 0x100003af8 - 0x100003c04
int64_t function_100003af8(void) {
    // 0x100003af8
    int64_t result; // 0x100003af8
    int32_t v1 = result; // 0x100003b00
    int32_t v2 = -v1;
    if (v2 < 0 == (v2 & v1) < 0) {
        // 0x100003bfc
        return result;
    }
    int32_t v3 = 0; // 0x100003b1c
    int64_t * v4 = (int64_t *)(result + (int64_t)(8 * v3 - 8));
    int64_t * v5 = (int64_t *)(8 * (int64_t)v3 + result);
    int32_t v6 = 0;
    int64_t v7; // 0x100003b9c
    int64_t v8; // 0x100003ba8
    int32_t v9; // 0x100003bb4
    if (v3 == 0 || v6 == 0) {
        // 0x100003b6c
        *(int32_t *)(*v5 + 4 * (int64_t)v6) = 1;
    } else {
        // 0x100003b88
        v7 = 4 * (int64_t)v6;
        v8 = *v5;
        v9 = *(int32_t *)(v8 + (int64_t)(4 * v6 - 4));
        *(int32_t *)(v8 + v7) = v9 + *(int32_t *)(*v4 + v7);
    }
    int32_t v10 = v6 + 1; // 0x100003bdc
    while (v10 - v1 < 0 != ((v10 - v1 ^ v10) & (v10 ^ v1)) < 0) {
        // 0x100003b44
        v6 = v10;
        if (v3 == 0 || v6 == 0) {
            // 0x100003b6c
            *(int32_t *)(*v5 + 4 * (int64_t)v6) = 1;
        } else {
            // 0x100003b88
            v7 = 4 * (int64_t)v6;
            v8 = *v5;
            v9 = *(int32_t *)(v8 + (int64_t)(4 * v6 - 4));
            *(int32_t *)(v8 + v7) = v9 + *(int32_t *)(*v4 + v7);
        }
        // 0x100003bd8
        v10 = v6 + 1;
    }
    // 0x100003bec
    v3++;
    while (v3 - v1 < 0 != ((v3 - v1 ^ v3) & (v3 ^ v1)) < 0) {
        // 0x100003b44
        v4 = (int64_t *)(result + (int64_t)(8 * v3 - 8));
        v5 = (int64_t *)(8 * (int64_t)v3 + result);
        v6 = 0;
        if (v3 == 0 || v6 == 0) {
            // 0x100003b6c
            *(int32_t *)(*v5 + 4 * (int64_t)v6) = 1;
        } else {
            // 0x100003b88
            v7 = 4 * (int64_t)v6;
            v8 = *v5;
            v9 = *(int32_t *)(v8 + (int64_t)(4 * v6 - 4));
            *(int32_t *)(v8 + v7) = v9 + *(int32_t *)(*v4 + v7);
        }
        // 0x100003bd8
        v10 = v6 + 1;
        while (v10 - v1 < 0 != ((v10 - v1 ^ v10) & (v10 ^ v1)) < 0) {
            // 0x100003b44
            v6 = v10;
            if (v3 == 0 || v6 == 0) {
                // 0x100003b6c
                *(int32_t *)(*v5 + 4 * (int64_t)v6) = 1;
            } else {
                // 0x100003b88
                v7 = 4 * (int64_t)v6;
                v8 = *v5;
                v9 = *(int32_t *)(v8 + (int64_t)(4 * v6 - 4));
                *(int32_t *)(v8 + v7) = v9 + *(int32_t *)(*v4 + v7);
            }
            // 0x100003bd8
            v10 = v6 + 1;
        }
        // 0x100003bec
        v3++;
    }
    // 0x100003bfc
    return result;
}

// Address range: 0x100003c04 - 0x100003f24
int64_t entry_point(void) {
    int64_t v1 = (int64_t)_calloc(5, 8); // 0x100003c2c
    for (int64_t i = 0; i < 5; i++) {
        // 0x100003c54
        *(int64_t *)(8 * i + v1) = (int64_t)_calloc(5, 4);
    }
    // 0x100003c80
    _printf("=== Pascal upper matrix ===\n");
    function_1000039ac();
    int64_t v2; // 0x100003c04
    char v3 = v2;
    for (int32_t i = 0; i < 5; i++) {
        for (int32_t j = 0; j < 5; j++) {
            // 0x100003cd8
            _printf("%4d%c", 5, v3);
        }
    }
    // 0x100003d5c
    _printf("=== Pascal lower matrix ===\n");
    function_100003860();
    for (int32_t i = 0; i < 5; i++) {
        for (int32_t j = 0; j < 5; j++) {
            // 0x100003db4
            _printf("%4d%c", 5, v3);
        }
    }
    // 0x100003e38
    _printf("=== Pascal symmetric matrix ===\n");
    function_100003af8();
    for (int32_t i = 0; i < 5; i++) {
        for (int32_t j = 0; j < 5; j++) {
            // 0x100003e90
            _printf("%4d%c", 5, v3);
        }
    }
    // 0x100003f14
    return 0;
}

// Address range: 0x100003f24 - 0x100003f30
int64_t * function_100003f24(int32_t nmemb, int32_t size) {
    // 0x100003f24
    return _calloc(nmemb, size);
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(char * format, ...) {
    // 0x100003f30
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

