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
int64_t function_100003ba8(void);
int64_t function_100003c3c(void);
int64_t function_100003cac(void);
int64_t function_100003da0(void);
int64_t function_100003e20(void);
int64_t function_100003e6c(void);
int64_t function_100003ef4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int32_t function_100003f00(struct _IO_FILE * stream, char * format, ...);
void function_100003f0c(int64_t * ptr);
int64_t * function_100003f18(int32_t size);
int32_t function_100003f24(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x1800000008; // 0x100003f30
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memcpy_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003a7c - 0x100003ba8
int64_t entry_point(void) {
    int32_t v1 = 0; // 0x100003a7c
    uint64_t v2 = 0;
    uint32_t v3 = *(int32_t *)(4 * v2 + (int64_t)&g1); // 0x100003ab8
    while ((int32_t)function_100003ba8() != 0) {
        int32_t v4 = v1;
        function_100003c3c();
        function_100003cac();
        while ((int32_t)function_100003da0() == 0) {
            // 0x100003b14
            function_100003cac();
        }
        // 0x100003b4c
        int64_t v5; // 0x100003a7c
        _printf("Cards count: %d, shuffles required: %d.\n", (int64_t)v3, v5);
        function_100003e20();
        int64_t v6 = v2 + 1;
        v1 = v4 + 1;
        if (v2 < 6 == (5 - v4 & (int32_t)v6) < 0) {
            // 0x100003b98
            return 0;
        }
        v2 = v6;
        v3 = *(int32_t *)(4 * v2 + (int64_t)&g1);
    }
    int64_t v7 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003ae4
    _fprintf((struct _IO_FILE *)v7, "Error: malloc() failed!\n");
    // 0x100003b98
    return 1;
}

// Address range: 0x100003ba8 - 0x100003c3c
int64_t function_100003ba8(void) {
    // 0x100003ba8
    int64_t v1; // 0x100003ba8
    if (v1 == 0) {
        // 0x100003c2c
        return 0;
    }
    int64_t * v2 = _malloc(4 * (int32_t)v1); // 0x100003bdc
    int64_t result = 0; // 0x100003bf4
    if (v2 != NULL) {
        // 0x100003bfc
        *(int64_t *)v1 = (int64_t)v2;
        result = 1;
    }
    // 0x100003c2c
    return result;
}

// Address range: 0x100003c3c - 0x100003cac
int64_t function_100003c3c(void) {
    // 0x100003c3c
    int64_t result; // 0x100003c3c
    if (result == 0) {
        // 0x100003ca4
        return result;
    }
    int32_t v1 = result; // 0x100003c44
    int32_t v2 = -v1; // 0x100003c6c
    if (v2 < 0 == (v2 & v1) < 0) {
        // 0x100003ca4
        return result;
    }
    int32_t v3 = 0;
    *(int32_t *)(4 * (int64_t)v3 + result) = v3;
    int32_t v4 = v3 + 1; // 0x100003c94
    while (v4 - v1 < 0 != ((v4 - v1 ^ v4) & (v4 ^ v1)) < 0) {
        // 0x100003c7c
        v3 = v4;
        *(int32_t *)(4 * (int64_t)v3 + result) = v3;
        v4 = v3 + 1;
    }
    // 0x100003ca4
    return result;
}

// Address range: 0x100003cac - 0x100003da0
int64_t function_100003cac(void) {
    // 0x100003cac
    if ((int32_t)function_100003e6c() == 0) {
        // 0x100003d90
        return 0;
    }
    // 0x100003cf0
    int64_t v1; // 0x100003cac
    int32_t v2 = v1; // 0x100003cbc
    int32_t v3 = v2 / 2; // 0x100003cfc
    int32_t v4 = 0; // 0x100003d08
    int32_t v5 = 0; // 0x100003d08
    if (v2 > 1 == (v3 & -v3) < 0) {
        // 0x100003d74
        function_100003e20();
        // 0x100003d90
        return 1;
    }
    int32_t v6 = *(int32_t *)(4 * (int64_t)v4); // 0x100003d18
    *(int32_t *)(4 * (int64_t)v5 + v1) = v6;
    int32_t v7 = *(int32_t *)(int64_t)(4 * (v4 + v3)); // 0x100003d40
    *(int32_t *)(v1 + (int64_t)(4 * v5 | 4)) = v7;
    v4++;
    int32_t v8 = v4 - v3; // 0x100003d00
    v5 += 2;
    while (v8 < 0 != ((v8 ^ v4) & (v4 ^ v3)) < 0) {
        // 0x100003d10
        v6 = *(int32_t *)(4 * (int64_t)v4);
        *(int32_t *)(4 * (int64_t)v5 + v1) = v6;
        v7 = *(int32_t *)(int64_t)(4 * (v4 + v3));
        *(int32_t *)(v1 + (int64_t)(4 * v5 | 4)) = v7;
        v4++;
        v8 = v4 - v3;
        v5 += 2;
    }
    // 0x100003d74
    function_100003e20();
    // 0x100003d90
    return 1;
}

// Address range: 0x100003da0 - 0x100003e20
int64_t function_100003da0(void) {
    // 0x100003da0
    int64_t v1; // 0x100003da0
    int32_t v2 = v1; // 0x100003da8
    int32_t v3 = -v2; // 0x100003dbc
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003e14
        return 1;
    }
    int32_t v4 = 0; // 0x100003dfc
    int64_t result = 0; // 0x100003de4
    while (*(int32_t *)(4 * (int64_t)v4 + v1) == v4) {
        // 0x100003db4
        v4++;
        int32_t v5 = v4 - v2; // 0x100003dbc
        result = 1;
        if (v5 < 0 == ((v5 ^ v4) & (v4 ^ v2)) < 0) {
            // break -> 0x100003e14
            break;
        }
        result = 0;
    }
    // 0x100003e14
    return result;
}

// Address range: 0x100003e20 - 0x100003e6c
int64_t function_100003e20(void) {
    int64_t result = 0; // 0x100003e40
    int64_t v1; // 0x100003e20
    if (v1 != 0) {
        int64_t * v2 = (int64_t *)v1; // 0x100003e50
        _free(v2);
        *v2 = 0;
        result = &g2;
    }
    // 0x100003e60
    return result;
}

// Address range: 0x100003e6c - 0x100003ef4
int64_t function_100003e6c(void) {
    // 0x100003e6c
    int64_t v1; // 0x100003e6c
    if (v1 == 0) {
        // 0x100003ee4
        return 0;
    }
    int64_t v2 = function_100003ba8(); // 0x100003ea0
    int64_t result = 0; // 0x100003eac
    if ((int32_t)v2 != 0) {
        // 0x100003eb4
        ___memcpy_chk(v2, v1, 0x100000000 * v1 >> 30, -1);
        result = 1;
    }
    // 0x100003ee4
    return result;
}

// Address range: 0x100003ef4 - 0x100003f00
int64_t function_100003ef4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003ef4
    return ___memcpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f00 - 0x100003f0c
int32_t function_100003f00(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f00
    return _fprintf(stream, format);
}

// Address range: 0x100003f0c - 0x100003f18
void function_100003f0c(int64_t * ptr) {
    // 0x100003f0c
    _free(ptr);
}

// Address range: 0x100003f18 - 0x100003f24
int64_t * function_100003f18(int32_t size) {
    // 0x100003f18
    return _malloc(size);
}

// Address range: 0x100003f24 - 0x100003f30
int32_t function_100003f24(char * format, ...) {
    // 0x100003f24
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12

