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
int64_t function_100003584(void);
int64_t function_100003604(int64_t a1, int64_t a2);
int64_t function_100003854(void);
int64_t function_100003ae8(void);
int64_t function_100003edc(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int32_t function_100003ee8(char * nptr);
float64_t function_100003ef4(float64_t a1);
int32_t function_100003f00(struct _IO_FILE * stream);
float64_t function_100003f0c(float64_t a1, float64_t a2);
int32_t function_100003f18(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003f24(int64_t * ptr, int32_t size, int32_t n, struct _IO_FILE * s);
int64_t * function_100003f30(int32_t size);
int32_t function_100003f3c(char * format, ...);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x406921fb5443ce28; // 0x100003f48
float64_t g2 = 255.0; // 0x100003f50
float64_t g3 = 7.2912123841084054e-304; // 0x100008000
int64_t g4 = 0x200000000; // 0x100008008
int64_t g5 = 0x50800000012; // 0x100008010
int64_t g6 = 0x200085; // 0x100008018
float64_t g7 = 1.5278369696185125e-312; // 0x100008020
char g8[11] = "__PAGEZERO"; // 0x100008028
char g9[3] = "RO"; // 0x100008030

// ------- Dynamically Linked Functions Without Header --------

int64_t ___memset_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int32_t _atoi(char * a1);
float64_t _cos(float64_t a1);
int32_t _fflush(struct _IO_FILE * a1);
float64_t _fmod(float64_t a1, float64_t a2);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _fwrite(int64_t * a1, int32_t a2, int32_t a3, struct _IO_FILE * a4);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003584 - 0x100003604
int64_t function_100003584(void) {
    int64_t v1 = g5;
    g5 = v1 + g4;
    g4 -= v1;
    g7 = 2 * (int64_t)g7;
    *(int64_t *)&g8 = 2 * *(int64_t *)&g8;
    *(int64_t *)&g9 = 2 * *(int64_t *)&g9;
    int64_t result; // 0x100003584
    return result;
}

// Address range: 0x100003604 - 0x100003840
int64_t function_100003604(int64_t a1, int64_t a2) {
    float64_t v1 = 6.0 * g3 / g7; // 0x100003668
    int128_t v2; // 0x100003604
    float64_t result = _fmod(_cos((float64_t)(int64_t)v2), (float64_t)(int64_t)v2); // 0x1000036d0
    float64_t v3 = __asm_fabd(v1, 1.0); // 0x1000036e0
    uint32_t v4 = (int32_t)v1; // 0x1000036f4
    if (v4 >= 4 != v4 != 4) {
        // 0x100003710
        return result;
    }
    // 0x100003808
    int64_t v5; // 0x100003604
    int64_t v6 = *(int64_t *)(g6 + 8 * v5) + 24 * v5; // 0x100003638
    float64_t * v7 = (float64_t *)v6; // 0x10000363c
    float64_t v8 = 1.0 - 0.25 * (g3 * (float64_t)g1 / g7 - 1.0); // 0x1000036ac
    *v7 = v8 + *v7;
    float64_t * v9 = (float64_t *)(v6 + 16); // 0x100003824
    *v9 = (1.0 - v3) * v8 + *v9;
    return result;
}

// Address range: 0x100003854 - 0x100003a2c
int64_t function_100003854(void) {
    int64_t v1; // 0x100003854
    char v2 = *(char *)v1; // 0x100003870
    // 0x100003854
    while (v2 != 0) {
        uint64_t v3 = (int64_t)v2 + 0xffffffd5 & 0xffffffff; // 0x100003898
        v1++;
        if (v3 >= 46 != v3 != 46) {
            // break -> 0x1000038ac
            break;
        }
        v2 = *(char *)v1;
    }
    // 0x1000038ac
    int64_t result; // 0x100003854
    return result;
}

// Address range: 0x100003ae8 - 0x100003e24
int64_t function_100003ae8(void) {
    // 0x100003ae8
    int64_t v1; // 0x100003ae8
    int64_t v2 = v1 / 3 + 1; // 0x100003b08
    int64_t v3 = v1 + 3; // 0x100003b14
    int64_t v4 = v1 + 2 + 3 * v2 / 2; // 0x100003b34
    int64_t v5 = v4 * v3;
    int64_t v6 = 24 * v5; // 0x100003b4c
    int32_t v7 = v6; // 0x100003b50
    int64_t v8 = (int64_t)_malloc(v7); // 0x100003b50
    int64_t * v9 = _malloc(8 * (int32_t)v3); // 0x100003b64
    g6 = (int64_t)v9;
    int64_t v10 = -3 - v1; // 0x100003b84
    if (v10 < 0 != (v10 & v3) < 0) {
        // 0x100003b94
        *v9 = v8;
        int64_t v11 = -2 - v1; // 0x100003b84
        if (v11 < 0 != (v11 & v3) < 0) {
            int64_t v12 = 1;
            *(int64_t *)(8 * v12 + g6) = 24 * v4 * v12 + v8;
            int64_t v13 = v12 + 1; // 0x100003bcc
            int64_t v14 = v13 - v3; // 0x100003b84
            while (v14 < 0 != ((v14 ^ v13) & (v13 ^ v3)) < 0) {
                // 0x100003b94
                v12 = v13;
                *(int64_t *)(8 * v12 + g6) = 24 * v4 * v12 + v8;
                v13 = v12 + 1;
                v14 = v13 - v3;
            }
        }
    }
    // 0x100003bd8
    ___memset_chk(v8, 0, v6, -1);
    *(int64_t *)&g9 = v2;
    *(int64_t *)&g8 = v2;
    g5 = 0;
    g7 = 4.9406564584124654e-324;
    g3 = 0.0;
    int64_t v15 = 0x100000000 * v1;
    int64_t v16 = v15 >> 32; // 0x100003c5c
    int64_t v17 = 0; // 0x100003c68
    if (v15 > 0 != (v16 & -v16) < 0) {
        function_100003584();
        v17++;
        while (v17 - v16 < 0 != ((v17 - v16 ^ v17) & (v17 ^ v16)) < 0) {
            // 0x100003c70
            function_100003584();
            v17++;
        }
    }
    // 0x100003c88
    function_100003854();
    int32_t v18 = 3 * (int32_t)v5; // 0x100003cb0
    int64_t * v19 = _malloc(v18); // 0x100003cb0
    float64_t v20 = 0.0; // bp-88, 0x100003cc0
    int64_t v21 = 3 * v5;
    int64_t v22 = v21 - 1;
    if (v22 >= 0) {
        int64_t v23 = (int64_t)v19; // 0x100003cb0
        int64_t v24 = v22;
        float64_t v25 = 0.0; // 0x100003d08
        float64_t v26 = 0.0;
        int64_t v27 = 8 * v24 + v8; // 0x100003d04
        float64_t v28 = *(float64_t *)v27; // 0x100003d04
        float64_t v29 = v26; // 0x100003d0c
        float64_t v30 = v25; // 0x100003d0c
        int64_t v31; // 0x100003ae8
        if (v28 != v25) {
            v29 = v26;
            v30 = v25;
            if (v28 > v25 == v28 >= v25 == v28 <= v25) {
                // 0x100003d1c
                v31 = *(int64_t *)v27;
                v20 = v31;
                v29 = v31;
                v30 = v31;
            }
        }
        float64_t v32 = v29;
        v24--;
        while (v24 >= 0) {
            // 0x100003cfc
            v25 = v30;
            v26 = v32;
            v27 = 8 * v24 + v8;
            v28 = *(float64_t *)v27;
            v29 = v26;
            v30 = v25;
            if (v28 != v25) {
                v29 = v26;
                v30 = v25;
                if (v28 > v25 == v28 >= v25 == v28 <= v25) {
                    // 0x100003d1c
                    v31 = *(int64_t *)v27;
                    v20 = v31;
                    v29 = v31;
                    v30 = v31;
                }
            }
            // 0x100003d34
            v32 = v29;
            v24--;
        }
        float64_t v33 = *(float64_t *)(8 * v22 + v8); // 0x100003d80
        *(char *)(v22 + v23) = (char)(int32_t)(v33 * g2 / v32);
        int64_t v34 = v21 - 2;
        if (v34 >= 0) {
            float64_t v35 = *(float64_t *)(8 * v34 + v8); // 0x100003d80
            *(char *)(v34 + v23) = (char)(int32_t)(v35 * g2 / v20);
            int64_t v36 = v34 - 1;
            int64_t v37 = v36; // 0x100003d70
            while (v36 >= 0) {
                // 0x100003d78
                v35 = *(float64_t *)(8 * v37 + v8);
                *(char *)(v37 + v23) = (char)(int32_t)(v35 * g2 / v20);
                v36 = v37 - 1;
                v37 = v36;
            }
        }
    }
    // 0x100003dbc
    _printf("P6\n%ld %ld\n255\n", (int32_t)v1, v7);
    int64_t * v38 = (int64_t *)*(int64_t *)0x100004010; // 0x100003de8
    _fflush((struct _IO_FILE *)*v38);
    return _fwrite(v19, v18, 1, (struct _IO_FILE *)*v38);
}

// Address range: 0x100003e24 - 0x100003edc
int64_t entry_point(void) {
    // 0x100003e24
    int64_t v1; // 0x100003e24
    int32_t v2 = v1; // 0x100003e34
    int32_t v3 = v2 - 1; // 0x100003e40
    if (v3 != 0 && v3 < 0 == (v2 & -v2) < 0) {
        // 0x100003e50
        _atoi((char *)*(int64_t *)(v1 + 8));
    }
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003e90
    _fprintf((struct _IO_FILE *)v4, "size: %d depth: %d\n", v1, v1);
    function_100003ae8();
    return 0;
}

// Address range: 0x100003edc - 0x100003ee8
int64_t function_100003edc(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003edc
    return ___memset_chk(a1, a2, a3, a4);
}

// Address range: 0x100003ee8 - 0x100003ef4
int32_t function_100003ee8(char * nptr) {
    // 0x100003ee8
    return _atoi(nptr);
}

// Address range: 0x100003ef4 - 0x100003f00
float64_t function_100003ef4(float64_t a1) {
    // 0x100003ef4
    return _cos(a1);
}

// Address range: 0x100003f00 - 0x100003f0c
int32_t function_100003f00(struct _IO_FILE * stream) {
    // 0x100003f00
    return _fflush(stream);
}

// Address range: 0x100003f0c - 0x100003f18
float64_t function_100003f0c(float64_t a1, float64_t a2) {
    // 0x100003f0c
    return _fmod(a1, a2);
}

// Address range: 0x100003f18 - 0x100003f24
int32_t function_100003f18(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f18
    return _fprintf(stream, format);
}

// Address range: 0x100003f24 - 0x100003f30
int32_t function_100003f24(int64_t * ptr, int32_t size, int32_t n, struct _IO_FILE * s) {
    // 0x100003f24
    return _fwrite(ptr, size, n, s);
}

// Address range: 0x100003f30 - 0x100003f3c
int64_t * function_100003f30(int32_t size) {
    // 0x100003f30
    return _malloc(size);
}

// Address range: 0x100003f3c - 0x100003f48
int32_t function_100003f3c(char * format, ...) {
    // 0x100003f3c
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 14
