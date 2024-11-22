//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003cc8(void);
int32_t function_100003efc(struct _IO_FILE * stream);
struct _IO_FILE * function_100003f08(char * filename, char * modes);
void function_100003f14(int64_t * ptr);
int32_t function_100003f20(struct _IO_FILE * stream, char * format, ...);
int64_t * function_100003f2c(int32_t size);
int32_t function_100003f38(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int32_t _fclose(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
void _free(int64_t * a1);
int32_t _fscanf(struct _IO_FILE * a1, char * a2, ...);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003cc8 - 0x100003e7c
int64_t function_100003cc8(void) {
    // 0x100003cc8
    int64_t v1; // 0x100003cc8
    struct _IO_FILE * v2 = _fopen((char *)v1, "r"); // 0x100003cf0
    _fscanf(v2, "%d", (int64_t *)v1);
    int32_t v3; // 0x100003cc8
    int64_t * v4 = _malloc(16 * v3 + 16); // 0x100003d28
    int64_t v5 = (int64_t)v4; // 0x100003d28
    int32_t v6 = -v3;
    if (v6 < 0 == (v3 & v6) < 0) {
        // 0x100003e54
        _fclose(v2);
        *(float128_t *)(16 * (int64_t)v3 + v5) = *(float128_t *)v4;
        // 0x100003e54
        _free(v4);
        __asm_fabd(0.0, 0.0);
        return &g1;
    }
    int32_t v7 = 0; // 0x100003d90
    _fscanf(v2, "%lf %lf", (float64_t *)v1, (float64_t *)v1);
    v7++;
    while (v7 - v3 < 0 != ((v7 - v3 ^ v7) & (v7 ^ v3)) < 0) {
        // 0x100003d50
        _fscanf(v2, "%lf %lf", (float64_t *)v1, (float64_t *)v1);
        v7++;
    }
    // 0x100003d9c
    _fclose(v2);
    *(float128_t *)(16 * (int64_t)v3 + v5) = *(float128_t *)v4;
    int32_t v8 = 0; // 0x100003df0
    float64_t v9 = 0.0; // 0x100003e00
    float64_t v10 = 0.0; // 0x100003e38
    int64_t v11 = 16 * (int64_t)v8 + v5; // 0x100003de4
    v8++;
    int64_t v12 = 16 * (int64_t)v8 + v5; // 0x100003df4
    v9 += *(float64_t *)v11 * *(float64_t *)(v12 + 8);
    v10 += *(float64_t *)v12 * *(float64_t *)(v11 + 8);
    int32_t v13 = v8 - v3; // 0x100003dc8
    float64_t v14 = v10; // 0x100003dd0
    float64_t v15 = v9; // 0x100003dd0
    while (v13 < 0 != ((v13 ^ v8) & (v8 ^ v3)) < 0) {
        // 0x100003dd8
        v11 = 16 * (int64_t)v8 + v5;
        v8++;
        v12 = 16 * (int64_t)v8 + v5;
        v9 += *(float64_t *)v11 * *(float64_t *)(v12 + 8);
        v10 += *(float64_t *)v12 * *(float64_t *)(v11 + 8);
        v13 = v8 - v3;
        v14 = v10;
        v15 = v9;
    }
    // 0x100003e54
    _free(v4);
    __asm_fabd(v15, v14);
    return &g1;
}

// Address range: 0x100003e7c - 0x100003efc
int64_t entry_point(void) {
    // 0x100003e7c
    int64_t v1; // 0x100003e7c
    if ((int32_t)v1 == 1) {
        // 0x100003ea8
        _printf("\nUsage : %s <full path of polygon vertices file>", (char *)v1);
    } else {
        // 0x100003ec8
        function_100003cc8();
        int128_t v2; // 0x100003e7c
        _printf("The polygon area is %lf square units.", (float64_t)(int64_t)v2);
    }
    // 0x100003eec
    return 0;
}

// Address range: 0x100003efc - 0x100003f08
int32_t function_100003efc(struct _IO_FILE * stream) {
    // 0x100003efc
    return _fclose(stream);
}

// Address range: 0x100003f08 - 0x100003f14
struct _IO_FILE * function_100003f08(char * filename, char * modes) {
    // 0x100003f08
    return _fopen(filename, modes);
}

// Address range: 0x100003f14 - 0x100003f20
void function_100003f14(int64_t * ptr) {
    // 0x100003f14
    _free(ptr);
}

// Address range: 0x100003f20 - 0x100003f2c
int32_t function_100003f20(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f20
    return _fscanf(stream, format);
}

// Address range: 0x100003f2c - 0x100003f38
int64_t * function_100003f2c(int32_t size) {
    // 0x100003f2c
    return _malloc(size);
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(char * format, ...) {
    // 0x100003f38
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

