//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003db4(void);
void function_100003dc0(int64_t * ptr);
int32_t function_100003dcc(char ** lineptr, int32_t * n, struct _IO_FILE * stream);
int64_t * function_100003dd8(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003de4(char * format, ...);
int32_t function_100003df0(void);
void function_100003dfc(int32_t seed);
int32_t function_100003e08(int32_t * timer);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x10000000003e14; // 0x100004050

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
void _free(int64_t * a1);
int32_t _getline(char ** a1, int32_t * a2, struct _IO_FILE * a3);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003c8c - 0x100003db4
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ca0
    int64_t v2 = 0; // bp-200, 0x100003cb4
    int64_t v3 = 0; // bp-208, 0x100003cb8
    int64_t v4; // bp-184, 0x100003c8c
    _memcpy(&v4, &g1, 160);
    _srand(_time(NULL));
    _printf("Please enter your question or a blank line to quit.\n");
    _printf("\n? : ");
    int64_t v5 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003d00
    int32_t v6 = _getline((char **)&v2, (int32_t *)&v3, (struct _IO_FILE *)v5); // 0x100003d0c
    int64_t v7 = v6; // 0x100003d0c
    if (v6 < 2 == (1 - v7 & v7) < 0) {
        _rand();
        _printf("\n%s\n", &v3);
        _printf("\n? : ");
        int64_t v8 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003d00
        int32_t v9 = _getline((char **)&v2, (int32_t *)&v3, (struct _IO_FILE *)v8); // 0x100003d0c
        while (v9 < 2 == (1 - (int64_t)v9 & (int64_t)v9) < 0) {
            // 0x100003d2c
            _rand();
            _printf("\n%s\n", &v3);
            _printf("\n? : ");
            v8 = *(int64_t *)*(int64_t *)0x100004010;
            v9 = _getline((char **)&v2, (int32_t *)&v3, (struct _IO_FILE *)v8);
        }
    }
    // 0x100003d60
    if (v2 != 0) {
        // 0x100003d74
        _free((int64_t *)v2);
    }
    // 0x100003d80
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003da0
        ___stack_chk_fail();
    }
    // 0x100003da4
    return 0;
}

// Address range: 0x100003db4 - 0x100003dc0
int64_t function_100003db4(void) {
    // 0x100003db4
    return ___stack_chk_fail();
}

// Address range: 0x100003dc0 - 0x100003dcc
void function_100003dc0(int64_t * ptr) {
    // 0x100003dc0
    _free(ptr);
}

// Address range: 0x100003dcc - 0x100003dd8
int32_t function_100003dcc(char ** lineptr, int32_t * n, struct _IO_FILE * stream) {
    // 0x100003dcc
    return _getline(lineptr, n, stream);
}

// Address range: 0x100003dd8 - 0x100003de4
int64_t * function_100003dd8(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003dd8
    return _memcpy(dest, src, n);
}

// Address range: 0x100003de4 - 0x100003df0
int32_t function_100003de4(char * format, ...) {
    // 0x100003de4
    return _printf(format);
}

// Address range: 0x100003df0 - 0x100003dfc
int32_t function_100003df0(void) {
    // 0x100003df0
    return _rand();
}

// Address range: 0x100003dfc - 0x100003e08
void function_100003dfc(int32_t seed) {
    // 0x100003dfc
    _srand(seed);
}

// Address range: 0x100003e08 - 0x100003e14
int32_t function_100003e08(int32_t * timer) {
    // 0x100003e08
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9

