//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;
typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000033fc(void);
int64_t function_100003440(void);
int64_t function_100003484(void);
int64_t function_1000034b8(void);
int64_t function_1000034ec(void);
int64_t function_10000353c(float64_t a1);
int64_t function_100003790(void);
int64_t function_1000038a4(void);
int64_t function_100003e90(int64_t a1);
int64_t * function_100003e9c(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003ea8(char * format, ...);
int32_t function_100003eb4(void);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x100003ed8

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _rand(void);

// ------------------------ Functions -------------------------

// Address range: 0x1000033fc - 0x100003440
int64_t function_1000033fc(void) {
    // 0x1000033fc
    int64_t result; // 0x1000033fc
    return result;
}

// Address range: 0x100003440 - 0x100003484
int64_t function_100003440(void) {
    // 0x100003440
    int64_t result; // 0x100003440
    return result;
}

// Address range: 0x100003484 - 0x1000034b8
int64_t function_100003484(void) {
    // 0x100003484
    int64_t result; // 0x100003484
    return result;
}

// Address range: 0x1000034b8 - 0x1000034ec
int64_t function_1000034b8(void) {
    // 0x1000034b8
    int64_t result; // 0x1000034b8
    return result;
}

// Address range: 0x1000034ec - 0x10000353c
int64_t function_1000034ec(void) {
    // 0x1000034ec
    int64_t result; // 0x1000034ec
    return result;
}

// Address range: 0x10000353c - 0x100003790
int64_t function_10000353c(float64_t a1) {
    // 0x10000353c
    function_1000033fc();
    function_1000033fc();
    function_1000034b8();
    float64_t v1; // 0x10000353c
    if (v1 == 0.0) {
        // 0x100003780
        return 0;
    }
    // 0x1000035e0
    function_1000034b8();
    function_1000034b8();
    int64_t v2; // 0x10000353c
    if (v2 != 0) {
        // 0x100003638
        function_1000034ec();
        *(float128_t *)v2 = (float128_t)v1;
    }
    float64_t v3 = 0.0;
    if (v3 > -a1) {
        // 0x100003780
        return 0xffffffff;
    }
    float64_t v4 = a1 + 1.0; // 0x100003698
    if (v3 != v4) {
        if (v3 > v4 == v3 >= v4 == v3 <= v4) {
            // 0x100003780
            return 0xffffffff;
        }
    }
    // 0x1000036b8
    if (v3 > a1) {
        // 0x100003780
        return 0;
    }
    float64_t v5 = 1.0 - a1; // 0x1000036dc
    if (v3 != v5) {
        if (v3 > v5 == v3 >= v5 == v3 <= v5) {
            // 0x100003780
            return 0;
        }
    }
    // 0x1000036f8
    function_1000034b8();
    function_1000034b8();
    if (v3 > 0.0) {
        // 0x100003780
        return 0xffffffff;
    }
    bool v6 = false; // 0x100003758
    bool v7 = true; // 0x100003758
    bool v8 = false; // 0x100003758
    if (v3 != 1.0) {
        v6 = v3 > 1.0;
        v7 = false;
        v8 = v3 >= 1.0 == v3 <= 1.0;
    }
    return v7 | v6 != v8 ? 1 : 0xffffffff;
}

// Address range: 0x100003790 - 0x1000038a4
int64_t function_100003790(void) {
    // 0x100003790
    function_1000033fc();
    float64_t v1; // 0x100003790
    int64_t v2 = function_10000353c(v1); // 0x100003824
    int64_t result = v2; // 0x100003838
    if ((int32_t)v2 != -1) {
        // 0x100003850
        function_1000033fc();
        result = function_100003484();
    }
    // 0x100003894
    return result;
}

// Address range: 0x1000038a4 - 0x100003d14
int64_t function_1000038a4(void) {
    // 0x1000038a4
    float64_t v1; // 0x1000038a4
    float64_t v2 = v1;
    float64_t v3 = v1;
    int64_t v4; // 0x1000038a4
    int32_t v5 = v4;
    int32_t v6 = -v5;
    int32_t v7; // 0x1000038a4
    int32_t v8; // 0x1000038a4
    int32_t v9; // 0x1000038a4
    int32_t v10; // 0x1000038a4
    int32_t v11; // 0x1000038a4
    int32_t v12; // 0x1000038a4
    if (v6 < 0 == (v5 & v6) < 0) {
      lab_0x10000397c:;
        int64_t v13 = *(int64_t *)(v4 + 8);
        int64_t v14 = *(int64_t *)v13;
        int64_t v15 = *(int64_t *)(v13 + 24);
        float64_t v16 = v15; // 0x1000039cc
        float64_t v17 = v14; // 0x1000039cc
        float64_t v18 = v15; // 0x1000039cc
        float64_t v19 = v15; // 0x1000039cc
        float64_t v20 = v14; // 0x1000039cc
        float64_t v21 = v14; // 0x1000039cc
        if (v6 < 0 != (v5 & v6) < 0) {
            float64_t v22 = v14; // 0x1000039dc
            float64_t v23 = v15; // 0x100003a34
            float64_t v24 = v14;
            float64_t v25 = v15;
            float64_t v26 = *(float64_t *)v13; // 0x1000039d8
            float64_t v27 = v24; // 0x1000039e0
            float64_t v28 = v22; // 0x1000039e0
            int64_t v29; // 0x1000038a4
            if (v26 != v22) {
                v27 = v24;
                v28 = v22;
                if (v26 > v22 == v26 >= v22 == v26 <= v22) {
                    // 0x1000039f0
                    v29 = *(int64_t *)v13;
                    v27 = v29;
                    v28 = v29;
                }
            }
            float64_t v30 = v14; // 0x100003a0c
            float64_t v31 = v17; // 0x100003a0c
            int64_t v32; // 0x1000038a4
            if (v26 > v17) {
                // 0x100003a1c
                v32 = *(int64_t *)v13;
                v30 = v32;
                v31 = v32;
            }
            int64_t v33 = v13 + 8; // 0x100003a30
            float64_t v34 = *(float64_t *)v33; // 0x100003a30
            float64_t v35 = v25; // 0x100003a38
            float64_t v36 = v23; // 0x100003a38
            int64_t v37; // 0x1000038a4
            if (v34 != v23) {
                v35 = v25;
                v36 = v23;
                if (v34 > v23 == v34 >= v23 == v34 <= v23) {
                    // 0x100003a48
                    v37 = *(int64_t *)v33;
                    v35 = v37;
                    v36 = v37;
                }
            }
            float64_t v38 = v15; // 0x100003a64
            float64_t v39 = v16; // 0x100003a64
            int64_t v40; // 0x1000038a4
            if (v34 > v16) {
                // 0x100003a74
                v40 = *(int64_t *)v33;
                v38 = v40;
                v39 = v40;
            }
            int32_t v41 = 1; // 0x100003a8c
            int32_t v42 = v41 - v5; // 0x1000039c4
            float64_t v43 = v38; // 0x1000039cc
            float64_t v44 = v30; // 0x1000039cc
            v16 = v39;
            v17 = v31;
            int64_t v45 = v13 + 16; // 0x1000039cc
            int32_t v46 = v41; // 0x1000039cc
            v18 = v35;
            v19 = v38;
            v20 = v27;
            v21 = v30;
            while (v42 < 0 != ((v42 ^ v41) & (v41 ^ v5)) < 0) {
                int64_t v47 = v45;
                v22 = v28;
                v23 = v36;
                v24 = v27;
                v25 = v35;
                v26 = *(float64_t *)v47;
                v27 = v24;
                v28 = v22;
                if (v26 != v22) {
                    v27 = v24;
                    v28 = v22;
                    if (v26 > v22 == v26 >= v22 == v26 <= v22) {
                        // 0x1000039f0
                        v29 = *(int64_t *)v47;
                        v27 = v29;
                        v28 = v29;
                    }
                }
                // 0x100003a00
                v30 = v44;
                v31 = v17;
                if (v26 > v17) {
                    // 0x100003a1c
                    v32 = *(int64_t *)v47;
                    v30 = v32;
                    v31 = v32;
                }
                // 0x100003a2c
                v33 = v47 + 8;
                v34 = *(float64_t *)v33;
                v35 = v25;
                v36 = v23;
                if (v34 != v23) {
                    v35 = v25;
                    v36 = v23;
                    if (v34 > v23 == v34 >= v23 == v34 <= v23) {
                        // 0x100003a48
                        v37 = *(int64_t *)v33;
                        v35 = v37;
                        v36 = v37;
                    }
                }
                // 0x100003a58
                v38 = v43;
                v39 = v16;
                if (v34 > v16) {
                    // 0x100003a74
                    v40 = *(int64_t *)v33;
                    v38 = v40;
                    v39 = v40;
                }
                // 0x100003a88
                v41 = v46 + 1;
                v42 = v41 - v5;
                v43 = v38;
                v44 = v30;
                v16 = v39;
                v17 = v31;
                v45 = v47 + 16;
                v46 = v41;
                v18 = v35;
                v19 = v38;
                v20 = v27;
                v21 = v30;
            }
        }
        // 0x100003aa4
        if (v3 > v21) {
            // 0x100003d04
            return 0xffffffff;
        }
        float64_t v48 = v20; // 0x100003ac0
        float64_t v49 = v18; // 0x100003af0
        if (v3 == v48) {
            // 0x100003ad4
            if (v2 > v19) {
                // 0x100003d04
                return 0xffffffff;
            }
        } else {
            if (v2 > v19 || v3 > v48 == v3 >= v48 == v3 <= v48) {
                // 0x100003d04
                return 0xffffffff;
            }
        }
        if (v2 != v49) {
            if (v2 > v49 == v2 >= v49 == v2 <= v49) {
                // 0x100003d04
                return 0xffffffff;
            }
        }
        while (true) {
            // 0x100003b60
            _rand();
            _rand();
            v10 = 0;
            v7 = 0;
            v8 = 0;
            v12 = 0;
            if (v6 < 0 != (v5 & v6) < 0) {
                while (true) {
                  lab_0x100003bf4:;
                    int32_t v50 = v7;
                    v11 = v10;
                    v9 = v50;
                    v8 = v50;
                    v12 = v11;
                    switch ((int32_t)v51) {
                        case 0: {
                            goto lab_0x100003cbc_2;
                        }
                        case 1: {
                            // 0x100003c98
                            v9 = v50 + 1;
                            goto lab_0x100003cac;
                        }
                        default: {
                            goto lab_0x100003cac;
                        }
                    }
                }
            }
          lab_0x100003cbc_2:
            // 0x100003cbc
            if (v12 == v5) {
                // break -> 0x100003ce0
                break;
            }
        }
        // 0x100003d04
        return v8 % 2 == 0 ? 0xffffffff : 1;
    }
    int32_t v52 = 0; // 0x100003970
    function_100003790();
    while (v3 <= v1) {
        // 0x1000038c8
        v52++;
        int32_t v53 = v52 - v5; // 0x1000038d4
        if (v53 < 0 == ((v53 ^ v52) & (v52 ^ v5)) < 0) {
            goto lab_0x10000397c;
        }
        function_100003790();
    }
    // 0x100003d04
    return 0;
  lab_0x100003cac:;
    int32_t v54 = v11 + 1; // 0x100003cb0
    int32_t v55 = v54 - v5; // 0x100003be4
    v10 = v54;
    v7 = v9;
    v8 = v9;
    v12 = v54;
    if (v55 < 0 == ((v55 ^ v54) & (v54 ^ v5)) < 0) {
        // break -> 0x100003cbc
        goto lab_0x100003cbc_2;
    }
    goto lab_0x100003bf4;
}

// Address range: 0x100003d14 - 0x100003e90
int64_t entry_point(void) {
    // 0x100003d14
    int64_t v1; // bp-168, 0x100003d14
    _memcpy(&v1, &g1, 128);
    function_1000038a4();
    _printf("%d\n", (int64_t)&g1);
    function_1000038a4();
    _printf("%d\n", (int64_t)&g1);
    function_1000038a4();
    _printf("%d\n", (int64_t)&g1);
    function_1000038a4();
    int32_t v2 = _printf("%d\n", (int64_t)&g1); // 0x100003e54
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003e64
    if (v3 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003e78
        ___stack_chk_fail((int64_t)v2);
    }
    // 0x100003e7c
    return 0;
}

// Address range: 0x100003e90 - 0x100003e9c
int64_t function_100003e90(int64_t a1) {
    // 0x100003e90
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003e9c - 0x100003ea8
int64_t * function_100003e9c(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003e9c
    return _memcpy(dest, src, n);
}

// Address range: 0x100003ea8 - 0x100003eb4
int32_t function_100003ea8(char * format, ...) {
    // 0x100003ea8
    return _printf(format);
}

// Address range: 0x100003eb4 - 0x100003ec0
int32_t function_100003eb4(void) {
    // 0x100003eb4
    return _rand();
}

// --------------------- Meta-Information ---------------------

// Detected functions: 13

