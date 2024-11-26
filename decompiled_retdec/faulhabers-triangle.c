//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003664(void);
int64_t function_1000037bc(void);
int64_t function_100003818(void);
int64_t function_100003914(int32_t a1);
int64_t function_10000394c(int64_t a1, int64_t a2);
int64_t function_1000039a0(int64_t a1, int64_t a2);
int64_t function_1000039e4(void);
int64_t function_100003a38(void);
int64_t function_100003a70(void);
int64_t function_100003b60(void);
int64_t function_100003d20(void);
int64_t function_100003f14(int64_t * a1, int64_t a2, int64_t a3);
int64_t function_100003f20(void);
int32_t function_100003f2c(int32_t x);
void function_100003f38(int64_t * ptr);
int64_t * function_100003f44(int32_t size);
int32_t function_100003f50(char * format, ...);
int32_t function_100003f5c(int32_t c, struct _IO_FILE * stream);
int32_t function_100003f68(char * s);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___snprintf_chk(int64_t * a1, int64_t a2, int64_t a3);
int64_t ___stack_chk_fail(void);
int32_t _abs(int32_t a1);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _putc(int32_t a1, struct _IO_FILE * a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003664 - 0x1000037bc
int64_t function_100003664(void) {
    // 0x100003664
    int64_t v1; // 0x100003664
    int32_t v2 = v1; // 0x100003668
    int32_t v3 = v1; // 0x10000366c
    if (v3 < 0 || v2 < 0) {
        // 0x1000037b0
        return 0xffffffff;
    }
    int32_t v4 = v2 - v3; // 0x1000036a0
    if (v4 < 0 != ((v4 ^ v2) & (int32_t)(v1 ^ v1)) < 0) {
        // 0x1000037b0
        return 0xffffffff;
    }
    // 0x1000036bc
    if (v3 == 0 || v2 == 0) {
        // 0x1000037b0
        return 1;
    }
    int32_t v5 = v3 + 1;
    int32_t v6 = v5 - v2; // 0x100003710
    int32_t v7 = 1; // 0x100003718
    int32_t v8 = v5; // 0x100003718
    int32_t v9 = 1; // 0x100003718
    if (v6 == 0 || v6 < 0 != ((v6 ^ v5) & (v5 ^ v2)) < 0) {
        v9 *= v8;
        v8++;
        int32_t v10 = v8 - v2; // 0x100003710
        v7 = v9;
        while (v10 == 0 || v10 < 0 != ((v10 ^ v8) & (v8 ^ v2)) < 0) {
            // 0x100003720
            v9 *= v8;
            v8++;
            v10 = v8 - v2;
            v7 = v9;
        }
    }
    int32_t v11 = 2 - v4; // 0x100003768
    int32_t v12 = 2; // 0x100003770
    int32_t v13 = 1; // 0x100003770
    int32_t v14 = 1; // 0x100003770
    if (v11 == 0 || v11 < 0 != (v11 & v4) < 0) {
        v13 *= v12;
        v12++;
        int32_t v15 = v12 - v4; // 0x100003768
        v14 = v13;
        while (v15 == 0 || v15 < 0 != ((v15 ^ v12) & (v12 ^ v4)) < 0) {
            // 0x100003778
            v13 *= v12;
            v12++;
            v15 = v12 - v4;
            v14 = v13;
        }
    }
    // 0x1000037b0
    return v7 / v14;
}

// Address range: 0x1000037bc - 0x100003818
int64_t function_1000037bc(void) {
    // 0x1000037bc
    int64_t v1; // 0x1000037bc
    int32_t result = v1; // 0x1000037c0
    int32_t v2 = v1; // 0x1000037c4
    if (v2 == 0) {
        // 0x10000380c
        return result;
    }
    int32_t result2 = v2;
    int32_t v3 = result % result2;
    while (v3 != 0) {
        int32_t v4 = result2;
        result2 = v3;
        v3 = v4 % result2;
    }
    // 0x10000380c
    return result2;
}

// Address range: 0x100003818 - 0x100003914
int64_t function_100003818(void) {
    // 0x100003818
    int64_t v1; // 0x100003818
    int32_t v2 = v1; // 0x100003828
    if (v2 == 0) {
        // 0x100003904
        return 0;
    }
    int32_t v3 = v1; // 0x100003824
    int32_t v4 = v2 < 0 == (v3 != 0) ? -v3 : v3;
    int32_t v5 = _abs((int32_t)function_1000037bc()); // 0x1000038b0
    int32_t v6 = v5 - 1; // 0x1000038bc
    int32_t result = v4; // 0x1000038c4
    if (v6 != 0 && v6 < 0 == (v5 & -v5) < 0) {
        // 0x1000038cc
        result = v4 / v5;
    }
    // 0x100003904
    return result;
}

// Address range: 0x100003914 - 0x10000394c
int64_t function_100003914(int32_t a1) {
    // 0x100003914
    return function_100003818();
}

// Address range: 0x10000394c - 0x1000039a0
int64_t function_10000394c(int64_t a1, int64_t a2) {
    // 0x10000394c
    return function_100003818();
}

// Address range: 0x1000039a0 - 0x1000039e4
int64_t function_1000039a0(int64_t a1, int64_t a2) {
    // 0x1000039a0
    return function_100003818();
}

// Address range: 0x1000039e4 - 0x100003a38
int64_t function_1000039e4(void) {
    // 0x1000039e4
    int64_t v1; // 0x1000039e4
    return (int32_t)v1 == (int32_t)v1;
}

// Address range: 0x100003a38 - 0x100003a70
int64_t function_100003a38(void) {
    // 0x100003a38
    int64_t v1; // 0x100003a38
    int32_t v2; // 0x100003a38
    int32_t v3 = v2 * (int32_t)v1; // 0x100003a4c
    int32_t v4 = v2 * (int32_t)v1; // 0x100003a58
    int32_t v5 = v3 - v4; // 0x100003a5c
    return v5 < 0 != ((v5 ^ v3) & (v3 ^ v4)) < 0;
}

// Address range: 0x100003a70 - 0x100003b60
int64_t function_100003a70(void) {
    // 0x100003a70
    int64_t v1; // bp-31, 0x100003a70
    ___snprintf_chk(&v1, 7, 0);
    int32_t v2 = 7 - _strlen((char *)&v1); // 0x100003b0c
    if (v2 < 1) {
        // 0x100003b4c
        return _printf((char *)&v1);
    }
    int32_t v3 = v2; // 0x100003b2c
    v3--;
    _putc(32, (struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004018);
    while (v3 >= 1) {
        // 0x100003b34
        v3--;
        _putc(32, (struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004018);
    }
    // 0x100003b4c
    return _printf((char *)&v1);
}

// Address range: 0x100003b60 - 0x100003d20
int64_t function_100003b60(void) {
    // 0x100003b60
    int64_t v1; // 0x100003b60
    int32_t v2 = v1; // 0x100003b80
    int32_t v3; // bp-168, 0x100003b60
    int64_t result; // 0x100003b60
    if (v2 < 0) {
        // 0x100003b98
        v3 = 0;
        result = 0;
    } else {
        int32_t v4 = -v2; // 0x100003bbc
        int32_t v5; // 0x100003b60
        if (v2 == 0 || v4 < 0 != (v4 & v2) < 0) {
            int64_t v6 = &v3; // 0x100003bd8
            int32_t v7 = 0;
            *(int64_t *)(8 * (int64_t)v7 + v6) = function_100003818();
            int32_t v8 = v7 - 1; // 0x100003c10
            int32_t v9 = v8; // 0x100003c18
            int32_t v10 = v7; // 0x100003c18
            int32_t v11; // 0x100003b60
            int64_t * v12; // 0x100003c48
            int64_t v13; // 0x100003c50
            int32_t v14; // 0x100003c10
            if (v8 < 0 == (v7 & -v7) < 0) {
                v11 = v9;
                v12 = (int64_t *)((int64_t)(8 * v10 - 8) + v6);
                v13 = function_10000394c(*v12, *(int64_t *)(8 * (int64_t)v10 + v6));
                *v12 = function_1000039a0(v13, function_100003818());
                v14 = v11 - 1;
                v10 = v11;
                while (v14 < 0 == (v11 & -v11) < 0) {
                    // 0x100003c20
                    v11 = v14;
                    v12 = (int64_t *)((int64_t)(8 * v10 - 8) + v6);
                    v13 = function_10000394c(*v12, *(int64_t *)(8 * (int64_t)v10 + v6));
                    *v12 = function_1000039a0(v13, function_100003818());
                    v14 = v11 - 1;
                    v10 = v11;
                }
            }
            int32_t v15 = v7 + 1; // 0x100003ca4
            while (v15 - v2 == 0 || v15 - v2 < 0 != ((v15 - v2 ^ v15) & (v15 ^ v2)) < 0) {
                // 0x100003bcc
                v7 = v15;
                *(int64_t *)(8 * (int64_t)v7 + v6) = function_100003818();
                v8 = v7 - 1;
                v9 = v8;
                v10 = v7;
                if (v8 < 0 == (v7 & -v7) < 0) {
                    v11 = v9;
                    v12 = (int64_t *)((int64_t)(8 * v10 - 8) + v6);
                    v13 = function_10000394c(*v12, *(int64_t *)(8 * (int64_t)v10 + v6));
                    *v12 = function_1000039a0(v13, function_100003818());
                    v14 = v11 - 1;
                    v10 = v11;
                    while (v14 < 0 == (v11 & -v11) < 0) {
                        // 0x100003c20
                        v11 = v14;
                        v12 = (int64_t *)((int64_t)(8 * v10 - 8) + v6);
                        v13 = function_10000394c(*v12, *(int64_t *)(8 * (int64_t)v10 + v6));
                        *v12 = function_1000039a0(v13, function_100003818());
                        v14 = v11 - 1;
                        v10 = v11;
                    }
                }
                // 0x100003ca0
                v15 = v7 + 1;
            }
            // 0x100003bb4
            v5 = v3;
        }
        // 0x100003cb0
        if (v2 == 1) {
            // 0x100003cd0
            result = function_100003914(v5);
        } else {
            // 0x100003cc4
            result = v5;
        }
    }
    int64_t v16 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003cf4
    if (v16 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003d08
        ___stack_chk_fail();
    }
    // 0x100003d0c
    return result;
}

// Address range: 0x100003d20 - 0x100003ebc
int64_t function_100003d20(void) {
    // 0x100003d20
    int64_t v1; // 0x100003d20
    int32_t v2 = v1; // 0x100003d2c
    int64_t * v3 = _malloc((int32_t)((0x100000000 * v1 + 0x100000000) / 0x20000000)); // 0x100003d50
    int64_t v4 = function_100003818(); // 0x100003d68
    int32_t v5 = -v2;
    int32_t v6 = 0; // 0x100003d98
    if (v2 != 0 && v5 < 0 == (v5 & v2) < 0) {
        // 0x100003e9c
        _printf((char *)0x100003f7d);
        _free(v3);
        return &g1;
    }
    int64_t v7 = function_1000039a0(v4, function_100003818()); // 0x100003de4
    function_100003664();
    int64_t v8 = function_1000039a0(v7, function_100003818()); // 0x100003e10
    int64_t v9 = function_1000039a0(v8, function_100003b60()); // 0x100003e2c
    *(int64_t *)((int64_t)(8 * (v2 - v6)) + (int64_t)v3) = v9;
    v6++;
    int32_t v10 = v6 - v2; // 0x100003d90
    int32_t v11 = 0; // 0x100003d98
    while (v10 == 0 || v10 < 0 != ((v10 ^ v6) & (v6 ^ v2)) < 0) {
        // 0x100003da0
        v7 = function_1000039a0(v4, function_100003818());
        function_100003664();
        v8 = function_1000039a0(v7, function_100003818());
        v9 = function_1000039a0(v8, function_100003b60());
        *(int64_t *)((int64_t)(8 * (v2 - v6)) + (int64_t)v3) = v9;
        v6++;
        v10 = v6 - v2;
        v11 = 0;
    }
    function_100003a70();
    int32_t v12 = v11 + 1; // 0x100003e90
    int32_t v13 = v12 - v2; // 0x100003e68
    v11 = v12;
    while (v13 == 0 || v13 < 0 != ((v13 ^ v12) & (v12 ^ v2)) < 0) {
        // 0x100003e78
        function_100003a70();
        v12 = v11 + 1;
        v13 = v12 - v2;
        v11 = v12;
    }
    // 0x100003e9c
    _printf((char *)0x100003f7d);
    _free(v3);
    return &g1;
}

// Address range: 0x100003ebc - 0x100003f14
int64_t entry_point(void) {
    for (int32_t i = 0; i < 10; i++) {
        // 0x100003ee8
        function_100003d20();
    }
    // 0x100003f04
    return 0;
}

// Address range: 0x100003f14 - 0x100003f20
int64_t function_100003f14(int64_t * a1, int64_t a2, int64_t a3) {
    // 0x100003f14
    return ___snprintf_chk(a1, a2, a3);
}

// Address range: 0x100003f20 - 0x100003f2c
int64_t function_100003f20(void) {
    // 0x100003f20
    return ___stack_chk_fail();
}

// Address range: 0x100003f2c - 0x100003f38
int32_t function_100003f2c(int32_t x) {
    // 0x100003f2c
    return _abs(x);
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

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(int32_t c, struct _IO_FILE * stream) {
    // 0x100003f5c
    return _putc(c, stream);
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(char * s) {
    // 0x100003f68
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 20
