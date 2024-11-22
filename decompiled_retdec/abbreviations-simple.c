//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000033fc(void);
int64_t function_10000349c(void);
int64_t function_100003510(void);
int64_t function_10000354c(void);
int64_t function_10000359c(void);
int64_t function_1000035f4(void);
int64_t function_100003810(void);
int64_t function_10000398c(void);
int64_t function_1000039ec(void);
int64_t function_100003a6c(void);
int64_t function_100003bf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
void function_100003c00(int32_t status);
int32_t function_100003c0c(struct _IO_FILE * stream, char * format, ...);
void function_100003c18(int64_t * ptr);
int32_t function_100003c24(int32_t c);
int64_t * function_100003c30(int32_t size);
int32_t function_100003c3c(char * format, ...);
int64_t * function_100003c48(int64_t * ptr, int32_t size);
int32_t function_100003c54(char * s);
int32_t function_100003c60(char * s1, char * s2, int32_t n);
int32_t function_100003c6c(char * nptr, char ** endptr, int32_t base);
int32_t function_100003c78(int32_t c);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memcpy_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
void _free(int64_t * a1);
int32_t _isspace(int32_t a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int64_t * _realloc(int64_t * a1, int32_t a2);
int32_t _strlen(char * a1);
int32_t _strncmp(char * a1, char * a2, int32_t a3);
int32_t _strtoul(char * a1, char ** a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x1000033fc - 0x10000349c
int64_t function_1000033fc(void) {
    // 0x1000033fc
    int64_t v1; // 0x1000033fc
    char * v2 = (char *)v1; // 0x10000340c
    int32_t v3 = _strlen(v2); // 0x100003414
    uint64_t v4 = (int64_t)v3; // 0x100003414
    if (*(int64_t *)(v1 + 16) > v4) {
        // 0x100003488
        return 0;
    }
    uint64_t v5 = *(int64_t *)(v1 + 8); // 0x100003448
    int64_t result = 0; // 0x10000345c
    if (v5 <= v4 != v5 != v4) {
        // 0x100003464
        result = _strncmp(v2, v2, v3) == 0;
    }
    // 0x100003488
    return result;
}

// Address range: 0x10000349c - 0x100003510
int64_t function_10000349c(void) {
    // 0x10000349c
    int64_t result; // 0x10000349c
    if (result == 0) {
        // 0x100003500
        return result;
    }
    int64_t v1 = 0; // 0x1000034c8
    char * c = (char *)(v1 + result); // 0x1000034d8
    *c = (char)_toupper((int32_t)*c);
    v1++;
    while (v1 != result) {
        // 0x1000034d0
        c = (char *)(v1 + result);
        *c = (char)_toupper((int32_t)*c);
        v1++;
    }
    // 0x100003500
    return result;
}

// Address range: 0x100003510 - 0x10000354c
int64_t function_100003510(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003528
    int64_t v2; // 0x100003510
    _fprintf((struct _IO_FILE *)v1, "%s\n", (char *)v2);
    _exit(1);
    return &g1;
}

// Address range: 0x10000354c - 0x10000359c
int64_t function_10000354c(void) {
    // 0x10000354c
    int64_t v1; // 0x10000354c
    int64_t * v2 = _malloc((int32_t)v1); // 0x100003560
    if (v2 != NULL) {
        // 0x10000358c
        return (int64_t)v2;
    }
    // 0x10000357c
    function_100003510();
    // UNREACHABLE
}

// Address range: 0x10000359c - 0x1000035f4
int64_t function_10000359c(void) {
    // 0x10000359c
    int64_t v1; // 0x10000359c
    int64_t * v2 = _realloc((int64_t *)v1, (int32_t)v1); // 0x1000035b8
    if (v2 != NULL) {
        // 0x1000035e4
        return (int64_t)v2;
    }
    // 0x1000035d4
    function_100003510();
    // UNREACHABLE
}

// Address range: 0x1000035f4 - 0x100003810
int64_t function_1000035f4(void) {
    int64_t result = function_10000354c(); // 0x10000361c
    int64_t v1; // 0x1000035f4
    int32_t v2 = _strlen((char *)v1); // 0x100003628
    uint64_t v3 = (int64_t)v2; // 0x100003628
    int64_t v4 = 0; // 0x100003648
    int64_t result2 = result; // 0x100003648
    int64_t v5 = 16; // 0x100003648
    int64_t v6 = 0; // 0x100003648
    if (v2 == 0) {
        // 0x1000037f4
        *(int64_t *)v1 = 0;
        return result;
    }
    int64_t v7; // 0x1000035f4
    int64_t v8; // 0x1000035f4
    int64_t v9; // 0x1000035f4
    int64_t v10; // 0x1000035f4
    int64_t v11; // 0x1000035f4
    while (true) {
      lab_0x10000365c:
        // 0x10000365c
        v7 = v6;
        v8 = v5;
        v11 = v4;
        v10 = v11;
        while (v11 < v3) {
            int64_t v12 = v11 + 1; // 0x1000036a0
            v9 = v11;
            if (_isspace((int32_t)*(char *)(v11 + v1)) == 0) {
                goto lab_0x100003708;
            }
            v11 = v12;
            v10 = v11;
        }
        goto lab_0x100003728;
    }
  lab_0x1000037f4_2:;
    // 0x1000037f4
    int64_t v13; // 0x1000035f4
    *(int64_t *)v1 = v13;
    return result2;
  lab_0x100003708:;
    int64_t v14 = v9;
    v10 = v14;
    if (_isspace((int32_t)*(char *)(v14 + v1)) != 0) {
        goto lab_0x100003728;
    } else {
        int64_t v15 = v14 + 1; // 0x10000371c
        v9 = v15;
        v10 = v15;
        if (v15 < v3) {
            goto lab_0x100003708;
        } else {
            goto lab_0x100003728;
        }
    }
  lab_0x100003728:
    // 0x100003728
    v4 = v10;
    int64_t v16 = v4 - v11; // 0x100003730
    v13 = v7;
    if (v16 == 0) {
        // break -> 0x1000037f4
        goto lab_0x1000037f4_2;
    }
    int64_t v17 = function_10000354c(); // 0x100003758
    ___memcpy_chk(v17, v11 + v1, v16, -1);
    *(char *)(v17 + v16) = 0;
    v5 = v8;
    int64_t v18 = result2; // 0x1000037ac
    if (v8 == v7) {
        // 0x1000037b4
        v5 = 2 * v8;
        v18 = function_10000359c();
    }
    // 0x1000037d8
    result2 = v18;
    v6 = v7 + 1;
    *(int64_t *)(result2 + 8 * v7) = v17;
    v13 = v6;
    if (v4 >= v3) {
        // break -> 0x1000037f4
        goto lab_0x1000037f4_2;
    }
    goto lab_0x10000365c;
}

// Address range: 0x100003810 - 0x10000398c
int64_t function_100003810(void) {
    // 0x100003810
    _free((int64_t *)function_1000035f4());
    return 0;
}

// Address range: 0x10000398c - 0x1000039ec
int64_t function_10000398c(void) {
    // 0x10000398c
    int64_t v1; // 0x10000398c
    if (v1 == 0) {
        // 0x1000039e0
        return 0;
    }
    int64_t v2; // 0x10000398c
    int64_t v3 = *(int64_t *)(v2 + 24); // 0x1000039b8
    int64_t * v4 = (int64_t *)v2; // 0x1000039c4
    _free((int64_t *)*v4);
    _free(v4);
    v2 = v3;
    while (v3 != 0) {
        // 0x1000039b4
        v3 = *(int64_t *)(v2 + 24);
        v4 = (int64_t *)v2;
        _free((int64_t *)*v4);
        _free(v4);
        v2 = v3;
    }
    // 0x1000039e0
    return &g1;
}

// Address range: 0x1000039ec - 0x100003a6c
int64_t function_1000039ec(void) {
    // 0x1000039ec
    int64_t v1; // 0x1000039ec
    if (v1 == 0) {
        // 0x100003a5c
        return 0;
    }
    int64_t v2; // 0x1000039ec
    int64_t result = v2; // 0x100003a2c
    while (function_1000033fc() % 2 == 0) {
        int64_t v3 = *(int64_t *)(v2 + 24); // 0x100003a48
        v2 = v3;
        result = 0;
        if (v3 == 0) {
            // break -> 0x100003a5c
            break;
        }
        result = v2;
    }
    // 0x100003a5c
    return result;
}

// Address range: 0x100003a6c - 0x100003b9c
int64_t function_100003a6c(void) {
    // 0x100003a6c
    int64_t v1; // 0x100003a6c
    _printf(" input: %s\n", (char *)v1);
    _printf("output:");
    _free((int64_t *)function_1000035f4());
    return _printf("\n");
}

// Address range: 0x100003b9c - 0x100003bf4
int64_t entry_point(void) {
    // 0x100003b9c
    function_100003810();
    function_100003a6c();
    function_10000398c();
    return 0;
}

// Address range: 0x100003bf4 - 0x100003c00
int64_t function_100003bf4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003bf4
    return ___memcpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003c00 - 0x100003c0c
void function_100003c00(int32_t status) {
    // 0x100003c00
    _exit(status);
}

// Address range: 0x100003c0c - 0x100003c18
int32_t function_100003c0c(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003c0c
    return _fprintf(stream, format);
}

// Address range: 0x100003c18 - 0x100003c24
void function_100003c18(int64_t * ptr) {
    // 0x100003c18
    _free(ptr);
}

// Address range: 0x100003c24 - 0x100003c30
int32_t function_100003c24(int32_t c) {
    // 0x100003c24
    return _isspace(c);
}

// Address range: 0x100003c30 - 0x100003c3c
int64_t * function_100003c30(int32_t size) {
    // 0x100003c30
    return _malloc(size);
}

// Address range: 0x100003c3c - 0x100003c48
int32_t function_100003c3c(char * format, ...) {
    // 0x100003c3c
    return _printf(format);
}

// Address range: 0x100003c48 - 0x100003c54
int64_t * function_100003c48(int64_t * ptr, int32_t size) {
    // 0x100003c48
    return _realloc(ptr, size);
}

// Address range: 0x100003c54 - 0x100003c60
int32_t function_100003c54(char * s) {
    // 0x100003c54
    return _strlen(s);
}

// Address range: 0x100003c60 - 0x100003c6c
int32_t function_100003c60(char * s1, char * s2, int32_t n) {
    // 0x100003c60
    return _strncmp(s1, s2, n);
}

// Address range: 0x100003c6c - 0x100003c78
int32_t function_100003c6c(char * nptr, char ** endptr, int32_t base) {
    // 0x100003c6c
    return _strtoul(nptr, endptr, base);
}

// Address range: 0x100003c78 - 0x100003c84
int32_t function_100003c78(int32_t c) {
    // 0x100003c78
    return _toupper(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 23

