//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003f58(char * a1, char * a2, int64_t a3, int64_t a4);
int32_t function_100003f64(char * format, ...);
int32_t function_100003f70(int32_t c);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___assert_rtn(char * a1, char * a2, int64_t a3, int64_t a4);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003df0 - 0x100003f58
int64_t entry_point(void) {
    // 0x100003df0
    int64_t v1; // 0x100003df0
    uint32_t v2 = (int32_t)v1 - 1; // 0x100003e10
    int32_t v3 = 1 << v2; // 0x100003e14
    int32_t v4 = v3 - 1;
    uint32_t v5; // 0x100003df0
    int32_t v6; // 0x100003df0
    if (((v4 & 1 - v3) + v4 & v4) != 0) {
        // 0x100003ed0
        if (v2 != 0) {
            v5 = v3;
            v6 = v5 / 2;
            if ((v6 & v4) != 0) {
                // 0x100003f04
                _printf("%s ", (char *)v1);
            }
            // 0x100003f2c
            while (v5 >= 4) {
                // 0x100003eec
                v5 = v6;
                v6 = v5 / 2;
                if ((v6 & v4) != 0) {
                    // 0x100003f04
                    _printf("%s ", (char *)v1);
                }
            }
        }
        // 0x100003f3c
        _putchar(10);
    }
    while (v4 != 0) {
        int32_t v7 = v4;
        v4 = v7 - 1;
        if (((v4 & 1 - v7) + v4 & v4) != 0) {
            // 0x100003ed0
            if (v2 != 0) {
                v5 = v3;
                v6 = v5 / 2;
                if ((v6 & v4) != 0) {
                    // 0x100003f04
                    _printf("%s ", (char *)v1);
                }
                // 0x100003f2c
                while (v5 >= 4) {
                    // 0x100003eec
                    v5 = v6;
                    v6 = v5 / 2;
                    if ((v6 & v4) != 0) {
                        // 0x100003f04
                        _printf("%s ", (char *)v1);
                    }
                }
            }
            // 0x100003f3c
            _putchar(10);
        }
    }
    // 0x100003f48
    return 0;
}

// Address range: 0x100003f58 - 0x100003f64
int64_t function_100003f58(char * a1, char * a2, int64_t a3, int64_t a4) {
    // 0x100003f58
    return ___assert_rtn(a1, a2, a3, a4);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * format, ...) {
    // 0x100003f64
    return _printf(format);
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(int32_t c) {
    // 0x100003f70
    return _putchar(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4
