//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003728(void);
int64_t function_1000037dc(void);
int64_t function_100003890(void);
int64_t function_1000039cc(void);
int64_t function_100003ac0(void);
int64_t function_100003c38(void);
int64_t function_100003cc4(void);
int64_t function_100003ee8(int64_t a1);
int64_t function_100003ef4(int64_t a1, int64_t a2, int64_t a3);
void function_100003f00(int64_t * s, int32_t n);
int32_t function_100003f0c(char * format, ...);
int32_t function_100003f18(int32_t c);
int32_t function_100003f24(char * s);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x2000000000a018; // 0x100008000
int32_t g2 = 1; // 0x100008008
int64_t g3 = 0x9c20; // 0x100008010
int64_t g4 = 0x100000cfeedfacf; // 0x100008018
int32_t g5 = 0; // 0x100009818
int64_t g6 = 0; // 0x100009820

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t ___strcpy_chk(int64_t a1, int64_t a2, int64_t a3);
void _bzero(int64_t * a1, int32_t a2);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003728 - 0x1000037dc
int64_t function_100003728(void) {
    // 0x100003728
    int64_t v1; // 0x100003728
    int32_t v2 = v1; // 0x10000372c
    int32_t v3 = g5; // 0x100003740
    g5 = v3 + 1;
    int64_t v4 = 24 * (int64_t)v3; // 0x100003754
    if (v2 == 0) {
        int32_t v5 = *(int32_t *)(v1 + 16); // 0x1000037b4
        int32_t v6 = *(int32_t *)(v1 + 16); // 0x1000037bc
        *(int32_t *)(v4 + (int64_t)&g4 + 16) = v6 + v5;
    } else {
        // 0x10000377c
        *(char *)(v4 + (int64_t)&g4 + 20) = (char)v1;
        *(int32_t *)(v4 + (int64_t)&g4 + 16) = v2;
    }
    // 0x1000037d0
    return v4 + (int64_t)&g4;
}

// Address range: 0x1000037dc - 0x100003890
int64_t function_1000037dc(void) {
    int32_t v1 = g2; // 0x1000037e8
    int32_t v2 = v1 + 1;
    g2 = v2;
    int64_t result; // 0x1000037dc
    if (v2 < 3) {
        // 0x100003874
        return result;
    }
    int32_t v3 = v1;
    int32_t v4 = v3 / 2;
    int64_t v5 = *(int64_t *)(8 * (int64_t)v4 + g1); // 0x100003828
    int32_t v6 = *(int32_t *)(v5 + 16); // 0x10000382c
    int32_t v7 = *(int32_t *)(result + 16); // 0x100003834
    while (v6 - v7 != 0 && v6 - v7 < 0 == ((v6 - v7 ^ v6) & (v7 ^ v6)) < 0) {
        // 0x10000384c
        *(int64_t *)(8 * (int64_t)v3 + g1) = v5;
        if (v4 < 2) {
            // break -> 0x100003874
            break;
        }
        v3 = v4;
        v4 = v3 / 2;
        v5 = *(int64_t *)(8 * (int64_t)v4 + g1);
        v6 = *(int32_t *)(v5 + 16);
        v7 = *(int32_t *)(result + 16);
    }
    // 0x100003874
    return result;
}

// Address range: 0x100003890 - 0x1000039cc
int64_t function_100003890(void) {
    int32_t v1 = g2; // 0x1000038b0
    if (v1 < 2 != (1 - v1 & v1) < 0) {
        // 0x1000039c0
        return 0;
    }
    int32_t v2 = v1 - 1; // 0x1000038d4
    g2 = v2;
    int32_t v3 = 3 - v1; // 0x1000038f4
    int64_t v4 = g1; // 0x1000038fc
    int32_t v5 = 1; // 0x1000038fc
    if (v3 < 0 != (v3 & v2) < 0) {
        int32_t v6 = 1;
        int32_t v7 = 2;
        int32_t v8 = v7 | 1; // 0x100003908
        int32_t v9 = v8 - v2; // 0x100003914
        int32_t v10 = v7; // 0x10000391c
        int64_t v11; // 0x100003934
        int32_t v12; // 0x100003938
        int32_t v13; // 0x100003948
        int32_t v14; // 0x10000394c
        if (v9 < 0 != ((v9 ^ v7) & (v2 ^ 2)) < 0) {
            // 0x100003924
            v11 = *(int64_t *)(g1 + (int64_t)(16 * v6 | 8));
            v12 = *(int32_t *)(v11 + 16);
            v13 = *(int32_t *)(*(int64_t *)(g1 + 8 * (int64_t)v7) + 16);
            v14 = v12 - v13;
            v10 = v14 < 0 == ((v14 ^ v12) & (v13 ^ v12)) < 0 ? v7 : v8;
        }
        int32_t v15 = v10;
        int64_t v16 = *(int64_t *)(8 * (int64_t)v15 + g1); // 0x100003978
        *(int64_t *)(8 * (int64_t)v6 + g1) = v16;
        int32_t v17 = 2 * v15; // 0x1000038e4
        int32_t v18 = v17 - v2; // 0x1000038f4
        int32_t v19 = v17 ^ v2; // 0x1000038f4
        v4 = g1;
        v5 = v15;
        while (v18 < 0 != ((v18 ^ v17) & v19) < 0) {
            // 0x100003904
            v6 = v15;
            v7 = v17;
            v8 = v7 | 1;
            v9 = v8 - v2;
            v10 = v7;
            if (v9 < 0 != ((v9 ^ v7) & v19) < 0) {
                // 0x100003924
                v11 = *(int64_t *)(g1 + (int64_t)(16 * v6 | 8));
                v12 = *(int32_t *)(v11 + 16);
                v13 = *(int32_t *)(*(int64_t *)(g1 + 8 * (int64_t)v7) + 16);
                v14 = v12 - v13;
                v10 = v14 < 0 == ((v14 ^ v12) & (v13 ^ v12)) < 0 ? v7 : v8;
            }
            // 0x10000396c
            v15 = v10;
            v16 = *(int64_t *)(8 * (int64_t)v15 + g1);
            *(int64_t *)(8 * (int64_t)v6 + g1) = v16;
            v17 = 2 * v15;
            v18 = v17 - v2;
            v19 = v17 ^ v2;
            v4 = g1;
            v5 = v15;
        }
    }
    int64_t v20 = *(int64_t *)(v4 + 8 * (int64_t)v2); // 0x1000039a4
    *(int64_t *)(8 * (int64_t)v5 + v4) = v20;
    // 0x1000039c0
    return *(int64_t *)(g1 + 8);
}

// Address range: 0x1000039cc - 0x100003ac0
int64_t function_1000039cc(void) {
    // 0x1000039cc
    int64_t v1; // 0x1000039cc
    char * v2 = (char *)(v1 + 20); // 0x1000039e8
    int64_t v3 = 0x100000000 * v1;
    char * v4 = (char *)((v3 >> 32) + v1);
    int64_t result; // 0x1000039cc
    if (*v2 == 0) {
        // 0x100003a58
        *v4 = 48;
        function_1000039cc();
        *v4 = 49;
        result = function_1000039cc();
    } else {
        // 0x1000039fc
        *v4 = 0;
        int64_t v5 = ___strcpy_chk(g3, v1, -1); // 0x100003a20
        char v6 = *v2; // 0x100003a30
        *(int64_t *)(8 * (int64_t)v6 + (int64_t)&g6) = g3;
        g3 += (v3 + 0x100000000 >> 32);
        result = v5;
    }
    // 0x100003ab4
    return result;
}

// Address range: 0x100003ac0 - 0x100003c38
int64_t function_100003ac0(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ad8
    int64_t v2; // bp-544, 0x100003ac0
    _bzero(&v2, 512);
    int64_t v3; // 0x100003ac0
    char v4 = *(char *)v3; // 0x100003af8
    int64_t v5 = &v2;
    if (v4 != 0) {
        int64_t v6; // 0x100003ac0
        int64_t v7 = v6 + 1; // 0x100003b10
        int32_t * v8 = (int32_t *)(4 * (int64_t)v4 + v5); // 0x100003b24
        *v8 = *v8 + 1;
        char v9 = *(char *)v7; // 0x100003af8
        v6 = v7;
        while (v9 != 0) {
            // 0x100003b0c
            v7 = v6 + 1;
            v8 = (int32_t *)(4 * (int64_t)v9 + v5);
            *v8 = *v8 + 1;
            v9 = *(char *)v7;
            v6 = v7;
        }
    }
    int32_t v10 = 0;
    if (*(int32_t *)(4 * (int64_t)v10 + v5) != 0) {
        // 0x100003b6c
        function_100003728();
        function_1000037dc();
    }
    int32_t v11 = v10 + 1; // 0x100003b9c
    while (v10 < 127 != (126 - v10 & v11) < 0) {
        // 0x100003b50
        v10 = v11;
        if (*(int32_t *)(4 * (int64_t)v10 + v5) != 0) {
            // 0x100003b6c
            function_100003728();
            function_1000037dc();
        }
        // 0x100003b98
        v11 = v10 + 1;
    }
    int32_t v12 = g2; // 0x100003bb0
    int32_t v13 = v12 - 2; // 0x100003bb4
    if (v13 != 0 && v13 < 0 == (1 - v12 & v12) < 0) {
        function_100003890();
        function_100003890();
        function_100003728();
        function_1000037dc();
        int32_t v14 = g2; // 0x100003bb0
        while (v14 != 2 && v14 < 2 == (1 - v14 & v14) < 0) {
            // 0x100003bc4
            function_100003890();
            function_100003890();
            function_100003728();
            function_1000037dc();
            v14 = g2;
        }
    }
    int64_t v15 = function_1000039cc(); // 0x100003c00
    int64_t result = v15; // 0x100003c1c
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003c24
        result = ___stack_chk_fail(v15);
    }
    // 0x100003c28
    return result;
}

// Address range: 0x100003c38 - 0x100003cc4
int64_t function_100003c38(void) {
    // 0x100003c38
    int64_t v1; // 0x100003c38
    char * v2 = (char *)v1;
    char v3 = *v2; // 0x100003c54
    if (v3 == 0) {
        // 0x100003cb8
        int64_t result; // 0x100003c38
        return result;
    }
    int64_t v4 = *(int64_t *)(8 * (int64_t)v3 + (int64_t)&g6); // 0x100003c80
    int64_t v5; // 0x100003c38
    ___strcpy_chk(v5, v4, -1);
    int64_t v6; // 0x100003c38
    int64_t v7 = v6 + 1; // 0x100003c94
    char v8 = *v2; // 0x100003c9c
    int64_t v9 = *(int64_t *)(8 * (int64_t)v8 + (int64_t)&g6); // 0x100003ca0
    int64_t result2 = _strlen((char *)v9); // 0x100003ca4
    char * v10 = (char *)v7;
    char v11 = *v10; // 0x100003c54
    v5 += result2;
    while (v11 != 0) {
        // 0x100003c68
        v4 = *(int64_t *)(8 * (int64_t)v11 + (int64_t)&g6);
        ___strcpy_chk(v5, v4, -1);
        v7++;
        v8 = *v10;
        v9 = *(int64_t *)(8 * (int64_t)v8 + (int64_t)&g6);
        result2 = _strlen((char *)v9);
        v10 = (char *)v7;
        v11 = *v10;
        v5 += result2;
    }
    // 0x100003cb8
    return result2;
}

// Address range: 0x100003cc4 - 0x100003dac
int64_t function_100003cc4(void) {
    // 0x100003cc4
    int64_t v1; // 0x100003cc4
    char v2 = *(char *)v1; // 0x100003ce8
    if (v2 == 0) {
        // 0x100003da0
        return _putchar(10);
    }
    int64_t v3; // 0x100003cc4
    int64_t v4 = v3;
    int64_t v5 = v2 == 48 ? v4 : v4 + 8;
    int64_t v6 = *(int64_t *)v5;
    char v7 = *(char *)(v6 + 20); // 0x100003d40
    if (v7 != 0) {
        // 0x100003d54
        _putchar((int32_t)v7);
    }
    // 0x100003d6c
    int64_t v8; // 0x100003cc4
    int64_t v9 = v8 + 1; // 0x100003d00
    int64_t v10 = v6;
    char v11 = *(char *)v9; // 0x100003ce8
    while (v11 != 0) {
        // 0x100003cfc
        v4 = v10;
        v5 = v11 == 48 ? v4 : v4 + 8;
        v6 = *(int64_t *)v5;
        v7 = *(char *)(v6 + 20);
        if (v7 != 0) {
            // 0x100003d54
            _putchar((int32_t)v7);
        }
        // 0x100003d6c
        v9++;
        v10 = v6;
        v11 = *(char *)v9;
    }
    int32_t result = _putchar(10); // 0x100003d88
    if (v1 != v10) {
        // 0x100003d90
        result = _printf("garbage input\n");
    }
    // 0x100003da0
    return result;
}

// Address range: 0x100003dac - 0x100003ee8
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003dc4
    function_100003ac0();
    int32_t v2 = 0;
    int64_t v3 = *(int64_t *)(8 * (int64_t)v2 + (int64_t)&g6); // 0x100003e0c
    int64_t v4; // 0x100003dac
    if (v3 != 0) {
        // 0x100003e20
        _printf("'%c': %s\n", (char)v4, (char *)v4);
    }
    int32_t v5 = v2 + 1; // 0x100003e5c
    while (v2 < 127 != (126 - v2 & v5) < 0) {
        // 0x100003e00
        v2 = v5;
        v3 = *(int64_t *)(8 * (int64_t)v2 + (int64_t)&g6);
        if (v3 != 0) {
            // 0x100003e20
            _printf("'%c': %s\n", (char)v4, (char *)v4);
        }
        // 0x100003e58
        v5 = v2 + 1;
    }
    // 0x100003e68
    function_100003c38();
    int64_t v6; // bp-1056, 0x100003dac
    _printf("encoded: %s\n", &v6);
    _printf("decoded: ");
    int64_t v7 = function_100003cc4(); // 0x100003eac
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003ed0
        ___stack_chk_fail(v7);
    }
    // 0x100003ed4
    return 0;
}

// Address range: 0x100003ee8 - 0x100003ef4
int64_t function_100003ee8(int64_t a1) {
    // 0x100003ee8
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003ef4 - 0x100003f00
int64_t function_100003ef4(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003ef4
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003f00 - 0x100003f0c
void function_100003f00(int64_t * s, int32_t n) {
    // 0x100003f00
    _bzero(s, n);
}

// Address range: 0x100003f0c - 0x100003f18
int32_t function_100003f0c(char * format, ...) {
    // 0x100003f0c
    return _printf(format);
}

// Address range: 0x100003f18 - 0x100003f24
int32_t function_100003f18(int32_t c) {
    // 0x100003f18
    return _putchar(c);
}

// Address range: 0x100003f24 - 0x100003f30
int32_t function_100003f24(char * s) {
    // 0x100003f24
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 14
