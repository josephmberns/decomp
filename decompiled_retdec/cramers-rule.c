//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000036f8(void);
int64_t function_1000037f0(void);
int64_t function_1000038d8(void);
int64_t function_100003c04(void);
int64_t function_100003c70(void);
int64_t function_100003e7c(int64_t a1);
int32_t function_100003e88(int32_t x);
void function_100003e94(int64_t * ptr);
int64_t * function_100003ea0(int32_t size);
int64_t * function_100003eac(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003eb8(char * format, ...);
int32_t function_100003ec4(char * s);

// --------------------- Global Variables ---------------------

float64_t g1 = 1.0e-12; // 0x100003ed8
int64_t g2 = 0x4000000000000000; // 0x100003ee0
int32_t g3;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _abs(int32_t a1);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x1000036f8 - 0x1000037f0
int64_t function_1000036f8(void) {
    // 0x1000036f8
    int64_t v1; // 0x1000036f8
    int32_t v2 = v1; // 0x100003704
    int32_t v3 = 8 * v2; // 0x100003724
    int64_t * v4 = _malloc(v3); // 0x100003724
    int32_t v5 = -v2;
    if (v5 < 0 == (v5 & v2) < 0) {
        // 0x1000037dc
        return 0x100000000 * v1 >> 32;
    }
    int32_t v6 = 1 - v2;
    int32_t v7 = 0; // 0x1000037d0
    int64_t * v8 = _malloc(v3); // 0x100003754
    int64_t v9 = v7; // 0x10000375c
    int64_t * v10 = (int64_t *)(8 * v9 + (int64_t)v4); // 0x100003760
    *v10 = (int64_t)v8;
    int64_t v11 = (8 * v1 & 0x7fffffff8) * v9 + v1; // 0x100003794
    *v8 = *(int64_t *)v11;
    int32_t v12 = 1; // 0x10000377c
    int64_t v13; // 0x10000379c
    int32_t v14; // 0x1000037bc
    int32_t v15; // 0x100003774
    if (v6 < 0 != (v6 & v2) < 0) {
        v13 = 8 * (int64_t)v12;
        *(int64_t *)(v13 + *v10) = *(int64_t *)(v11 + v13);
        v14 = v12 + 1;
        v15 = v14 - v2;
        v12 = v14;
        while (v15 < 0 != ((v15 ^ v14) & (v14 ^ v2)) < 0) {
            // 0x100003784
            v13 = 8 * (int64_t)v12;
            *(int64_t *)(v13 + *v10) = *(int64_t *)(v11 + v13);
            v14 = v12 + 1;
            v15 = v14 - v2;
            v12 = v14;
        }
    }
    // 0x1000037cc
    v7++;
    while (v7 - v2 < 0 != ((v7 - v2 ^ v7) & (v7 ^ v2)) < 0) {
        // 0x100003784
        v8 = _malloc(v3);
        v9 = v7;
        v10 = (int64_t *)(8 * v9 + (int64_t)v4);
        *v10 = (int64_t)v8;
        v11 = (8 * v1 & 0x7fffffff8) * v9 + v1;
        *v8 = *(int64_t *)v11;
        v12 = 1;
        if (v6 < 0 != (v6 & v2) < 0) {
            v13 = 8 * (int64_t)v12;
            *(int64_t *)(v13 + *v10) = *(int64_t *)(v11 + v13);
            v14 = v12 + 1;
            v15 = v14 - v2;
            v12 = v14;
            while (v15 < 0 != ((v15 ^ v14) & (v14 ^ v2)) < 0) {
                // 0x100003784
                v13 = 8 * (int64_t)v12;
                *(int64_t *)(v13 + *v10) = *(int64_t *)(v11 + v13);
                v14 = v12 + 1;
                v15 = v14 - v2;
                v12 = v14;
            }
        }
        // 0x1000037cc
        v7++;
    }
    // 0x1000037dc
    return 0x100000000 * v1 >> 32;
}

// Address range: 0x1000037f0 - 0x1000038d8
int64_t function_1000037f0(void) {
    // 0x1000037f0
    int64_t v1; // 0x1000037f0
    int32_t v2 = v1; // 0x100003804
    int32_t v3 = 8 * v2; // 0x100003814
    int64_t * v4 = _malloc(v3); // 0x100003814
    int32_t v5 = -v2;
    if (v5 < 0 == (v5 & v2) < 0) {
        // 0x1000038c4
        return 0x100000000 * v1 >> 32;
    }
    int32_t v6 = 1 - v2;
    int32_t v7 = 0; // 0x1000038b8
    int64_t * v8 = _malloc(v3); // 0x100003844
    int64_t v9 = 8 * (int64_t)v7; // 0x100003850
    int64_t * v10 = (int64_t *)(v9 + (int64_t)v4); // 0x100003850
    *v10 = (int64_t)v8;
    int64_t * v11 = (int64_t *)(v9 + v1); // 0x10000387c
    *v8 = *(int64_t *)*v11;
    int32_t v12 = 1; // 0x10000386c
    int64_t v13; // 0x100003884
    int32_t v14; // 0x1000038a4
    int32_t v15; // 0x100003864
    if (v6 < 0 != (v6 & v2) < 0) {
        v13 = 8 * (int64_t)v12;
        *(int64_t *)(v13 + *v10) = *(int64_t *)(v13 + *v11);
        v14 = v12 + 1;
        v15 = v14 - v2;
        v12 = v14;
        while (v15 < 0 != ((v15 ^ v14) & (v14 ^ v2)) < 0) {
            // 0x100003874
            v13 = 8 * (int64_t)v12;
            *(int64_t *)(v13 + *v10) = *(int64_t *)(v13 + *v11);
            v14 = v12 + 1;
            v15 = v14 - v2;
            v12 = v14;
        }
    }
    // 0x1000038b4
    v7++;
    while (v7 - v2 < 0 != ((v7 - v2 ^ v7) & (v7 ^ v2)) < 0) {
        // 0x100003874
        v8 = _malloc(v3);
        v9 = 8 * (int64_t)v7;
        v10 = (int64_t *)(v9 + (int64_t)v4);
        *v10 = (int64_t)v8;
        v11 = (int64_t *)(v9 + v1);
        *v8 = *(int64_t *)*v11;
        v12 = 1;
        if (v6 < 0 != (v6 & v2) < 0) {
            v13 = 8 * (int64_t)v12;
            *(int64_t *)(v13 + *v10) = *(int64_t *)(v13 + *v11);
            v14 = v12 + 1;
            v15 = v14 - v2;
            v12 = v14;
            while (v15 < 0 != ((v15 ^ v14) & (v14 ^ v2)) < 0) {
                // 0x100003874
                v13 = 8 * (int64_t)v12;
                *(int64_t *)(v13 + *v10) = *(int64_t *)(v13 + *v11);
                v14 = v12 + 1;
                v15 = v14 - v2;
                v12 = v14;
            }
        }
        // 0x1000038b4
        v7++;
    }
    // 0x1000038c4
    return 0x100000000 * v1 >> 32;
}

// Address range: 0x1000038d8 - 0x100003c04
int64_t function_1000038d8(void) {
    // 0x1000038d8
    int64_t v1; // 0x1000038d8
    int32_t v2 = v1; // 0x1000038e4
    int32_t v3 = -v2;
    int32_t v4 = 0; // 0x10000390c
    int64_t result; // 0x1000038d8
    if (v3 < 0 == (v3 & v2) < 0) {
      lab_0x100003b9c:;
        int32_t v5 = 0;
        int32_t v6 = v5 - v2; // 0x100003ba4
        int32_t v7 = v5 + 1; // 0x100003bac
        while (v6 < 0 != ((v6 ^ v5) & (v5 ^ v2)) < 0) {
            // 0x100003b9c
            v5 = v7;
            v6 = v5 - v2;
            v7 = v5 + 1;
        }
        // 0x100003bf4
        return result;
    }
    while (true) {
      lab_0x100003928:;
        int32_t v8 = v4;
        int32_t v9 = v8 - v2; // 0x100003930
        int64_t v10 = 8 * (int64_t)v8;
        int32_t v11 = v8; // 0x100003938
        int32_t v12 = v8; // 0x100003938
        if (v9 < 0 != ((v9 ^ v8) & (v8 ^ v2)) < 0) {
            int64_t v13 = *(int64_t *)(8 * (int64_t)v11 + v1); // 0x100003948
            float64_t v14 = *(float64_t *)(v13 + v10); // 0x100003950
            int64_t v15 = *(int64_t *)(8 * (int64_t)v12 + v1); // 0x10000395c
            float64_t v16 = *(float64_t *)(v15 + v10); // 0x100003964
            bool v17 = false; // 0x100003968
            bool v18 = true; // 0x100003968
            bool v19 = false; // 0x100003968
            if (v14 != v16) {
                v17 = v14 > v16;
                v18 = false;
                v19 = v14 >= v16 == v14 <= v16;
            }
            int32_t v20 = v18 | v17 != v19 ? v12 : v11;
            int32_t v21 = v11 + 1; // 0x10000398c
            int32_t v22 = v21 - v2; // 0x100003930
            v11 = v21;
            v12 = v20;
            while (v22 < 0 != ((v22 ^ v21) & (v21 ^ v2)) < 0) {
                // 0x100003940
                v13 = *(int64_t *)(8 * (int64_t)v11 + v1);
                v14 = *(float64_t *)(v13 + v10);
                v15 = *(int64_t *)(8 * (int64_t)v12 + v1);
                v16 = *(float64_t *)(v15 + v10);
                v17 = false;
                v18 = true;
                v19 = false;
                if (v14 != v16) {
                    v17 = v14 > v16;
                    v18 = false;
                    v19 = v14 >= v16 == v14 <= v16;
                }
                // 0x100003988
                v20 = v18 | v17 != v19 ? v12 : v11;
                v21 = v11 + 1;
                v22 = v21 - v2;
                v11 = v21;
                v12 = v20;
            }
            if (v20 != v8) {
                int64_t * v23 = (int64_t *)(v10 + v1); // 0x1000039f0
                int32_t v24 = 0; // 0x100003a30
                int64_t v25 = 8 * (int64_t)v24; // 0x1000039e0
                int64_t * v26 = (int64_t *)(v25 + *(int64_t *)(8 * (int64_t)v20 + v1));
                *v26 = *(int64_t *)(*v23 + v25);
                *(int64_t *)(*v23 + v25) = *v26;
                v24++;
                while (v24 - v2 < 0 != ((v24 - v2 ^ v24) & (v24 ^ v2)) < 0) {
                    // 0x1000039d0
                    v25 = 8 * (int64_t)v24;
                    v26 = (int64_t *)(v25 + *(int64_t *)(8 * (int64_t)v20 + v1));
                    *v26 = *(int64_t *)(*v23 + v25);
                    *(int64_t *)(*v23 + v25) = *v26;
                    v24++;
                }
            }
        }
        int64_t * v27 = (int64_t *)(v10 + v1); // 0x100003a58
        int32_t v28 = _abs((int32_t)*(float64_t *)(*v27 + v10)); // 0x100003a68
        if (g1 < (float64_t)v28) {
            // break -> 0x100003a88
            break;
        }
        // 0x100003ab4
        v4 = v8 + 1;
        int32_t v29 = v4 - v2;
        int32_t v30 = v4; // 0x100003ac4
        if (v29 < 0 != ((v29 ^ v4) & (v4 ^ v2)) < 0) {
            while (true) {
              lab_0x100003b20:;
                int64_t * v31 = (int64_t *)(8 * (int64_t)v30 + v1); // 0x100003ad4
                int64_t v32 = *v31; // 0x100003ad4
                int64_t v33 = *v27; // 0x100003aec
                float64_t v34 = -*(float64_t *)(v32 + v10) / *(float64_t *)(v33 + v10); // 0x100003af8
                int32_t v35 = 0; // 0x100003b60
                int64_t v36 = 8 * (int64_t)v35; // 0x100003b34
                float64_t * v37 = (float64_t *)(v36 + v32); // 0x100003b4c
                *v37 = v34 * *(float64_t *)(v36 + v33) + *v37;
                v35++;
                while (v35 - v2 < 0 != ((v35 - v2 ^ v35) & (v35 ^ v2)) < 0) {
                    // 0x100003b20
                    v36 = 8 * (int64_t)v35;
                    v37 = (float64_t *)(v36 + *v31);
                    *v37 = v34 * *(float64_t *)(v36 + *v27) + *v37;
                    v35++;
                }
                int32_t v38 = v30 + 1;
                int32_t v39 = v38 - v2; // 0x100003abc
                v30 = v38;
                if (v39 < 0 == ((v39 ^ v38) & (v38 ^ v2)) < 0) {
                    goto lab_0x100003928;
                } else {
                    goto lab_0x100003b20;
                }
            }
        }
        // 0x1000038fc
        result = v28;
        goto lab_0x100003b9c;
    }
    // 0x100003bf4
    return _puts("Singular matrix!");
}

// Address range: 0x100003c04 - 0x100003c70
int64_t function_100003c04(void) {
    // 0x100003c04
    int64_t v1; // 0x100003c04
    int32_t v2 = v1; // 0x100003c10
    int32_t v3 = -v2; // 0x100003c28
    int32_t v4 = 0; // 0x100003c30
    if (v3 < 0 == (v3 & v2) < 0) {
        // 0x100003c5c
        _free((int64_t *)v1);
        return &g3;
    }
    _free((int64_t *)*(int64_t *)(8 * (int64_t)v4 + v1));
    v4++;
    while (v4 - v2 < 0 != ((v4 - v2 ^ v4) & (v4 ^ v2)) < 0) {
        // 0x100003c38
        _free((int64_t *)*(int64_t *)(8 * (int64_t)v4 + v1));
        v4++;
    }
    // 0x100003c5c
    _free((int64_t *)v1);
    return &g3;
}

// Address range: 0x100003c70 - 0x100003d2c
int64_t function_100003c70(void) {
    int32_t v1 = function_1000037f0(); // 0x100003c9c
    int32_t v2 = -v1; // 0x100003cb4
    if (v2 < 0 == (v2 & v1) < 0) {
        // 0x100003cf8
        function_1000038d8();
        return function_100003c04();
    }
    // 0x100003cc4
    int64_t v3; // 0x100003c70
    int64_t v4 = 0x100000000 * v3 >> 29; // 0x100003ce0
    int32_t v5 = 0; // 0x100003cec
    int64_t v6 = 8 * (int64_t)v5; // 0x100003ccc
    *(int64_t *)(*(int64_t *)(v6 + v3) + v4) = *(int64_t *)(v6 + v3);
    v5++;
    while (v5 - v1 < 0 != ((v5 - v1 ^ v5) & (v5 ^ v1)) < 0) {
        // 0x100003cc4
        v6 = 8 * (int64_t)v5;
        *(int64_t *)(*(int64_t *)(v6 + v3) + v4) = *(int64_t *)(v6 + v3);
        v5++;
    }
    // 0x100003cf8
    function_1000038d8();
    return function_100003c04();
}

// Address range: 0x100003d2c - 0x100003e7c
int64_t entry_point(void) {
    // 0x100003d2c
    int64_t v1; // bp-168, 0x100003d2c
    _memcpy(&v1, &g2, 128);
    function_1000036f8();
    function_1000037f0();
    function_1000038d8();
    function_100003c04();
    for (int32_t i = 0; i < 4; i++) {
        int128_t v2 = __asm_sshll(0.0f, 0); // 0x100003df4
        function_100003c70();
        _printf("%7.3lf\n", (float64_t)(int64_t)v2);
    }
    int64_t v3 = function_100003c04(); // 0x100003e40
    int64_t v4 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003e50
    if (v4 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003e64
        ___stack_chk_fail(v3);
    }
    // 0x100003e68
    return 0;
}

// Address range: 0x100003e7c - 0x100003e88
int64_t function_100003e7c(int64_t a1) {
    // 0x100003e7c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003e88 - 0x100003e94
int32_t function_100003e88(int32_t x) {
    // 0x100003e88
    return _abs(x);
}

// Address range: 0x100003e94 - 0x100003ea0
void function_100003e94(int64_t * ptr) {
    // 0x100003e94
    _free(ptr);
}

// Address range: 0x100003ea0 - 0x100003eac
int64_t * function_100003ea0(int32_t size) {
    // 0x100003ea0
    return _malloc(size);
}

// Address range: 0x100003eac - 0x100003eb8
int64_t * function_100003eac(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003eac
    return _memcpy(dest, src, n);
}

// Address range: 0x100003eb8 - 0x100003ec4
int32_t function_100003eb8(char * format, ...) {
    // 0x100003eb8
    return _printf(format);
}

// Address range: 0x100003ec4 - 0x100003ed0
int32_t function_100003ec4(char * s) {
    // 0x100003ec4
    return _puts(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 13

