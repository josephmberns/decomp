//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f14(char * nptr);
int32_t function_100003f20(struct _IO_FILE * stream, char * format, ...);
void function_100003f2c(int64_t * ptr);
int64_t * function_100003f38(int32_t size);
int32_t function_100003f44(char * format, ...);
int32_t function_100003f50(int32_t c);
int32_t function_100003f5c(void);

// ------- Dynamically Linked Functions Without Header --------

int32_t _atoi(char * a1);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _rand(void);

// ------------------------ Functions -------------------------

// Address range: 0x100003d38 - 0x100003f14
int64_t entry_point(void) {
    int32_t v1 = 10; // 0x100003d68
    int64_t v2; // 0x100003d38
    if ((int32_t)v2 == 2) {
        // 0x100003d70
        v1 = _atoi((char *)*(int64_t *)(v2 + 8));
        if (v1 < 0x7fffffff == (0x7ffffffe - v1 & v1) < 0) {
            // 0x100003d98
            _fprintf((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004000, "Maximum %d!\n", v2);
            // 0x100003f04
            return 1;
        }
    }
    int64_t * v3 = _malloc(4 * v1); // 0x100003dd4
    _printf("Random Numbers Generated are: ");
    int32_t v4 = -v1;
    int32_t v5 = 0; // 0x100003e00
    if (v4 < 0 == (v1 & v4) < 0) {
        // 0x100003e60
        _putchar(10);
    } else {
        *(int32_t *)(4 * (int64_t)v5 + (int64_t)v3) = _rand() % 100;
        _printf("%2d, ", v2);
        v5++;
        while (v5 - v1 < 0 != ((v5 - v1 ^ v5) & (v5 ^ v1)) < 0) {
            // 0x100003e08
            *(int32_t *)(4 * (int64_t)v5 + (int64_t)v3) = _rand() % 100;
            _printf("%2d, ", v2);
            v5++;
        }
        // 0x100003e88
        _putchar(10);
        int32_t v6 = 0; // 0x100003ea8
        v6++;
        while (v6 - v1 < 0 != ((v6 - v1 ^ v6) & (v6 ^ v1)) < 0) {
            // 0x100003e88
            v6++;
        }
    }
    // 0x100003eb4
    _printf("\nMean: ");
    int128_t v7; // 0x100003d38
    _printf("%f\n", (float64_t)(int64_t)v7);
    _free(v3);
    // 0x100003f04
    return 0;
}

// Address range: 0x100003f14 - 0x100003f20
int32_t function_100003f14(char * nptr) {
    // 0x100003f14
    return _atoi(nptr);
}

// Address range: 0x100003f20 - 0x100003f2c
int32_t function_100003f20(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f20
    return _fprintf(stream, format);
}

// Address range: 0x100003f2c - 0x100003f38
void function_100003f2c(int64_t * ptr) {
    // 0x100003f2c
    _free(ptr);
}

// Address range: 0x100003f38 - 0x100003f44
int64_t * function_100003f38(int32_t size) {
    // 0x100003f38
    return _malloc(size);
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(char * format, ...) {
    // 0x100003f44
    return _printf(format);
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(int32_t c) {
    // 0x100003f50
    return _putchar(c);
}

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(void) {
    // 0x100003f5c
    return _rand();
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8
