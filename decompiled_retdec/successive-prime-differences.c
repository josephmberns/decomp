//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003604(void);
int64_t function_100003708(void);
int64_t function_1000038a4(void);
int64_t function_100003a20(void);
int64_t function_100003c04(void);
int32_t function_100003ee4(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x100000cfeedfacf; // 0x100008000
int64_t g2 = 0x200000000; // 0x100008008
int64_t g3 = 0x4b800000012; // 0x100008010
int64_t g4 = 0x200085; // 0x100008018

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003604 - 0x100003708
int64_t function_100003604(void) {
    // 0x100003604
    if (g1 == 0) {
        // 0x1000036f8
        return 1;
    }
    // 0x100003634
    int64_t v1; // 0x100003604
    int64_t v2 = 0x100000000 * v1 >> 32; // 0x100003648
    int64_t v3 = 0; // 0x1000036d8
    int64_t v4 = *(int64_t *)(8 * v3 + (int64_t)&g2); // 0x100003640
    int64_t result = 1; // 0x100003658
    while (v4 != v2) {
        // 0x100003674
        result = 0;
        if (v2 % v4 == 0) {
            // break -> 0x1000036f8
            break;
        }
        int64_t v5 = v4 * v4; // 0x1000036b4
        int64_t v6 = v5 - v2; // 0x1000036bc
        v3++;
        result = 1;
        if (v3 < g1 != (v6 == 0 || v6 < 0 != ((v6 ^ v5) & (v5 ^ v2)) < 0)) {
            // break -> 0x1000036f8
            break;
        }
        v4 = *(int64_t *)(8 * v3 + (int64_t)&g2);
        result = 1;
    }
    // 0x1000036f8
    return result;
}

// Address range: 0x100003708 - 0x1000038a4
int64_t function_100003708(void) {
    int64_t v1 = g1; // 0x10000371c
    g1 = v1 + 1;
    *(int64_t *)(8 * v1 + (int64_t)&g2) = 2;
    int64_t v2 = g1; // 0x10000373c
    g1 = v2 + 1;
    *(int64_t *)(8 * v2 + (int64_t)&g2) = 3;
    int64_t v3 = g1; // 0x100003750
    g1 = v3 + 1;
    *(int64_t *)(8 * v3 + (int64_t)&g2) = 5;
    int64_t v4 = g1; // 0x100003764
    g1 = v4 + 1;
    *(int64_t *)(8 * v4 + (int64_t)&g2) = 7;
    int64_t v5 = g1; // 0x100003778
    g1 = v5 + 1;
    *(int64_t *)(8 * v5 + (int64_t)&g2) = 11;
    int64_t v6 = g1; // 0x10000378c
    g1 = v6 + 1;
    *(int64_t *)(8 * v6 + (int64_t)&g2) = 13;
    int64_t v7 = g1; // 0x1000037a0
    g1 = v7 + 1;
    *(int64_t *)(8 * v7 + (int64_t)&g2) = 17;
    int64_t v8 = g1; // 0x1000037b4
    g1 = v8 + 1;
    *(int64_t *)(8 * v8 + (int64_t)&g2) = 19;
    int64_t result; // 0x100003708
    if (g1 >= 0x186a0) {
        // 0x100003898
        return result;
    }
    int32_t v9 = 21;
    int64_t v10 = function_100003604(); // 0x1000037f8
    int64_t v11; // 0x10000380c
    if (v10 % 2 != 0) {
        // 0x100003804
        v11 = g1;
        g1 = v11 + 1;
        *(int64_t *)(8 * v11 + (int64_t)&g2) = (int64_t)v9;
    }
    // 0x100003828
    result = v10;
    while (g1 < 0x186a0) {
        int64_t v12 = function_100003604(); // 0x100003858
        if (v12 % 2 != 0) {
            int64_t v13 = g1; // 0x10000386c
            g1 = v13 + 1;
            *(int64_t *)(8 * v13 + (int64_t)&g2) = (int64_t)(v9 + 2);
        }
        // 0x100003888
        result = v12;
        if (g1 >= 0x186a0) {
            // break -> 0x100003898
            break;
        }
        v9 += 4;
        v10 = function_100003604();
        if (v10 % 2 != 0) {
            // 0x100003804
            v11 = g1;
            g1 = v11 + 1;
            *(int64_t *)(8 * v11 + (int64_t)&g2) = (int64_t)v9;
        }
        // 0x100003828
        result = v10;
    }
    // 0x100003898
    return result;
}

// Address range: 0x1000038a4 - 0x100003a20
int64_t function_1000038a4(void) {
    int64_t result = 0; // 0x1000038d4
    int64_t v1; // 0x1000038a4
    if (v1 != 0) {
        // 0x1000038e0
        result = _printf("%ld|%d|%lld %lld|%lld %lld|\n", (int32_t)v1, v1, v1, v1, v1, v1);
    }
    // 0x100003a14
    return result;
}

// Address range: 0x100003a20 - 0x100003c04
int64_t function_100003a20(void) {
    // 0x100003a20
    int64_t v1; // 0x100003a20
    int64_t v2 = v1;
    int64_t result; // 0x100003a20
    if (v2 != 0 && v1 != 0) {
        // 0x100003a68
        result = _printf("%d %d|%d|%lld %lld %lld|%lld %lld %lld|\n", v2, v1, v1, v1, v1, v1, v1, v1, v2);
    }
    // 0x100003bf8
    return result;
}

// Address range: 0x100003c04 - 0x100003e60
int64_t function_100003c04(void) {
    // 0x100003c04
    int64_t v1; // 0x100003c04
    int64_t v2 = v1;
    int64_t v3 = v1;
    int64_t result; // 0x100003c04
    if (v1 == 0 || v2 == 0 || v3 == 0) {
        // 0x100003e50
        return result;
    }
    int64_t v4 = 3; // 0x100003dcc
    int64_t v5 = g2; // 0x100003c04
    int64_t v6 = g3; // 0x100003c04
    int64_t v7 = g4; // 0x100003c04
    int64_t v8 = 0;
    int64_t v9 = 0;
    int64_t v10 = *(int64_t *)(8 * v4 + (int64_t)&g2); // 0x100003cd4
    int64_t v11 = v10 - 0xf4240; // 0x100003ce8
    int64_t v12 = v8; // 0x100003cf0
    int64_t v13 = v9; // 0x100003cf0
    while (v11 == 0 || v11 < 0 != (0xf423f - v10 & v10) < 0) {
        int64_t v14 = v7;
        int64_t v15 = v6;
        int64_t v16 = v5;
        int64_t v17 = v8; // 0x100003d14
        int64_t v18 = v9; // 0x100003d14
        if (v15 - v16 == v3 == v14 - v15 == v2 == v10 - v14 == v1) {
            // 0x100003d5c
            v18 = v9 == 0 ? v16 : v9;
            v17 = v8 + 1;
        }
        // 0x100003dc8
        v4++;
        v5 = v15;
        v6 = v14;
        v7 = v10;
        v12 = v17;
        v13 = v18;
        if (v4 >= 0x186a0) {
            // break -> 0x100003dd8
            break;
        }
        v8 = v17;
        v9 = v18;
        v10 = *(int64_t *)(8 * v4 + (int64_t)&g2);
        v11 = v10 - 0xf4240;
        v12 = v8;
        v13 = v9;
    }
    // 0x100003dd8
    result = _printf("%d %d %d|%d|%lld %lld %lld %lld|%lld %lld %lld %lld|\n", v2, v3, v1, v1, v1, v1, v1, v3, v2, v1, v12, v13);
    // 0x100003e50
    return result;
}

// Address range: 0x100003e60 - 0x100003ee4
int64_t entry_point(void) {
    // 0x100003e60
    function_100003708();
    _printf("differences|count|first group|last group\n");
    function_1000038a4();
    function_1000038a4();
    function_100003a20();
    function_100003a20();
    function_100003a20();
    function_100003c04();
    return 0;
}

// Address range: 0x100003ee4 - 0x100003ef0
int32_t function_100003ee4(char * format, ...) {
    // 0x100003ee4
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7
