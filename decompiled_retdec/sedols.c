//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b80(void);
int64_t function_100003ec8(void);
char * function_100003ed4(char * s, int32_t n, struct _IO_FILE * stream);
int32_t function_100003ee0(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003eec(int32_t c);
int32_t function_100003ef8(int32_t c);
int32_t function_100003f04(char * format, ...);
int32_t function_100003f10(char * s, char * reject);
int32_t function_100003f1c(char * s);
int32_t function_100003f28(int32_t c);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x300000001; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
char * _fgets(char * a1, int32_t a2, struct _IO_FILE * a3);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _isalpha(int32_t a1);
int32_t _isdigit(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _strcspn(char * a1, char * a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003b80 - 0x100003db0
int64_t function_100003b80(void) {
    // 0x100003b80
    int64_t v1; // 0x100003b80
    char * v2 = (char *)v1; // 0x100003b8c
    int32_t v3 = _strlen(v2); // 0x100003b94
    if (v3 == 7) {
        int64_t v4 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003bc0
        _fprintf((struct _IO_FILE *)v4, "SEDOL code already checksummed? (%s)\n", (char *)v1);
        // 0x100003da0
        return (int32_t)(*(char *)(v1 + 6) % 128);
    }
    int32_t v5 = v3 - 7; // 0x100003bf4
    if (v5 == 0 || v5 < 0 != (6 - v3 & v3) < 0) {
        if (v3 < 6 == (5 - v3 & v3) < 0) {
            int64_t v6 = 0; // 0x100003c30
            int32_t v7 = 0; // 0x100003c30
            int32_t v8 = 0; // 0x100003c30
            if (_strcspn(v2, (char *)0x3f34) == 6) {
                int32_t result; // 0x100003b80
                while (true) {
                    int32_t v9 = v7;
                    uint64_t v10 = v6;
                    char * c = (char *)(v10 + v1); // 0x100003c8c
                    int32_t v11 = _isdigit((int32_t)*c); // 0x100003c90
                    int32_t v12 = (int32_t)*c;
                    int32_t v13; // 0x100003b80
                    if (v11 == 0) {
                        // 0x100003cd8
                        if (_isalpha(v12) == 0) {
                            // break -> 0x100003d34
                            break;
                        }
                        int32_t v14 = _toupper((int32_t)*c); // 0x100003d04
                        int32_t v15 = *(int32_t *)(4 * v10 + (int64_t)&g1); // 0x100003d1c
                        v13 = (v14 - 55) * v15;
                    } else {
                        int32_t v16 = *(int32_t *)(4 * v10 + (int64_t)&g1); // 0x100003cc0
                        v13 = v16 * (v12 - 48);
                    }
                    int32_t v17 = v13 + v8;
                    int64_t v18 = v10 + 1;
                    v6 = v18;
                    v7 = v9 + 1;
                    v8 = v17;
                    if (v10 < 5 == (4 - v9 & (int32_t)v18) < 0) {
                        // 0x100003d70
                        result = (10 - v17 % 10) % 10 + 48;
                        return result;
                    }
                }
                int64_t v19 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003d3c
                _fprintf((struct _IO_FILE *)v19, "SEDOL with not alphanumeric digit\n");
                result = -1;
              lab_0x100003da0:
                // 0x100003da0
                return result;
            }
        }
    }
    int64_t v20 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003c40
    _fprintf((struct _IO_FILE *)v20, "not a SEDOL code? (%s)\n", (char *)v1);
    // 0x100003da0
    return -1;
}

// Address range: 0x100003db0 - 0x100003ec8
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004018; // 0x100003ddc
    int64_t v2; // bp-34, 0x100003db0
    if (_fgets((char *)&v2, 10, (struct _IO_FILE *)v1) != NULL) {
        int64_t v3 = &v2; // 0x100003e00
        int32_t v4 = _strlen((char *)&v2) - 1; // 0x100003e18
        if (*(char *)((int64_t)v4 + v3) == 10) {
            // 0x100003e30
            *(char *)((int64_t)v4 + v3) = 0;
        }
        // 0x100003e48
        if ((int32_t)function_100003b80() >= 1) {
            // 0x100003e68
            _printf("%s%c\n", (char *)10, (char)v1);
        }
        int64_t v5 = *(int64_t *)*(int64_t *)0x100004018; // 0x100003ddc
        while (_fgets((char *)&v2, 10, (struct _IO_FILE *)v5) != NULL) {
            int64_t v6 = v5;
            v4 = _strlen((char *)&v2) - 1;
            if (*(char *)((int64_t)v4 + v3) == 10) {
                // 0x100003e30
                *(char *)((int64_t)v4 + v3) = 0;
            }
            // 0x100003e48
            if ((int32_t)function_100003b80() >= 1) {
                // 0x100003e68
                _printf("%s%c\n", (char *)10, (char)v6);
            }
            // 0x100003e90
            v5 = *(int64_t *)*(int64_t *)0x100004018;
        }
    }
    int64_t v7 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ea0
    if (v7 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003eb4
        ___stack_chk_fail();
    }
    // 0x100003eb8
    return 0;
}

// Address range: 0x100003ec8 - 0x100003ed4
int64_t function_100003ec8(void) {
    // 0x100003ec8
    return ___stack_chk_fail();
}

// Address range: 0x100003ed4 - 0x100003ee0
char * function_100003ed4(char * s, int32_t n, struct _IO_FILE * stream) {
    // 0x100003ed4
    return _fgets(s, n, stream);
}

// Address range: 0x100003ee0 - 0x100003eec
int32_t function_100003ee0(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003ee0
    return _fprintf(stream, format);
}

// Address range: 0x100003eec - 0x100003ef8
int32_t function_100003eec(int32_t c) {
    // 0x100003eec
    return _isalpha(c);
}

// Address range: 0x100003ef8 - 0x100003f04
int32_t function_100003ef8(int32_t c) {
    // 0x100003ef8
    return _isdigit(c);
}

// Address range: 0x100003f04 - 0x100003f10
int32_t function_100003f04(char * format, ...) {
    // 0x100003f04
    return _printf(format);
}

// Address range: 0x100003f10 - 0x100003f1c
int32_t function_100003f10(char * s, char * reject) {
    // 0x100003f10
    return _strcspn(s, reject);
}

// Address range: 0x100003f1c - 0x100003f28
int32_t function_100003f1c(char * s) {
    // 0x100003f1c
    return _strlen(s);
}

// Address range: 0x100003f28 - 0x100003f34
int32_t function_100003f28(int32_t c) {
    // 0x100003f28
    return _toupper(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 11

