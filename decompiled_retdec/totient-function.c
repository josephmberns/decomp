//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003bc8(void);
int32_t function_100003f10(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003bc8 - 0x100003cf0
int64_t function_100003bc8(void) {
    // 0x100003bc8
    int64_t v1; // 0x100003bc8
    int32_t v2 = v1; // 0x100003bcc
    int32_t v3 = 4 - v2; // 0x100003bf4
    int32_t v4 = v2; // 0x100003bfc
    int32_t v5 = v2; // 0x100003bfc
    if (v3 == 0 || v3 < 0 != (v3 & v2) < 0) {
        int32_t v6 = v2;
        int32_t v7 = 2;
        int32_t v8 = v6; // 0x100003c20
        int32_t v9 = v2; // 0x100003c20
        int32_t v10; // 0x100003bc8
        int32_t v11; // 0x100003c58
        if (v2 % v7 == 0) {
            v11 = v2 / v7;
            v10 = v11;
            while (v11 % v7 == 0) {
                // 0x100003c50
                v11 = v10 / v7;
                v10 = v11;
            }
            // 0x100003c64
            v8 = v6 - v6 / v7;
            v9 = v11;
        }
        int32_t v12 = v9;
        int32_t v13 = v8;
        int32_t v14 = v7 == 2 ? 3 : v7 + 2; // 0x100003ca8
        int32_t v15 = v14 * v14; // 0x100003bec
        int32_t v16 = v15 - v12; // 0x100003bf4
        v4 = v13;
        v5 = v12;
        while (v16 == 0 || v16 < 0 != ((v16 ^ v15) & (v12 ^ v15)) < 0) {
            // 0x100003c04
            v6 = v13;
            v7 = v14;
            v10 = v12;
            v8 = v6;
            v9 = v12;
            if (v12 % v7 == 0) {
                v11 = v10 / v7;
                v10 = v11;
                while (v11 % v7 == 0) {
                    // 0x100003c50
                    v11 = v10 / v7;
                    v10 = v11;
                }
                // 0x100003c64
                v8 = v6 - v6 / v7;
                v9 = v11;
            }
            // 0x100003c80
            v12 = v9;
            v13 = v8;
            v14 = v7 == 2 ? 3 : v7 + 2;
            v15 = v14 * v14;
            v16 = v15 - v12;
            v4 = v13;
            v5 = v12;
        }
    }
    int32_t v17 = v5;
    int32_t v18 = v4;
    int32_t v19 = v17 - 1; // 0x100003cb8
    int32_t result = v18; // 0x100003cc0
    if (v19 != 0 && v19 < 0 == (v17 & -v17) < 0) {
        // 0x100003cc8
        result = v18 - v18 / v17;
    }
    // 0x100003ce4
    return result;
}

// Address range: 0x100003cf0 - 0x100003f10
int64_t entry_point(void) {
    // 0x100003cf0
    int64_t v1; // 0x100003cf0
    _printf(" n    %c   prime", (char)v1);
    _printf("\n---------------\n");
    int32_t v2 = 1;
    function_100003bc8();
    _printf("%2d   %2d   %s\n", v1, v1, (char *)v1);
    int32_t v3 = v2 + 1; // 0x100003de4
    while (v2 == 24 || v2 < 24 != (23 - v2 & v3) < 0) {
        // 0x100003d48
        v2 = v3;
        function_100003bc8();
        _printf("%2d   %2d   %s\n", v1, v1, (char *)v1);
        v3 = v2 + 1;
    }
    // 0x100003df0
    _printf("\nNumber of primes up to %6d =%4d\n", v1, v1);
    int32_t v4 = 26; // 0x100003ef4
    int32_t v5; // 0x100003cf0
    while (true) {
      lab_0x100003e3c:
        // 0x100003e3c
        v5 = v4;
        function_100003bc8();
        if (v5 % 0x2710 == 0) {
            // 0x100003ec0
            _printf("\nNumber of primes up to %6d = %4d\n", v1, v1);
            goto lab_0x100003ef0;
        } else {
            switch (v5) {
                case 1000: {
                    // 0x100003ec0
                    _printf("\nNumber of primes up to %6d = %4d\n", v1, v1);
                    goto lab_0x100003ef0;
                }
                case 100: {
                    // 0x100003ec0
                    _printf("\nNumber of primes up to %6d = %4d\n", v1, v1);
                    goto lab_0x100003ef0;
                }
                default: {
                    goto lab_0x100003ef0;
                }
            }
        }
    }
    // 0x100003f00
    return 0;
  lab_0x100003ef0:
    // 0x100003ef0
    v4 = v5 + 1;
    int32_t v6 = v5 - 0x1869f; // 0x100003e2c
    if (v6 != 0 && v6 < 0 == (0x1869e - v5 & v4) < 0) {
        return 0;
    }
    goto lab_0x100003e3c;
}

// Address range: 0x100003f10 - 0x100003f1c
int32_t function_100003f10(char * format, ...) {
    // 0x100003f10
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

