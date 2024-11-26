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
int64_t function_100003ca4(void);
int64_t function_100003d64(void);
int64_t function_100003f04(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int32_t function_100003f10(struct _IO_FILE * stream);
struct _IO_FILE * function_100003f1c(char * filename, char * modes);
int32_t function_100003f28(int64_t * ptr, int32_t size, int32_t n, struct _IO_FILE * stream);
void function_100003f34(int64_t * ptr);
int32_t function_100003f40(struct _IO_FILE * stream, int32_t off, int32_t whence);
int32_t function_100003f4c(struct _IO_FILE * stream);
int64_t * function_100003f58(int32_t size);
int32_t function_100003f64(char * s);
void function_100003f70(struct _IO_FILE * stream);
int32_t function_100003f7c(char * s);
char * function_100003f88(char * haystack, char * needle);

// --------------------- Global Variables ---------------------

char * g1 = "\x94?"; // 0x100008000
char * g2 = "\x97?"; // 0x100008008
int32_t g3 = 2; // 0x100008010
int64_t g4; // 0x100008014

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memmove_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int32_t _fclose(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fread(int64_t * a1, int32_t a2, int32_t a3, struct _IO_FILE * a4);
void _free(int64_t * a1);
int32_t _fseek(struct _IO_FILE * a1, int32_t a2, int32_t a3);
int32_t _ftell(struct _IO_FILE * a1);
int64_t * _malloc(int32_t a1);
int32_t _puts(char * a1);
void _rewind(struct _IO_FILE * a1);
int32_t _strlen(char * a1);
char * _strstr(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003ca4 - 0x100003d64
int64_t function_100003ca4(void) {
    // 0x100003ca4
    int64_t v1; // 0x100003ca4
    struct _IO_FILE * v2 = _fopen((char *)v1, "rb"); // 0x100003cc0
    if (v2 == NULL) {
        // 0x100003d54
        int64_t result; // 0x100003ca4
        return result;
    }
    // 0x100003cdc
    _fseek(v2, 0, 2);
    int32_t v3 = _ftell(v2); // 0x100003cf0
    int64_t * v4 = _malloc(v3 + 1); // 0x100003d0c
    _rewind(v2);
    if (v4 != NULL) {
        // 0x100003d30
        _fread(v4, 1, v3, v2);
    }
    // 0x100003d48
    _fclose(v2);
    // 0x100003d54
    return (int64_t)v4;
}

// Address range: 0x100003d64 - 0x100003e30
int64_t function_100003d64(void) {
    // 0x100003d64
    int64_t v1; // 0x100003d64
    char * v2 = (char *)v1; // 0x100003d70
    int32_t v3 = _strlen(v2); // 0x100003d78
    char * v4 = _strstr(v2, g1); // 0x100003d94
    int64_t result = (int64_t)v4; // 0x100003d94
    if (v4 == NULL) {
        // 0x100003e24
        return result;
    }
    int64_t v5 = result;
    char * v6 = _strstr((char *)(v5 + (int64_t)g3), g2); // 0x100003dc8
    while (v6 != NULL) {
        int32_t v7 = *(int32_t *)((int64_t)&g1 + 20); // 0x100003dec
        int64_t v8 = (int64_t)v7 + (int64_t)v6; // 0x100003df4
        ___memmove_chk(v5, v8, v5 + (int64_t)(v3 + 1) - v8, -1);
        char * v9 = _strstr(v2, g1); // 0x100003d94
        if (v9 == NULL) {
            // break -> 0x100003e24
            break;
        }
        v5 = (int64_t)v9;
        v6 = _strstr((char *)(v5 + (int64_t)g3), g2);
    }
    // 0x100003e24
    return 0;
}

// Address range: 0x100003e30 - 0x100003f04
int64_t entry_point(void) {
    int64_t v1 = function_100003ca4(); // 0x100003e7c
    int64_t v2; // 0x100003e30
    if ((int32_t)v2 == 4) {
        int64_t v3 = *(int64_t *)(v2 + 16); // 0x100003e9c
        *(int64_t *)&g1 = v3;
        g3 = _strlen((char *)v3);
        char * v4 = (char *)*(int64_t *)(v2 + 24); // 0x100003ec4
        g2 = v4;
        *(int32_t *)&g4 = _strlen(v4);
    }
    // 0x100003edc
    function_100003d64();
    _puts((char *)v1);
    _free((int64_t *)v1);
    return 0;
}

// Address range: 0x100003f04 - 0x100003f10
int64_t function_100003f04(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003f04
    return ___memmove_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f10 - 0x100003f1c
int32_t function_100003f10(struct _IO_FILE * stream) {
    // 0x100003f10
    return _fclose(stream);
}

// Address range: 0x100003f1c - 0x100003f28
struct _IO_FILE * function_100003f1c(char * filename, char * modes) {
    // 0x100003f1c
    return _fopen(filename, modes);
}

// Address range: 0x100003f28 - 0x100003f34
int32_t function_100003f28(int64_t * ptr, int32_t size, int32_t n, struct _IO_FILE * stream) {
    // 0x100003f28
    return _fread(ptr, size, n, stream);
}

// Address range: 0x100003f34 - 0x100003f40
void function_100003f34(int64_t * ptr) {
    // 0x100003f34
    _free(ptr);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(struct _IO_FILE * stream, int32_t off, int32_t whence) {
    // 0x100003f40
    return _fseek(stream, off, whence);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(struct _IO_FILE * stream) {
    // 0x100003f4c
    return _ftell(stream);
}

// Address range: 0x100003f58 - 0x100003f64
int64_t * function_100003f58(int32_t size) {
    // 0x100003f58
    return _malloc(size);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * s) {
    // 0x100003f64
    return _puts(s);
}

// Address range: 0x100003f70 - 0x100003f7c
void function_100003f70(struct _IO_FILE * stream) {
    // 0x100003f70
    _rewind(stream);
}

// Address range: 0x100003f7c - 0x100003f88
int32_t function_100003f7c(char * s) {
    // 0x100003f7c
    return _strlen(s);
}

// Address range: 0x100003f88 - 0x100003f94
char * function_100003f88(char * haystack, char * needle) {
    // 0x100003f88
    return _strstr(haystack, needle);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 15
