//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <math.h>
#include <stdbool.h>
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
int64_t function_1000031f0(void);
int64_t function_100003288(void);
int64_t function_100003808(void);
int64_t function_1000039a4(void);
int64_t function_100003ac0(void);
int64_t function_100003c48(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003f1c(int64_t a1, int128_t a2, int128_t a3);
int32_t function_100003f28(struct _IO_FILE * stream);
struct _IO_FILE * function_100003f34(char * filename, char * modes);
int32_t function_100003f40(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003f4c(int64_t * ptr, int32_t size, int32_t n, struct _IO_FILE * s);

// --------------------- Global Variables ---------------------

float64_t g1 = 255.0; // 0x100003f58
float64_t g2 = 256.0; // 0x100003f60
float64_t g3 = 125.0; // 0x100003f68
int32_t * g4 = (int32_t *)0x1ffffffff; // 0x100008000
float64_t * g5 = (float64_t *)0x100000cfeedfacf; // 0x100008010
float64_t * g6 = (float64_t *)0x100000000; // 0x100008050

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int64_t ___stack_chk_fail(int64_t a1, int128_t a2, int128_t a3);
int32_t _fclose(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _fwrite(int64_t * a1, int32_t a2, int32_t a3, struct _IO_FILE * a4);

// ------------------------ Functions -------------------------

// Address range: 0x1000031f0 - 0x100003288
int64_t function_1000031f0(void) {
    int64_t v1 = 1;
    int64_t v2 = v1 + 1;
    float64_t v3 = sqrt((float64_t)(int32_t)v2); // 0x100003220
    float64_t v4 = 1.0 / (v3 + 1.0); // 0x10000322c
    int64_t v5 = 8 * v1; // 0x10000323c
    *(float64_t *)(v5 + (int64_t)&g5) = v4;
    *(float64_t *)(v5 + (int64_t)&g6) = v4 / v3;
    while (v2 != 8) {
        // 0x100003214
        v1 = v2;
        v2 = v1 + 1;
        v3 = sqrt((float64_t)(int32_t)v2);
        v4 = 1.0 / (v3 + 1.0);
        v5 = 8 * v1;
        *(float64_t *)(v5 + (int64_t)&g5) = v4;
        *(float64_t *)(v5 + (int64_t)&g6) = v4 / v3;
    }
    // 0x100003280
    int64_t result; // 0x1000031f0
    return result;
}

// Address range: 0x100003288 - 0x100003808
int64_t function_100003288(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004010; // 0x1000032a0
    int64_t v2; // 0x100003288
    int32_t v3 = v2; // 0x1000032ac
    int32_t v4 = -v3;
    int32_t v5 = 0; // 0x1000032d0
    float64_t v6 = 0.0; // 0x1000032d0
    int64_t v7; // 0x100003288
    int64_t v8; // 0x100003288
    int64_t v9; // 0x100003288
    int64_t v10; // bp-104, 0x100003288
    int64_t v11; // bp-200, 0x100003288
    int64_t v12; // bp-72, 0x100003288
    if (v4 < 0 == (v4 & v3) < 0) {
        int64_t v13 = 0x100000000 * v2;
        v8 = v13 >> 29;
        v9 = v13;
        v7 = &v10;
    } else {
        v6 += *(float64_t *)(8 * (int64_t)v5 + v2);
        v5++;
        while (v5 - v3 < 0 != ((v5 - v3 ^ v5) & (v5 ^ v3)) < 0) {
            // 0x1000032d8
            v6 += *(float64_t *)(8 * (int64_t)v5 + v2);
            v5++;
        }
        int64_t v14 = 0x100000000 * v2;
        int64_t v15 = v14 >> 29; // 0x100003310
        float64_t v16 = v6 * *(float64_t *)(v15 + (int64_t)&g5); // 0x100003318
        int64_t v17 = &v10;
        int64_t v18 = &v11;
        int32_t v19 = 0; // 0x10000339c
        int64_t v20 = v19; // 0x100003344
        int64_t v21 = 4 * v20; // 0x10000334c
        *(int32_t *)(v21 + v17) = v19;
        int64_t v22 = 8 * v20; // 0x100003358
        float64_t v23 = v16 + *(float64_t *)(v22 + v2); // 0x100003360
        int32_t v24 = __asm_fcvtms(v23); // 0x100003370
        *(int32_t *)(v21 + (int64_t)&v12) = v24;
        *(float64_t *)(v22 + v18) = v23 - (float64_t)v24;
        v19++;
        int32_t v25 = v19 - v3; // 0x100003330
        v8 = v15;
        v9 = v14;
        v7 = v17;
        while (v25 < 0 != ((v25 ^ v19) & (v19 ^ v3)) < 0) {
            // 0x100003340
            v20 = v19;
            v21 = 4 * v20;
            *(int32_t *)(v21 + v17) = v19;
            v22 = 8 * v20;
            v23 = v16 + *(float64_t *)(v22 + v2);
            v24 = __asm_fcvtms(v23);
            *(int32_t *)(v21 + (int64_t)&v12) = v24;
            *(float64_t *)(v22 + v18) = v23 - (float64_t)v24;
            v19++;
            v25 = v19 - v3;
            v8 = v15;
            v9 = v14;
            v7 = v17;
        }
    }
    // 0x1000033a8
    *(int32_t *)((v9 >> 30) + v7) = 0;
    int32_t v26 = v3 - 1; // 0x1000033c8
    int32_t v27 = 1 - v3; // 0x1000033cc
    if (v27 < 0 != (v27 & v26) < 0) {
        int64_t v28 = &v11;
        int32_t v29 = 0;
        int32_t v30 = v29 - v3; // 0x1000033f0
        int32_t * v31; // 0x100003408
        int32_t v32; // 0x100003408
        int32_t * v33; // 0x100003418
        int32_t v34; // 0x100003418
        float64_t v35; // 0x10000341c
        int32_t v36; // 0x100003468
        if (v30 < 0 != ((v30 ^ v29) & (v29 ^ v3)) < 0) {
            // 0x100003400
            v31 = (int32_t *)(4 * (int64_t)v29 + v7);
            v36 = v29;
            v32 = *v31;
            v33 = (int32_t *)(4 * (int64_t)v36 + v7);
            v34 = *v33;
            v35 = *(float64_t *)(8 * (int64_t)v34 + v28);
            if (*(float64_t *)(8 * (int64_t)v32 + v28) > v35) {
                // 0x100003430
                *v31 = v34;
                *v33 = v32;
            }
            // 0x100003464
            v36++;
            while (v36 - v3 < 0 != ((v36 - v3 ^ v36) & (v36 ^ v3)) < 0) {
                // 0x100003400
                v32 = *v31;
                v33 = (int32_t *)(4 * (int64_t)v36 + v7);
                v34 = *v33;
                v35 = *(float64_t *)(8 * (int64_t)v34 + v28);
                if (*(float64_t *)(8 * (int64_t)v32 + v28) > v35) {
                    // 0x100003430
                    *v31 = v34;
                    *v33 = v32;
                }
                // 0x100003464
                v36++;
            }
        }
        int32_t v37 = v29 + 1; // 0x10000347c
        while (v37 - v26 < 0 != ((v37 - v26 ^ v37) & (v37 ^ v26)) < 0) {
            // 0x1000033e8
            v29 = v37;
            v30 = v29 - v3;
            if (v30 < 0 != ((v30 ^ v29) & (v29 ^ v3)) < 0) {
                // 0x100003400
                v31 = (int32_t *)(4 * (int64_t)v29 + v7);
                v36 = v29;
                v32 = *v31;
                v33 = (int32_t *)(4 * (int64_t)v36 + v7);
                v34 = *v33;
                v35 = *(float64_t *)(8 * (int64_t)v34 + v28);
                if (*(float64_t *)(8 * (int64_t)v32 + v28) > v35) {
                    // 0x100003430
                    *v31 = v34;
                    *v33 = v32;
                }
                // 0x100003464
                v36++;
                while (v36 - v3 < 0 != ((v36 - v3 ^ v36) & (v36 ^ v3)) < 0) {
                    // 0x100003400
                    v32 = *v31;
                    v33 = (int32_t *)(4 * (int64_t)v36 + v7);
                    v34 = *v33;
                    v35 = *(float64_t *)(8 * (int64_t)v34 + v28);
                    if (*(float64_t *)(8 * (int64_t)v32 + v28) > v35) {
                        // 0x100003430
                        *v31 = v34;
                        *v33 = v32;
                    }
                    // 0x100003464
                    v36++;
                }
            }
            // 0x100003478
            v37 = v29 + 1;
        }
    }
    int32_t v38 = 0; // 0x1000034b8
    int128_t v39; // 0x100003288
    if (v4 < 0 != (v4 & v3) < 0) {
        v38++;
        int32_t v40 = v38 - v3; // 0x1000034b0
        v39 = __asm_sshll(0.0f, 0);
        while (v40 < 0 != ((v40 ^ v38) & (v38 ^ v3)) < 0) {
            // 0x1000034c0
            v38++;
            v40 = v38 - v3;
            v39 = __asm_sshll(0.0f, 0);
        }
    }
    float64_t * v41 = (float64_t *)(v8 + (int64_t)&g6); // 0x100003504
    int128_t v42 = v39; // 0x10000352c
    bool v43; // 0x100003288
    bool v44; // 0x100003288
    int128_t v45; // 0x100003288
    float64_t v46; // 0x100003288
    float64_t v47; // 0x100003288
    float64_t v48; // 0x100003288
    float64_t v49; // 0x100003288
    float64_t v50; // 0x100003288
    float64_t v51; // 0x100003288
    float64_t v52; // 0x100003288
    float64_t v53; // 0x100003288
    int32_t v54; // 0x100003288
    int32_t v55; // 0x100003288
    int128_t v56; // 0x100003288
    int128_t v57; // 0x100003288
    int64_t v58; // 0x100003288
    int64_t v59; // 0x100003288
    int64_t v60; // 0x100003288
    if (v3 == 0 || v4 < 0 != (v4 & v3) < 0) {
        float64_t v61 = 0.0; // 0x10000350c
        v58 = &v11;
        float64_t v62 = 2 * v3;
        v43 = v4 < 0;
        v44 = (v4 & v3) < 0;
        v54 = 0;
        v46 = v61;
        v51 = 0.0;
        v48 = v61;
        while (true) {
          lab_0x10000353c:
            // 0x10000353c
            v49 = v48;
            v52 = v51;
            int64_t v63 = v59;
            v55 = v54;
            int32_t v64 = 0; // 0x10000354c
            float64_t v65; // 0x100003288
            if (v4 < 0 == (v4 & v3) < 0) {
                // 0x1000035a4
                v45 = __asm_sshll(0.0f, 0);
                v57 = v56;
                v65 = (v46 + 1.0) / v62;
            } else {
                int64_t v66 = 8 * (int64_t)v64; // 0x10000355c
                int128_t v67 = __asm_sshll(0.0f, 0); // 0x100003578
                float64_t v68 = v49 + *(float64_t *)(v66 + v2) - v49; // 0x100003580
                *(float64_t *)(v66 + v58) = v68;
                int32_t v69 = v64 + 1; // 0x100003598
                int32_t v70 = v69 - v3; // 0x100003544
                v64 = v69;
                while (v70 < 0 != ((v70 ^ v69) & (v69 ^ v3)) < 0) {
                    // 0x100003554
                    v66 = 8 * (int64_t)v64;
                    v67 = __asm_sshll(0.0f, 0);
                    v68 = v49 + *(float64_t *)(v66 + v2) - v49;
                    *(float64_t *)(v66 + v58) = v68;
                    v69 = v64 + 1;
                    v70 = v69 - v3;
                    v64 = v69;
                }
                int128_t v71 = __asm_sshll(0.0f, 0); // 0x1000035ac
                float64_t v72 = (v68 + 1.0) / v62; // 0x10000360c
                int32_t v73 = 0;
                float64_t v74 = *(float64_t *)(8 * (int64_t)v73 + v58); // 0x1000035fc
                v72 -= v74 * v74;
                v45 = v71;
                v57 = v67;
                v65 = v72;
                while (v72 <= 0.0 == (v72 != 0.0)) {
                    int32_t v75 = v73 + 1; // 0x100003634
                    int32_t v76 = v75 - v3; // 0x1000035e4
                    v45 = v71;
                    v57 = v67;
                    v65 = v72;
                    if (v76 < 0 == ((v76 ^ v75) & (v75 ^ v3)) < 0) {
                        // break -> 0x100003640
                        break;
                    }
                    v73 = v75;
                    v74 = *(float64_t *)(8 * (int64_t)v73 + v58);
                    v72 -= v74 * v74;
                    v45 = v71;
                    v57 = v67;
                    v65 = v72;
                }
            }
            // 0x100003640
            v50 = v65;
            if (v50 == 0.0) {
                goto lab_0x100003654;
            } else {
                v53 = v52;
                v47 = v50;
                v60 = v63;
                if (v50 > 0.0 == v50 >= 0.0 == v50 <= 0.0) {
                    goto lab_0x100003654;
                } else {
                    goto lab_0x100003748;
                }
            }
        }
    }
  lab_0x1000037b4:;
    // 0x1000037b4
    int64_t v77; // 0x100003288
    int64_t result = v77; // 0x1000037e8
    int128_t v78; // 0x100003288
    if (*(int64_t *)*(int64_t *)0x100004010 != v1) {
        // 0x1000037f0
        result = ___stack_chk_fail(v77, v42, v78);
    }
    // 0x1000037f4
    return result;
  lab_0x100003654:;
    int64_t v79 = function_100003808(); // 0x100003668
    int32_t v80 = 0; // 0x100003684
    float64_t v81 = 0.0; // 0x100003684
    if (v4 < 0 != (v4 & v3) < 0) {
        float64_t v82 = 0.0;
        int64_t v83 = v80; // 0x10000368c
        int64_t v84; // bp-136, 0x100003288
        int32_t v85 = *(int32_t *)(4 * v83 + (int64_t)&v84); // 0x100003694
        float64_t v86 = v82; // 0x1000036a0
        float64_t v87; // 0x100003288
        int64_t v88; // 0x100003288
        if (v85 != 0) {
            // 0x1000036a8
            v88 = 8 * v83 + v58;
            if (v85 == 1) {
                // 0x1000036c4
                v87 = (float64_t)*(int64_t *)v88;
            } else {
                // 0x1000036d8
                v87 = -*(float64_t *)v88;
            }
            // 0x1000036f0
            v86 = v82 + v87;
        }
        int32_t v89 = v80 + 1; // 0x10000370c
        int32_t v90 = v89 - v3; // 0x10000367c
        v80 = v89;
        v81 = v86;
        while (v90 < 0 != ((v90 ^ v89) & (v89 ^ v3)) < 0) {
            // 0x10000368c
            v82 = v86;
            v83 = v80;
            v85 = *(int32_t *)(4 * v83 + (int64_t)&v84);
            v86 = v82;
            if (v85 != 0) {
                // 0x1000036a8
                v88 = 8 * v83 + v58;
                if (v85 == 1) {
                    // 0x1000036c4
                    v87 = (float64_t)*(int64_t *)v88;
                } else {
                    // 0x1000036d8
                    v87 = -*(float64_t *)v88;
                }
                // 0x1000036f0
                v86 = v82 + v87;
            }
            // 0x100003708
            v89 = v80 + 1;
            v90 = v89 - v3;
            v80 = v89;
            v81 = v86;
        }
    }
    float64_t v91 = v50 * v50; // 0x100003720
    float64_t v92 = v52 + v91 * v91 * v81; // 0x10000373c
    v53 = v92;
    v47 = v92;
    v60 = v79;
    goto lab_0x100003748;
  lab_0x100003748:;
    float64_t v93 = v49; // 0x100003758
    float64_t v94 = v47; // 0x100003758
    if (v43 != v44) {
        int32_t v95 = *(int32_t *)(4 * (int64_t)v55 + v7); // 0x100003768
        int32_t * v96 = (int32_t *)(4 * (int64_t)v95 + (int64_t)&v12); // 0x100003774
        *v96 = *v96 + 1;
        float64_t v97 = v49 + *v41; // 0x100003794
        v93 = v97;
        v94 = v97;
    }
    int32_t v98 = v55 + 1; // 0x1000037a8
    int32_t v99 = v98 - v3; // 0x100003524
    v43 = v99 < 0;
    v44 = ((v99 ^ v98) & (v98 ^ v3)) < 0;
    v54 = v98;
    v59 = v60;
    v46 = v94;
    v56 = v57;
    v51 = v53;
    v48 = v93;
    v42 = v45;
    v78 = v57;
    v77 = v60;
    if (v99 != 0 && v99 < 0 == ((v99 ^ v98) & (v98 ^ v3)) < 0) {
        // break -> 0x1000037b4
        goto lab_0x1000037b4;
    }
    goto lab_0x10000353c;
}

// Address range: 0x100003808 - 0x1000039a4
int64_t function_100003808(void) {
    // 0x100003808
    int64_t result; // 0x100003808
    int32_t v1 = result; // 0x100003814
    int32_t v2 = v1; // 0x10000384c
    int32_t v3 = 0x12345678; // 0x10000384c
    if (v1 != 0) {
        uint32_t v4 = 0x12345678;
        v2--;
        int64_t v5; // 0x100003808
        uint32_t v6 = *(int32_t *)v5; // 0x100003860
        int32_t v7 = ((v6 / 0x8000000 | 32 * v6) ^ (v4 / 0x20000 | 0x8000 * v4)) + v4; // 0x100003890
        v5 += 4;
        v3 = v7;
        while (v2 != 0) {
            // 0x100003854
            v4 = v7;
            v2--;
            v6 = *(int32_t *)v5;
            v7 = ((v6 / 0x8000000 | 32 * v6) ^ (v4 / 0x20000 | 0x8000 * v4)) + v4;
            v5 += 4;
            v3 = v7;
        }
    }
    if (v1 == 0) {
        // 0x10000399c
        return result;
    }
    uint32_t v8 = v3;
    uint32_t v9 = (v8 / 0x2000000 | 128 * v8) ^ v8; // 0x1000038b0
    uint32_t v10 = (v9 / 512 | 0x800000 * v9) + v9; // 0x1000038cc
    uint32_t v11 = (v10 / 0x2000 | 0x80000 * v10) ^ v10; // 0x1000038e8
    uint32_t v12 = (v11 / 0x200000 | 2048 * v11) + v11; // 0x100003904
    uint32_t v13 = (v12 / 0x80000 | 0x2000 * v12) ^ v12; // 0x100003920
    int32_t v14 = v1;
    int32_t v15 = (v13 / 0x8000 | 0x20000 * v13) + v13; // 0x100003808
    v14--;
    int32_t v16 = *(int32_t *)((int64_t)(4 * v15 & 12) + (int64_t)&g4); // 0x10000397c
    *(int32_t *)(4 * (int64_t)v14 + result) = v16;
    v15 /= 4;
    while (v14 != 0) {
        // 0x10000396c
        v14--;
        v16 = *(int32_t *)((int64_t)(4 * v15 & 12) + (int64_t)&g4);
        *(int32_t *)(4 * (int64_t)v14 + result) = v16;
        v15 /= 4;
    }
    // 0x10000399c
    return result;
}

// Address range: 0x1000039a4 - 0x100003ac0
int64_t function_1000039a4(void) {
    // 0x1000039a4
    __asm_sshll(0.0f, 0);
    int32_t v1 = 1; // 0x100003a5c
    int128_t v2 = __asm_sshll(0.0f, 0); // 0x100003a20
    int64_t v3 = function_100003288(); // 0x100003a34
    v1 *= 2;
    int32_t v4 = v1 - 128; // 0x1000039e4
    int128_t v5 = __asm_sshll(0.0f, 0);
    while (v4 == 0 || v4 < 0 != (127 - v1 & v1) < 0) {
        // 0x1000039f4
        v2 = __asm_sshll(0.0f, 0);
        v3 = function_100003288();
        v1 *= 2;
        v4 = v1 - 128;
        v5 = __asm_sshll(0.0f, 0);
    }
    int64_t v6 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003a98
    int64_t result = v3; // 0x100003aa4
    if (v6 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003aac
        result = ___stack_chk_fail(v3, v5, v2);
    }
    // 0x100003ab0
    return result;
}

// Address range: 0x100003ac0 - 0x100003c28
int64_t function_100003ac0(void) {
    // 0x100003ac0
    __asm_sshll(0.0f, 0);
    int32_t v1 = 1; // 0x100003bcc
    __asm_sshll(0.0f, 0);
    __asm_sshll(0.0f, 0);
    __asm_sshll(0.0f, 0);
    int64_t v2 = function_100003288(); // 0x100003b90
    int128_t v3 = __asm_sshll(0.0f, 0); // 0x100003bb0
    v1 *= 2;
    int32_t v4 = v1 - 32; // 0x100003b04
    int128_t v5 = __asm_sshll(0.0f, 0);
    while (v4 == 0 || v4 < 0 != (31 - v1 & v1) < 0) {
        // 0x100003b14
        __asm_sshll(0.0f, 0);
        __asm_sshll(0.0f, 0);
        __asm_sshll(0.0f, 0);
        v2 = function_100003288();
        v3 = __asm_sshll(0.0f, 0);
        v1 *= 2;
        v4 = v1 - 32;
        v5 = __asm_sshll(0.0f, 0);
    }
    int64_t v6 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003c00
    int64_t result = v2; // 0x100003c0c
    if (v6 != *(int64_t *)*(int64_t *)0x100004010) {
        // 0x100003c14
        result = ___stack_chk_fail(v2, v3, v5);
    }
    // 0x100003c18
    return result;
}

// Address range: 0x100003c28 - 0x100003c48
int64_t entry_point(void) {
    // 0x100003c28
    return ___chkstk_darwin();
}

// Address range: 0x100003c48 - 0x100003f1c
int64_t function_100003c48(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003c48
    int64_t v1; // 0x100003c48
    int64_t * v2 = (int64_t *)(v1 - 24); // 0x100003c5c
    *v2 = *(int64_t *)*(int64_t *)0x100004010;
    function_1000031f0();
    int64_t v3; // bp-65544, 0x100003c48
    char * v4 = (char *)&v3; // 0x100003c48
    int32_t v5 = 0;
    *v4 = 0;
    int32_t v6 = v5 + 1; // 0x100003cac
    v4 = (char *)((int64_t)v4 + 1);
    while (v5 < 0xffff != (0xfffe - v5 & v6) < 0) {
        // 0x100003c94
        v5 = v6;
        *v4 = 0;
        v6 = v5 + 1;
        v4 = (char *)((int64_t)v4 + 1);
    }
    int32_t v7 = 0;
    float64_t v8 = (float64_t)(v7 - 128) / g3; // 0x100003cf0
    int32_t v9 = 0;
    char * v10 = (char *)&v3;
    float64_t v11 = (float64_t)(v9 - 128) / g3; // 0x100003d28
    int128_t v12 = __asm_sshll(0.0f, 0); // 0x100003d38
    __asm_sshll(0.0f, 0);
    function_1000039a4();
    int128_t v13 = __asm_sshll(0.0f, 0); // 0x100003d7c
    *v10 = (char)(int32_t)(6.0 * (v11 / g2 + 1.0) / 6.0);
    float64_t v14 = 1.0 - v11 * v11 - v8 * v8; // 0x100003da8
    float64_t v15; // 0x100003c48
    float64_t v16; // 0x100003dcc
    float64_t v17; // 0x100003df0
    float64_t v18; // 0x100003e24
    if (v14 <= 0.0) {
        // 0x100003dc8
        v16 = sqrt(v14);
        function_100003ac0();
        v17 = v11 + 1.0;
        v18 = 0.5 * v17 * (v17 - v8 + v16) / 3.5;
        v15 = v18 > 0.0 ? 0.0 : v18;
        *v10 = (char)(int32_t)(v15 * g1);
    }
    int32_t v19 = v9 + 1; // 0x100003e70
    char * v20 = (char *)((int64_t)v10 + 1);
    while (v9 < 255 != (254 - v9 & v19) < 0) {
        // 0x100003e6c
        v9 = v19;
        v10 = v20;
        v11 = (float64_t)(v9 - 128) / g3;
        v12 = __asm_sshll(0.0f, 0);
        __asm_sshll(0.0f, 0);
        function_1000039a4();
        v13 = __asm_sshll(0.0f, 0);
        *v10 = (char)(int32_t)(6.0 * (v11 / g2 + 1.0) / 6.0);
        v14 = 1.0 - v11 * v11 - v8 * v8;
        if (v14 <= 0.0) {
            // 0x100003dc8
            v16 = sqrt(v14);
            function_100003ac0();
            v17 = v11 + 1.0;
            v18 = 0.5 * v17 * (v17 - v8 + v16) / 3.5;
            v15 = v18 > 0.0 ? 0.0 : v18;
            *v10 = (char)(int32_t)(v15 * g1);
        }
        // 0x100003e6c
        v19 = v9 + 1;
        v20 = (char *)((int64_t)v10 + 1);
    }
    int32_t v21 = v7 + 1; // 0x100003e90
    while (v7 < 255 != (254 - v7 & v21) < 0) {
        // 0x100003cdc
        v7 = v21;
        v8 = (float64_t)(v7 - 128) / g3;
        v9 = 0;
        v10 = v20;
        v11 = (float64_t)(v9 - 128) / g3;
        v12 = __asm_sshll(0.0f, 0);
        __asm_sshll(0.0f, 0);
        function_1000039a4();
        v13 = __asm_sshll(0.0f, 0);
        *v10 = (char)(int32_t)(6.0 * (v11 / g2 + 1.0) / 6.0);
        v14 = 1.0 - v11 * v11 - v8 * v8;
        if (v14 <= 0.0) {
            // 0x100003dc8
            v16 = sqrt(v14);
            function_100003ac0();
            v17 = v11 + 1.0;
            v18 = 0.5 * v17 * (v17 - v8 + v16) / 3.5;
            v15 = v18 > 0.0 ? 0.0 : v18;
            *v10 = (char)(int32_t)(v15 * g1);
        }
        // 0x100003e6c
        v19 = v9 + 1;
        v20 = (char *)((int64_t)v10 + 1);
        while (v9 < 255 != (254 - v9 & v19) < 0) {
            // 0x100003e6c
            v9 = v19;
            v10 = v20;
            v11 = (float64_t)(v9 - 128) / g3;
            v12 = __asm_sshll(0.0f, 0);
            __asm_sshll(0.0f, 0);
            function_1000039a4();
            v13 = __asm_sshll(0.0f, 0);
            *v10 = (char)(int32_t)(6.0 * (v11 / g2 + 1.0) / 6.0);
            v14 = 1.0 - v11 * v11 - v8 * v8;
            if (v14 <= 0.0) {
                // 0x100003dc8
                v16 = sqrt(v14);
                function_100003ac0();
                v17 = v11 + 1.0;
                v18 = 0.5 * v17 * (v17 - v8 + v16) / 3.5;
                v15 = v18 > 0.0 ? 0.0 : v18;
                *v10 = (char)(int32_t)(v15 * g1);
            }
            // 0x100003e6c
            v19 = v9 + 1;
            v20 = (char *)((int64_t)v10 + 1);
        }
        // 0x100003e8c
        v21 = v7 + 1;
    }
    struct _IO_FILE * v22 = _fopen("out.pgm", "w+"); // 0x100003eac
    _fprintf(v22, "P5\n256 256\n255\n");
    _fwrite(&v3, 1, 0x10000, v22);
    int32_t v23 = _fclose(v22); // 0x100003edc
    if (*(int64_t *)*(int64_t *)0x100004010 != *v2) {
        // 0x100003f00
        ___stack_chk_fail((int64_t)v23, v12, v13);
    }
    // 0x100003f04
    return 0;
}

// Address range: 0x100003f1c - 0x100003f28
int64_t function_100003f1c(int64_t a1, int128_t a2, int128_t a3) {
    // 0x100003f1c
    return ___stack_chk_fail(a1, a2, a3);
}

// Address range: 0x100003f28 - 0x100003f34
int32_t function_100003f28(struct _IO_FILE * stream) {
    // 0x100003f28
    return _fclose(stream);
}

// Address range: 0x100003f34 - 0x100003f40
struct _IO_FILE * function_100003f34(char * filename, char * modes) {
    // 0x100003f34
    return _fopen(filename, modes);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f40
    return _fprintf(stream, format);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(int64_t * ptr, int32_t size, int32_t n, struct _IO_FILE * s) {
    // 0x100003f4c
    return _fwrite(ptr, size, n, s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12

