//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003960(void);
int64_t function_100003ab4(void);
int64_t function_100003c24(void);
int64_t function_100003cfc(void);
int64_t function_100003f0c(int64_t a1, int64_t a2, int64_t a3, char * a4);
int64_t function_100003f18(int64_t a1);
int64_t function_100003f24(int64_t * a1, char * a2, int64_t a3);
int32_t function_100003f30(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___sprintf_chk(int64_t a1, int64_t a2, int64_t a3, char * a4);
int64_t ___stack_chk_fail(int64_t a1);
int64_t ___strcpy_chk(int64_t * a1, char * a2, int64_t a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003960 - 0x100003ab4
int64_t function_100003960(void) {
    // 0x100003960
    int64_t v1; // 0x100003960
    uint64_t v2 = v1;
    if (v2 < 2) {
        // 0x100003aa8
        return false;
    }
    if (v2 == 2 * v2 / 2) {
        // 0x100003aa8
        return v2 == 2;
    }
    if (v2 % 3 == 0) {
        // 0x100003aa8
        return v2 == 3;
    }
    // 0x100003a08
    if (v2 <= 25 == (v2 != 25)) {
        // 0x100003aa8
        return true;
    }
    int64_t v3 = 5; // 0x100003a20
    bool result = false; // 0x100003a44
    while (v2 % v3 != 0) {
        // 0x100003a54
        result = false;
        if (v2 % (v3 + 2) == 0) {
            // break -> 0x100003aa8
            break;
        }
        // 0x100003a08
        v3 += 6;
        uint64_t v4 = v3 * v3; // 0x100003a10
        result = true;
        if (v4 >= v2 == (v4 != v2)) {
            // break -> 0x100003aa8
            break;
        }
        result = false;
    }
    // 0x100003aa8
    return result;
}

// Address range: 0x100003ab4 - 0x100003c24
int64_t function_100003ab4(void) {
    // 0x100003ab4
    int64_t v1; // 0x100003ab4
    int32_t v2 = (int32_t)v1 % 100;
    if (v2 < 4 == (3 - v2 & v2) < 0) {
        int32_t v3 = v2 - 20; // 0x100003af8
        if (v3 == 0 || v3 < 0 != (19 - v2 & v2) < 0) {
            // 0x100003c18
            return ___sprintf_chk(v1, 0, -1, "%dth");
        }
    }
    int64_t v4; // bp-31, 0x100003ab4
    switch (v2 % 10) {
        case 1: {
            // 0x100003b84
            ___strcpy_chk(&v4, "st", 3);
            // break -> 0x100003be4
            break;
        }
        case 2: {
            // 0x100003b9c
            ___strcpy_chk(&v4, "nd", 3);
            // break -> 0x100003be4
            break;
        }
        case 3: {
            // 0x100003bb4
            ___strcpy_chk(&v4, "rd", 3);
            // break -> 0x100003be4
            break;
        }
        default: {
            // 0x100003bcc
            ___strcpy_chk(&v4, "th", 3);
            // break -> 0x100003be4
            break;
        }
    }
    // 0x100003c18
    return ___sprintf_chk(v1, 0, -1, "%d%s");
}

// Address range: 0x100003c24 - 0x100003cfc
int64_t function_100003c24(void) {
    // 0x100003c24
    int64_t v1; // 0x100003c24
    uint64_t v2 = v1;
    if (v2 < 10) {
        // 0x100003cec
        return 1;
    }
    // 0x100003c60
    if ((int32_t)function_100003960() == 0) {
        // 0x100003cec
        return 0;
    }
    int64_t v3 = 10; // 0x100003ca0
    int64_t result = 1; // 0x100003cbc
    while (v2 / v3 >= 10) {
        // 0x100003ccc
        v3 *= 10;
        result = 0;
        if ((int32_t)function_100003960() == 0) {
            // break -> 0x100003cec
            break;
        }
        result = 1;
    }
    // 0x100003cec
    return result;
}

// Address range: 0x100003cfc - 0x100003ea0
int64_t function_100003cfc(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003d10
    int64_t v2; // 0x100003cfc
    int32_t v3 = v2; // 0x100003d18
    int32_t v4; // 0x100003cfc
    int64_t v5; // 0x100003cfc
    if (v3 < 2 == (1 - v3 & v3) < 0) {
        int64_t v6 = v2 & 0xffffffff;
        function_100003ab4();
        function_100003ab4();
        int32_t v7 = _printf("\n%s through %s magnanimous numbers:\n", (char *)v6, (char *)v2); // 0x100003da0
        v5 = v6;
        v4 = v7;
    } else {
        // 0x100003d44
        v4 = _printf("\nFirst %d magnanimous numbers:\n", v2);
    }
    int32_t v8 = v2; // 0x100003db0
    int32_t v9 = -v8; // 0x100003db4
    int64_t v10 = v4; // 0x100003dbc
    if (v9 < 0 != (v9 & v8) < 0) {
        int32_t v11 = 0;
        int64_t v12 = function_100003c24(); // 0x100003dc8
        int32_t v13 = v11; // 0x100003dd4
        int64_t v14 = v12; // 0x100003dd4
        int32_t v15; // 0x100003de0
        int32_t v16; // 0x100003dec
        if ((int32_t)v12 != 0) {
            // 0x100003ddc
            v15 = v11 + 1;
            v16 = v15 - v3;
            v13 = v15;
            v14 = v12;
            if (v16 < 0 == ((v16 ^ v15) & (v15 ^ v3)) < 0) {
                // 0x100003dfc
                v13 = v15;
                v14 = _printf("%*llu ", v5, v2);
                if (v15 % (int32_t)v2 == 0) {
                    // 0x100003e44
                    v13 = v15;
                    v14 = _printf((char *)0x100003f9e);
                }
            }
        }
        int32_t v17 = v13;
        int32_t v18 = v17 - v8; // 0x100003db4
        v10 = v14;
        while (v18 < 0 != ((v18 ^ v17) & (v17 ^ v8)) < 0) {
            // 0x100003dc4
            v11 = v17;
            v12 = function_100003c24();
            v13 = v11;
            v14 = v12;
            if ((int32_t)v12 != 0) {
                // 0x100003ddc
                v15 = v11 + 1;
                v16 = v15 - v3;
                v13 = v15;
                v14 = v12;
                if (v16 < 0 == ((v16 ^ v15) & (v15 ^ v3)) < 0) {
                    // 0x100003dfc
                    v13 = v15;
                    v14 = _printf("%*llu ", v5, v2);
                    if (v15 % (int32_t)v2 == 0) {
                        // 0x100003e44
                        v13 = v15;
                        v14 = _printf((char *)0x100003f9e);
                    }
                }
            }
            // 0x100003e60
            v17 = v13;
            v18 = v17 - v8;
            v10 = v14;
        }
    }
    int64_t result = v10; // 0x100003e88
    if (*(int64_t *)*(int64_t *)0x100004010 != v1) {
        // 0x100003e90
        result = ___stack_chk_fail(v10);
    }
    // 0x100003e94
    return result;
}

// Address range: 0x100003ea0 - 0x100003f0c
int64_t entry_point(void) {
    // 0x100003ea0
    function_100003cfc();
    function_100003cfc();
    function_100003cfc();
    return 0;
}

// Address range: 0x100003f0c - 0x100003f18
int64_t function_100003f0c(int64_t a1, int64_t a2, int64_t a3, char * a4) {
    // 0x100003f0c
    return ___sprintf_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f18 - 0x100003f24
int64_t function_100003f18(int64_t a1) {
    // 0x100003f18
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f24 - 0x100003f30
int64_t function_100003f24(int64_t * a1, char * a2, int64_t a3) {
    // 0x100003f24
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(char * format, ...) {
    // 0x100003f30
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9
