//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003588(void);
int64_t function_1000036e0(void);
int64_t function_10000373c(void);
int64_t function_100003838(int32_t a1);
int64_t function_100003870(int64_t a1, int64_t a2);
int64_t function_1000038c4(int64_t a1, int64_t a2);
int64_t function_100003908(void);
int64_t function_10000395c(void);
int64_t function_100003994(void);
int64_t function_100003a00(void);
int64_t function_100003bc0(void);
int64_t function_100003f3c(void);
int32_t function_100003f48(int32_t x);
int32_t function_100003f54(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _abs(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003588 - 0x1000036e0
int64_t function_100003588(void) {
    // 0x100003588
    int64_t v1; // 0x100003588
    int32_t v2 = v1; // 0x10000358c
    int32_t v3 = v1; // 0x100003590
    if (v3 < 0 || v2 < 0) {
        // 0x1000036d4
        return 0xffffffff;
    }
    int32_t v4 = v2 - v3; // 0x1000035c4
    if (v4 < 0 != ((v4 ^ v2) & (int32_t)(v1 ^ v1)) < 0) {
        // 0x1000036d4
        return 0xffffffff;
    }
    // 0x1000035e0
    if (v3 == 0 || v2 == 0) {
        // 0x1000036d4
        return 1;
    }
    int32_t v5 = v3 + 1;
    int32_t v6 = v5 - v2; // 0x100003634
    int32_t v7 = 1; // 0x10000363c
    int32_t v8 = v5; // 0x10000363c
    int32_t v9 = 1; // 0x10000363c
    if (v6 == 0 || v6 < 0 != ((v6 ^ v5) & (v5 ^ v2)) < 0) {
        v9 *= v8;
        v8++;
        int32_t v10 = v8 - v2; // 0x100003634
        v7 = v9;
        while (v10 == 0 || v10 < 0 != ((v10 ^ v8) & (v8 ^ v2)) < 0) {
            // 0x100003644
            v9 *= v8;
            v8++;
            v10 = v8 - v2;
            v7 = v9;
        }
    }
    int32_t v11 = 2 - v4; // 0x10000368c
    int32_t v12 = 2; // 0x100003694
    int32_t v13 = 1; // 0x100003694
    int32_t v14 = 1; // 0x100003694
    if (v11 == 0 || v11 < 0 != (v11 & v4) < 0) {
        v13 *= v12;
        v12++;
        int32_t v15 = v12 - v4; // 0x10000368c
        v14 = v13;
        while (v15 == 0 || v15 < 0 != ((v15 ^ v12) & (v12 ^ v4)) < 0) {
            // 0x10000369c
            v13 *= v12;
            v12++;
            v15 = v12 - v4;
            v14 = v13;
        }
    }
    // 0x1000036d4
    return v7 / v14;
}

// Address range: 0x1000036e0 - 0x10000373c
int64_t function_1000036e0(void) {
    // 0x1000036e0
    int64_t v1; // 0x1000036e0
    int32_t result = v1; // 0x1000036e4
    int32_t v2 = v1; // 0x1000036e8
    if (v2 == 0) {
        // 0x100003730
        return result;
    }
    int32_t result2 = v2;
    int32_t v3 = result % result2;
    while (v3 != 0) {
        int32_t v4 = result2;
        result2 = v3;
        v3 = v4 % result2;
    }
    // 0x100003730
    return result2;
}

// Address range: 0x10000373c - 0x100003838
int64_t function_10000373c(void) {
    // 0x10000373c
    int64_t v1; // 0x10000373c
    int32_t v2 = v1; // 0x10000374c
    if (v2 == 0) {
        // 0x100003828
        return 0;
    }
    int32_t v3 = v1; // 0x100003748
    int32_t v4 = v2 < 0 == (v3 != 0) ? -v3 : v3;
    int32_t v5 = _abs((int32_t)function_1000036e0()); // 0x1000037d4
    int32_t v6 = v5 - 1; // 0x1000037e0
    int32_t result = v4; // 0x1000037e8
    if (v6 != 0 && v6 < 0 == (v5 & -v5) < 0) {
        // 0x1000037f0
        result = v4 / v5;
    }
    // 0x100003828
    return result;
}

// Address range: 0x100003838 - 0x100003870
int64_t function_100003838(int32_t a1) {
    // 0x100003838
    return function_10000373c();
}

// Address range: 0x100003870 - 0x1000038c4
int64_t function_100003870(int64_t a1, int64_t a2) {
    // 0x100003870
    return function_10000373c();
}

// Address range: 0x1000038c4 - 0x100003908
int64_t function_1000038c4(int64_t a1, int64_t a2) {
    // 0x1000038c4
    return function_10000373c();
}

// Address range: 0x100003908 - 0x10000395c
int64_t function_100003908(void) {
    // 0x100003908
    int64_t v1; // 0x100003908
    return (int32_t)v1 == (int32_t)v1;
}

// Address range: 0x10000395c - 0x100003994
int64_t function_10000395c(void) {
    // 0x10000395c
    int64_t v1; // 0x10000395c
    int32_t v2; // 0x10000395c
    int32_t v3 = v2 * (int32_t)v1; // 0x100003970
    int32_t v4 = v2 * (int32_t)v1; // 0x10000397c
    int32_t v5 = v3 - v4; // 0x100003980
    return v5 < 0 != ((v5 ^ v3) & (v3 ^ v4)) < 0;
}

// Address range: 0x100003994 - 0x100003a00
int64_t function_100003994(void) {
    // 0x100003994
    int64_t v1; // 0x100003994
    int32_t result = _printf("%d", v1); // 0x1000039cc
    int32_t v2; // 0x100003994
    if (v2 != 1) {
        // 0x1000039d4
        result = _printf("/%d", v1);
    }
    // 0x1000039f4
    return result;
}

// Address range: 0x100003a00 - 0x100003bc0
int64_t function_100003a00(void) {
    // 0x100003a00
    int64_t v1; // 0x100003a00
    int32_t v2 = v1; // 0x100003a20
    int32_t v3; // bp-168, 0x100003a00
    int64_t result; // 0x100003a00
    if (v2 < 0) {
        // 0x100003a38
        v3 = 0;
        result = 0;
    } else {
        int32_t v4 = -v2; // 0x100003a5c
        int32_t v5; // 0x100003a00
        if (v2 == 0 || v4 < 0 != (v4 & v2) < 0) {
            int64_t v6 = &v3; // 0x100003a78
            int32_t v7 = 0;
            *(int64_t *)(8 * (int64_t)v7 + v6) = function_10000373c();
            int32_t v8 = v7 - 1; // 0x100003ab0
            int32_t v9 = v8; // 0x100003ab8
            int32_t v10 = v7; // 0x100003ab8
            int32_t v11; // 0x100003a00
            int64_t * v12; // 0x100003ae8
            int64_t v13; // 0x100003af0
            int32_t v14; // 0x100003ab0
            if (v8 < 0 == (v7 & -v7) < 0) {
                v11 = v9;
                v12 = (int64_t *)((int64_t)(8 * v10 - 8) + v6);
                v13 = function_100003870(*v12, *(int64_t *)(8 * (int64_t)v10 + v6));
                *v12 = function_1000038c4(v13, function_10000373c());
                v14 = v11 - 1;
                v10 = v11;
                while (v14 < 0 == (v11 & -v11) < 0) {
                    // 0x100003ac0
                    v11 = v14;
                    v12 = (int64_t *)((int64_t)(8 * v10 - 8) + v6);
                    v13 = function_100003870(*v12, *(int64_t *)(8 * (int64_t)v10 + v6));
                    *v12 = function_1000038c4(v13, function_10000373c());
                    v14 = v11 - 1;
                    v10 = v11;
                }
            }
            int32_t v15 = v7 + 1; // 0x100003b44
            while (v15 - v2 == 0 || v15 - v2 < 0 != ((v15 - v2 ^ v15) & (v15 ^ v2)) < 0) {
                // 0x100003a6c
                v7 = v15;
                *(int64_t *)(8 * (int64_t)v7 + v6) = function_10000373c();
                v8 = v7 - 1;
                v9 = v8;
                v10 = v7;
                if (v8 < 0 == (v7 & -v7) < 0) {
                    v11 = v9;
                    v12 = (int64_t *)((int64_t)(8 * v10 - 8) + v6);
                    v13 = function_100003870(*v12, *(int64_t *)(8 * (int64_t)v10 + v6));
                    *v12 = function_1000038c4(v13, function_10000373c());
                    v14 = v11 - 1;
                    v10 = v11;
                    while (v14 < 0 == (v11 & -v11) < 0) {
                        // 0x100003ac0
                        v11 = v14;
                        v12 = (int64_t *)((int64_t)(8 * v10 - 8) + v6);
                        v13 = function_100003870(*v12, *(int64_t *)(8 * (int64_t)v10 + v6));
                        *v12 = function_1000038c4(v13, function_10000373c());
                        v14 = v11 - 1;
                        v10 = v11;
                    }
                }
                // 0x100003b40
                v15 = v7 + 1;
            }
            // 0x100003a54
            v5 = v3;
        }
        // 0x100003b50
        if (v2 == 1) {
            // 0x100003b70
            result = function_100003838(v5);
        } else {
            // 0x100003b64
            result = v5;
        }
    }
    int64_t v16 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003b94
    if (v16 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003ba8
        ___stack_chk_fail();
    }
    // 0x100003bac
    return result;
}

// Address range: 0x100003bc0 - 0x100003ee4
int64_t function_100003bc0(void) {
    // 0x100003bc0
    int64_t v1; // 0x100003bc0
    int32_t v2 = v1; // 0x100003bd4
    _printf("%d : ", v1);
    int64_t v3 = function_10000373c(); // 0x100003c00
    int32_t v4 = -v2; // 0x100003c28
    if (v2 != 0 && v4 < 0 == (v4 & v2) < 0) {
        // 0x100003ecc
        return _printf((char *)0x100003f7e);
    }
    int32_t v5 = 0;
    int64_t v6 = function_1000038c4(v3, function_10000373c()); // 0x100003c64
    function_100003588();
    int64_t v7 = function_1000038c4(v6, function_10000373c()); // 0x100003c90
    int64_t v8 = function_1000038c4(v7, function_100003a00()); // 0x100003cac
    function_10000373c();
    int64_t v9; // 0x100003bc0
    uint64_t v10; // 0x100003bc0
    int64_t v11; // 0x100003d30
    int32_t v12; // 0x100003e6c
    int32_t v13; // 0x100003e78
    int64_t v14; // 0x100003db8
    int64_t v15; // 0x100003bc0
    if (function_100003908() % 2 == 0) {
        // 0x100003cec
        v9 = function_10000373c();
        v10 = function_100003908();
        if (v5 == 0) {
            // 0x100003d00
            v15 = v9;
            if (v10 % 2 == 0) {
                // 0x100003d28
                v11 = function_10000373c();
                if (function_100003908() % 2 == 0) {
                    // 0x100003d60
                    function_100003994();
                    v15 = v11;
                } else {
                    // 0x100003d50
                    _printf("-");
                    v15 = v11;
                }
            }
        } else {
            if (v10 % 2 == 0) {
                // 0x100003db0
                v14 = function_10000373c();
                if (function_100003908() % 2 == 0) {
                    // 0x100003de8
                    function_10000373c();
                    if (function_10000395c() % 2 == 0) {
                        // 0x100003e2c
                        _printf(" - ");
                        function_100003838((int32_t)v8);
                        function_100003994();
                        v15 = v8;
                    } else {
                        // 0x100003e10
                        _printf(" + ");
                        function_100003994();
                        v15 = v8;
                    }
                } else {
                    // 0x100003dd8
                    _printf(" - ");
                    v15 = v14;
                }
            } else {
                // 0x100003da0
                _printf(" + ");
                v15 = v9;
            }
        }
        // 0x100003e60
        v12 = v2 + 1 - v5;
        v13 = v12 - 1;
        if (v13 == 0 || v13 < 0 != (v12 & -v12) < 0) {
            // 0x100003ea8
            _printf((char *)0x100003f7c);
        } else {
            // 0x100003e88
            _printf("n^%d", v15);
        }
    }
    int32_t v16 = v5 + 1; // 0x100003ec0
    while (v16 - v2 == 0 || v16 - v2 < 0 != ((v16 - v2 ^ v16) & (v16 ^ v2)) < 0) {
        // 0x100003c38
        v5 = v16;
        v6 = function_1000038c4(v3, function_10000373c());
        function_100003588();
        v7 = function_1000038c4(v6, function_10000373c());
        v8 = function_1000038c4(v7, function_100003a00());
        function_10000373c();
        if (function_100003908() % 2 == 0) {
            // 0x100003cec
            v9 = function_10000373c();
            v10 = function_100003908();
            if (v5 == 0) {
                // 0x100003d00
                v15 = v9;
                if (v10 % 2 == 0) {
                    // 0x100003d28
                    v11 = function_10000373c();
                    if (function_100003908() % 2 == 0) {
                        // 0x100003d60
                        function_100003994();
                        v15 = v11;
                    } else {
                        // 0x100003d50
                        _printf("-");
                        v15 = v11;
                    }
                }
            } else {
                if (v10 % 2 == 0) {
                    // 0x100003db0
                    v14 = function_10000373c();
                    if (function_100003908() % 2 == 0) {
                        // 0x100003de8
                        function_10000373c();
                        if (function_10000395c() % 2 == 0) {
                            // 0x100003e2c
                            _printf(" - ");
                            function_100003838((int32_t)v8);
                            function_100003994();
                            v15 = v8;
                        } else {
                            // 0x100003e10
                            _printf(" + ");
                            function_100003994();
                            v15 = v8;
                        }
                    } else {
                        // 0x100003dd8
                        _printf(" - ");
                        v15 = v14;
                    }
                } else {
                    // 0x100003da0
                    _printf(" + ");
                    v15 = v9;
                }
            }
            // 0x100003e60
            v12 = v2 + 1 - v5;
            v13 = v12 - 1;
            if (v13 == 0 || v13 < 0 != (v12 & -v12) < 0) {
                // 0x100003ea8
                _printf((char *)0x100003f7c);
            } else {
                // 0x100003e88
                _printf("n^%d", v15);
            }
        }
        // 0x100003ebc
        v16 = v5 + 1;
    }
    // 0x100003ecc
    return _printf((char *)0x100003f7e);
}

// Address range: 0x100003ee4 - 0x100003f3c
int64_t entry_point(void) {
    for (int32_t i = 0; i < 10; i++) {
        // 0x100003f10
        function_100003bc0();
    }
    // 0x100003f2c
    return 0;
}

// Address range: 0x100003f3c - 0x100003f48
int64_t function_100003f3c(void) {
    // 0x100003f3c
    return ___stack_chk_fail();
}

// Address range: 0x100003f48 - 0x100003f54
int32_t function_100003f48(int32_t x) {
    // 0x100003f48
    return _abs(x);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * format, ...) {
    // 0x100003f54
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 15

