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
int64_t function_100003d84(void);
int64_t function_100003ecc(void);
int32_t function_100003f2c(struct _IO_FILE * stream);
int32_t function_100003f38(struct _IO_FILE * stream);
struct _IO_FILE * function_100003f44(char * filename, char * modes);
int32_t function_100003f50(int32_t c, struct _IO_FILE * stream);
void function_100003f5c(char * s);

// --------------------- Global Variables ---------------------

char * g1; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int32_t _fclose(struct _IO_FILE * a1);
int32_t _fgetc(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fputc(int32_t a1, struct _IO_FILE * a2);
void _perror(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003c90 - 0x100003d84
int64_t entry_point(void) {
    // 0x100003c90
    int64_t v1; // 0x100003c90
    int32_t v2 = v1; // 0x100003ca0
    function_100003d84();
    int32_t v3 = v2 - 1; // 0x100003cb0
    if (v3 == 0 || v3 < 0 != (v2 & -v2) < 0) {
        // 0x100003d58
        function_100003ecc();
        // 0x100003d74
        return 0;
    }
    int32_t v4 = 1 - v2; // 0x100003cd4
    if (v4 < 0 == (v4 & v2) < 0) {
        // 0x100003d74
        return 0;
    }
    int32_t v5 = 1; // 0x100003cdc
    int64_t * v6 = (int64_t *)(8 * (int64_t)v5 + v1);
    struct _IO_FILE * v7 = _fopen((char *)*v6, (char *)0x100003f68); // 0x100003cf8
    while (v7 != NULL) {
        // 0x100003d30
        function_100003ecc();
        _fclose(v7);
        v5++;
        int32_t v8 = v5 - v2; // 0x100003cd4
        if (v8 < 0 == ((v8 ^ v5) & (v5 ^ v2)) < 0) {
            // 0x100003d74
            return 0;
        }
        v6 = (int64_t *)(8 * (int64_t)v5 + v1);
        v7 = _fopen((char *)*v6, (char *)0x100003f68);
    }
    // 0x100003d14
    _perror((char *)*v6);
    // 0x100003d74
    return 1;
}

// Address range: 0x100003d84 - 0x100003ecc
int64_t function_100003d84(void) {
    int32_t v1 = 0;
    *(char *)((int64_t)v1 + (int64_t)&g1) = (char)v1;
    int32_t v2 = v1 + 1; // 0x100003dc0
    while (v1 == 254 || v1 < 254 != (253 - v1 & v2) < 0) {
        // 0x100003da4
        v1 = v2;
        *(char *)((int64_t)v1 + (int64_t)&g1) = (char)v1;
        v2 = v1 + 1;
    }
    char v3 = *(char *)((int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ" + 13); // 0x100003de0
    char * v4 = (char *)((int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ" + 13); // 0x100003dec
    char * v5 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 0x100003dec
    if (v3 != 0) {
        int64_t v6 = (int64_t)"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        unsigned char v7 = *v5; // 0x100003e00
        *(char *)((int64_t)v7 + (int64_t)&g1) = v3;
        char v8 = *v5; // 0x100003e20
        *(char *)((int64_t)*v4 + (int64_t)&g1) = v8;
        int64_t v9 = v6 + 1; // 0x100003e3c
        v4 = (char *)(v6 + 14);
        char v10 = *v4; // 0x100003de0
        v5 = (char *)v9;
        while (v10 != 0) {
            // 0x100003df4
            v6 = v9;
            v7 = *v5;
            *(char *)((int64_t)v7 + (int64_t)&g1) = v10;
            v8 = *v5;
            *(char *)((int64_t)*v4 + (int64_t)&g1) = v8;
            v9 = v6 + 1;
            v4 = (char *)(v6 + 14);
            v10 = *v4;
            v5 = (char *)v9;
        }
    }
    char v11 = *(char *)((int64_t)"abcdefghijklmnopqrstuvwxyz" + 13); // 0x100003e5c
    char * v12 = (char *)((int64_t)"abcdefghijklmnopqrstuvwxyz" + 13); // 0x100003e68
    int64_t result; // 0x100003d84
    if (v11 == 0) {
        // 0x100003ec4
        return result;
    }
    char * v13 = "abcdefghijklmnopqrstuvwxyz"; // 0x100003e68
    int64_t v14 = (int64_t)"abcdefghijklmnopqrstuvwxyz";
    unsigned char v15 = *v13; // 0x100003e7c
    *(char *)((int64_t)v15 + (int64_t)&g1) = v11;
    char v16 = *v13; // 0x100003e9c
    *(char *)((int64_t)*v12 + (int64_t)&g1) = v16;
    int64_t v17 = v14 + 1; // 0x100003eb8
    v12 = (char *)(v14 + 14);
    char v18 = *v12; // 0x100003e5c
    v13 = (char *)v17;
    while (v18 != 0) {
        // 0x100003e70
        v14 = v17;
        v15 = *v13;
        *(char *)((int64_t)v15 + (int64_t)&g1) = v18;
        v16 = *v13;
        *(char *)((int64_t)*v12 + (int64_t)&g1) = v16;
        v17 = v14 + 1;
        v12 = (char *)(v14 + 14);
        v18 = *v12;
        v13 = (char *)v17;
    }
    // 0x100003ec4
    return result;
}

// Address range: 0x100003ecc - 0x100003f2c
int64_t function_100003ecc(void) {
    // 0x100003ecc
    int64_t v1; // 0x100003ecc
    struct _IO_FILE * v2 = (struct _IO_FILE *)v1; // 0x100003ed8
    int32_t v3 = _fgetc(v2); // 0x100003ee4
    if (v3 == -1) {
        // 0x100003f20
        return -1;
    }
    char v4 = *(char *)((int64_t)v3 + (int64_t)&g1); // 0x100003f08
    _fputc((int32_t)v4, (struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004008);
    int32_t v5 = _fgetc(v2); // 0x100003ee4
    while (v5 != -1) {
        // 0x100003efc
        v4 = *(char *)((int64_t)v5 + (int64_t)&g1);
        _fputc((int32_t)v4, (struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004008);
        v5 = _fgetc(v2);
    }
    // 0x100003f20
    return -1;
}

// Address range: 0x100003f2c - 0x100003f38
int32_t function_100003f2c(struct _IO_FILE * stream) {
    // 0x100003f2c
    return _fclose(stream);
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(struct _IO_FILE * stream) {
    // 0x100003f38
    return _fgetc(stream);
}

// Address range: 0x100003f44 - 0x100003f50
struct _IO_FILE * function_100003f44(char * filename, char * modes) {
    // 0x100003f44
    return _fopen(filename, modes);
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(int32_t c, struct _IO_FILE * stream) {
    // 0x100003f50
    return _fputc(c, stream);
}

// Address range: 0x100003f5c - 0x100003f68
void function_100003f5c(char * s) {
    // 0x100003f5c
    _perror(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8
