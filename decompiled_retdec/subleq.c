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
int64_t function_100003ca8(void);
int64_t function_100003e08(void);
int32_t function_100003f38(struct _IO_FILE * stream);
struct _IO_FILE * function_100003f44(char * filename, char * modes);
int32_t function_100003f50(struct _IO_FILE * stream, char * format, ...);
int64_t * function_100003f5c(int32_t size);
int32_t function_100003f68(char * format, ...);
int32_t function_100003f74(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _fclose(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fscanf(struct _IO_FILE * a1, char * a2, ...);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _scanf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ca8 - 0x100003e08
int64_t function_100003ca8(void) {
    int32_t v1 = 0;
    int32_t v2 = v1 + 3; // 0x100003cdc
    int64_t v3; // 0x100003ca8
    int32_t v4 = *(int32_t *)(4 * (int64_t)v1 + v3); // 0x100003cec
    int32_t v5 = 4 * v1; // 0x100003cfc
    int32_t v6 = *(int32_t *)(v3 + (int64_t)(v5 + 4)); // 0x100003d00
    int32_t v7; // 0x100003ca8
    int32_t v8; // 0x100003d44
    int32_t v9; // 0x100003d14
    int32_t * v10; // 0x100003db4
    int32_t v11; // 0x100003db8
    int32_t v12; // 0x100003ca8
    int64_t v13; // 0x100003ca8
    if (v4 == -1) {
        // 0x100003d30
        v8 = _scanf("%c", (char *)v3);
        *(int32_t *)(4 * (int64_t)v6 + v3) = 0x1000000 * v12 >> 24;
        v7 = v2;
        v13 = v8;
    } else {
        if (v6 == -1) {
            // 0x100003d70
            v7 = v2;
            v13 = _printf("%c", (char)v3);
        } else {
            // 0x100003d9c
            v9 = *(int32_t *)(v3 + (int64_t)(v5 + 8));
            v10 = (int32_t *)(4 * (int64_t)v6 + v3);
            v11 = *v10 - *(int32_t *)(4 * (int64_t)v4 + v3);
            *v10 = v11;
            v7 = v11 < 1 ? v9 : v2;
            int64_t v14; // 0x100003ca8
            v13 = v14;
        }
    }
    int64_t result = v13;
    v1 = v7;
    int32_t v15 = -v1; // 0x100003cc8
    while (v1 == 0 || v15 < 0 != (v1 & v15) < 0) {
        // 0x100003cd8
        v2 = v1 + 3;
        v4 = *(int32_t *)(4 * (int64_t)v1 + v3);
        v5 = 4 * v1;
        v6 = *(int32_t *)(v3 + (int64_t)(v5 + 4));
        if (v4 == -1) {
            // 0x100003d30
            v8 = _scanf("%c", (char *)v3);
            *(int32_t *)(4 * (int64_t)v6 + v3) = 0x1000000 * v12 >> 24;
            v7 = v2;
            v13 = v8;
        } else {
            if (v6 == -1) {
                // 0x100003d70
                v7 = v2;
                v13 = _printf("%c", (char)v3);
            } else {
                // 0x100003d9c
                v9 = *(int32_t *)(v3 + (int64_t)(v5 + 8));
                v10 = (int32_t *)(4 * (int64_t)v6 + v3);
                v11 = *v10 - *(int32_t *)(4 * (int64_t)v4 + v3);
                *v10 = v11;
                v7 = v11 < 1 ? v9 : v2;
                v13 = result;
            }
        }
        // 0x100003df0
        result = v13;
        v1 = v7;
        v15 = -v1;
    }
    // 0x100003dfc
    return result;
}

// Address range: 0x100003e08 - 0x100003ecc
int64_t function_100003e08(void) {
    // 0x100003e08
    int64_t v1; // 0x100003e08
    struct _IO_FILE * v2 = _fopen((char *)v1, "r"); // 0x100003e24
    int64_t * v3 = (int64_t *)v1; // 0x100003e44
    _fscanf(v2, "%d", v3);
    int32_t v4; // 0x100003e08
    _malloc(4 * v4);
    int32_t v5 = -v4; // 0x100003e68
    int32_t v6 = 0; // 0x100003e70
    if (v5 < 0 == (v4 & v5) < 0) {
        // 0x100003eb0
        _fclose(v2);
        return function_100003ca8();
    }
    _fscanf(v2, "%d", v3);
    v6++;
    while (v6 - v4 < 0 != ((v6 - v4 ^ v6) & (v6 ^ v4)) < 0) {
        // 0x100003e78
        _fscanf(v2, "%d", v3);
        v6++;
    }
    // 0x100003eb0
    _fclose(v2);
    return function_100003ca8();
}

// Address range: 0x100003ecc - 0x100003f38
int64_t entry_point(void) {
    // 0x100003ecc
    int64_t v1; // 0x100003ecc
    if ((int32_t)v1 == 2) {
        // 0x100003f18
        function_100003e08();
    } else {
        // 0x100003ef8
        _printf("Usage : %s <subleq code file>\n", (char *)v1);
    }
    // 0x100003f28
    return 0;
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(struct _IO_FILE * stream) {
    // 0x100003f38
    return _fclose(stream);
}

// Address range: 0x100003f44 - 0x100003f50
struct _IO_FILE * function_100003f44(char * filename, char * modes) {
    // 0x100003f44
    return _fopen(filename, modes);
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f50
    return _fscanf(stream, format);
}

// Address range: 0x100003f5c - 0x100003f68
int64_t * function_100003f5c(int32_t size) {
    // 0x100003f5c
    return _malloc(size);
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(char * format, ...) {
    // 0x100003f68
    return _printf(format);
}

// Address range: 0x100003f74 - 0x100003f80
int32_t function_100003f74(char * format, ...) {
    // 0x100003f74
    return _scanf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9

