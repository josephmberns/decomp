//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003330(void);
int64_t function_100003378(void);
int64_t function_10000366c(void);
int64_t function_100003bd0(void);
int64_t function_100003e74(int64_t * a1, int64_t a2, int64_t a3, char * a4);
int64_t function_100003e80(int64_t a1);
int32_t function_100003e8c(char * nptr);
void function_100003e98(int32_t status);
int32_t function_100003ea4(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003eb0(char * format, ...);
int32_t function_100003ebc(int32_t c);
int32_t function_100003ec8(char * s, char * format, ...);
int32_t function_100003ed4(char * s1, char * s2);
int32_t function_100003ee0(char * s);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x7b100000050; // 0x100008000
int32_t g2 = 1969; // 0x100008004
int64_t g3 = 0x30000000003f01; // 0x100008040
int64_t g4 = 0; // 0x10000804c
int64_t g5 = 28; // 0x100008060
int32_t * g6 = (int32_t *)0x100000cfeedfacf; // 0x100008160
int32_t * g7 = (int32_t *)0x100000c; // 0x100008164
int64_t g8; // 0x100008168
int32_t g9;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___sprintf_chk(int64_t * a1, int64_t a2, int64_t a3, char * a4);
int64_t ___stack_chk_fail(int64_t a1);
int32_t _atoi(char * a1);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _sscanf(char * a1, char * a2, ...);
int32_t _strcmp(char * a1, char * a2);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003330 - 0x100003378
int64_t function_100003330(void) {
    // 0x100003330
    int64_t v1; // 0x100003330
    int32_t v2 = v1; // 0x10000333c
    if (v2 < 1) {
        // 0x10000336c
        int64_t result; // 0x100003330
        return result;
    }
    int32_t result2; // 0x100003364
    for (int32_t i = v2; i >= 1; i--) {
        // 0x100003360
        result2 = _putchar(32);
    }
    // 0x10000336c
    return result2;
}

// Address range: 0x100003378 - 0x10000366c
int64_t function_100003378(void) {
    int32_t v1 = g2; // 0x100003380
    if (v1 % 400 == 0 || v1 % 100 != 0 == v1 == 4 * v1 / 4) {
        // 0x1000033f4
        *(int32_t *)&g5 = 29;
    }
    int32_t v2 = v1 - 1; // 0x100003410
    g2 = v2;
    *(int32_t *)&g4 = (v2 / 4 + 1 + 365 * v2 + v2 / -100 + v2 / 400) % 7;
    for (int64_t i = 1; i < 12; i++) {
        int64_t v3 = 24 * i;
        int32_t v4 = *(int32_t *)(v3 + (int64_t)&g3 - 12); // 0x1000034b4
        int32_t v5 = *(int32_t *)(v3 + (int64_t)&g3 - 16); // 0x1000034cc
        *(int32_t *)(v3 + (int64_t)&g3 + 12) = (v5 + v4) % 7;
    }
    int32_t v6 = *(int32_t *)&g1; // 0x10000350c
    int32_t v7 = (v6 + 2) / 22; // 0x100003628
    int32_t v8 = v7 - 1;
    while (12 % v7 != 0) {
        // 0x10000352c
        v7 = v8;
        v8 = v7 - 1;
    }
    // 0x100003570
    *(int32_t *)&g6 = v7;
    int32_t v9 = 0; // 0x100003588
    if (v7 != 1) {
        // 0x100003590
        v9 = (-20 * v7 + v6) / v8;
    }
    int32_t v10 = v9;
    int32_t v11 = v10 - 4; // 0x1000035e4
    int32_t v12 = v11 == 0 | v11 < 0 != (3 - v10 & v10) < 0 ? v10 : 4;
    *(int32_t *)&g7 = v12;
    *(int32_t *)&g8 = (v6 + 1 + v12 + -1 * (v12 + 20) * v7) / 2;
    g2++;
    int64_t result; // 0x100003378
    return result;
}

// Address range: 0x10000366c - 0x100003bd0
int64_t function_10000366c(void) {
    int32_t v1 = *(int32_t *)&g6;
    int64_t v2; // 0x10000366c
    int32_t v3 = v1 * (int32_t)v2; // 0x10000368c
    int32_t v4 = v3 + v1; // 0x10000369c
    function_100003330();
    int32_t v5 = -v1;
    int32_t v6; // 0x10000366c
    if (v5 < 0 == ((v4 ^ v3) & (v3 ^ v5)) < 0) {
        // 0x1000037d0
        _putchar(10);
        function_100003330();
        v6 = v4 - 1;
    } else {
        char * v7 = (char *)v2;
        int32_t v8 = v3; // 0x1000037c4
        int64_t v9 = *(int64_t *)(24 * (int64_t)v8 + (int64_t)&g3); // 0x1000036f4
        _strlen((char *)v9);
        function_100003330();
        _printf("%s", v7);
        function_100003330();
        v8++;
        while (v8 - v4 < 0 != ((v8 - v4 ^ v8) & (v8 ^ v4)) < 0) {
            // 0x1000036d8
            v9 = *(int64_t *)(24 * (int64_t)v8 + (int64_t)&g3);
            _strlen((char *)v9);
            function_100003330();
            _printf("%s", v7);
            function_100003330();
            v8++;
        }
        // 0x1000037d0
        _putchar(10);
        function_100003330();
        int32_t v10 = v4 - 1;
        int32_t v11 = v3;
        for (int32_t i = 0; i < 7; i++) {
            // 0x100003828
            _printf("%s%s", v7, (char *)v2);
        }
        int32_t v12 = v11 - v10; // 0x100003898
        if (v12 < 0 == ((v12 ^ v11) & (v11 ^ v10)) < 0) {
            // 0x1000038bc
            _putchar(10);
        } else {
            // 0x1000038a8
            function_100003330();
        }
        int32_t v13 = v11 + 1; // 0x1000038d0
        int32_t v14 = v13 - v4; // 0x1000037fc
        v6 = v10;
        while (v14 < 0 != ((v14 ^ v13) & (v13 ^ v4)) < 0) {
            // 0x100003814
            v11 = v13;
            for (int32_t i = 0; i < 7; i++) {
                // 0x100003828
                _printf("%s%s", v7, (char *)v2);
            }
            // 0x10000388c
            v12 = v11 - v10;
            if (v12 < 0 == ((v12 ^ v11) & (v11 ^ v10)) < 0) {
                // 0x1000038bc
                _putchar(10);
            } else {
                // 0x1000038a8
                function_100003330();
            }
            // 0x1000038cc
            v13 = v11 + 1;
            v14 = v13 - v4;
            v6 = v10;
        }
    }
    int32_t v15 = v3; // 0x1000038fc
    int32_t v16; // 0x10000366c
    int32_t v17; // 0x10000366c
    int64_t v18; // 0x10000390c
    int32_t v19; // 0x100003920
    int32_t v20; // 0x100003930
    int32_t v21; // 0x100003934
    int32_t v22; // 0x100003950
    int32_t v23; // 0x1000038f4
    if (v5 < 0 != ((v4 ^ v3) & (v3 ^ v5)) < 0) {
        v17 = v3;
        v18 = 24 * (int64_t)v17;
        v19 = *(int32_t *)(v18 + (int64_t)&g3 + 16);
        v20 = *(int32_t *)(v18 + (int64_t)&g3 + 8);
        v21 = v19 - v20;
        v15 = v17;
        while (v21 < 0 == ((v21 ^ v19) & (v20 ^ v19)) < 0) {
            // 0x10000394c
            v22 = v17 + 1;
            v23 = v22 - v4;
            v16 = v22;
            v15 = v22;
            if (v23 < 0 == ((v23 ^ v22) & (v22 ^ v4)) < 0) {
                // break -> 0x10000395c
                break;
            }
            v17 = v16;
            v18 = 24 * (int64_t)v17;
            v19 = *(int32_t *)(v18 + (int64_t)&g3 + 16);
            v20 = *(int32_t *)(v18 + (int64_t)&g3 + 8);
            v21 = v19 - v20;
            v15 = v17;
        }
    }
    // 0x1000038e0
    while (v15 != v4) {
        // 0x100003978
        function_100003330();
        if (v5 < 0 != ((v4 ^ v3) & (v3 ^ v5)) < 0) {
            int32_t v24 = v3;
            int64_t v25 = 24 * (int64_t)v24; // 0x1000039c0
            int32_t * v26 = (int32_t *)(v25 + (int64_t)&g3 + 12); // 0x1000039d0
            int32_t v27 = *v26; // 0x1000039d0
            int32_t v28 = -v27; // 0x1000039d4
            int32_t v29 = 0; // 0x1000039dc
            int32_t v30; // 0x10000366c
            int32_t v31; // 0x1000039f4
            int32_t v32; // 0x1000039d0
            int32_t v33; // 0x1000039d4
            if (v28 < 0 != (v27 & v28) < 0) {
                function_100003330();
                v31 = 1;
                v32 = *v26;
                v33 = v31 - v32;
                v29 = v31;
                v30 = v31;
                while (v33 < 0 != ((v33 ^ v31) & (v32 ^ v31)) < 0) {
                    // 0x1000039e4
                    function_100003330();
                    v31 = v30 + 1;
                    v32 = *v26;
                    v33 = v31 - v32;
                    v29 = v31;
                    v30 = v31;
                }
            }
            int32_t v34 = v29;
            int32_t v35 = v24 - v6;
            int32_t v36 = v34 + 1; // 0x100003a08
            int32_t v37 = v34; // 0x100003a20
            int32_t v38 = v36; // 0x100003a20
            int32_t v39; // 0x10000366c
            int32_t v40; // 0x10000366c
            int32_t * v41; // 0x10000366c
            int32_t v42; // 0x100003a44
            int32_t v43; // 0x100003a54
            int32_t v44; // 0x100003a58
            int32_t v45; // 0x100003a08
            if (v34 < 7 != (6 - v34 & v34) < 0) {
                // 0x100003a68
                v41 = (int32_t *)(v25 + (int64_t)&g3 + 16);
                v40 = v34;
                v39 = v36;
                v42 = *v41;
                v43 = *(int32_t *)(v25 + (int64_t)&g3 + 8);
                v44 = v42 - v43;
                v37 = v40;
                v38 = v39;
                while (v44 < 0 != ((v44 ^ v42) & (v43 ^ v42)) < 0) {
                    // 0x100003a74
                    *v41 = v42 + 1;
                    _printf("%2d", v2);
                    if (v40 < 6 != (v39 & 5 - v40) < 0 || v35 < 0 != ((v35 ^ v24) & (v24 ^ v6)) < 0) {
                        // 0x100003ae0
                        _putchar(32);
                    }
                    // 0x100003aec
                    v45 = v39 + 1;
                    v37 = v39;
                    v38 = v45;
                    if (v39 < 7 == (6 - v39 & v39) < 0) {
                        // break -> 0x100003af4
                        break;
                    }
                    v40 = v39;
                    v39 = v45;
                    v42 = *v41;
                    v43 = *(int32_t *)(v25 + (int64_t)&g3 + 8);
                    v44 = v42 - v43;
                    v37 = v40;
                    v38 = v39;
                }
            }
            int32_t v46 = v37;
            int32_t v47 = v46 - 6; // 0x100003b00
            int32_t v48; // 0x10000366c
            int32_t v49; // 0x10000366c
            int32_t v50; // 0x100003b00
            if (v35 < 0 != ((v35 ^ v24) & (v24 ^ v6)) < 0 && v47 != 0 != (v47 < 0 == (5 - v46 & v38) < 0)) {
                // 0x100003b40
                v49 = v46 + 2;
                function_100003330();
                v50 = v49 - 7;
                v48 = v49 + 1;
                while (v50 != 0 != (v50 < 0 == (6 - v49 & v49) < 0)) {
                    // 0x100003b40
                    v49 = v48;
                    function_100003330();
                    v50 = v49 - 7;
                    v48 = v49 + 1;
                }
            }
            if (v35 < 0 != ((v35 ^ v24) & (v24 ^ v6)) < 0) {
                // 0x100003b68
                function_100003330();
            }
            // 0x100003b80
            *v26 = 0;
            int32_t v51 = v24 + 1; // 0x100003ba4
            int32_t v52 = v51 - v4; // 0x10000399c
            while (v52 < 0 != ((v52 ^ v51) & (v51 ^ v4)) < 0) {
                // 0x1000039b4
                v24 = v51;
                v25 = 24 * (int64_t)v24;
                v26 = (int32_t *)(v25 + (int64_t)&g3 + 12);
                v27 = *v26;
                v28 = -v27;
                v29 = 0;
                if (v28 < 0 != (v27 & v28) < 0) {
                    function_100003330();
                    v31 = 1;
                    v32 = *v26;
                    v33 = v31 - v32;
                    v29 = v31;
                    v30 = v31;
                    while (v33 < 0 != ((v33 ^ v31) & (v32 ^ v31)) < 0) {
                        // 0x1000039e4
                        function_100003330();
                        v31 = v30 + 1;
                        v32 = *v26;
                        v33 = v31 - v32;
                        v29 = v31;
                        v30 = v31;
                    }
                }
                // 0x100003a04
                v34 = v29;
                v35 = v24 - v6;
                v36 = v34 + 1;
                v37 = v34;
                v38 = v36;
                if (v34 < 7 != (6 - v34 & v34) < 0) {
                    // 0x100003a68
                    v41 = (int32_t *)(v25 + (int64_t)&g3 + 16);
                    v40 = v34;
                    v39 = v36;
                    v42 = *v41;
                    v43 = *(int32_t *)(v25 + (int64_t)&g3 + 8);
                    v44 = v42 - v43;
                    v37 = v40;
                    v38 = v39;
                    while (v44 < 0 != ((v44 ^ v42) & (v43 ^ v42)) < 0) {
                        // 0x100003a74
                        *v41 = v42 + 1;
                        _printf("%2d", v2);
                        if (v40 < 6 != (v39 & 5 - v40) < 0 || v35 < 0 != ((v35 ^ v24) & (v24 ^ v6)) < 0) {
                            // 0x100003ae0
                            _putchar(32);
                        }
                        // 0x100003aec
                        v45 = v39 + 1;
                        v37 = v39;
                        v38 = v45;
                        if (v39 < 7 == (6 - v39 & v39) < 0) {
                            // break -> 0x100003af4
                            break;
                        }
                        v40 = v39;
                        v39 = v45;
                        v42 = *v41;
                        v43 = *(int32_t *)(v25 + (int64_t)&g3 + 8);
                        v44 = v42 - v43;
                        v37 = v40;
                        v38 = v39;
                    }
                }
                // 0x100003af4
                v46 = v37;
                v47 = v46 - 6;
                if (v35 < 0 != ((v35 ^ v24) & (v24 ^ v6)) < 0 && v47 != 0 != (v47 < 0 == (5 - v46 & v38) < 0)) {
                    // 0x100003b40
                    v49 = v46 + 2;
                    function_100003330();
                    v50 = v49 - 7;
                    v48 = v49 + 1;
                    while (v50 != 0 != (v50 < 0 == (6 - v49 & v49) < 0)) {
                        // 0x100003b40
                        v49 = v48;
                        function_100003330();
                        v50 = v49 - 7;
                        v48 = v49 + 1;
                    }
                }
                if (v35 < 0 != ((v35 ^ v24) & (v24 ^ v6)) < 0) {
                    // 0x100003b68
                    function_100003330();
                }
                // 0x100003b80
                *v26 = 0;
                v51 = v24 + 1;
                v52 = v51 - v4;
            }
        }
        // 0x100003bb0
        _putchar(10);
        v15 = v3;
        if (v5 < 0 != ((v4 ^ v3) & (v3 ^ v5)) < 0) {
            v17 = v3;
            v18 = 24 * (int64_t)v17;
            v19 = *(int32_t *)(v18 + (int64_t)&g3 + 16);
            v20 = *(int32_t *)(v18 + (int64_t)&g3 + 8);
            v21 = v19 - v20;
            v15 = v17;
            while (v21 < 0 == ((v21 ^ v19) & (v20 ^ v19)) < 0) {
                // 0x10000394c
                v22 = v17 + 1;
                v23 = v22 - v4;
                v16 = v22;
                v15 = v22;
                if (v23 < 0 == ((v23 ^ v22) & (v22 ^ v4)) < 0) {
                    // break -> 0x10000395c
                    break;
                }
                v17 = v16;
                v18 = 24 * (int64_t)v17;
                v19 = *(int32_t *)(v18 + (int64_t)&g3 + 16);
                v20 = *(int32_t *)(v18 + (int64_t)&g3 + 8);
                v21 = v19 - v20;
                v15 = v17;
            }
        }
    }
    // 0x100003bbc
    return _putchar(10);
}

// Address range: 0x100003bd0 - 0x100003cd8
int64_t function_100003bd0(void) {
    // 0x100003bd0
    int64_t v1; // bp-56, 0x100003bd0
    ___sprintf_chk(&v1, 0, 32, "%d");
    _strlen((char *)&v1);
    function_100003330();
    _printf("%s\n\n", NULL);
    int32_t v2 = 0; // 0x100003c9c
    int64_t v3 = function_10000366c(); // 0x100003c90
    v2++;
    int32_t v4 = *(int32_t *)&g6 * v2; // 0x100003c78
    while (v4 < 12 != (11 - v4 & v4) < 0) {
        // 0x100003c8c
        v3 = function_10000366c();
        v2++;
        v4 = *(int32_t *)&g6 * v2;
    }
    int64_t v5 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003cb4
    int64_t result = v3; // 0x100003cc0
    if (v5 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003cc8
        result = ___stack_chk_fail(v3);
    }
    // 0x100003ccc
    return result;
}

// Address range: 0x100003cd8 - 0x100003e74
int64_t entry_point(void) {
    // 0x100003cd8
    int64_t v1; // 0x100003cd8
    int32_t v2 = v1; // 0x100003ce8
    int32_t v3 = 1 - v2; // 0x100003d08
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003e2c
        function_100003378();
        function_100003bd0();
        return 0;
    }
    int32_t v4 = 1; // 0x100003e20
    int32_t v5 = 0; // 0x100003cd8
    while (true) {
        int32_t v6 = v5;
        int32_t v7 = v4;
        int64_t * v8 = (int64_t *)(8 * (int64_t)v7 + v1); // 0x100003d20
        int32_t v9; // 0x100003cd8
        if (_strcmp((char *)*v8, "-w") == 0) {
            int32_t v10 = v7 + 1; // 0x100003d44
            if (v10 == v2) {
                // break -> 0x100003e44
                break;
            }
            int32_t v11 = _atoi((char *)*(int64_t *)(8 * (int64_t)v10 + v1)); // 0x100003d6c
            *(int32_t *)&g1 = v11;
            v5 = v6;
            v9 = v10;
            if (v11 < 20 != (19 - v11 & v11) < 0) {
                // break -> 0x100003e44
                break;
            }
        } else {
            if (v6 != 0) {
                // break -> 0x100003e44
                break;
            }
            // 0x100003da4
            v5 = 1;
            v9 = v7;
            if (_sscanf((char *)*v8, "%d", (int64_t *)v1) == 0 || g2 < 1) {
                // 0x100003df4
                g2 = 1969;
                v5 = 1;
                v9 = v7;
            }
        }
        // 0x100003e1c
        v4 = v9 + 1;
        int32_t v12 = v4 - v2; // 0x100003d08
        if (v12 < 0 == ((v12 ^ v4) & (v4 ^ v2)) < 0) {
            // 0x100003e2c
            function_100003378();
            function_100003bd0();
            return 0;
        }
    }
    int64_t v13 = *(int64_t *)*(int64_t *)0x100004018; // 0x100003e4c
    _fprintf((struct _IO_FILE *)v13, "bad args\nUsage: %s year [-w width (>= 20)]\n", (char *)v1);
    _exit(1);
    return &g9;
}

// Address range: 0x100003e74 - 0x100003e80
int64_t function_100003e74(int64_t * a1, int64_t a2, int64_t a3, char * a4) {
    // 0x100003e74
    return ___sprintf_chk(a1, a2, a3, a4);
}

// Address range: 0x100003e80 - 0x100003e8c
int64_t function_100003e80(int64_t a1) {
    // 0x100003e80
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003e8c - 0x100003e98
int32_t function_100003e8c(char * nptr) {
    // 0x100003e8c
    return _atoi(nptr);
}

// Address range: 0x100003e98 - 0x100003ea4
void function_100003e98(int32_t status) {
    // 0x100003e98
    _exit(status);
}

// Address range: 0x100003ea4 - 0x100003eb0
int32_t function_100003ea4(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003ea4
    return _fprintf(stream, format);
}

// Address range: 0x100003eb0 - 0x100003ebc
int32_t function_100003eb0(char * format, ...) {
    // 0x100003eb0
    return _printf(format);
}

// Address range: 0x100003ebc - 0x100003ec8
int32_t function_100003ebc(int32_t c) {
    // 0x100003ebc
    return _putchar(c);
}

// Address range: 0x100003ec8 - 0x100003ed4
int32_t function_100003ec8(char * s, char * format, ...) {
    // 0x100003ec8
    return _sscanf(s, format);
}

// Address range: 0x100003ed4 - 0x100003ee0
int32_t function_100003ed4(char * s1, char * s2) {
    // 0x100003ed4
    return _strcmp(s1, s2);
}

// Address range: 0x100003ee0 - 0x100003eec
int32_t function_100003ee0(char * s) {
    // 0x100003ee0
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 15

