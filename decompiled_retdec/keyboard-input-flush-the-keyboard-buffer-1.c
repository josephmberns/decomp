//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003f6c(int64_t a1);
char * function_100003f78(char * s, int32_t n, struct _IO_FILE * stream);
int32_t function_100003f84(struct _IO_FILE * stream, int32_t off, int32_t whence);
int32_t function_100003f90(void);
int32_t function_100003f9c(char * s);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
char * _fgets(char * a1, int32_t a2, struct _IO_FILE * a3);
int32_t _fseek(struct _IO_FILE * a1, int32_t a2, int32_t a3);
int32_t _getchar(void);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003ec8 - 0x100003f6c
int64_t entry_point(void) {
    // 0x100003ec8
    _getchar();
    int64_t * v1 = (int64_t *)*(int64_t *)0x100004010; // 0x100003f04
    _fseek((struct _IO_FILE *)*v1, 0, 2);
    int64_t v2; // bp-296, 0x100003ec8
    _fgets((char *)&v2, 256, (struct _IO_FILE *)*v1);
    int32_t v3 = _puts((char *)&v2); // 0x100003f30
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f40
    if (v4 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f54
        ___stack_chk_fail((int64_t)v3);
    }
    // 0x100003f58
    return 0;
}

// Address range: 0x100003f6c - 0x100003f78
int64_t function_100003f6c(int64_t a1) {
    // 0x100003f6c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f78 - 0x100003f84
char * function_100003f78(char * s, int32_t n, struct _IO_FILE * stream) {
    // 0x100003f78
    return _fgets(s, n, stream);
}

// Address range: 0x100003f84 - 0x100003f90
int32_t function_100003f84(struct _IO_FILE * stream, int32_t off, int32_t whence) {
    // 0x100003f84
    return _fseek(stream, off, whence);
}

// Address range: 0x100003f90 - 0x100003f9c
int32_t function_100003f90(void) {
    // 0x100003f90
    return _getchar();
}

// Address range: 0x100003f9c - 0x100003fa8
int32_t function_100003f9c(char * s) {
    // 0x100003f9c
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

