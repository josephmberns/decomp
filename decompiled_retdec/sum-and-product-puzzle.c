//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000033d4(int32_t a1, int32_t a2);
int64_t function_10000342c(void);
int64_t function_100003490(void);
int64_t function_1000034ac(void);
int64_t function_10000355c(void);
int64_t function_100003664(void);
int64_t function_1000036f0(void);
int64_t function_1000037d4(void);
int64_t function_1000038bc(void);
int64_t function_10000398c(void);
int64_t function_100003a48(void);
int64_t function_100003b04(void);
int64_t function_100003c44(void);
int64_t function_100003d74(void);
int64_t * function_100003f2c(int32_t nmemb, int32_t size);
void function_100003f38(int64_t * ptr);
int64_t * function_100003f44(int32_t size);
int32_t function_100003f50(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x1000033d4 - 0x10000342c
int64_t function_1000033d4(int32_t a1, int32_t a2) {
    int64_t * v1 = _malloc(24); // 0x1000033ec
    *(int32_t *)v1 = a1;
    int64_t result = (int64_t)v1; // 0x100003404
    *(int32_t *)(result + 4) = a2;
    *(int64_t *)(result + 16) = 0;
    *(int64_t *)(result + 8) = 0;
    return result;
}

// Address range: 0x10000342c - 0x100003490
int64_t function_10000342c(void) {
    int64_t result = 0; // 0x100003448
    int64_t v1; // 0x10000342c
    if (v1 != 0) {
        // 0x100003454
        *(int64_t *)(v1 + 8) = 0;
        *(int64_t *)(v1 + 16) = 0;
        int64_t * v2 = (int64_t *)v1; // 0x100003474
        _free(v2);
        *v2 = 0;
        result = &g1;
    }
    // 0x100003484
    return result;
}

// Address range: 0x100003490 - 0x1000034ac
int64_t function_100003490(void) {
    // 0x100003490
    return 0;
}

// Address range: 0x1000034ac - 0x10000355c
int64_t function_1000034ac(void) {
    // 0x1000034ac
    int64_t v1; // 0x1000034ac
    if (v1 == 0) {
        // 0x100003550
        return 0;
    }
    int64_t v2 = function_1000033d4((int32_t)v1, (int32_t)v1); // 0x1000034e4
    int64_t result; // 0x1000034ac
    if (v2 == 0) {
        // 0x100003504
        *(int64_t *)v1 = 0;
        *(int64_t *)(v1 + 8) = 0;
        result = 0;
    } else {
        int64_t * v3 = (int64_t *)(v1 + 8); // 0x100003524
        *(int64_t *)(v2 + 8) = *v3;
        *(int64_t *)(*v3 + 16) = v2;
        *v3 = v2;
        result = v2;
    }
    // 0x100003550
    return result;
}

// Address range: 0x10000355c - 0x100003664
int64_t function_10000355c(void) {
    // 0x10000355c
    int64_t v1; // 0x10000355c
    if (v1 == 0 || v1 == 0) {
        // 0x100003658
        int64_t result; // 0x10000355c
        return result;
    }
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x1000035a0
    int64_t v3 = *v2; // 0x1000035a0
    int64_t * v4 = (int64_t *)(v1 + 16);
    int64_t v5 = *v4;
    if (v3 == 0) {
        if (v5 != 0) {
            // 0x100003628
            *(int64_t *)(v5 + 8) = 0;
            *(int64_t *)v1 = *v4;
        }
        // 0x100003658
        return function_10000342c();
    }
    // 0x1000035b4
    *(int64_t *)(v3 + 16) = v5;
    int64_t v6 = *v4; // 0x1000035cc
    int64_t v7 = *v2;
    if (v6 == 0) {
        // 0x1000035f8
        *(int64_t *)(v1 + 8) = v7;
    } else {
        // 0x1000035e0
        *(int64_t *)(v6 + 8) = v7;
    }
    // 0x100003658
    return function_10000342c();
}

// Address range: 0x100003664 - 0x1000036f0
int64_t function_100003664(void) {
    // 0x100003664
    int64_t v1; // 0x100003664
    if (v1 == 0) {
        // 0x1000036e4
        return 0;
    }
    int64_t v2; // 0x100003664
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x1000036b8
    int64_t result = function_10000342c(); // 0x1000036c0
    while (v3 != 0) {
        // 0x1000036b0
        v3 += 16;
        result = function_10000342c();
    }
    // 0x1000036d0
    *(int64_t *)v1 = 0;
    *(int64_t *)(v1 + 8) = 0;
    // 0x1000036e4
    return result;
}

// Address range: 0x1000036f0 - 0x1000037d4
int64_t function_1000036f0(void) {
    // 0x1000036f0
    int64_t v1; // 0x1000036f0
    if (v1 == 0) {
        // 0x1000037c8
        return 0;
    }
    int32_t result = _printf("[%d, %d] S=%d P=%d\n", v1, v1, v1, v1); // 0x1000037b0
    int64_t v2; // 0x1000036f0
    int64_t v3 = *(int64_t *)(v2 + 16); // 0x1000037bc
    while (v3 != 0) {
        // 0x10000373c
        result = _printf("[%d, %d] S=%d P=%d\n", v1, v1, v1, v1);
        v3 += 16;
    }
    // 0x1000037c8
    return result;
}

// Address range: 0x1000037d4 - 0x1000038bc
int64_t function_1000037d4(void) {
    // 0x1000037d4
    int64_t v1; // 0x1000037d4
    if (v1 == 0) {
        // 0x1000038b0
        return 0;
    }
    int32_t v2 = 0;
    int64_t v3; // 0x1000037d4
    int64_t v4 = *(int64_t *)(v3 + 16); // 0x100003838
    int32_t v5 = v2 + 1; // 0x10000381c
    while (v4 != 0) {
        // 0x100003824
        v2 = v5;
        v4 += 16;
        v5 = v2 + 1;
    }
    int32_t result; // 0x1000037d4
    switch (v2) {
        case -1: {
            // 0x1000038b0
            return _printf("no candidates\n");
        }
        case 0: {
            // 0x10000387c
            result = _printf("one candidate\n");
            // break -> 0x1000038ac
            break;
        }
        default: {
            // 0x10000388c
            result = _printf("%d candidates\n", v1);
            // break -> 0x1000038ac
            break;
        }
    }
    // 0x1000038b0
    return result;
}

// Address range: 0x1000038bc - 0x10000398c
int64_t function_1000038bc(void) {
    // 0x1000038bc
    int64_t v1; // 0x1000038bc
    if (v1 == 0) {
        // 0x100003980
        return 0;
    }
    int32_t v2 = 2; // 0x1000038d8
    int64_t result; // 0x1000038bc
    while (true) {
      lab_0x100003914:;
        int32_t v3 = v2;
        v2 = v3 + 1;
        int32_t v4 = v3 - 97;
        int32_t v5 = v2; // 0x100003920
        int64_t v6; // 0x1000038bc
        int64_t v7 = v6; // 0x100003920
        result = v6;
        if (v4 != 0 && v4 < 0 == (v2 & 96 - v3) < 0) {
            // break -> 0x100003980
            break;
        }
        while (true) {
          lab_0x100003928:;
            int32_t v8 = v5;
            int32_t v9 = v8 + v3; // 0x100003930
            int32_t v10 = v9 - 100; // 0x100003934
            int64_t v11 = v7; // 0x10000393c
            if (v10 == 0 || v10 < 0 != (99 - v9 & v9) < 0) {
                // 0x100003944
                v11 = function_1000034ac();
            }
            // 0x10000395c
            v7 = v11;
            v5 = v8 + 1;
            int32_t v12 = v8 - 97; // 0x100003918
            v6 = v7;
            if (v12 == 0 || v12 < 0 != (v5 & 96 - v8) < 0) {
                goto lab_0x100003928;
            } else {
                goto lab_0x100003914;
            }
        }
    }
    // 0x100003980
    return result;
}

// Address range: 0x10000398c - 0x100003a48
int64_t function_10000398c(void) {
    // 0x10000398c
    int64_t v1; // 0x10000398c
    if (v1 == 0) {
        // 0x100003a3c
        return 0;
    }
    int64_t v2; // 0x10000398c
    int32_t v3 = *(int32_t *)(v2 + 4); // 0x1000039e8
    int64_t v4; // 0x10000398c
    int64_t v5; // 0x100003a14
    int64_t v6; // 0x10000398c
    int64_t result; // 0x10000398c
    if (v3 + *(int32_t *)v2 == (int32_t)v1) {
        // 0x100003a0c
        v5 = function_10000355c();
        result = v5;
        v4 = v5;
    } else {
        // 0x100003a28
        result = v6;
        v4 = *(int64_t *)(v2 + 16);
    }
    // 0x100003a38
    v6 = result;
    while (v4 != 0) {
        int64_t v7 = v4;
        v3 = *(int32_t *)(v7 + 4);
        if (v3 + *(int32_t *)v7 == (int32_t)v1) {
            // 0x100003a0c
            v5 = function_10000355c();
            result = v5;
            v4 = v5;
        } else {
            // 0x100003a28
            result = v6;
            v4 = *(int64_t *)(v7 + 16);
        }
        // 0x100003a38
        v6 = result;
    }
    // 0x100003a3c
    return result;
}

// Address range: 0x100003a48 - 0x100003b04
int64_t function_100003a48(void) {
    // 0x100003a48
    int64_t v1; // 0x100003a48
    if (v1 == 0) {
        // 0x100003af8
        return 0;
    }
    int64_t v2; // 0x100003a48
    int32_t v3 = *(int32_t *)(v2 + 4); // 0x100003aa4
    int64_t v4; // 0x100003a48
    int64_t v5; // 0x100003ad0
    int64_t v6; // 0x100003a48
    int64_t result; // 0x100003a48
    if (v3 * *(int32_t *)v2 == (int32_t)v1) {
        // 0x100003ac8
        v5 = function_10000355c();
        result = v5;
        v4 = v5;
    } else {
        // 0x100003ae4
        result = v6;
        v4 = *(int64_t *)(v2 + 16);
    }
    // 0x100003af4
    v6 = result;
    while (v4 != 0) {
        int64_t v7 = v4;
        v3 = *(int32_t *)(v7 + 4);
        if (v3 * *(int32_t *)v7 == (int32_t)v1) {
            // 0x100003ac8
            v5 = function_10000355c();
            result = v5;
            v4 = v5;
        } else {
            // 0x100003ae4
            result = v6;
            v4 = *(int64_t *)(v7 + 16);
        }
        // 0x100003af4
        v6 = result;
    }
    // 0x100003af8
    return result;
}

// Address range: 0x100003b04 - 0x100003c44
int64_t function_100003b04(void) {
    int64_t * v1 = _calloc(0x186a0, 2); // 0x100003b20
    int64_t v2 = (int64_t)v1; // 0x100003b20
    int32_t * v3 = (int32_t *)v1;
    int32_t * v4 = (int32_t *)v1; // 0x100003b44
    if (v1 == NULL) {
        // 0x100003b90
        v3 = (int32_t *)v1;
        // 0x100003c30
        _free(v1);
        return &g1;
    }
    int32_t v5 = *(int32_t *)((int64_t)v4 + 4); // 0x100003b58
    int16_t * v6 = (int16_t *)(2 * (int64_t)(v5 * *v4) + v2); // 0x100003b70
    *v6 = *v6 + 1;
    int64_t v7 = *(int64_t *)((int64_t)v3 + 16); // 0x100003b84
    v4 = (int32_t *)v7;
    v3 = v4;
    while (v7 != 0) {
        // 0x100003b4c
        v5 = *(int32_t *)((int64_t)v4 + 4);
        v6 = (int16_t *)(2 * (int64_t)(v5 * *v4) + v2);
        *v6 = *v6 + 1;
        v7 = *(int64_t *)((int64_t)v3 + 16);
        v4 = (int32_t *)v7;
        v3 = v4;
    }
    // 0x100003bb4
    v3 = (int32_t *)v1;
    int32_t * v8 = (int32_t *)v1;
    int64_t v9 = (int64_t)v8; // 0x100003bbc
    int32_t v10 = *(int32_t *)(v9 + 4); // 0x100003bc0
    int32_t * v11; // 0x100003b04
    int32_t * v12; // 0x100003c18
    int64_t v13; // 0x100003bd0
    if (*(int16_t *)(2 * (int64_t)(v10 * *v8) + v2) == 1) {
        // 0x100003bf4
        v12 = (int32_t *)function_10000398c();
        v3 = v12;
        v11 = v12;
    } else {
        // 0x100003c20
        v13 = *(int64_t *)(v9 + 16);
        *(int64_t *)&v3 = v13;
        v11 = (int32_t *)v13;
    }
    // 0x100003c2c
    v8 = v11;
    while (v8 != NULL) {
        // 0x100003bb4
        v9 = (int64_t)v8;
        v10 = *(int32_t *)(v9 + 4);
        if (*(int16_t *)(2 * (int64_t)(v10 * *v8) + v2) == 1) {
            // 0x100003bf4
            v12 = (int32_t *)function_10000398c();
            v3 = v12;
            v11 = v12;
        } else {
            // 0x100003c20
            v13 = *(int64_t *)(v9 + 16);
            *(int64_t *)&v3 = v13;
            v11 = (int32_t *)v13;
        }
        // 0x100003c2c
        v8 = v11;
    }
    // 0x100003c30
    _free(v1);
    return &g1;
}

// Address range: 0x100003c44 - 0x100003d74
int64_t function_100003c44(void) {
    int64_t * v1 = _calloc(0x186a0, 2); // 0x100003c60
    int64_t v2 = (int64_t)v1; // 0x100003c60
    int32_t * v3 = (int32_t *)v1;
    int32_t * v4 = (int32_t *)v1; // 0x100003c84
    if (v1 == NULL) {
        // 0x100003cd0
        v3 = (int32_t *)v1;
        // 0x100003d60
        _free(v1);
        return &g1;
    }
    int32_t v5 = *(int32_t *)((int64_t)v4 + 4); // 0x100003c98
    int16_t * v6 = (int16_t *)(2 * (int64_t)(v5 * *v4) + v2); // 0x100003cb0
    *v6 = *v6 + 1;
    int64_t v7 = *(int64_t *)((int64_t)v3 + 16); // 0x100003cc4
    v4 = (int32_t *)v7;
    v3 = v4;
    while (v7 != 0) {
        // 0x100003c8c
        v5 = *(int32_t *)((int64_t)v4 + 4);
        v6 = (int16_t *)(2 * (int64_t)(v5 * *v4) + v2);
        *v6 = *v6 + 1;
        v7 = *(int64_t *)((int64_t)v3 + 16);
        v4 = (int32_t *)v7;
        v3 = v4;
    }
    // 0x100003cf4
    v3 = (int32_t *)v1;
    int32_t * v8 = (int32_t *)v1;
    int64_t v9 = (int64_t)v8; // 0x100003cfc
    int32_t v10 = *(int32_t *)(v9 + 4); // 0x100003d00
    int16_t v11 = *(int16_t *)(2 * (int64_t)(v10 * *v8) + v2); // 0x100003d20
    int32_t v12 = v11; // 0x100003d20
    int32_t * v13; // 0x100003c44
    int64_t v14; // 0x100003d10
    int32_t * v15; // 0x100003d48
    if (v11 == 1 || v11 < 1 != (v12 & -v12) < 0) {
        // 0x100003d50
        v14 = *(int64_t *)(v9 + 16);
        *(int64_t *)&v3 = v14;
        v13 = (int32_t *)v14;
    } else {
        // 0x100003d34
        v15 = (int32_t *)function_100003a48();
        v3 = v15;
        v13 = v15;
    }
    // 0x100003d5c
    v8 = v13;
    while (v8 != NULL) {
        // 0x100003cf4
        v9 = (int64_t)v8;
        v10 = *(int32_t *)(v9 + 4);
        v11 = *(int16_t *)(2 * (int64_t)(v10 * *v8) + v2);
        v12 = v11;
        if (v11 == 1 || v11 < 1 != (v12 & -v12) < 0) {
            // 0x100003d50
            v14 = *(int64_t *)(v9 + 16);
            *(int64_t *)&v3 = v14;
            v13 = (int32_t *)v14;
        } else {
            // 0x100003d34
            v15 = (int32_t *)function_100003a48();
            v3 = v15;
            v13 = v15;
        }
        // 0x100003d5c
        v8 = v13;
    }
    // 0x100003d60
    _free(v1);
    return &g1;
}

// Address range: 0x100003d74 - 0x100003ea0
int64_t function_100003d74(void) {
    int64_t * v1 = _calloc(100, 2); // 0x100003d8c
    int64_t v2 = (int64_t)v1; // 0x100003d8c
    int32_t * v3 = (int32_t *)v1;
    int32_t * v4 = (int32_t *)v1; // 0x100003db0
    if (v1 == NULL) {
        // 0x100003dfc
        v3 = (int32_t *)v1;
        // 0x100003e8c
        _free(v1);
        return &g1;
    }
    int32_t v5 = *(int32_t *)((int64_t)v4 + 4); // 0x100003dc4
    int16_t * v6 = (int16_t *)(2 * (int64_t)(v5 + *v4) + v2); // 0x100003ddc
    *v6 = *v6 + 1;
    int64_t v7 = *(int64_t *)((int64_t)v3 + 16); // 0x100003df0
    v4 = (int32_t *)v7;
    v3 = v4;
    while (v7 != 0) {
        // 0x100003db8
        v5 = *(int32_t *)((int64_t)v4 + 4);
        v6 = (int16_t *)(2 * (int64_t)(v5 + *v4) + v2);
        *v6 = *v6 + 1;
        v7 = *(int64_t *)((int64_t)v3 + 16);
        v4 = (int32_t *)v7;
        v3 = v4;
    }
    // 0x100003e20
    v3 = (int32_t *)v1;
    int32_t * v8 = (int32_t *)v1;
    int64_t v9 = (int64_t)v8; // 0x100003e28
    int32_t v10 = *(int32_t *)(v9 + 4); // 0x100003e2c
    int16_t v11 = *(int16_t *)(2 * (int64_t)(v10 + *v8) + v2); // 0x100003e4c
    int32_t v12 = v11; // 0x100003e4c
    int32_t * v13; // 0x100003d74
    int64_t v14; // 0x100003e3c
    int32_t * v15; // 0x100003e74
    if (v11 == 1 || v11 < 1 != (v12 & -v12) < 0) {
        // 0x100003e7c
        v14 = *(int64_t *)(v9 + 16);
        *(int64_t *)&v3 = v14;
        v13 = (int32_t *)v14;
    } else {
        // 0x100003e60
        v15 = (int32_t *)function_10000398c();
        v3 = v15;
        v13 = v15;
    }
    // 0x100003e88
    v8 = v13;
    while (v8 != NULL) {
        // 0x100003e20
        v9 = (int64_t)v8;
        v10 = *(int32_t *)(v9 + 4);
        v11 = *(int16_t *)(2 * (int64_t)(v10 + *v8) + v2);
        v12 = v11;
        if (v11 == 1 || v11 < 1 != (v12 & -v12) < 0) {
            // 0x100003e7c
            v14 = *(int64_t *)(v9 + 16);
            *(int64_t *)&v3 = v14;
            v13 = (int32_t *)v14;
        } else {
            // 0x100003e60
            v15 = (int32_t *)function_10000398c();
            v3 = v15;
            v13 = v15;
        }
        // 0x100003e88
        v8 = v13;
    }
    // 0x100003e8c
    _free(v1);
    return &g1;
}

// Address range: 0x100003ea0 - 0x100003f2c
int64_t entry_point(void) {
    // 0x100003ea0
    function_100003490();
    function_1000038bc();
    function_1000037d4();
    function_100003b04();
    function_1000037d4();
    function_100003c44();
    function_1000037d4();
    function_100003d74();
    function_1000037d4();
    function_1000036f0();
    function_100003664();
    return 0;
}

// Address range: 0x100003f2c - 0x100003f38
int64_t * function_100003f2c(int32_t nmemb, int32_t size) {
    // 0x100003f2c
    return _calloc(nmemb, size);
}

// Address range: 0x100003f38 - 0x100003f44
void function_100003f38(int64_t * ptr) {
    // 0x100003f38
    _free(ptr);
}

// Address range: 0x100003f44 - 0x100003f50
int64_t * function_100003f44(int32_t size) {
    // 0x100003f44
    return _malloc(size);
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(char * format, ...) {
    // 0x100003f50
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 19
