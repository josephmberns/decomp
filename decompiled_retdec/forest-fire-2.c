//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_10000388c(int32_t a1, int32_t a2);
int64_t function_1000038dc(void);
int64_t function_100003930(void);
int32_t function_100003f48(char * nptr);
int32_t function_100003f54(struct _IO_FILE * stream);
int32_t function_100003f60(char * format, ...);
int32_t function_100003f6c(void);

// --------------------- Global Variables ---------------------

float64_t g1 = 2147483647.0; // 0x100003f78
char * g2 = "\x1b[H"; // 0x100003f9c
int64_t g3 = 0x10000000003f80; // 0x100008000
float64_t g4 = 0.01; // 0x100008018
int64_t g5 = 0x3f1a36e2eb1c432d; // 0x100008020

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int32_t _atoi(char * a1);
int32_t _fflush(struct _IO_FILE * a1);
int32_t _printf(char * a1, ...);
int32_t _rand(void);

// ------------------------ Functions -------------------------

// Address range: 0x10000388c - 0x1000038dc
int64_t function_10000388c(int32_t a1, int32_t a2) {
    // 0x10000388c
    return ___chkstk_darwin();
}

// Address range: 0x1000038dc - 0x100003930
int64_t function_1000038dc(void) {
    // 0x1000038dc
    int64_t v1; // 0x1000038dc
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 - 144); // 0x1000038dc
    int64_t v4; // 0x1000038dc
    *(int64_t *)(v2 - 128) = (int64_t)&v4 - v3;
    *(int64_t *)(v2 - 24) = *(int64_t *)(v2 - 136);
    int64_t v5 = (int64_t)*(int32_t *)(v2 - 8); // 0x1000038fc
    *(int64_t *)(v2 - 104) = v5;
    int64_t v6 = (int64_t)*(int32_t *)(v2 - 4); // 0x100003908
    *(int64_t *)(v2 - 120) = v6;
    *(int64_t *)(v2 - 112) = 4 * v5 * v6 + 15 & -16;
    return ___chkstk_darwin();
}

// Address range: 0x100003930 - 0x100003e7c
int64_t function_100003930(void) {
    // 0x100003930
    int64_t v1; // 0x100003930
    int64_t v2 = v1;
    int64_t v3; // 0x100003930
    int64_t v4 = (int64_t)&v3 - *(int64_t *)(v2 - 112); // 0x10000393c
    int64_t * v5 = (int64_t *)(v2 - 96); // 0x100003944
    *v5 = v4;
    *(int64_t *)(v2 - 40) = *(int64_t *)(v2 - 104);
    int32_t * v6 = (int32_t *)(v2 - 52); // 0x100003950
    *v6 = 0;
    int32_t * v7 = (int32_t *)(v2 - 8); // 0x10000395c
    int32_t v8 = *v7; // 0x10000395c
    int32_t v9 = -v8; // 0x100003960
    int32_t * v10; // 0x100003930
    int64_t * v11; // 0x100003930
    int64_t * v12; // 0x100003930
    int64_t * v13; // 0x100003930
    if (v9 < 0 == (v8 & v9) < 0) {
        // 0x100003930
        v13 = (int64_t *)(v2 - 120);
        v12 = (int64_t *)(v2 - 152);
        v11 = (int64_t *)(v2 - 128);
        v10 = (int32_t *)(v2 - 4);
    } else {
        int32_t * v14 = (int32_t *)(v2 - 56); // 0x100003970
        int32_t * v15 = (int32_t *)(v2 - 4);
        int64_t * v16 = (int64_t *)(v2 - 152);
        int64_t * v17 = (int64_t *)(v2 - 128);
        int64_t * v18 = (int64_t *)(v2 - 120);
        *v14 = 0;
        int32_t v19 = *v15; // 0x10000397c
        int32_t v20 = -v19; // 0x100003980
        int32_t v21; // 0x100003990
        int64_t v22; // 0x100003998
        int32_t v23; // 0x1000039e0
        int32_t v24; // 0x1000039e4
        int32_t v25; // 0x1000039e8
        int32_t v26; // 0x1000039f4
        int32_t v27; // 0x100003a04
        int32_t v28; // 0x10000397c
        if (v20 < 0 != (v19 & v20) < 0) {
            v21 = _rand();
            v22 = *v17;
            v23 = *v14;
            v24 = g4 * g1 < (float64_t)v21;
            *(int32_t *)(4 * (*v16 * (int64_t)*v6 + (int64_t)v23) + v22) = v24;
            v25 = *v6;
            v26 = *v14;
            *(int32_t *)(4 * (*v18 * (int64_t)v25 + (int64_t)v26) + *v5) = v24;
            v27 = *v14 + 1;
            *v14 = v27;
            v28 = *v15;
            while (v27 - v28 < 0 != ((v27 - v28 ^ v27) & (v28 ^ v27)) < 0) {
                // 0x100003990
                v21 = _rand();
                v22 = *v17;
                v23 = *v14;
                v24 = g4 * g1 < (float64_t)v21;
                *(int32_t *)(4 * (*v16 * (int64_t)*v6 + (int64_t)v23) + v22) = v24;
                v25 = *v6;
                v26 = *v14;
                *(int32_t *)(4 * (*v18 * (int64_t)v25 + (int64_t)v26) + *v5) = v24;
                v27 = *v14 + 1;
                *v14 = v27;
                v28 = *v15;
            }
        }
        int32_t v29 = *v6 + 1; // 0x100003a18
        *v6 = v29;
        int32_t v30 = *v7; // 0x10000395c
        int32_t v31 = v29 - v30; // 0x100003960
        v13 = v18;
        v12 = v16;
        v11 = v17;
        v10 = v15;
        while (v31 < 0 != ((v31 ^ v29) & (v30 ^ v29)) < 0) {
            // 0x100003970
            *v14 = 0;
            v19 = *v15;
            v20 = -v19;
            if (v20 < 0 != (v19 & v20) < 0) {
                v21 = _rand();
                v22 = *v17;
                v23 = *v14;
                v24 = g4 * g1 < (float64_t)v21;
                *(int32_t *)(4 * (*v16 * (int64_t)*v6 + (int64_t)v23) + v22) = v24;
                v25 = *v6;
                v26 = *v14;
                *(int32_t *)(4 * (*v18 * (int64_t)v25 + (int64_t)v26) + *v5) = v24;
                v27 = *v14 + 1;
                *v14 = v27;
                v28 = *v15;
                while (v27 - v28 < 0 != ((v27 - v28 ^ v27) & (v28 ^ v27)) < 0) {
                    // 0x100003990
                    v21 = _rand();
                    v22 = *v17;
                    v23 = *v14;
                    v24 = g4 * g1 < (float64_t)v21;
                    *(int32_t *)(4 * (*v16 * (int64_t)*v6 + (int64_t)v23) + v22) = v24;
                    v25 = *v6;
                    v26 = *v14;
                    *(int32_t *)(4 * (*v18 * (int64_t)v25 + (int64_t)v26) + *v5) = v24;
                    v27 = *v14 + 1;
                    *v14 = v27;
                    v28 = *v15;
                }
            }
            // 0x100003a14
            v29 = *v6 + 1;
            *v6 = v29;
            v30 = *v7;
            v31 = v29 - v30;
            v13 = v18;
            v12 = v16;
            v11 = v17;
            v10 = v15;
        }
    }
    int32_t * v32 = (int32_t *)(v2 - 60);
    int32_t * v33 = (int32_t *)(v2 - 64);
    int32_t * v34 = (int32_t *)(v2 - 68);
    int32_t * v35 = (int32_t *)(v2 - 72);
    int32_t * v36 = (int32_t *)(v2 - 76);
    int32_t * v37 = (int32_t *)(v2 - 80);
    int32_t * v38 = (int32_t *)(v2 - 84);
    int32_t * v39 = (int32_t *)(v2 - 88);
    int32_t v40; // 0x100003930
    int32_t v41; // 0x100003930
    while (true) {
        // 0x100003a28
        _printf((char *)&g2);
        *v32 = 0;
        int32_t v42 = *v7; // 0x100003a40
        int32_t v43 = -v42; // 0x100003a44
        if (v43 < 0 != (v42 & v43) < 0) {
            *v33 = 0;
            int32_t v44 = *v10; // 0x100003a60
            int32_t v45 = -v44; // 0x100003a64
            int64_t v46; // 0x100003a74
            int64_t v47; // 0x100003a78
            uint32_t v48; // 0x100003a8c
            int64_t v49; // 0x100003a9c
            int32_t v50; // 0x100003ac4
            int32_t v51; // 0x100003a60
            int32_t v52; // 0x100003a64
            if (v45 < 0 != (v44 & v45) < 0) {
                v46 = *v11;
                v47 = *v12;
                v48 = *(int32_t *)(4 * (v47 * (int64_t)*v32 + (int64_t)0) + v46);
                v49 = *(int64_t *)(8 * (int64_t)v48 + (int64_t)&g3);
                *(int64_t *)(v4 - 16) = v49;
                _printf("%s", (char *)v1);
                v50 = *v33 + 1;
                *v33 = v50;
                v51 = *v10;
                v52 = v50 - v51;
                while (v52 < 0 != ((v52 ^ v50) & (v51 ^ v50)) < 0) {
                    // 0x100003a74
                    v46 = *v11;
                    v47 = *v12;
                    v48 = *(int32_t *)(4 * (v47 * (int64_t)*v32 + (int64_t)v50) + v46);
                    v49 = *(int64_t *)(8 * (int64_t)v48 + (int64_t)&g3);
                    *(int64_t *)(v4 - 16) = v49;
                    _printf("%s", (char *)v1);
                    v50 = *v33 + 1;
                    *v33 = v50;
                    v51 = *v10;
                    v52 = v50 - v51;
                }
            }
            // 0x100003ad0
            _printf((char *)0x100003fa3);
            int32_t v53 = *v32 + 1; // 0x100003ae4
            *v32 = v53;
            int32_t v54 = *v7; // 0x100003a40
            while (v53 - v54 < 0 != ((v53 - v54 ^ v53) & (v54 ^ v53)) < 0) {
                // 0x100003a54
                *v33 = 0;
                v44 = *v10;
                v45 = -v44;
                if (v45 < 0 != (v44 & v45) < 0) {
                    v46 = *v11;
                    v47 = *v12;
                    v48 = *(int32_t *)(4 * (v47 * (int64_t)*v32 + (int64_t)0) + v46);
                    v49 = *(int64_t *)(8 * (int64_t)v48 + (int64_t)&g3);
                    *(int64_t *)(v4 - 16) = v49;
                    _printf("%s", (char *)v1);
                    v50 = *v33 + 1;
                    *v33 = v50;
                    v51 = *v10;
                    v52 = v50 - v51;
                    while (v52 < 0 != ((v52 ^ v50) & (v51 ^ v50)) < 0) {
                        // 0x100003a74
                        v46 = *v11;
                        v47 = *v12;
                        v48 = *(int32_t *)(4 * (v47 * (int64_t)*v32 + (int64_t)v50) + v46);
                        v49 = *(int64_t *)(8 * (int64_t)v48 + (int64_t)&g3);
                        *(int64_t *)(v4 - 16) = v49;
                        _printf("%s", (char *)v1);
                        v50 = *v33 + 1;
                        *v33 = v50;
                        v51 = *v10;
                        v52 = v50 - v51;
                    }
                }
                // 0x100003ad0
                _printf((char *)0x100003fa3);
                v53 = *v32 + 1;
                *v32 = v53;
                v54 = *v7;
            }
        }
        // 0x100003af0
        _fflush((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004008);
        *v34 = 0;
        int32_t v55 = *v7; // 0x100003b0c
        int32_t v56 = -v55; // 0x100003b10
        if (v56 < 0 != (v55 & v56) < 0) {
            while (true) {
                // 0x100003b20
                *v35 = 0;
                int32_t v57 = *v10; // 0x100003b2c
                int32_t v58 = -v57; // 0x100003b30
                v41 = 0;
                if (v58 < 0 != (v57 & v58) < 0) {
                    while (true) {
                      lab_0x100003b40:;
                        int64_t v59 = *v11; // 0x100003b40
                        int64_t v60 = *v12; // 0x100003b44
                        int32_t v61 = *v34; // 0x100003b48
                        int32_t v62 = *(int32_t *)(4 * (v60 * (int64_t)v61 + (int64_t)v41) + v59); // 0x100003b58
                        *(int32_t *)(v2 - 156) = v62;
                        switch (v62) {
                            case 0: {
                                // 0x100003ba8
                                if (g4 * g1 < (float64_t)_rand()) {
                                    int64_t v63 = *v13; // 0x100003bd8
                                    *(int32_t *)(4 * (v63 * (int64_t)*v34 + (int64_t)*v35) + *v5) = 1;
                                }
                                goto lab_0x100003db4;
                            }
                            case 2: {
                                int64_t v64 = *v13; // 0x100003b88
                                *(int32_t *)(4 * (v64 * (int64_t)*v34 + (int64_t)*v35) + *v5) = 0;
                                goto lab_0x100003db4;
                            }
                            default: {
                                int32_t v65 = *v34 - 1; // 0x100003c00
                                *v36 = v65;
                                int32_t v66 = *v34; // 0x100003c10
                                int32_t v67 = v66 + 1; // 0x100003c14
                                int32_t v68 = v65 - v67; // 0x100003c18
                                int32_t v69 = v65; // 0x100003c20
                                v40 = v66;
                                if (v68 == 0 || v68 < 0 != ((v68 ^ v65) & (v67 ^ v65)) < 0) {
                                    int32_t v70 = v69;
                                    int32_t v71 = v70; // 0x100003c34
                                    int32_t v72; // 0x100003930
                                    int32_t v73; // 0x100003930
                                    int32_t v74; // 0x100003d08
                                    int32_t v75; // 0x100003c40
                                    int32_t v76; // 0x100003c44
                                    int32_t v77; // 0x100003c5c
                                    int32_t v78; // 0x100003c6c
                                    int32_t v79; // 0x100003c70
                                    int32_t v80; // 0x100003c74
                                    int32_t v81; // 0x100003d0c
                                    int32_t v82; // 0x100003c6c
                                    int32_t v83; // 0x100003c70
                                    int32_t v84; // 0x100003c74
                                    int32_t v85; // 0x100003c9c
                                    int32_t v86; // 0x100003ca0
                                    int64_t v87; // 0x100003cb4
                                    int64_t v88; // 0x100003cb8
                                    int32_t v89; // 0x100003cbc
                                    int32_t v90; // 0x100003ccc
                                    int64_t v91; // 0x100003ce8
                                    if (v70 >= 0) {
                                        // 0x100003c3c
                                        v75 = *v7;
                                        v76 = v70 - v75;
                                        v71 = v70;
                                        if (v76 < 0 != ((v76 ^ v70) & (v75 ^ v70)) < 0) {
                                            // 0x100003c58
                                            v77 = *v35 - 1;
                                            *v37 = v77;
                                            v78 = *v35;
                                            v79 = v78 + 1;
                                            v80 = v77 - v79;
                                            v72 = v78;
                                            v73 = v77;
                                            if (v80 == 0 || v80 < 0 != ((v80 ^ v77) & (v79 ^ v77)) < 0) {
                                                v74 = v73;
                                                if (v74 >= 0) {
                                                    // 0x100003c98
                                                    v85 = *v10;
                                                    v86 = v74 - v85;
                                                    if (v86 < 0 != ((v86 ^ v74) & (v85 ^ v74)) < 0) {
                                                        // 0x100003cb4
                                                        v87 = *v11;
                                                        v88 = *v12;
                                                        v89 = *v36;
                                                        v90 = *(int32_t *)(4 * (v88 * (int64_t)v89 + (int64_t)v74) + v87);
                                                        if (v90 == 2) {
                                                            // 0x100003ce4
                                                            v91 = *v13;
                                                            *(int32_t *)(4 * (v91 * (int64_t)*v34 + (int64_t)v72) + *v5) = 2;
                                                            v40 = *v34;
                                                            goto lab_0x100003d30;
                                                        }
                                                    }
                                                }
                                                // 0x100003d08
                                                v81 = v74 + 1;
                                                *v37 = v81;
                                                v82 = *v35;
                                                v83 = v82 + 1;
                                                v84 = v81 - v83;
                                                while (v84 == 0 || v84 < 0 != ((v84 ^ v81) & (v83 ^ v81)) < 0) {
                                                    // 0x100003c84
                                                    v74 = v81;
                                                    if (v74 >= 0) {
                                                        // 0x100003c98
                                                        v85 = *v10;
                                                        v86 = v74 - v85;
                                                        if (v86 < 0 != ((v86 ^ v74) & (v85 ^ v74)) < 0) {
                                                            // 0x100003cb4
                                                            v87 = *v11;
                                                            v88 = *v12;
                                                            v89 = *v36;
                                                            v90 = *(int32_t *)(4 * (v88 * (int64_t)v89 + (int64_t)v74) + v87);
                                                            if (v90 == 2) {
                                                                // 0x100003ce4
                                                                v91 = *v13;
                                                                *(int32_t *)(4 * (v91 * (int64_t)*v34 + (int64_t)v82) + *v5) = 2;
                                                                v40 = *v34;
                                                                goto lab_0x100003d30;
                                                            }
                                                        }
                                                    }
                                                    // 0x100003d08
                                                    v81 = v74 + 1;
                                                    *v37 = v81;
                                                    v82 = *v35;
                                                    v83 = v82 + 1;
                                                    v84 = v81 - v83;
                                                }
                                            }
                                            // 0x100003d1c
                                            v71 = *v36;
                                        }
                                    }
                                    int32_t v92 = v71 + 1; // 0x100003d20
                                    *v36 = v92;
                                    int32_t v93 = *v34; // 0x100003c10
                                    int32_t v94 = v93 + 1; // 0x100003c14
                                    int32_t v95 = v92 - v94; // 0x100003c18
                                    v40 = v93;
                                    while (v95 == 0 || v95 < 0 != ((v95 ^ v92) & (v94 ^ v92)) < 0) {
                                        // 0x100003c28
                                        v70 = v92;
                                        v71 = v70;
                                        if (v70 >= 0) {
                                            // 0x100003c3c
                                            v75 = *v7;
                                            v76 = v70 - v75;
                                            v71 = v70;
                                            if (v76 < 0 != ((v76 ^ v70) & (v75 ^ v70)) < 0) {
                                                // 0x100003c58
                                                v77 = *v35 - 1;
                                                *v37 = v77;
                                                v78 = *v35;
                                                v79 = v78 + 1;
                                                v80 = v77 - v79;
                                                v72 = v78;
                                                v73 = v77;
                                                if (v80 == 0 || v80 < 0 != ((v80 ^ v77) & (v79 ^ v77)) < 0) {
                                                    v74 = v73;
                                                    if (v74 >= 0) {
                                                        // 0x100003c98
                                                        v85 = *v10;
                                                        v86 = v74 - v85;
                                                        if (v86 < 0 != ((v86 ^ v74) & (v85 ^ v74)) < 0) {
                                                            // 0x100003cb4
                                                            v87 = *v11;
                                                            v88 = *v12;
                                                            v89 = *v36;
                                                            v90 = *(int32_t *)(4 * (v88 * (int64_t)v89 + (int64_t)v74) + v87);
                                                            if (v90 == 2) {
                                                                // 0x100003ce4
                                                                v91 = *v13;
                                                                *(int32_t *)(4 * (v91 * (int64_t)*v34 + (int64_t)v72) + *v5) = 2;
                                                                v40 = *v34;
                                                                goto lab_0x100003d30;
                                                            }
                                                        }
                                                    }
                                                    // 0x100003d08
                                                    v81 = v74 + 1;
                                                    *v37 = v81;
                                                    v82 = *v35;
                                                    v83 = v82 + 1;
                                                    v84 = v81 - v83;
                                                    while (v84 == 0 || v84 < 0 != ((v84 ^ v81) & (v83 ^ v81)) < 0) {
                                                        // 0x100003c84
                                                        v74 = v81;
                                                        if (v74 >= 0) {
                                                            // 0x100003c98
                                                            v85 = *v10;
                                                            v86 = v74 - v85;
                                                            if (v86 < 0 != ((v86 ^ v74) & (v85 ^ v74)) < 0) {
                                                                // 0x100003cb4
                                                                v87 = *v11;
                                                                v88 = *v12;
                                                                v89 = *v36;
                                                                v90 = *(int32_t *)(4 * (v88 * (int64_t)v89 + (int64_t)v74) + v87);
                                                                if (v90 == 2) {
                                                                    // 0x100003ce4
                                                                    v91 = *v13;
                                                                    *(int32_t *)(4 * (v91 * (int64_t)*v34 + (int64_t)v82) + *v5) = 2;
                                                                    v40 = *v34;
                                                                    goto lab_0x100003d30;
                                                                }
                                                            }
                                                        }
                                                        // 0x100003d08
                                                        v81 = v74 + 1;
                                                        *v37 = v81;
                                                        v82 = *v35;
                                                        v83 = v82 + 1;
                                                        v84 = v81 - v83;
                                                    }
                                                }
                                                // 0x100003d1c
                                                v71 = *v36;
                                            }
                                        }
                                        // 0x100003d1c
                                        v92 = v71 + 1;
                                        *v36 = v92;
                                        v93 = *v34;
                                        v94 = v93 + 1;
                                        v95 = v92 - v94;
                                        v40 = v93;
                                    }
                                }
                                goto lab_0x100003d30;
                            }
                        }
                    }
                }
              lab_0x100003dc8:;
                int32_t v96 = *v34 + 1; // 0x100003dcc
                *v34 = v96;
                int32_t v97 = *v7; // 0x100003b0c
                int32_t v98 = v96 - v97; // 0x100003b10
                if (v98 < 0 == ((v98 ^ v96) & (v97 ^ v96)) < 0) {
                    // break -> 0x100003dd8
                    break;
                }
            }
        }
        // 0x100003dd8
        *v38 = 0;
        int32_t v99 = *v7; // 0x100003de4
        int32_t v100 = -v99; // 0x100003de8
        if (v100 < 0 != (v99 & v100) < 0) {
            *v39 = 0;
            int32_t v101 = *v10; // 0x100003e04
            int32_t v102 = -v101; // 0x100003e08
            int32_t v103; // 0x100003e04
            int32_t v104; // 0x100003e08
            int64_t v105; // 0x100003e28
            int64_t v106; // 0x100003e38
            int32_t v107; // 0x100003e38
            int32_t v108; // 0x100003e58
            if (v102 < 0 != (v101 & v102) < 0) {
                v105 = (int64_t)*v38;
                v106 = 0;
                v107 = *(int32_t *)(*v5 + v106 + 4 * *v13 * v105);
                *(int32_t *)(v106 + *v11 + 4 * *v12 * v105) = v107;
                v108 = *v39 + 1;
                *v39 = v108;
                v103 = *v10;
                v104 = v108 - v103;
                while (v104 < 0 != ((v104 ^ v108) & (v103 ^ v108)) < 0) {
                    // 0x100003e18
                    v105 = (int64_t)*v38;
                    v106 = 4 * (int64_t)v108;
                    v107 = *(int32_t *)(*v5 + v106 + 4 * *v13 * v105);
                    *(int32_t *)(v106 + *v11 + 4 * *v12 * v105) = v107;
                    v108 = *v39 + 1;
                    *v39 = v108;
                    v103 = *v10;
                    v104 = v108 - v103;
                }
            }
            int32_t v109 = *v38 + 1; // 0x100003e6c
            *v38 = v109;
            int32_t v110 = *v7; // 0x100003de4
            while (v109 - v110 < 0 != ((v109 - v110 ^ v109) & (v110 ^ v109)) < 0) {
                // 0x100003df8
                *v39 = 0;
                v101 = *v10;
                v102 = -v101;
                if (v102 < 0 != (v101 & v102) < 0) {
                    v105 = (int64_t)*v38;
                    v106 = 0;
                    v107 = *(int32_t *)(*v5 + v106 + 4 * *v13 * v105);
                    *(int32_t *)(v106 + *v11 + 4 * *v12 * v105) = v107;
                    v108 = *v39 + 1;
                    *v39 = v108;
                    v103 = *v10;
                    v104 = v108 - v103;
                    while (v104 < 0 != ((v104 ^ v108) & (v103 ^ v108)) < 0) {
                        // 0x100003e18
                        v105 = (int64_t)*v38;
                        v106 = 4 * (int64_t)v108;
                        v107 = *(int32_t *)(*v5 + v106 + 4 * *v13 * v105);
                        *(int32_t *)(v106 + *v11 + 4 * *v12 * v105) = v107;
                        v108 = *v39 + 1;
                        *v39 = v108;
                        v103 = *v10;
                        v104 = v108 - v103;
                    }
                }
                // 0x100003e68
                v109 = *v38 + 1;
                *v38 = v109;
                v110 = *v7;
            }
        }
    }
  lab_0x100003d30:;
    int64_t v111 = *v5; // 0x100003d30
    int64_t v112 = *v13; // 0x100003d34
    int32_t v113 = *v35; // 0x100003d44
    int32_t v114 = *(int32_t *)(4 * (v112 * (int64_t)v40 + (int64_t)v113) + v111); // 0x100003d48
    if (v114 == 1) {
        // 0x100003d5c
        if (g1 * (float64_t)g5 < (float64_t)_rand()) {
            int64_t v115 = *v13; // 0x100003d8c
            *(int32_t *)(4 * (v115 * (int64_t)*v34 + (int64_t)*v35) + *v5) = 2;
        }
    }
    goto lab_0x100003db4;
  lab_0x100003db4:;
    int32_t v116 = *v35 + 1; // 0x100003db8
    *v35 = v116;
    int32_t v117 = *v10; // 0x100003b2c
    int32_t v118 = v116 - v117; // 0x100003b30
    v41 = v116;
    if (v118 < 0 == ((v118 ^ v116) & (v117 ^ v116)) < 0) {
        // break -> 0x100003dc8
        goto lab_0x100003dc8;
    }
    goto lab_0x100003b40;
}

// Address range: 0x100003e7c - 0x100003f48
int64_t entry_point(void) {
    // 0x100003e7c
    int64_t v1; // 0x100003e7c
    int32_t v2 = v1; // 0x100003e8c
    int32_t v3 = v2 - 1; // 0x100003ea0
    int32_t v4 = 0; // 0x100003ea8
    if (v3 != 0 && v3 < 0 == (v2 & -v2) < 0) {
        // 0x100003eb0
        v4 = _atoi((char *)*(int64_t *)(v1 + 8));
    }
    int32_t v5 = v4;
    int32_t v6 = v2 - 2; // 0x100003ec8
    int32_t v7; // 0x100003e7c
    if (v6 == 0 || v6 < 0 != (1 - v2 & v2) < 0) {
        // 0x100003eec
        v7 = v5 < 1 ? 30 : v5;
    } else {
        int32_t v8 = _atoi((char *)*(int64_t *)(v1 + 16)); // 0x100003ee0
        int32_t v9 = v5 < 1 ? 30 : v5;
        v7 = v9;
        if (v8 >= 1) {
            function_10000388c(v9, v8);
            return 0;
        }
    }
    function_10000388c(v7, 30);
    return 0;
}

// Address range: 0x100003f48 - 0x100003f54
int32_t function_100003f48(char * nptr) {
    // 0x100003f48
    return _atoi(nptr);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(struct _IO_FILE * stream) {
    // 0x100003f54
    return _fflush(stream);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(char * format, ...) {
    // 0x100003f60
    return _printf(format);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(void) {
    // 0x100003f6c
    return _rand();
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

