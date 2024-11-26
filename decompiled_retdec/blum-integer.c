//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003860(void);
int64_t function_1000039ec(void);
int64_t function_100003ecc(int64_t a1);
int32_t function_100003ed8(char * format, ...);
char * function_100003ee4(int32_t category, char * locale);

// --------------------- Global Variables ---------------------

char * g1; // 0x100003f10
int32_t * g2 = (int32_t *)0x200000004; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
char * _setlocale(int32_t a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003860 - 0x1000039ec
int64_t function_100003860(void) {
    // 0x100003860
    int64_t v1; // 0x100003860
    int32_t v2 = v1; // 0x100003864
    if (v2 < 2 != (1 - v2 & v2) < 0) {
        // 0x1000039dc
        return false;
    }
    if (2 * v2 / 2 == v2) {
        // 0x1000039dc
        return v2 == 2;
    }
    if (v2 % 3 == 0) {
        // 0x1000039dc
        return v2 == 3;
    }
    int32_t v3 = 25 - v2; // 0x10000392c
    if (v3 != 0 && v3 < 0 == (v3 & v2) < 0) {
        // 0x1000039dc
        return true;
    }
    int32_t v4 = 5; // 0x100003934
    bool result = false; // 0x100003958
    while (v2 % v4 != 0) {
        // 0x100003974
        result = false;
        if (v2 % (v4 + 2) == 0) {
            // break -> 0x1000039dc
            break;
        }
        // 0x10000391c
        v4 += 6;
        int32_t v5 = v4 * v4; // 0x100003924
        int32_t v6 = v5 - v2; // 0x10000392c
        result = true;
        if (v6 != 0 && v6 < 0 == ((v6 ^ v5) & (v5 ^ v2)) < 0) {
            // break -> 0x1000039dc
            break;
        }
        result = false;
    }
    // 0x1000039dc
    return result;
}

// Address range: 0x1000039ec - 0x100003b2c
int64_t function_1000039ec(void) {
    // 0x1000039ec
    int64_t v1; // 0x1000039ec
    int32_t result = v1; // 0x1000039f0
    if (result == 1) {
        // 0x100003b20
        return 1;
    }
    // 0x100003a14
    if (result % 3 == 0) {
        // 0x100003b20
        return 3;
    }
    // 0x100003a44
    if (result % 5 == 0) {
        // 0x100003b20
        return 5;
    }
    int32_t v2 = 49 - result; // 0x100003a94
    int32_t v3 = 0; // 0x100003a9c
    if (v2 != 0 && v2 < 0 == (v2 & result) < 0) {
        // 0x100003b20
        return result;
    }
    int32_t v4 = 7; // 0x100003a9c
    int32_t result2 = v4; // 0x100003ac0
    while (result % v4 != 0) {
        int32_t v5 = *(int32_t *)(4 * (int64_t)v3 + (int64_t)&g2); // 0x100003ae0
        v4 += v5;
        int32_t v6 = v3 + 1; // 0x100003af4
        int32_t v7 = v4 * v4; // 0x100003a8c
        int32_t v8 = v7 - result; // 0x100003a94
        v3 = v6 - 8 * v6 / 8;
        result2 = result;
        if (v8 != 0 && v8 < 0 == ((v8 ^ v7) & (v7 ^ result)) < 0) {
            // break -> 0x100003b20
            break;
        }
        result2 = v4;
    }
    // 0x100003b20
    return result2;
}

// Address range: 0x100003b2c - 0x100003ecc
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003b44
    int64_t v2 = 0; // bp-256, 0x100003b5c
    _setlocale(4, (char *)&g1);
    int64_t v3; // bp-240, 0x100003b2c
    int64_t v4 = &v3;
    int64_t v5 = &v2;
    int32_t v6 = 1; // 0x100003b84
    int32_t v7 = 0; // 0x100003b84
    while (true) {
        int32_t v8 = v7;
        int32_t v9 = v6;
        int32_t v10 = function_1000039ec(); // 0x100003b90
        v7 = v8;
        if (v10 - 4 * v10 / 4 == 3) {
            int32_t v11 = v9 / v10; // 0x100003bc0
            v7 = v8;
            if (v11 != v10) {
                // 0x100003be0
                v7 = v8;
                if (v11 - 4 * v11 / 4 == 3) {
                    // 0x100003c04
                    v7 = v8;
                    if (function_100003860() % 2 != 0) {
                        if (v8 < 50 != (49 - v8 & v8) < 0) {
                            // 0x100003c28
                            *(int32_t *)(4 * (int64_t)v8 + v4) = v9;
                        }
                        int32_t * v12 = (int32_t *)(4 * (int64_t)(v9 % 10 / 3) + v5); // 0x100003c60
                        *v12 = *v12 + 1;
                        int32_t v13 = v8 + 1; // 0x100003c70
                        if (v8 == 49) {
                            // 0x100003c8c
                            _printf("First 50 Blum integers:\n");
                            int32_t v14 = 0; // 0x100003cdc
                            _printf("%3d ", (int64_t)&g1);
                            v14++;
                            if (v14 % 10 == 0) {
                                // 0x100003d00
                                _printf("\n");
                            }
                            while (v14 != 50) {
                                // 0x100003cb4
                                _printf("%3d ", (int64_t)&g1);
                                v14++;
                                if (v14 % 10 == 0) {
                                    // 0x100003d00
                                    _printf("\n");
                                }
                            }
                            // 0x100003d24
                            _printf("\n");
                            v7 = v13;
                        } else {
                            // 0x100003d34
                            v7 = v13;
                            if (v13 == 0x68cc || v13 % 0x186a0 == 0) {
                                // 0x100003d74
                                int64_t v15; // 0x100003b2c
                                _printf("The %'7dth Blum integer is: %'9d\n", (int64_t)&g1, v15);
                                v7 = v13;
                                if (v13 == 0x61a80) {
                                    // break -> 0x100003db8
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
        // 0x100003e54
        v6 = (v9 % 5 != 3 ? 2 : 4) + v9;
    }
    // 0x100003db8
    _printf("\n%% distribution of the first 400,000 Blum integers:\n");
    int32_t v16; // 0x100003e28
    for (int32_t i = 0; i < 4; i++) {
        int128_t v17 = __asm_sshll(0.0f, 0); // 0x100003df0
        v16 = _printf("  %6.3f%% end in %d\n", (float64_t)(int64_t)v17, (int64_t)&g1);
    }
    // 0x100003e94
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003eb4
        ___stack_chk_fail((int64_t)v16);
    }
    // 0x100003eb8
    return 0;
}

// Address range: 0x100003ecc - 0x100003ed8
int64_t function_100003ecc(int64_t a1) {
    // 0x100003ecc
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003ed8 - 0x100003ee4
int32_t function_100003ed8(char * format, ...) {
    // 0x100003ed8
    return _printf(format);
}

// Address range: 0x100003ee4 - 0x100003ef0
char * function_100003ee4(int32_t category, char * locale) {
    // 0x100003ee4
    return _setlocale(category, locale);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6
