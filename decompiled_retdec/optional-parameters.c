//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <ctype.h>
#include <stdbool.h>
#include <stdint.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100000cfeedfacf(void);
int64_t function_100003410(void);
int64_t function_1000034f4(int64_t a1, int64_t a2);
int64_t function_100003500(void);
int64_t function_1000036c8(void);
int64_t function_1000037c0(void);
int64_t function_1000037d8(void);
int64_t function_100003e3c(int64_t a1);
int32_t function_100003e48(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003e54(int32_t c);
int32_t function_100003e60(char * format, ...);
void function_100003e6c(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
int32_t function_100003e78(int32_t c);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x100000cfeedfacf; // 0x100008000
int32_t g2 = 0; // 0x100008008
int32_t g3 = 2; // 0x10000800c

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _isdigit(int32_t a1);
int32_t _printf(char * a1, ...);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));

// ------------------------ Functions -------------------------

// Address range: 0x100003410 - 0x1000034f4
int64_t function_100003410(void) {
    // 0x100003410
    return function_100000cfeedfacf();
}

// Address range: 0x1000034f4 - 0x100003500
int64_t function_1000034f4(int64_t a1, int64_t a2) {
    // 0x1000034f4
    int64_t result; // 0x1000034f4
    return result;
}

// Address range: 0x100003500 - 0x1000036c8
int64_t function_100003500(void) {
    // 0x100003500
    int64_t v1; // 0x100003500
    int64_t v2 = v1;
    *(int64_t *)&g1 = *(int64_t *)0x100004038;
    g2 = 0;
    g3 = 0;
    if (v1 == 0) {
        // 0x100003698
        _qsort((int64_t *)v2, *(int32_t *)(v2 + 8), 8, (int32_t (*)(int64_t *, int64_t *))0x100003410);
        return 0;
    }
    // 0x100003550
    int64_t v3; // 0x100003500
    int32_t * v4 = (int32_t *)&v3; // 0x100003558
    while (true) {
        int32_t * v5 = v4;
        v4 = v5;
        int64_t v6; // 0x100003500
        switch (*(char *)v6) {
            case 0: {
                // 0x100003698
                _qsort((int64_t *)v2, *(int32_t *)(v2 + 8), 8, (int32_t (*)(int64_t *, int64_t *))0x100003410);
                return 0;
            }
            case 99: {
                int32_t v7 = *v5; // 0x1000035e4
                int32_t * v8 = (int32_t *)((int64_t)v5 + 8); // 0x1000035ec
                int32_t v9 = -v7; // 0x100003604
                v4 = v8;
                if (v7 == 0 || v9 < 0 != (v7 & v9) < 0) {
                    int32_t v10 = *(int32_t *)(v2 + 12); // 0x10000361c
                    int32_t v11 = v7 - v10; // 0x100003620
                    v4 = v8;
                    if (v11 < 0 != ((v11 ^ v7) & (v10 ^ v7)) < 0) {
                        // 0x100003630
                        g2 = v7;
                        v4 = v8;
                    }
                }
                // break -> 0x100003684
                break;
            }
            case 111: {
                // 0x1000035b8
                *(int64_t *)&g1 = *(int64_t *)v5;
                v4 = (int32_t *)((int64_t)v5 + 8);
                // break -> 0x100003684
                break;
            }
            case 114: {
                // 0x100003648
                g3 = *v5 != 0;
                v4 = (int32_t *)((int64_t)v5 + 8);
                // break -> 0x100003684
                break;
            }
        }
        // 0x100003684
        int64_t v12; // 0x100003500
        v12++;
    }
    // 0x100003698
    _qsort((int64_t *)v2, *(int32_t *)(v2 + 8), 8, (int32_t (*)(int64_t *, int64_t *))0x100003410);
    return 0;
}

// Address range: 0x1000036c8 - 0x1000037c0
int64_t function_1000036c8(void) {
    // 0x1000036c8
    int64_t v1; // 0x1000036c8
    struct _IO_FILE * v2 = (struct _IO_FILE *)v1; // 0x1000036d8
    int32_t * v3 = (int32_t *)(v1 + 8); // 0x1000036f0
    int32_t v4 = *v3; // 0x1000036f0
    int32_t v5 = -v4; // 0x1000036f4
    if (v5 < 0 == (v4 & v5) < 0) {
        // 0x1000037a4
        return _fprintf(v2, "\n");
    }
    int32_t * v6 = (int32_t *)(v1 + 12);
    int32_t v7 = 0; // 0x100003798
    _fprintf(v2, "   ");
    int32_t v8 = *v6; // 0x100003724
    int32_t v9 = -v8; // 0x100003728
    int32_t v10 = 0; // 0x100003730
    int32_t v11; // 0x100003774
    int32_t v12; // 0x100003724
    int32_t v13; // 0x100003728
    if (v9 < 0 != (v8 & v9) < 0) {
        _fprintf(v2, (char *)*(int64_t *)(8 * (int64_t)v10 + v1));
        v11 = v10 + 1;
        v12 = *v6;
        v13 = v11 - v12;
        v10 = v11;
        while (v13 < 0 != ((v13 ^ v11) & (v12 ^ v11)) < 0) {
            // 0x100003738
            _fprintf(v2, (char *)*(int64_t *)(8 * (int64_t)v10 + v1));
            v11 = v10 + 1;
            v12 = *v6;
            v13 = v11 - v12;
            v10 = v11;
        }
    }
    // 0x100003780
    _fprintf(v2, "\n");
    v7++;
    int32_t v14 = *v3; // 0x1000036f0
    while (v7 - v14 < 0 != ((v7 - v14 ^ v7) & (v14 ^ v7)) < 0) {
        // 0x100003704
        _fprintf(v2, "   ");
        v8 = *v6;
        v9 = -v8;
        v10 = 0;
        if (v9 < 0 != (v8 & v9) < 0) {
            _fprintf(v2, (char *)*(int64_t *)(8 * (int64_t)v10 + v1));
            v11 = v10 + 1;
            v12 = *v6;
            v13 = v11 - v12;
            v10 = v11;
            while (v13 < 0 != ((v13 ^ v11) & (v12 ^ v11)) < 0) {
                // 0x100003738
                _fprintf(v2, (char *)*(int64_t *)(8 * (int64_t)v10 + v1));
                v11 = v10 + 1;
                v12 = *v6;
                v13 = v11 - v12;
                v10 = v11;
            }
        }
        // 0x100003780
        _fprintf(v2, "\n");
        v7++;
        v14 = *v3;
    }
    // 0x1000037a4
    return _fprintf(v2, "\n");
}

// Address range: 0x1000037c0 - 0x1000037d8
int64_t function_1000037c0(void) {
    // 0x1000037c0
    int64_t v1; // 0x1000037c0
    return (0x1000000 * (int32_t)v1 >> 24) - 48;
}

// Address range: 0x1000037d8 - 0x100003b9c
int64_t function_1000037d8(void) {
    // 0x1000037d8
    int64_t v1; // 0x1000037d8
    uint64_t v2 = v1;
    char * c = (char *)v2;
    char * c2 = (char *)v1;
    int32_t v3 = _tolower((int32_t)*c); // 0x100003808
    char * c5 = c; // 0x100003834
    char * c6 = c2; // 0x100003834
    if (v3 == _tolower((int32_t)*c2)) {
        // 0x100003854
        c5 = c;
        c6 = c2;
        if (*c != 0) {
            int64_t v4; // 0x1000037d8
            int64_t v5 = v4 + 1; // 0x100003864
            int64_t v6; // 0x1000037d8
            int64_t v7 = v6 + 1; // 0x100003870
            char * c3 = (char *)v5;
            char * c4 = (char *)v7;
            int32_t v8 = _tolower((int32_t)*c3); // 0x100003808
            c5 = c3;
            c6 = c4;
            while (v8 == _tolower((int32_t)*c4)) {
                // 0x100003854
                c5 = c3;
                c6 = c4;
                if (*c3 == 0) {
                    // break -> 0x10000387c
                    break;
                }
                v5++;
                v7++;
                c3 = (char *)v5;
                c4 = (char *)v7;
                v8 = _tolower((int32_t)*c3);
                c5 = c3;
                c6 = c4;
            }
        }
    }
    // 0x10000387c
    char * v9; // 0x1000037d8
    char * v10; // 0x1000037d8
    char v11; // 0x1000038b8
    if (_isdigit((int32_t)*c5) == 0) {
        goto lab_0x100003a8c;
    } else {
        // 0x100003898
        if (_isdigit((int32_t)*c6) == 0) {
            goto lab_0x100003a8c;
        } else {
            // 0x1000038b4
            v11 = *c5;
            if (v11 == 48) {
                goto lab_0x1000038e4;
            } else {
                // 0x1000038cc
                v9 = c5;
                v10 = c6;
                if (*c6 == 48) {
                    goto lab_0x1000038e4;
                } else {
                    goto lab_0x100003974;
                }
            }
        }
    }
  lab_0x100003a8c:;
    int32_t v12 = _tolower((int32_t)*c5); // 0x100003a94
    if (v12 != _tolower((int32_t)*c6)) {
        int32_t v13 = _tolower((int32_t)*c5); // 0x100003ac8
        // 0x100003b8c
        return v13 - _tolower((int32_t)*c6);
    }
    char v14 = *c; // 0x100003b08
    char v15 = *c2; // 0x100003b10
    char v16 = v14; // 0x100003b24
    char v17 = v15; // 0x100003b24
    char v18 = v14; // 0x100003b24
    if (v14 == v15) {
        v17 = 0;
        v18 = 0;
        while (v16 != 0) {
            // 0x100003b54
            int64_t v19; // 0x1000037d8
            int64_t v20 = v19 + 1; // 0x100003b58
            int64_t v21; // 0x1000037d8
            int64_t v22 = v21 + 1; // 0x100003b64
            char v23 = *(char *)v20; // 0x100003b08
            char v24 = *(char *)v22; // 0x100003b10
            v16 = v23;
            v21 = v22;
            v19 = v20;
            v17 = v24;
            v18 = v23;
            if (v23 != v24) {
                // break -> 0x100003b70
                break;
            }
            v17 = 0;
            v18 = 0;
        }
    }
    // 0x100003b8c
    return (int32_t)v18 - (int32_t)v17;
  lab_0x1000038e4:;
    int64_t v25 = (int64_t)c5; // 0x1000038e8
    char v26 = v11; // 0x1000038f8
    char * v27 = c5; // 0x1000038f8
    char * v28 = c6; // 0x1000038f8
    if (v2 != v25 && v2 <= v25) {
        int64_t v29 = v25 - 1; // 0x100003904
        char * v30 = (char *)v29;
        char * v31 = (char *)((int64_t)c6 - 1);
        char v32 = *v30; // 0x10000391c
        v26 = v32;
        v27 = v30;
        v28 = v31;
        while (v32 == 48) {
            // 0x1000038e8
            v26 = 48;
            v27 = v30;
            v28 = v31;
            if (v2 == v29 || v2 > v29) {
                // break -> 0x100003938
                break;
            }
            v29--;
            v30 = (char *)v29;
            v31 = (char *)((int64_t)v31 - 1);
            v32 = *v30;
            v26 = v32;
            v27 = v30;
            v28 = v31;
        }
    }
    // 0x100003938
    v9 = v27;
    v10 = v28;
    if (_isdigit((int32_t)v26) == 0) {
        // 0x100003954
        v9 = (char *)((int64_t)v27 + 1);
        v10 = (char *)((int64_t)v28 + 1);
    }
    goto lab_0x100003974;
  lab_0x100003974:;
    char * v33 = v9; // 0x1000039a0
    int64_t v34 = 0; // 0x1000039a0
    if (_isdigit((int32_t)*v9) != 0) {
        int64_t v35 = 0x100000000 * function_1000037c0() >> 32; // 0x1000039c8
        char * v36 = (char *)((int64_t)v9 + 1);
        v33 = v36;
        v34 = v35;
        int64_t v37 = v35; // 0x1000039a0
        char * v38 = v36; // 0x1000039a0
        while (_isdigit((int32_t)*v36) != 0) {
            // 0x1000039a8
            v35 = (0x100000000 * function_1000037c0() >> 32) + 10 * v37;
            v36 = (char *)((int64_t)v38 + 1);
            v33 = v36;
            v34 = v35;
            v37 = v35;
            v38 = v36;
        }
    }
    char * v39 = v10; // 0x1000039fc
    int64_t v40 = 0; // 0x1000039fc
    if (_isdigit((int32_t)*v10) != 0) {
        int64_t v41 = 0x100000000 * function_1000037c0() >> 32; // 0x100003a24
        char * v42 = (char *)((int64_t)v10 + 1);
        int64_t v43 = v41; // 0x1000039fc
        char * v44 = v42; // 0x1000039fc
        v39 = v42;
        v40 = v41;
        while (_isdigit((int32_t)*v42) != 0) {
            // 0x100003a04
            v41 = (0x100000000 * function_1000037c0() >> 32) + 10 * v43;
            v42 = (char *)((int64_t)v44 + 1);
            v43 = v41;
            v44 = v42;
            v39 = v42;
            v40 = v41;
        }
    }
    // 0x100003a3c
    int32_t result; // 0x1000037d8
    if (v34 == v40) {
        // 0x100003a54
        result = (int64_t)v9 - (int64_t)v10 - (int64_t)v33 + (int64_t)v39;
    } else {
        // 0x100003a78
        result = v34 - v40;
    }
    // 0x100003b8c
    return result;
}

// Address range: 0x100003b9c - 0x100003e3c
int64_t entry_point(void) {
    // 0x100003b9c
    function_100003500();
    _printf("sort on col 0, ascending\n");
    function_1000036c8();
    function_100003500();
    _printf("sort on col 0, reverse.special\n");
    function_1000036c8();
    function_100003500();
    _printf("sort on col 1, ascending\n");
    function_1000036c8();
    function_100003500();
    _printf("sort on col 2, reverse\n");
    int64_t v1 = function_1000036c8(); // 0x100003e00
    int64_t v2 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003e10
    if (v2 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003e24
        ___stack_chk_fail(v1);
    }
    // 0x100003e28
    return 0;
}

// Address range: 0x100003e3c - 0x100003e48
int64_t function_100003e3c(int64_t a1) {
    // 0x100003e3c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003e48 - 0x100003e54
int32_t function_100003e48(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003e48
    return _fprintf(stream, format);
}

// Address range: 0x100003e54 - 0x100003e60
int32_t function_100003e54(int32_t c) {
    // 0x100003e54
    return _isdigit(c);
}

// Address range: 0x100003e60 - 0x100003e6c
int32_t function_100003e60(char * format, ...) {
    // 0x100003e60
    return _printf(format);
}

// Address range: 0x100003e6c - 0x100003e78
void function_100003e6c(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003e6c
    _qsort(base, nmemb, size, compar);
}

// Address range: 0x100003e78 - 0x100003e84
int32_t function_100003e78(int32_t c) {
    // 0x100003e78
    return _tolower(c);
}

// Address range: 0x100000cfeedfacf - 0x100000cfeedfad0
int64_t function_100000cfeedfacf(void) {
    // 0x100000cfeedfacf
    int64_t result; // 0x100000cfeedfacf
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected functions: 14

