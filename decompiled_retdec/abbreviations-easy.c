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
int64_t function_100003494(void);
int64_t function_100003534(void);
int64_t function_1000035a8(void);
int64_t function_100003630(void);
int64_t function_10000366c(void);
int64_t function_1000036bc(void);
int64_t function_100003714(void);
int64_t function_100003930(void);
int64_t function_100003a14(void);
int64_t function_100003a74(void);
int64_t function_100003af4(void);
int64_t function_100003c7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
void function_100003c88(int32_t status);
int32_t function_100003c94(struct _IO_FILE * stream, char * format, ...);
void function_100003ca0(int64_t * ptr);
int32_t function_100003cac(int32_t c);
int32_t function_100003cb8(int32_t c);
int64_t * function_100003cc4(int32_t size);
int32_t function_100003cd0(char * format, ...);
int64_t * function_100003cdc(int64_t * ptr, int32_t size);
int32_t function_100003ce8(char * s);
int32_t function_100003cf4(char * s1, char * s2, int32_t n);
int32_t function_100003d00(int32_t c);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memcpy_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
void _free(int64_t * a1);
int32_t _isspace(int32_t a1);
int32_t _isupper(int32_t a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int64_t * _realloc(int64_t * a1, int32_t a2);
int32_t _strlen(char * a1);
int32_t _strncmp(char * a1, char * a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x100003494 - 0x100003534
int64_t function_100003494(void) {
    // 0x100003494
    int64_t v1; // 0x100003494
    char * v2 = (char *)v1; // 0x1000034a4
    int32_t v3 = _strlen(v2); // 0x1000034ac
    uint64_t v4 = (int64_t)v3; // 0x1000034ac
    if (*(int64_t *)(v1 + 16) > v4) {
        // 0x100003520
        return 0;
    }
    uint64_t v5 = *(int64_t *)(v1 + 8); // 0x1000034e0
    int64_t result = 0; // 0x1000034f4
    if (v5 <= v4 != v5 != v4) {
        // 0x1000034fc
        result = _strncmp(v2, v2, v3) == 0;
    }
    // 0x100003520
    return result;
}

// Address range: 0x100003534 - 0x1000035a8
int64_t function_100003534(void) {
    // 0x100003534
    int64_t result; // 0x100003534
    if (result == 0) {
        // 0x100003598
        return result;
    }
    int64_t v1 = 0; // 0x100003560
    char * c = (char *)(v1 + result); // 0x100003570
    *c = (char)_toupper((int32_t)*c);
    v1++;
    while (v1 != result) {
        // 0x100003568
        c = (char *)(v1 + result);
        *c = (char)_toupper((int32_t)*c);
        v1++;
    }
    // 0x100003598
    return result;
}

// Address range: 0x1000035a8 - 0x100003630
int64_t function_1000035a8(void) {
    // 0x1000035a8
    int64_t v1; // 0x1000035a8
    uint64_t v2 = v1;
    if (v2 == 0) {
        // 0x100003620
        return 0;
    }
    int64_t v3 = 0; // 0x1000035dc
    int64_t result = v3; // 0x100003608
    while (_isupper((int32_t)*(char *)(v3 + v1)) != 0) {
        // 0x100003610
        v3++;
        result = v3;
        if (v3 >= v2) {
            // break -> 0x100003620
            break;
        }
        result = v3;
    }
    // 0x100003620
    return result;
}

// Address range: 0x100003630 - 0x10000366c
int64_t function_100003630(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003648
    int64_t v2; // 0x100003630
    _fprintf((struct _IO_FILE *)v1, "%s\n", (char *)v2);
    _exit(1);
    return &g1;
}

// Address range: 0x10000366c - 0x1000036bc
int64_t function_10000366c(void) {
    // 0x10000366c
    int64_t v1; // 0x10000366c
    int64_t * v2 = _malloc((int32_t)v1); // 0x100003680
    if (v2 != NULL) {
        // 0x1000036ac
        return (int64_t)v2;
    }
    // 0x10000369c
    function_100003630();
    // UNREACHABLE
}

// Address range: 0x1000036bc - 0x100003714
int64_t function_1000036bc(void) {
    // 0x1000036bc
    int64_t v1; // 0x1000036bc
    int64_t * v2 = _realloc((int64_t *)v1, (int32_t)v1); // 0x1000036d8
    if (v2 != NULL) {
        // 0x100003704
        return (int64_t)v2;
    }
    // 0x1000036f4
    function_100003630();
    // UNREACHABLE
}

// Address range: 0x100003714 - 0x100003930
int64_t function_100003714(void) {
    int64_t result = function_10000366c(); // 0x10000373c
    int64_t v1; // 0x100003714
    int32_t v2 = _strlen((char *)v1); // 0x100003748
    uint64_t v3 = (int64_t)v2; // 0x100003748
    int64_t v4 = 0; // 0x100003768
    int64_t result2 = result; // 0x100003768
    int64_t v5 = 16; // 0x100003768
    int64_t v6 = 0; // 0x100003768
    if (v2 == 0) {
        // 0x100003914
        *(int64_t *)v1 = 0;
        return result;
    }
    int64_t v7; // 0x100003714
    int64_t v8; // 0x100003714
    int64_t v9; // 0x100003714
    int64_t v10; // 0x100003714
    int64_t v11; // 0x100003714
    while (true) {
      lab_0x10000377c:
        // 0x10000377c
        v7 = v6;
        v8 = v5;
        v11 = v4;
        v10 = v11;
        while (v11 < v3) {
            int64_t v12 = v11 + 1; // 0x1000037c0
            v9 = v11;
            if (_isspace((int32_t)*(char *)(v11 + v1)) == 0) {
                goto lab_0x100003828;
            }
            v11 = v12;
            v10 = v11;
        }
        goto lab_0x100003848;
    }
  lab_0x100003914_2:;
    // 0x100003914
    int64_t v13; // 0x100003714
    *(int64_t *)v1 = v13;
    return result2;
  lab_0x100003828:;
    int64_t v14 = v9;
    v10 = v14;
    if (_isspace((int32_t)*(char *)(v14 + v1)) != 0) {
        goto lab_0x100003848;
    } else {
        int64_t v15 = v14 + 1; // 0x10000383c
        v9 = v15;
        v10 = v15;
        if (v15 < v3) {
            goto lab_0x100003828;
        } else {
            goto lab_0x100003848;
        }
    }
  lab_0x100003848:
    // 0x100003848
    v4 = v10;
    int64_t v16 = v4 - v11; // 0x100003850
    v13 = v7;
    if (v16 == 0) {
        // break -> 0x100003914
        goto lab_0x100003914_2;
    }
    int64_t v17 = function_10000366c(); // 0x100003878
    ___memcpy_chk(v17, v11 + v1, v16, -1);
    *(char *)(v17 + v16) = 0;
    v5 = v8;
    int64_t v18 = result2; // 0x1000038cc
    if (v8 == v7) {
        // 0x1000038d4
        v5 = 2 * v8;
        v18 = function_1000036bc();
    }
    // 0x1000038f8
    result2 = v18;
    v6 = v7 + 1;
    *(int64_t *)(result2 + 8 * v7) = v17;
    v13 = v6;
    if (v4 >= v3) {
        // break -> 0x100003914
        goto lab_0x100003914_2;
    }
    goto lab_0x10000377c;
}

// Address range: 0x100003930 - 0x100003a14
int64_t function_100003930(void) {
    // 0x100003930
    _free((int64_t *)function_100003714());
    return 0;
}

// Address range: 0x100003a14 - 0x100003a74
int64_t function_100003a14(void) {
    // 0x100003a14
    int64_t v1; // 0x100003a14
    if (v1 == 0) {
        // 0x100003a68
        return 0;
    }
    int64_t v2; // 0x100003a14
    int64_t v3 = *(int64_t *)(v2 + 24); // 0x100003a40
    int64_t * v4 = (int64_t *)v2; // 0x100003a4c
    _free((int64_t *)*v4);
    _free(v4);
    v2 = v3;
    while (v3 != 0) {
        // 0x100003a3c
        v3 = *(int64_t *)(v2 + 24);
        v4 = (int64_t *)v2;
        _free((int64_t *)*v4);
        _free(v4);
        v2 = v3;
    }
    // 0x100003a68
    return &g1;
}

// Address range: 0x100003a74 - 0x100003af4
int64_t function_100003a74(void) {
    // 0x100003a74
    int64_t v1; // 0x100003a74
    if (v1 == 0) {
        // 0x100003ae4
        return 0;
    }
    int64_t v2; // 0x100003a74
    int64_t result = v2; // 0x100003ab4
    while (function_100003494() % 2 == 0) {
        int64_t v3 = *(int64_t *)(v2 + 24); // 0x100003ad0
        v2 = v3;
        result = 0;
        if (v3 == 0) {
            // break -> 0x100003ae4
            break;
        }
        result = v2;
    }
    // 0x100003ae4
    return result;
}

// Address range: 0x100003af4 - 0x100003c24
int64_t function_100003af4(void) {
    // 0x100003af4
    int64_t v1; // 0x100003af4
    _printf(" input: %s\n", (char *)v1);
    _printf("output:");
    _free((int64_t *)function_100003714());
    return _printf("\n");
}

// Address range: 0x100003c24 - 0x100003c7c
int64_t entry_point(void) {
    // 0x100003c24
    function_100003930();
    function_100003af4();
    function_100003a14();
    return 0;
}

// Address range: 0x100003c7c - 0x100003c88
int64_t function_100003c7c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003c7c
    return ___memcpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003c88 - 0x100003c94
void function_100003c88(int32_t status) {
    // 0x100003c88
    _exit(status);
}

// Address range: 0x100003c94 - 0x100003ca0
int32_t function_100003c94(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003c94
    return _fprintf(stream, format);
}

// Address range: 0x100003ca0 - 0x100003cac
void function_100003ca0(int64_t * ptr) {
    // 0x100003ca0
    _free(ptr);
}

// Address range: 0x100003cac - 0x100003cb8
int32_t function_100003cac(int32_t c) {
    // 0x100003cac
    return _isspace(c);
}

// Address range: 0x100003cb8 - 0x100003cc4
int32_t function_100003cb8(int32_t c) {
    // 0x100003cb8
    return _isupper(c);
}

// Address range: 0x100003cc4 - 0x100003cd0
int64_t * function_100003cc4(int32_t size) {
    // 0x100003cc4
    return _malloc(size);
}

// Address range: 0x100003cd0 - 0x100003cdc
int32_t function_100003cd0(char * format, ...) {
    // 0x100003cd0
    return _printf(format);
}

// Address range: 0x100003cdc - 0x100003ce8
int64_t * function_100003cdc(int64_t * ptr, int32_t size) {
    // 0x100003cdc
    return _realloc(ptr, size);
}

// Address range: 0x100003ce8 - 0x100003cf4
int32_t function_100003ce8(char * s) {
    // 0x100003ce8
    return _strlen(s);
}

// Address range: 0x100003cf4 - 0x100003d00
int32_t function_100003cf4(char * s1, char * s2, int32_t n) {
    // 0x100003cf4
    return _strncmp(s1, s2, n);
}

// Address range: 0x100003d00 - 0x100003d0c
int32_t function_100003d00(int32_t c) {
    // 0x100003d00
    return _toupper(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 24
