//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003694(void);
int64_t * function_100003f34(int32_t nmemb, int32_t size);
int32_t function_100003f40(void);
void function_100003f4c(int64_t * ptr);
int64_t * function_100003f58(int32_t size);
int32_t function_100003f64(char * format, ...);

// --------------------- Global Variables ---------------------

char * g1 = "\x01\x02\x04\b\x10 @\x80\x31\x30^%d %ld\n"; // 0x100003f78

// ------- Dynamically Linked Functions Without Header --------

int64_t * _calloc(int32_t a1, int32_t a2);
int32_t _clock(void);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003694 - 0x100003e5c
int64_t function_100003694(void) {
    // 0x100003694
    int64_t v1; // bp-136, 0x100003694
    int64_t v2 = &v1; // 0x1000036a8
    int64_t v3 = v2 + 88;
    int64_t v4; // 0x100003694
    if ((uint64_t)v4 < 9) {
        uint64_t v5 = *(int64_t *)v3; // 0x1000036c8
        int64_t result = 0; // 0x1000036d4
        if (v5 >= 2) {
            // 0x1000036e8
            result = (v5 + 1) / 2;
        }
        // 0x100003704
        *(int64_t *)(v2 + 96) = result;
        // 0x100003e44
        return result;
    }
    float64_t * v6 = (float64_t *)v3; // 0x100003718
    int64_t v7 = sqrt(*v6); // 0x100003724
    int64_t * v8 = (int64_t *)(v2 + 80); // 0x100003728
    *v8 = v7;
    uint64_t v9 = (v7 - 1) / 2; // 0x100003738
    int64_t * v10 = (int64_t *)(v2 + 72); // 0x10000373c
    *v10 = v9;
    int32_t v11 = v9;
    int32_t v12 = v11 + 1; // 0x100003748
    int32_t v13 = 4 * v12; // 0x100003750
    int64_t * v14 = _malloc(v13); // 0x10000375c
    int64_t * v15 = (int64_t *)(v2 + 56); // 0x100003764
    *v15 = (int64_t)v14;
    int64_t * v16 = _malloc(v13); // 0x100003778
    int64_t * v17 = (int64_t *)(v2 + 48); // 0x100003780
    *v17 = (int64_t)v16;
    int64_t * v18 = _malloc(8 * v12); // 0x100003794
    int64_t * v19 = (int64_t *)(v2 + 40); // 0x10000379c
    *v19 = (int64_t)v18;
    if (v11 > -1 != (v12 & -v11) < 0) {
        int32_t v20 = 0; // 0x100003830
        int64_t v21 = v20; // 0x1000037cc
        int64_t v22 = 4 * v21; // 0x1000037d0
        *(int32_t *)(v22 + *v15) = v20;
        int32_t v23 = 2 * v20 | 1; // 0x1000037e0
        *(int32_t *)(*v17 + v22) = v23;
        uint64_t v24 = *(int64_t *)v3; // 0x1000037f0
        *(int64_t *)(*v19 + 8 * v21) = (v24 / (int64_t)v23 - 1) / 2;
        v20++;
        while (v20 - v12 < 0 != ((v20 - v12 ^ v20) & (v20 ^ v12)) < 0) {
            // 0x1000037c0
            v21 = v20;
            v22 = 4 * v21;
            *(int32_t *)(v22 + *v15) = v20;
            v23 = 2 * v20 | 1;
            *(int32_t *)(*v17 + v22) = v23;
            v24 = *(int64_t *)v3;
            *(int64_t *)(*v19 + 8 * v21) = (v24 / (int64_t)v23 - 1) / 2;
            v20++;
        }
    }
    int64_t * v25 = _calloc((int32_t)((*v10 + 8) / 8), 1); // 0x100003860
    int64_t * v26 = (int64_t *)(v2 + 24); // 0x10000386c
    *v26 = (int64_t)v25;
    int64_t * v27 = (int64_t *)(v2 + 16); // 0x100003870
    *v27 = 0;
    v1 = 1;
    int64_t v28 = *v10; // 0x1000038a8
    int64_t v29 = 4 - v28; // 0x1000038ac
    int32_t v30 = v12; // 0x1000038b4
    if (v29 == 0 || v29 < 0 != (v29 & v28) < 0) {
        int64_t v31 = v12;
        int64_t v32 = 1; // 0x100003c18
        char * v33 = (char *)(*v26 + (v32 >> 3)); // 0x1000038d0
        char v34 = *v33; // 0x1000038d0
        char v35 = *(char *)(v32 % 8 | (int64_t)&g1); // 0x1000038e4
        int64_t v36 = v32; // 0x1000038f0
        int32_t v37 = v12; // 0x1000038f0
        int64_t v38; // 0x100003694
        int64_t v39; // 0x100003694
        int64_t v40; // 0x100003694
        int64_t v41; // 0x100003694
        int32_t v42; // 0x100003694
        int32_t v43; // 0x100003694
        int32_t v44; // 0x100003694
        int64_t v45; // 0x100003694
        int64_t v46; // 0x100003694
        uint64_t v47; // 0x100003694
        int64_t v48; // 0x100003694
        int32_t v49; // 0x100003694
        int64_t v50; // 0x100003694
        uint64_t v51; // 0x100003a38
        uint64_t v52; // 0x100003a44
        int32_t v53; // 0x100003b10
        int32_t v54; // 0x1000039c0
        uint64_t v55; // 0x100003b80
        int64_t v56; // 0x100003b94
        int64_t v57; // 0x100003a88
        float64_t v58; // 0x100003a8c
        uint32_t v59; // 0x100003aac
        int64_t v60; // 0x100003a5c
        uint32_t v61; // 0x100003a6c
        int64_t v62; // 0x100003a70
        int64_t v63; // 0x100003b60
        int32_t v64; // 0x100003b6c
        int32_t * v65; // 0x100003bc0
        int64_t v66; // 0x100003bd4
        int64_t v67; // 0x100003b94
        int64_t v68; // 0x100003be8
        int64_t v69; // 0x100003acc
        int64_t v70; // 0x100003ae4
        int32_t * v71; // 0x100003bc0
        int64_t v72; // 0x100003bd4
        int64_t v73; // 0x100003b94
        uint64_t v74; // 0x100003938
        int64_t v75; // 0x100003954
        int32_t v76; // 0x1000039c0
        char v77; // 0x100003978
        char * v78; // 0x100003988
        int64_t v79; // 0x1000039a0
        int64_t v80; // 0x100003954
        int64_t v81; // 0x100003b38
        int64_t v82; // 0x1000039d8
        uint32_t v83; // 0x1000039dc
        uint64_t v84; // 0x1000039ec
        char v85; // 0x100003a00
        if ((v35 & v34) == 0) {
            // 0x1000038fc
            v41 = 4;
            *v33 = v35 | v34;
            v74 = 2 * v1 | 1;
            v75 = v41 - v31;
            v48 = v41;
            if (v75 < 0 != ((v75 ^ v41) & (v41 ^ v31)) < 0) {
                v77 = *(char *)(v48 % 8 | (int64_t)&g1);
                v78 = (char *)(*v26 + (v48 >> 3));
                *v78 = *v78 | v77;
                v79 = v48 + v74;
                v80 = v79 - v31;
                v48 = v79;
                while (v80 < 0 != ((v80 ^ v79) & (v79 ^ v31)) < 0) {
                    // 0x100003964
                    v77 = *(char *)(v48 % 8 | (int64_t)&g1);
                    v78 = (char *)(*v26 + (v48 >> 3));
                    *v78 = *v78 | v77;
                    v79 = v48 + v74;
                    v80 = v79 - v31;
                    v48 = v79;
                }
            }
            // 0x1000039b8
            v76 = -v12;
            v49 = 0;
            v43 = 0;
            if (v76 < 0 != (v12 & v76) < 0) {
                v42 = 0;
                v82 = v49;
                v83 = *(int32_t *)(*v17 + 4 * v82);
                v84 = (int64_t)(v83 / 2);
                v85 = *(char *)(v84 / 8 + *v26);
                v44 = v42;
                if ((*(char *)(v84 % 8 | (int64_t)&g1) & v85) == 0) {
                    // 0x100003a2c
                    v51 = v74 * (int64_t)v83;
                    v52 = *v8;
                    if (v51 >= v52 == (v51 != v52)) {
                        // 0x100003a84
                        v57 = *v15;
                        v58 = *v6;
                        v59 = *(int32_t *)(4 * ((int64_t)(v58 / (float64_t)v51) + 0x7fffffffffffffff) / 2 + v57);
                        v38 = *v27;
                        v39 = *v19;
                        v50 = v59;
                    } else {
                        // 0x100003a58
                        v60 = *v19;
                        v61 = *(int32_t *)(*v15 + 4 * v51 / 2);
                        v62 = *v27;
                        v38 = v62;
                        v39 = v60;
                        v50 = *(int64_t *)(8 * ((int64_t)v61 - v62) + v60);
                    }
                    // 0x100003ab8
                    v69 = *(int64_t *)(v39 + 8 * v82);
                    v70 = v42;
                    *(int64_t *)(v39 + 8 * v70) = v38 - v50 + v69;
                    *(int32_t *)(*v17 + 4 * v70) = v83;
                    v44 = v42 + 1;
                }
                // 0x100003b0c
                v53 = v49 + 1;
                v54 = v53 - v12;
                v49 = v53;
                v43 = v44;
                while (v54 < 0 != ((v54 ^ v53) & (v53 ^ v12)) < 0) {
                    // 0x1000039d0
                    v42 = v44;
                    v82 = v49;
                    v83 = *(int32_t *)(*v17 + 4 * v82);
                    v84 = (int64_t)(v83 / 2);
                    v85 = *(char *)(v84 / 8 + *v26);
                    v44 = v42;
                    if ((*(char *)(v84 % 8 | (int64_t)&g1) & v85) == 0) {
                        // 0x100003a2c
                        v51 = v74 * (int64_t)v83;
                        v52 = *v8;
                        if (v51 >= v52 == (v51 != v52)) {
                            // 0x100003a84
                            v57 = *v15;
                            v58 = *v6;
                            v59 = *(int32_t *)(4 * ((int64_t)(v58 / (float64_t)v51) + 0x7fffffffffffffff) / 2 + v57);
                            v38 = *v27;
                            v39 = *v19;
                            v50 = v59;
                        } else {
                            // 0x100003a58
                            v60 = *v19;
                            v61 = *(int32_t *)(*v15 + 4 * v51 / 2);
                            v62 = *v27;
                            v38 = v62;
                            v39 = v60;
                            v50 = *(int64_t *)(8 * ((int64_t)v61 - v62) + v60);
                        }
                        // 0x100003ab8
                        v69 = *(int64_t *)(v39 + 8 * v82);
                        v70 = v42;
                        *(int64_t *)(v39 + 8 * v70) = v38 - v50 + v69;
                        *(int32_t *)(*v17 + 4 * v70) = v83;
                        v44 = v42 + 1;
                    }
                    // 0x100003b0c
                    v53 = v49 + 1;
                    v54 = v53 - v12;
                    v49 = v53;
                    v43 = v44;
                }
            }
            // 0x100003b1c
            v37 = v43;
            v81 = *v8 / v74 - 1 | 1;
            if (v81 >= v74) {
                // 0x100003b5c
                v45 = *v10;
                v47 = v81;
                v55 = v47 * v74 / 2;
                v56 = v45 - v55;
                v46 = v45;
                if (v56 < 0 == ((v56 ^ -0x8000000000000000) & v45) < 0) {
                    // 0x100003ba4
                    v63 = *v15;
                    v64 = *(int32_t *)(v63 + 4 * v47 / 2);
                    v65 = (int32_t *)(4 * v45 + v63);
                    *v65 = (int32_t)*v27 - v64 + *v65;
                    v66 = v45 - 1;
                    v67 = v66 - v55;
                    v40 = v66;
                    v46 = v66;
                    if (v67 < 0 == ((v67 ^ -0x8000000000000000) & v66) < 0) {
                        v71 = (int32_t *)(4 * v40 + *v15);
                        *v71 = (int32_t)*v27 - v64 + *v71;
                        v72 = v40 - 1;
                        v73 = v72 - v55;
                        v40 = v72;
                        v46 = v72;
                        while (v73 < 0 == ((v73 ^ -0x8000000000000000) & v72) < 0) {
                            // 0x100003ba4
                            v71 = (int32_t *)(4 * v40 + *v15);
                            *v71 = (int32_t)*v27 - v64 + *v71;
                            v72 = v40 - 1;
                            v73 = v72 - v55;
                            v40 = v72;
                            v46 = v72;
                        }
                    }
                }
                // 0x100003be4
                v68 = v47 - 2;
                while (v68 >= v74) {
                    // 0x100003b5c
                    v45 = v46;
                    v47 = v68;
                    v55 = v47 * v74 / 2;
                    v56 = v45 - v55;
                    v46 = v45;
                    if (v56 < 0 == ((v56 ^ -0x8000000000000000) & v45) < 0) {
                        // 0x100003ba4
                        v63 = *v15;
                        v64 = *(int32_t *)(v63 + 4 * v47 / 2);
                        v65 = (int32_t *)(4 * v45 + v63);
                        *v65 = (int32_t)*v27 - v64 + *v65;
                        v66 = v45 - 1;
                        v67 = v66 - v55;
                        v40 = v66;
                        v46 = v66;
                        if (v67 < 0 == ((v67 ^ -0x8000000000000000) & v66) < 0) {
                            v71 = (int32_t *)(4 * v40 + *v15);
                            *v71 = (int32_t)*v27 - v64 + *v71;
                            v72 = v40 - 1;
                            v73 = v72 - v55;
                            v40 = v72;
                            v46 = v72;
                            while (v73 < 0 == ((v73 ^ -0x8000000000000000) & v72) < 0) {
                                // 0x100003ba4
                                v71 = (int32_t *)(4 * v40 + *v15);
                                *v71 = (int32_t)*v27 - v64 + *v71;
                                v72 = v40 - 1;
                                v73 = v72 - v55;
                                v40 = v72;
                                v46 = v72;
                            }
                        }
                    }
                    // 0x100003be4
                    v68 = v47 - 2;
                }
            }
            // 0x100003bf4
            *v27 = *v27 + 1;
            v36 = v1;
        }
        int32_t v86 = v37;
        v32 = v36 + 1;
        v1 = v32;
        int64_t v87 = 2 * v32 * (v36 + 2); // 0x10000389c
        int64_t v88 = *v10; // 0x1000038a8
        int64_t v89 = v87 - v88; // 0x1000038ac
        v30 = v86;
        while (v89 == 0 || v89 < 0 != ((v89 ^ v87) & (v88 ^ v87)) < 0) {
            int32_t v90 = v86;
            v33 = (char *)(*v26 + (v32 >> 3));
            v34 = *v33;
            v35 = *(char *)(v32 % 8 | (int64_t)&g1);
            v36 = v32;
            v37 = v90;
            if ((v35 & v34) == 0) {
                // 0x1000038fc
                v41 = v87;
                *v33 = v35 | v34;
                v74 = 2 * v1 | 1;
                v75 = v41 - v31;
                v48 = v41;
                if (v75 < 0 != ((v75 ^ v41) & (v41 ^ v31)) < 0) {
                    v77 = *(char *)(v48 % 8 | (int64_t)&g1);
                    v78 = (char *)(*v26 + (v48 >> 3));
                    *v78 = *v78 | v77;
                    v79 = v48 + v74;
                    v80 = v79 - v31;
                    v48 = v79;
                    while (v80 < 0 != ((v80 ^ v79) & (v79 ^ v31)) < 0) {
                        // 0x100003964
                        v77 = *(char *)(v48 % 8 | (int64_t)&g1);
                        v78 = (char *)(*v26 + (v48 >> 3));
                        *v78 = *v78 | v77;
                        v79 = v48 + v74;
                        v80 = v79 - v31;
                        v48 = v79;
                    }
                }
                // 0x1000039b8
                v76 = -v90;
                v49 = 0;
                v43 = 0;
                if (v76 < 0 != (v90 & v76) < 0) {
                    v42 = 0;
                    v82 = v49;
                    v83 = *(int32_t *)(*v17 + 4 * v82);
                    v84 = (int64_t)(v83 / 2);
                    v85 = *(char *)(v84 / 8 + *v26);
                    v44 = v42;
                    if ((*(char *)(v84 % 8 | (int64_t)&g1) & v85) == 0) {
                        // 0x100003a2c
                        v51 = v74 * (int64_t)v83;
                        v52 = *v8;
                        if (v51 >= v52 == (v51 != v52)) {
                            // 0x100003a84
                            v57 = *v15;
                            v58 = *v6;
                            v59 = *(int32_t *)(4 * ((int64_t)(v58 / (float64_t)v51) + 0x7fffffffffffffff) / 2 + v57);
                            v38 = *v27;
                            v39 = *v19;
                            v50 = v59;
                        } else {
                            // 0x100003a58
                            v60 = *v19;
                            v61 = *(int32_t *)(*v15 + 4 * v51 / 2);
                            v62 = *v27;
                            v38 = v62;
                            v39 = v60;
                            v50 = *(int64_t *)(8 * ((int64_t)v61 - v62) + v60);
                        }
                        // 0x100003ab8
                        v69 = *(int64_t *)(v39 + 8 * v82);
                        v70 = v42;
                        *(int64_t *)(v39 + 8 * v70) = v38 - v50 + v69;
                        *(int32_t *)(*v17 + 4 * v70) = v83;
                        v44 = v42 + 1;
                    }
                    // 0x100003b0c
                    v53 = v49 + 1;
                    v54 = v53 - v90;
                    v49 = v53;
                    v43 = v44;
                    while (v54 < 0 != ((v54 ^ v53) & (v53 ^ v90)) < 0) {
                        // 0x1000039d0
                        v42 = v44;
                        v82 = v49;
                        v83 = *(int32_t *)(*v17 + 4 * v82);
                        v84 = (int64_t)(v83 / 2);
                        v85 = *(char *)(v84 / 8 + *v26);
                        v44 = v42;
                        if ((*(char *)(v84 % 8 | (int64_t)&g1) & v85) == 0) {
                            // 0x100003a2c
                            v51 = v74 * (int64_t)v83;
                            v52 = *v8;
                            if (v51 >= v52 == (v51 != v52)) {
                                // 0x100003a84
                                v57 = *v15;
                                v58 = *v6;
                                v59 = *(int32_t *)(4 * ((int64_t)(v58 / (float64_t)v51) + 0x7fffffffffffffff) / 2 + v57);
                                v38 = *v27;
                                v39 = *v19;
                                v50 = v59;
                            } else {
                                // 0x100003a58
                                v60 = *v19;
                                v61 = *(int32_t *)(*v15 + 4 * v51 / 2);
                                v62 = *v27;
                                v38 = v62;
                                v39 = v60;
                                v50 = *(int64_t *)(8 * ((int64_t)v61 - v62) + v60);
                            }
                            // 0x100003ab8
                            v69 = *(int64_t *)(v39 + 8 * v82);
                            v70 = v42;
                            *(int64_t *)(v39 + 8 * v70) = v38 - v50 + v69;
                            *(int32_t *)(*v17 + 4 * v70) = v83;
                            v44 = v42 + 1;
                        }
                        // 0x100003b0c
                        v53 = v49 + 1;
                        v54 = v53 - v90;
                        v49 = v53;
                        v43 = v44;
                    }
                }
                // 0x100003b1c
                v37 = v43;
                v81 = *v8 / v74 - 1 | 1;
                if (v81 >= v74) {
                    // 0x100003b5c
                    v45 = *v10;
                    v47 = v81;
                    v55 = v47 * v74 / 2;
                    v56 = v45 - v55;
                    v46 = v45;
                    if (v56 < 0 == ((v56 ^ -0x8000000000000000) & v45) < 0) {
                        // 0x100003ba4
                        v63 = *v15;
                        v64 = *(int32_t *)(v63 + 4 * v47 / 2);
                        v65 = (int32_t *)(4 * v45 + v63);
                        *v65 = (int32_t)*v27 - v64 + *v65;
                        v66 = v45 - 1;
                        v67 = v66 - v55;
                        v40 = v66;
                        v46 = v66;
                        if (v67 < 0 == ((v67 ^ -0x8000000000000000) & v66) < 0) {
                            v71 = (int32_t *)(4 * v40 + *v15);
                            *v71 = (int32_t)*v27 - v64 + *v71;
                            v72 = v40 - 1;
                            v73 = v72 - v55;
                            v40 = v72;
                            v46 = v72;
                            while (v73 < 0 == ((v73 ^ -0x8000000000000000) & v72) < 0) {
                                // 0x100003ba4
                                v71 = (int32_t *)(4 * v40 + *v15);
                                *v71 = (int32_t)*v27 - v64 + *v71;
                                v72 = v40 - 1;
                                v73 = v72 - v55;
                                v40 = v72;
                                v46 = v72;
                            }
                        }
                    }
                    // 0x100003be4
                    v68 = v47 - 2;
                    while (v68 >= v74) {
                        // 0x100003b5c
                        v45 = v46;
                        v47 = v68;
                        v55 = v47 * v74 / 2;
                        v56 = v45 - v55;
                        v46 = v45;
                        if (v56 < 0 == ((v56 ^ -0x8000000000000000) & v45) < 0) {
                            // 0x100003ba4
                            v63 = *v15;
                            v64 = *(int32_t *)(v63 + 4 * v47 / 2);
                            v65 = (int32_t *)(4 * v45 + v63);
                            *v65 = (int32_t)*v27 - v64 + *v65;
                            v66 = v45 - 1;
                            v67 = v66 - v55;
                            v40 = v66;
                            v46 = v66;
                            if (v67 < 0 == ((v67 ^ -0x8000000000000000) & v66) < 0) {
                                v71 = (int32_t *)(4 * v40 + *v15);
                                *v71 = (int32_t)*v27 - v64 + *v71;
                                v72 = v40 - 1;
                                v73 = v72 - v55;
                                v40 = v72;
                                v46 = v72;
                                while (v73 < 0 == ((v73 ^ -0x8000000000000000) & v72) < 0) {
                                    // 0x100003ba4
                                    v71 = (int32_t *)(4 * v40 + *v15);
                                    *v71 = (int32_t)*v27 - v64 + *v71;
                                    v72 = v40 - 1;
                                    v73 = v72 - v55;
                                    v40 = v72;
                                    v46 = v72;
                                }
                            }
                        }
                        // 0x100003be4
                        v68 = v47 - 2;
                    }
                }
                // 0x100003bf4
                *v27 = *v27 + 1;
                v36 = v1;
            }
            // 0x100003c10
            v86 = v37;
            v32 = v36 + 1;
            v1 = v32;
            v87 = 2 * v32 * (v36 + 2);
            v88 = *v10;
            v89 = v87 - v88;
            v30 = v86;
        }
    }
    int32_t v91 = v30;
    int64_t v92 = *v19; // 0x100003c28
    int64_t v93 = *(int64_t *)v92; // 0x100003c2c
    int64_t v94 = *v27; // 0x100003c34
    int64_t v95 = ((int64_t)v91 - 2 + 2 * v94) * (int64_t)(v91 - 1) / 2 + v93; // 0x100003c64
    int32_t v96 = 1 - v91; // 0x100003c7c
    int64_t v97 = v95; // 0x100003c84
    int32_t v98 = 1; // 0x100003c84
    int64_t v99 = v95; // 0x100003c84
    if (v96 < 0 != (v96 & v91) < 0) {
        v99 -= *(int64_t *)(8 * (int64_t)v98 + v92);
        v98++;
        int32_t v100 = v98 - v91; // 0x100003c7c
        v97 = v99;
        while (v100 < 0 != ((v100 ^ v98) & (v98 ^ v91)) < 0) {
            // 0x100003c8c
            v99 -= *(int64_t *)(8 * (int64_t)v98 + v92);
            v98++;
            v100 = v98 - v91;
            v97 = v99;
        }
    }
    int64_t v101 = *v17; // 0x100003ccc
    int64_t v102 = *v15; // 0x100003cec
    int32_t v103 = 1;
    int64_t v104 = v97;
    int64_t v105 = v103; // 0x100003cd0
    uint64_t v106 = (int64_t)*(int32_t *)(4 * v105 + v101); // 0x100003cd4
    uint64_t v107 = *(int64_t *)v3 / v106; // 0x100003ce4
    int32_t v108 = *(int32_t *)(4 * (v107 / v106 + 0x7fffffffffffffff) / 2 + v102); // 0x100003d04
    int32_t v109 = v108 - (int32_t)v94; // 0x100003d10
    int32_t v110 = v109 - v103; // 0x100003d1c
    while (v110 != 0 && v110 < 0 == ((v110 ^ v109) & (v109 ^ v103)) < 0) {
        int64_t v111 = v104 - (v94 - 1 + v105) * (int64_t)v110; // 0x100003d60
        v103++;
        int32_t v112 = v109 + 1; // 0x100003d80
        int32_t v113 = v103 - v112; // 0x100003d84
        int32_t v114 = v103; // 0x100003d8c
        int64_t v115 = v111; // 0x100003d8c
        int64_t v116 = v111; // 0x100003d8c
        if (v113 < 0 != ((v113 ^ v103) & (v112 ^ v103)) < 0) {
            uint32_t v117 = *(int32_t *)(4 * (int64_t)v114 + v101); // 0x100003dac
            uint32_t v118 = *(int32_t *)(4 * ((int64_t)((float64_t)v107 / (float64_t)v117) + 0x7fffffffffffffff) / 2 + v102); // 0x100003dc4
            int64_t v119 = v115 + (int64_t)v118; // 0x100003dd0
            int32_t v120 = v114 + 1;
            int32_t v121 = v120 - v112; // 0x100003d84
            v114 = v120;
            v115 = v119;
            v116 = v119;
            while (v121 < 0 != ((v121 ^ v120) & (v120 ^ v112)) < 0) {
                // 0x100003d94
                v117 = *(int32_t *)(4 * (int64_t)v114 + v101);
                v118 = *(int32_t *)(4 * ((int64_t)((float64_t)v107 / (float64_t)v117) + 0x7fffffffffffffff) / 2 + v102);
                v119 = v115 + (int64_t)v118;
                v120 = v114 + 1;
                v121 = v120 - v112;
                v114 = v120;
                v115 = v119;
                v116 = v119;
            }
        }
        v104 = v116;
        v105 = v103;
        v106 = (int64_t)*(int32_t *)(4 * v105 + v101);
        v107 = *(int64_t *)v3 / v106;
        v108 = *(int32_t *)(4 * (v107 / v106 + 0x7fffffffffffffff) / 2 + v102);
        v109 = v108 - (int32_t)v94;
        v110 = v109 - v103;
    }
    // 0x100003e00
    _free((int64_t *)v102);
    _free((int64_t *)*v17);
    _free((int64_t *)*v19);
    _free((int64_t *)*v26);
    int64_t result2 = v104 + 1; // 0x100003e38
    *(int64_t *)(v2 + 96) = result2;
    // 0x100003e44
    return result2;
}

// Address range: 0x100003e5c - 0x100003f34
int64_t entry_point(void) {
    // 0x100003e5c
    _clock();
    for (int32_t i = 0; i < 10; i++) {
        // 0x100003e98
        function_100003694();
        int64_t v1; // 0x100003e5c
        _printf("10^%d %ld\n", v1, (int32_t)v1);
    }
    // 0x100003eec
    _clock();
    int128_t v2; // 0x100003e5c
    _printf("\nTook %f seconds\n", (float64_t)(int64_t)v2);
    return 0;
}

// Address range: 0x100003f34 - 0x100003f40
int64_t * function_100003f34(int32_t nmemb, int32_t size) {
    // 0x100003f34
    return _calloc(nmemb, size);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(void) {
    // 0x100003f40
    return _clock();
}

// Address range: 0x100003f4c - 0x100003f58
void function_100003f4c(int64_t * ptr) {
    // 0x100003f4c
    _free(ptr);
}

// Address range: 0x100003f58 - 0x100003f64
int64_t * function_100003f58(int32_t size) {
    // 0x100003f58
    return _malloc(size);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * format, ...) {
    // 0x100003f64
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

