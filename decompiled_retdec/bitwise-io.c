//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003910(int64_t a1);
int64_t function_100003958(void);
int64_t function_100003b40(void);
int64_t function_100003d20(void);
int64_t function_100003f24(int64_t a1);
int32_t function_100003f30(struct _IO_FILE * stream);
int32_t function_100003f3c(struct _IO_FILE * stream);
struct _IO_FILE * function_100003f48(char * filename, char * modes);
int32_t function_100003f54(int32_t c, struct _IO_FILE * stream);
void function_100003f60(int64_t * ptr);
int64_t * function_100003f6c(int32_t size);
int32_t function_100003f78(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _fclose(struct _IO_FILE * a1);
int32_t _fgetc(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fputc(int32_t a1, struct _IO_FILE * a2);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003910 - 0x100003958
int64_t function_100003910(int64_t a1) {
    int64_t * v1 = _malloc(16); // 0x100003924
    int64_t result = (int64_t)v1; // 0x100003924
    *(int32_t *)(result + 8) = 0;
    *(int32_t *)(result + 12) = 0;
    *v1 = a1;
    return result;
}

// Address range: 0x100003958 - 0x100003b40
int64_t function_100003958(void) {
    // 0x100003958
    int64_t v1; // 0x100003958
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x100003978
    int32_t * v3 = (int32_t *)(v1 + 12); // 0x100003984
    uint64_t v4 = v1 / 8; // 0x100003994
    int32_t v5 = v1 - 8 * v4; // 0x1000039b8
    int32_t v6 = *v2; // 0x1000039b8
    int32_t v7 = *v3; // 0x1000039b8
    char * v8 = (char *)(v1 + v4); // 0x1000039b8
    int32_t v9; // 0x100003958
    int32_t v10; // 0x100003958
    int64_t result; // 0x100003958
    while (true) {
        char * v11 = v8;
        int64_t v12; // 0x100003958
        result = v12;
        v10 = v7;
        v9 = v6;
        int32_t v13 = v5;
        int32_t v14 = v10 - 8;
        int32_t v15 = 7 - v10 & v10;
        int64_t v16; // 0x100003958
        if (v16 == 0) {
            if (v14 < 0 != v15 < 0) {
                // break -> 0x100003b1c
                break;
            }
        }
        int32_t v17 = v15; // 0x100003a08
        int32_t v18 = v14; // 0x100003a08
        int32_t v19 = v9; // 0x100003a08
        int32_t v20 = v10; // 0x100003a08
        int64_t v21 = result; // 0x100003a08
        int32_t v22 = v14; // 0x100003a08
        int32_t v23 = v9; // 0x100003a08
        if (v14 < 0 == v15 < 0) {
            uint32_t v24 = v22;
            int32_t v25 = _fputc(v23 >> v24, (struct _IO_FILE *)v1); // 0x100003a30
            int32_t v26 = v23 & -1 - (-1 << v24); // 0x100003a48
            int32_t v27 = v24 - 8;
            int32_t v28 = 7 - v24 & v24;
            v23 = v26;
            while (v27 < 0 == v28 < 0) {
                // 0x100003a10
                v24 = v27;
                v25 = _fputc(v23 >> v24, (struct _IO_FILE *)v1);
                v26 = v23 & -1 - (-1 << v24);
                v27 = v24 - 8;
                v28 = 7 - v24 & v24;
                v23 = v26;
            }
            // 0x1000039fc
            v17 = v28;
            v18 = v27;
            v19 = v26;
            v20 = v24;
            v21 = v25;
        }
        // 0x100003a58
        v5 = v13;
        v6 = v19;
        v7 = v20;
        int64_t v29 = v16; // 0x100003a8c
        v8 = v11;
        char * v30 = v11; // 0x100003a8c
        int64_t v31 = v16; // 0x100003a8c
        int32_t v32 = v20; // 0x100003a8c
        int32_t v33 = v19; // 0x100003a8c
        int32_t v34 = v13; // 0x100003a8c
        if (v16 != 0 == (v18 < 0 != v17 < 0)) {
            uint32_t v35 = v34;
            int32_t v36 = v32;
            char * v37 = v30;
            unsigned char v38 = *v37; // 0x100003aac
            int32_t v39 = (128 >> v35 & (int32_t)v38) >> 7 - v35 | 2 * v33; // 0x100003ac4
            int64_t v40 = v31 - 1; // 0x100003ad0
            int32_t v41 = v36 + 1; // 0x100003adc
            int32_t v42 = v35 == 7 ? 0 : v35 + 1;
            char * v43 = v35 == 7 ? (char *)((int64_t)v37 + 1) : v37;
            v5 = v42;
            v6 = v39;
            v7 = v41;
            v29 = v40;
            v8 = v43;
            v31 = v40;
            v33 = v39;
            while (v40 != 0 == (v36 < 7 != (6 - v36 & v41) < 0)) {
                // 0x100003a94
                v35 = v42;
                v36 = v41;
                v37 = v43;
                v38 = *v37;
                v39 = (128 >> v35 & (int32_t)v38) >> 7 - v35 | 2 * v33;
                v40 = v31 - 1;
                v41 = v36 + 1;
                v42 = v35 == 7 ? 0 : v35 + 1;
                v43 = v35 == 7 ? (char *)((int64_t)v37 + 1) : v37;
                v5 = v42;
                v6 = v39;
                v7 = v41;
                v29 = v40;
                v8 = v43;
                v31 = v40;
                v33 = v39;
            }
        }
        // 0x1000039bc
        v12 = v21;
        v16 = v29;
    }
    // 0x100003b1c
    *v2 = v9;
    *v3 = v10;
    return result;
}

// Address range: 0x100003b40 - 0x100003d20
int64_t function_100003b40(void) {
    // 0x100003b40
    int64_t v1; // 0x100003b40
    int32_t * v2 = (int32_t *)(v1 + 8); // 0x100003b60
    int32_t v3 = *v2; // 0x100003b60
    int32_t * v4 = (int32_t *)(v1 + 12); // 0x100003b6c
    int32_t v5 = *v4; // 0x100003b6c
    if (v1 == 0) {
        // 0x100003cf8
        *v2 = v3;
        *v4 = v5;
        return 0;
    }
    uint64_t v6 = v1 / 8; // 0x100003b80
    char * v7 = (char *)(v1 + v6); // 0x100003b40
    int32_t v8 = v1 - 8 * v6; // 0x100003b40
    int32_t v9 = v3;
    char * v10 = v7; // 0x100003bf4
    int64_t v11; // 0x100003b40
    int64_t v12 = v11; // 0x100003bf4
    int32_t v13 = v8; // 0x100003bf4
    int32_t v14 = v5; // 0x100003bf4
    int64_t v15 = v11; // 0x100003bf4
    bool v16 = v11 == 0; // 0x100003bf4
    char * v17; // 0x100003b40
    char * v18; // 0x100003b40
    int32_t v19; // 0x100003b40
    int32_t v20; // 0x100003b40
    char v21; // 0x100003b40
    int32_t v22; // 0x100003c1c
    char v23; // 0x100003b40
    char v24; // 0x100003b40
    int64_t v25; // 0x100003c68
    uint64_t v26; // 0x100003c80
    if (v11 != 0 == (v5 != 0)) {
        v17 = v10;
        v22 = v5 - 1;
        v23 = *v17;
        v24 = 128 >> v13;
        v21 = (1 << v22 & v9) == 0 ? v23 & -1 - v24 : v23 | v24;
        *v17 = v21;
        v25 = v12 - 1;
        v26 = (int64_t)v13 + 1;
        v19 = v26 < 8 ? (int32_t)v26 : 0;
        v18 = v26 < 8 ? v17 : (char *)((int64_t)v17 + 1);
        v12 = v25;
        v13 = v19;
        v20 = v22;
        v14 = v22;
        v8 = v19;
        v15 = v25;
        v7 = v18;
        v16 = v25 == 0;
        while (v25 != 0 == (v22 != 0)) {
            // 0x100003bfc
            v17 = v18;
            v22 = v20 - 1;
            v23 = *v17;
            v24 = 128 >> v13;
            v21 = (1 << v22 & v9) == 0 ? v23 & -1 - v24 : v23 | v24;
            *v17 = v21;
            v25 = v12 - 1;
            v26 = (int64_t)v13 + 1;
            v19 = v26 < 8 ? (int32_t)v26 : 0;
            v18 = v26 < 8 ? v17 : (char *)((int64_t)v17 + 1);
            v12 = v25;
            v13 = v19;
            v20 = v22;
            v14 = v22;
            v8 = v19;
            v15 = v25;
            v7 = v18;
            v16 = v25 == 0;
        }
    }
    int32_t v27 = v9; // 0x100003cbc
    int32_t v28 = v14; // 0x100003cbc
    while (!v16) {
        int32_t v29 = _fgetc((struct _IO_FILE *)v1) | 256 * v9; // 0x100003ce0
        int32_t v30 = v14 + 8; // 0x100003cec
        v11 = v15;
        v27 = v29;
        v28 = v30;
        if (v15 == 0) {
            // break -> 0x100003cf8
            break;
        }
        v9 = v29;
        v10 = v7;
        v12 = v11;
        v13 = v8;
        v20 = v30;
        v14 = v30;
        v15 = v11;
        v16 = v11 == 0;
        if (v11 != 0 == (v30 != 0)) {
            v17 = v10;
            v22 = v20 - 1;
            v23 = *v17;
            v24 = 128 >> v13;
            v21 = (1 << v22 & v9) == 0 ? v23 & -1 - v24 : v23 | v24;
            *v17 = v21;
            v25 = v12 - 1;
            v26 = (int64_t)v13 + 1;
            v19 = v26 < 8 ? (int32_t)v26 : 0;
            v18 = v26 < 8 ? v17 : (char *)((int64_t)v17 + 1);
            v12 = v25;
            v13 = v19;
            v20 = v22;
            v14 = v22;
            v8 = v19;
            v15 = v25;
            v7 = v18;
            v16 = v25 == 0;
            while (v25 != 0 == (v22 != 0)) {
                // 0x100003bfc
                v17 = v18;
                v22 = v20 - 1;
                v23 = *v17;
                v24 = 128 >> v13;
                v21 = (1 << v22 & v9) == 0 ? v23 & -1 - v24 : v23 | v24;
                *v17 = v21;
                v25 = v12 - 1;
                v26 = (int64_t)v13 + 1;
                v19 = v26 < 8 ? (int32_t)v26 : 0;
                v18 = v26 < 8 ? v17 : (char *)((int64_t)v17 + 1);
                v12 = v25;
                v13 = v19;
                v20 = v22;
                v14 = v22;
                v8 = v19;
                v15 = v25;
                v7 = v18;
                v16 = v25 == 0;
            }
        }
        // 0x100003cb0
        v27 = v9;
        v28 = v14;
    }
    // 0x100003cf8
    *v2 = v27;
    *v4 = v28;
    return 0;
}

// Address range: 0x100003d20 - 0x100003d94
int64_t function_100003d20(void) {
    // 0x100003d20
    int64_t v1; // 0x100003d20
    int32_t v2 = *(int32_t *)(v1 + 12); // 0x100003d34
    if (v2 != 0) {
        int32_t * v3 = (int32_t *)(v1 + 8); // 0x100003d5c
        uint32_t v4 = *v3 << 8 - v2; // 0x100003d60
        *v3 = v4;
        _fputc(v4, (struct _IO_FILE *)(int64_t)v4);
    }
    // 0x100003d80
    _free((int64_t *)v1);
    return &g1;
}

// Address range: 0x100003d94 - 0x100003f24
int64_t entry_point(void) {
    struct _IO_FILE * v1 = _fopen("test.bin", "wb"); // 0x100003de8
    function_100003910((int64_t)v1);
    for (int32_t i = 0; i < 10; i++) {
        // 0x100003e18
        function_100003958();
    }
    // 0x100003e48
    function_100003d20();
    _fclose(v1);
    struct _IO_FILE * v2 = _fopen("test.bin", "rb"); // 0x100003e68
    function_100003910((int64_t)v2);
    for (int32_t i = 0; i < 10; i++) {
        // 0x100003e98
        function_100003b40();
    }
    // 0x100003ec8
    function_100003d20();
    _fclose(v2);
    int32_t v3 = _printf("%10s\n", (char *)7); // 0x100003eec
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003efc
    if (v4 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f10
        ___stack_chk_fail((int64_t)v3);
    }
    // 0x100003f14
    return 0;
}

// Address range: 0x100003f24 - 0x100003f30
int64_t function_100003f24(int64_t a1) {
    // 0x100003f24
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(struct _IO_FILE * stream) {
    // 0x100003f30
    return _fclose(stream);
}

// Address range: 0x100003f3c - 0x100003f48
int32_t function_100003f3c(struct _IO_FILE * stream) {
    // 0x100003f3c
    return _fgetc(stream);
}

// Address range: 0x100003f48 - 0x100003f54
struct _IO_FILE * function_100003f48(char * filename, char * modes) {
    // 0x100003f48
    return _fopen(filename, modes);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(int32_t c, struct _IO_FILE * stream) {
    // 0x100003f54
    return _fputc(c, stream);
}

// Address range: 0x100003f60 - 0x100003f6c
void function_100003f60(int64_t * ptr) {
    // 0x100003f60
    _free(ptr);
}

// Address range: 0x100003f6c - 0x100003f78
int64_t * function_100003f6c(int32_t size) {
    // 0x100003f6c
    return _malloc(size);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(char * format, ...) {
    // 0x100003f78
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 13

