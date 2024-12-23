//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_10000393c(int32_t a1, int32_t a2);
int64_t function_100003980(void);
int64_t function_100003a38(void);
int64_t function_100003b3c(void);
int64_t function_100003f28(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
void function_100003f34(int64_t * ptr);
int64_t * function_100003f40(int32_t size);
int32_t function_100003f4c(char * format, ...);
int32_t function_100003f58(void);
void function_100003f64(int32_t seed);
int32_t function_100003f70(int32_t * timer);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memset_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x10000393c - 0x100003980
int64_t function_10000393c(int32_t a1, int32_t a2) {
    // 0x10000393c
    return _rand() % (a2 - a1) + a1;
}

// Address range: 0x100003980 - 0x100003a38
int64_t function_100003980(void) {
    // 0x100003980
    int64_t v1; // 0x100003980
    int32_t v2 = v1; // 0x100003990
    int32_t v3 = v2 - 1; // 0x100003998
    int64_t result; // 0x100003980
    if (v3 == 0 || v3 < 0 != (v2 & -v2) < 0) {
        // 0x100003a2c
        return result;
    }
    int32_t v4 = 1 - v2; // 0x1000039bc
    if (v4 < 0 == (v4 & v3) < 0) {
        // 0x100003a2c
        return result;
    }
    int32_t v5 = 0; // 0x1000039c4
    int64_t result2 = function_10000393c(v5, v2); // 0x1000039d4
    int32_t * v6 = (int32_t *)(4 * (int64_t)v5 + v1); // 0x1000039e4
    int32_t * v7 = (int32_t *)((0x100000000 * result2 >> 30) + v1); // 0x1000039f4
    *v6 = *v7;
    *v7 = *v6;
    v5++;
    int32_t v8 = v5 - v3; // 0x1000039bc
    while (v8 < 0 != ((v8 ^ v5) & (v5 ^ v3)) < 0) {
        // 0x1000039cc
        result2 = function_10000393c(v5, v2);
        v6 = (int32_t *)(4 * (int64_t)v5 + v1);
        v7 = (int32_t *)((0x100000000 * result2 >> 30) + v1);
        *v6 = *v7;
        *v7 = *v6;
        v5++;
        v8 = v5 - v3;
    }
    // 0x100003a2c
    return result2;
}

// Address range: 0x100003a38 - 0x100003b3c
int64_t function_100003a38(void) {
    // 0x100003a38
    int64_t v1; // 0x100003a38
    int32_t v2 = v1; // 0x100003a48
    int32_t v3 = -v2;
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003b24
        return _printf("\n");
    }
    int32_t v4 = 0; // 0x100003a64
    _printf("[");
    int32_t v5 = 0; // 0x100003af8
    if (v5 >= 1) {
        // 0x100003aac
        _printf(", ");
    }
    // 0x100003abc
    _printf("%d", v1);
    v5++;
    while (v5 - v2 < 0 != ((v5 - v2 ^ v5) & (v5 ^ v2)) < 0) {
        // 0x100003a98
        if (v5 >= 1) {
            // 0x100003aac
            _printf(", ");
        }
        // 0x100003abc
        _printf("%d", v1);
        v5++;
    }
    // 0x100003b04
    _printf("]\n");
    v4++;
    while (v4 - v2 < 0 != ((v4 - v2 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003a98
        _printf("[");
        v5 = 0;
        if (v5 >= 1) {
            // 0x100003aac
            _printf(", ");
        }
        // 0x100003abc
        _printf("%d", v1);
        v5++;
        while (v5 - v2 < 0 != ((v5 - v2 ^ v5) & (v5 ^ v2)) < 0) {
            // 0x100003a98
            if (v5 >= 1) {
                // 0x100003aac
                _printf(", ");
            }
            // 0x100003abc
            _printf("%d", v1);
            v5++;
        }
        // 0x100003b04
        _printf("]\n");
        v4++;
    }
    // 0x100003b24
    return _printf("\n");
}

// Address range: 0x100003b3c - 0x100003ed8
int64_t function_100003b3c(void) {
    // 0x100003b3c
    int64_t v1; // 0x100003b3c
    int32_t v2 = v1; // 0x100003b48
    if (v2 < 1) {
        // 0x100003ecc
        return _printf("[]\n");
    }
    int32_t v3 = 4 * v2;
    int64_t * v4 = _malloc(v3 * v2); // 0x100003b88
    if (v4 == NULL) {
        // 0x100003ecc
        return _printf("Failed to allocate memory.");
    }
    int64_t v5 = (int64_t)v4; // 0x100003b88
    int32_t v6 = -v2;
    int32_t v7 = 0; // 0x100003bcc
    if (v6 < 0 != (v6 & v2) < 0) {
        int32_t v8 = v7 * v2; // 0x100003c04
        int32_t v9 = 0;
        *(int32_t *)((int64_t)(4 * (v9 + v8)) + v5) = v9;
        int32_t v10 = v9 + 1; // 0x100003c1c
        while (v10 - v2 < 0 != ((v10 - v2 ^ v10) & (v10 ^ v2)) < 0) {
            // 0x100003bf4
            v9 = v10;
            *(int32_t *)((int64_t)(4 * (v9 + v8)) + v5) = v9;
            v10 = v9 + 1;
        }
        // 0x100003c2c
        v7++;
        while (v7 - v2 < 0 != ((v7 - v2 ^ v7) & (v7 ^ v2)) < 0) {
            // 0x100003bf4
            v8 = v7 * v2;
            v9 = 0;
            *(int32_t *)((int64_t)(4 * (v9 + v8)) + v5) = v9;
            v10 = v9 + 1;
            while (v10 - v2 < 0 != ((v10 - v2 ^ v10) & (v10 ^ v2)) < 0) {
                // 0x100003bf4
                v9 = v10;
                *(int32_t *)((int64_t)(4 * (v9 + v8)) + v5) = v9;
                v10 = v9 + 1;
            }
            // 0x100003c2c
            v7++;
        }
    }
    // 0x100003c3c
    function_100003980();
    int32_t v11 = v2 - 1; // 0x100003c5c
    int32_t v12 = 2 - v2; // 0x100003c60
    int32_t v13 = 1; // 0x100003c68
    if (v12 < 0 != (v12 & v11) < 0) {
        while (true) {
            int32_t v14 = v13;
            int32_t v15 = -v14;
            int32_t v16 = v14 * v2;
            function_100003980();
            if (v15 < 0 != (v14 & v15) < 0) {
                while (true) {
                    int32_t v17 = 0; // 0x100003d48
                    while (true) {
                        int32_t v18 = v17;
                        if (v6 < 0 != (v6 & v2) < 0) {
                            int32_t v19 = v18 * v2; // 0x100003cec
                            int32_t v20 = 0;
                            int32_t v21 = *(int32_t *)((int64_t)(4 * (v20 + v16)) + v5); // 0x100003d14
                            if (*(int32_t *)((int64_t)(4 * (v20 + v19)) + v5) == v21) {
                                // break (via goto) -> 0x100003c84
                                goto lab_0x100003c84;
                            }
                            int32_t v22 = v20 + 1; // 0x100003d34
                            while (v22 - v2 < 0 != ((v22 - v2 ^ v22) & (v22 ^ v2)) < 0) {
                                // 0x100003ce0
                                v20 = v22;
                                v21 = *(int32_t *)((int64_t)(4 * (v20 + v16)) + v5);
                                if (*(int32_t *)((int64_t)(4 * (v20 + v19)) + v5) == v21) {
                                    // break (via goto) -> 0x100003c84
                                    goto lab_0x100003c84;
                                }
                                // 0x100003cc8
                                v22 = v20 + 1;
                            }
                        }
                        // 0x100003d44
                        v17 = v18 + 1;
                        int32_t v23 = v17 - v14; // 0x100003cb0
                        if (v23 < 0 == ((v23 ^ v17) & (v17 ^ v14)) < 0) {
                            // break (via goto) -> 0x100003d68
                            goto lab_0x100003d68;
                        }
                    }
                  lab_0x100003c84:
                    // 0x100003c84
                    function_100003980();
                }
            }
          lab_0x100003d68:
            // 0x100003d68
            v13 = v14 + 1;
            int32_t v24 = v13 - v11; // 0x100003c60
            if (v24 < 0 == ((v24 ^ v13) & (v13 ^ v11)) < 0) {
                // break -> 0x100003d78
                break;
            }
        }
    }
    int64_t * v25 = _malloc(v3); // 0x100003d80
    if (v6 < 0 != (v6 & v2) < 0) {
        int64_t v26 = (int64_t)v25; // 0x100003d80
        int32_t v27 = 1 - v2;
        int32_t v28 = v11 * v2;
        int32_t v29 = 0; // 0x100003ea0
        while (true) {
            int32_t v30 = v29;
            ___memset_chk(v26, 0, 0x100000000 * v1 >> 30, -1);
            int32_t v31 = 0; // 0x100003ddc
            if (v27 < 0 != (v27 & v11) < 0) {
                int32_t v32 = *(int32_t *)((int64_t)(4 * (v31 * v2 + v30)) + v5); // 0x100003e00
                *(int32_t *)(4 * (int64_t)v32 + v26) = 1;
                int32_t v33 = v31 + 1; // 0x100003e14
                int32_t v34 = v33 - v11; // 0x100003dd4
                v31 = v33;
                while (v34 < 0 != ((v34 ^ v33) & (v33 ^ v11)) < 0) {
                    // 0x100003de4
                    v32 = *(int32_t *)((int64_t)(4 * (v31 * v2 + v30)) + v5);
                    *(int32_t *)(4 * (int64_t)v32 + v26) = 1;
                    v33 = v31 + 1;
                    v34 = v33 - v11;
                    v31 = v33;
                }
            }
            int32_t v35 = 0;
            while (*(int32_t *)(4 * (int64_t)v35 + v26) != 0) {
                int32_t v36 = v35 + 1; // 0x100003e8c
                int32_t v37 = v36 - v2; // 0x100003e30
                if (v37 < 0 == ((v37 ^ v36) & (v36 ^ v2)) < 0) {
                    goto lab_0x100003e9c;
                }
                v35 = v36;
            }
            // 0x100003e5c
            *(int32_t *)((int64_t)(4 * (v30 + v28)) + v5) = v35;
          lab_0x100003e9c:
            // 0x100003e9c
            v29 = v30 + 1;
            int32_t v38 = v29 - v2; // 0x100003d98
            if (v38 < 0 == ((v38 ^ v29) & (v29 ^ v2)) < 0) {
                // break -> 0x100003eac
                break;
            }
        }
    }
    // 0x100003eac
    _free(v25);
    function_100003a38();
    _free(v4);
    // 0x100003ecc
    return &g1;
}

// Address range: 0x100003ed8 - 0x100003f28
int64_t entry_point(void) {
    // 0x100003ed8
    _srand(_time(NULL));
    function_100003b3c();
    function_100003b3c();
    function_100003b3c();
    return 0;
}

// Address range: 0x100003f28 - 0x100003f34
int64_t function_100003f28(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003f28
    return ___memset_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f34 - 0x100003f40
void function_100003f34(int64_t * ptr) {
    // 0x100003f34
    _free(ptr);
}

// Address range: 0x100003f40 - 0x100003f4c
int64_t * function_100003f40(int32_t size) {
    // 0x100003f40
    return _malloc(size);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(char * format, ...) {
    // 0x100003f4c
    return _printf(format);
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(void) {
    // 0x100003f58
    return _rand();
}

// Address range: 0x100003f64 - 0x100003f70
void function_100003f64(int32_t seed) {
    // 0x100003f64
    _srand(seed);
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(int32_t * timer) {
    // 0x100003f70
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12

