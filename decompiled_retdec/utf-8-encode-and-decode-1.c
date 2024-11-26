//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000039a8(void);
int64_t function_100003a74(void);
int64_t function_100003b30(void);
int64_t function_100003c60(void);
int64_t function_100003ef8(int64_t a1);
void function_100003f04(int32_t status);
int32_t function_100003f10(char * format, ...);

// --------------------- Global Variables ---------------------

float128_t g1 = 5.22010964609571256497081050227826344e-312L; // 0x100003f1c
char * g2 = "?\x80"; // 0x100008000
char * g3; // 0x100008050
char * g4; // 0x100008090

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x1000039a8 - 0x100003a74
int64_t function_1000039a8(void) {
    // 0x1000039a8
    int64_t v1; // 0x1000039a8
    uint32_t v2 = (int32_t)v1; // 0x1000039b4
    int32_t v3 = 0; // 0x1000039dc
    if (g3 != NULL) {
        int64_t v4 = (int64_t)g3;
        uint32_t v5; // 0x100003a10
        if (*(int32_t *)(v4 + 4) <= v2) {
            // 0x100003a04
            v5 = *(int32_t *)(v4 + 8);
            if (v5 <= v2 != v5 != v2) {
                // break -> 0x100003a48
                break;
            }
        }
        int32_t v6 = 1; // 0x100003a2c
        int64_t v7 = (int64_t)(char *)&g3 + 8; // 0x100003a3c
        int64_t v8 = *(int64_t *)v7; // 0x1000039d0
        char * v9 = (char *)v7; // 0x1000039dc
        v3 = v6;
        while (v8 != 0) {
            int32_t v10 = v6;
            v4 = v8;
            if (*(int32_t *)(v4 + 4) <= v2) {
                // 0x100003a04
                v5 = *(int32_t *)(v4 + 8);
                v3 = v10;
                if (v5 <= v2 != v5 != v2) {
                    // break -> 0x100003a48
                    break;
                }
            }
            // 0x100003a28
            v6 = v10 + 1;
            v7 = (int64_t)v9 + 8;
            v8 = *(int64_t *)v7;
            v9 = (char *)v7;
            v3 = v6;
        }
    }
    uint32_t result = v3;
    int32_t v11 = result - 4; // 0x100003a4c
    if (v11 == 0 || v11 < 0 != (3 - result & result) < 0) {
        // 0x100003a64
        return result;
    }
    // 0x100003a5c
    _exit(1);
    // UNREACHABLE
}

// Address range: 0x100003a74 - 0x100003b30
int64_t function_100003a74(void) {
    // 0x100003a74
    int64_t v1; // 0x100003a74
    int32_t v2 = 0x1000000 * (int32_t)v1 >> 24;
    int64_t v3 = (int64_t)g3; // 0x100003aa8
    char * v4 = (char *)&g3; // 0x100003aa8
    int32_t v5 = 0; // 0x100003aa8
    int32_t v6 = 0; // 0x100003aa8
    if (g3 != NULL) {
        char v7 = *(char *)(v3 + 1); // 0x100003acc
        v6 = v5;
        while ((v2 & (int32_t)(-1 - *(char *)v3)) != (int32_t)v7) {
            // 0x100003ae4
            v5++;
            int64_t v8 = (int64_t)v4 + 8; // 0x100003af8
            v3 = *(int64_t *)v8;
            v4 = (char *)v8;
            v6 = v5;
            if (v3 == 0) {
                // break -> 0x100003b04
                break;
            }
            v7 = *(char *)(v3 + 1);
            v6 = v5;
        }
    }
    uint32_t result = v6;
    int32_t v9 = result - 4; // 0x100003b08
    if (v9 == 0 || v9 < 0 != (3 - result & result) < 0) {
        // 0x100003b20
        return result;
    }
    // 0x100003b18
    _exit(1);
    // UNREACHABLE
}

// Address range: 0x100003b30 - 0x100003c60
int64_t function_100003b30(void) {
    // 0x100003b30
    int64_t v1; // 0x100003b30
    uint32_t v2 = (int32_t)v1; // 0x100003b3c
    int64_t v3 = function_1000039a8(); // 0x100003b44
    int32_t v4 = v3; // 0x100003b48
    uint32_t v5 = *(int32_t *)((int64_t)g3 + 12) * (v4 - 1); // 0x100003b6c
    int64_t v6 = 0x100000000 * v3;
    int64_t v7 = *(int64_t *)((v6 >> 29) + (int64_t)&g3); // 0x100003b84
    char v8 = *(char *)v7; // 0x100003b88
    char v9 = *(char *)(v7 + 1); // 0x100003b98
    *(char *)((int64_t)&g2 + 144) = v8 & (char)(v2 >> v5) | v9;
    int32_t v10 = 1 - v4; // 0x100003bcc
    if (v10 < 0 == (v10 & v4) < 0) {
        // 0x100003c3c
        *(char *)((v6 >> 32) + (int64_t)&g4) = 0;
        return (int64_t)&g4;
    }
    int32_t v11 = 1; // 0x100003c30
    int32_t v12 = v5 - *(int32_t *)((int64_t)g3 + 12); // 0x100003b30
    char v13 = *g3; // 0x100003bf0
    char v14 = *(char *)((int64_t)g3 + 1); // 0x100003bfc
    *(char *)((int64_t)v11 + (int64_t)&g4) = v13 & (char)(v2 >> v12) | v14;
    char * v15 = g3; // 0x100003c14
    int32_t v16 = *(int32_t *)((int64_t)v15 + 12); // 0x100003c18
    v11++;
    int32_t v17 = v11 - v4; // 0x100003bcc
    v12 -= v16;
    while (v17 < 0 != ((v17 ^ v11) & (v11 ^ v4)) < 0) {
        // 0x100003bdc
        v13 = *v15;
        v14 = *(char *)((int64_t)v15 + 1);
        *(char *)((int64_t)v11 + (int64_t)&g4) = v13 & (char)(v2 >> v12) | v14;
        v15 = g3;
        v16 = *(int32_t *)((int64_t)v15 + 12);
        v11++;
        v17 = v11 - v4;
        v12 -= v16;
    }
    // 0x100003c3c
    *(char *)((v6 >> 32) + (int64_t)&g4) = 0;
    return (int64_t)&g4;
}

// Address range: 0x100003c60 - 0x100003d64
int64_t function_100003c60(void) {
    int64_t v1 = function_100003a74(); // 0x100003c78
    int32_t v2 = v1; // 0x100003c7c
    int32_t v3 = *(int32_t *)((int64_t)g3 + 12); // 0x100003c90
    int32_t v4 = v3 * (v2 - 1); // 0x100003ca0
    int64_t v5 = *(int64_t *)((0x100000000 * v1 >> 29) + (int64_t)&g3); // 0x100003cbc
    int64_t v6; // 0x100003c60
    int32_t result = (int32_t)(*(char *)v5 & (char)v6) << v4; // 0x100003ccc
    int32_t v7 = 1 - v2; // 0x100003ce4
    if (v7 < 0 == (v7 & v2) < 0) {
        // 0x100003d54
        return result;
    }
    int32_t v8 = 1; // 0x100003d3c
    int32_t result2 = result; // 0x100003d2c
    int32_t v9 = v4; // 0x100003d04
    int64_t v10; // 0x100003c60
    int64_t v11 = v10 + 1;
    v9 -= v3;
    result2 |= (int32_t)(*(char *)v11 & *g3) << v9;
    v8++;
    int32_t v12 = v8 - v2; // 0x100003ce4
    while (v12 < 0 != ((v12 ^ v8) & (v8 ^ v2)) < 0) {
        // 0x100003cf4
        v11++;
        v9 -= v3;
        result2 |= (int32_t)(*(char *)v11 & *g3) << v9;
        v8++;
        v12 = v8 - v2;
    }
    // 0x100003d54
    return result2;
}

// Address range: 0x100003d64 - 0x100003ef8
int64_t entry_point(void) {
    int64_t v1 = (float64_t)g1; // bp-48, 0x100003d98
    _printf("Character  Unicode  UTF-8 encoding (hex)\n");
    int32_t v2 = _printf("----------------------------------------\n"); // 0x100003dd8
    if ((int32_t)(int64_t)(float64_t)g1 != 0) {
        int32_t * v3 = (int32_t *)&v1; // 0x100003ebc
        int64_t v4 = function_100003b30(); // 0x100003de8
        function_100003c60();
        int64_t v5; // 0x100003d64
        _printf("%s          U+%-7.4x", (char *)v5, (int32_t)v5);
        int64_t v6; // 0x100003d64
        int64_t v7; // 0x100003d64
        uint64_t v8; // 0x100003d64
        int32_t v9; // 0x100003d64
        int32_t v10; // 0x100003d64
        if (*(char *)v4 != 0) {
            v10 = 0;
            v8 = 0;
            while (v8 < 4 != (3 - v10 & (int32_t)v8) < 0) {
                // 0x100003e6c
                _printf("%hhx ", (char)v5);
                v6 = v8 + 1;
                v7 = v6;
                v9 = v10 + 1;
                if (*(char *)(v6 + v4) == 0) {
                    // break -> 0x100003ea4
                    break;
                }
                v10 = v9;
                v8 = v7;
            }
        }
        int32_t v11 = _printf((char *)0x100003fa3); // 0x100003eac
        v3 = (int32_t *)((int64_t)v3 + 4);
        v2 = v11;
        while (*v3 != 0) {
            // 0x100003de0
            v4 = function_100003b30();
            function_100003c60();
            _printf("%s          U+%-7.4x", (char *)v5, (int32_t)v5);
            if (*(char *)v4 != 0) {
                v10 = 0;
                v8 = 0;
                while (v8 < 4 != (3 - v10 & (int32_t)v8) < 0) {
                    // 0x100003e6c
                    _printf("%hhx ", (char)v5);
                    v6 = v8 + 1;
                    v7 = v6;
                    v9 = v10 + 1;
                    if (*(char *)(v6 + v4) == 0) {
                        // break -> 0x100003ea4
                        break;
                    }
                    v10 = v9;
                    v8 = v7;
                }
            }
            // 0x100003ea4
            v11 = _printf((char *)0x100003fa3);
            v3 = (int32_t *)((int64_t)v3 + 4);
            v2 = v11;
        }
    }
    int64_t v12 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ed0
    if (v12 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003ee4
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003ee8
    return 0;
}

// Address range: 0x100003ef8 - 0x100003f04
int64_t function_100003ef8(int64_t a1) {
    // 0x100003ef8
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f04 - 0x100003f10
void function_100003f04(int32_t status) {
    // 0x100003f04
    _exit(status);
}

// Address range: 0x100003f10 - 0x100003f1c
int32_t function_100003f10(char * format, ...) {
    // 0x100003f10
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8
