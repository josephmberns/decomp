//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b34(void);
int64_t function_100003f84(void);
int32_t function_100003f90(char * format, ...);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x100000cfeedfacf; // 0x100008000
int32_t * g2 = (int32_t *)0x100000000; // 0x100008040
int32_t * g3; // 0x100008044

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(void);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003b34 - 0x100003e78
int64_t function_100003b34(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003b48
    uint32_t v2 = *(int32_t *)&g2; // 0x100003b64
    uint32_t v3 = *(int32_t *)&g3; // 0x100003b70
    int32_t * v4 = (int32_t *)(4 * (int64_t)v3 + (int64_t)&g1);
    uint32_t v5 = *v4; // 0x100003b80
    int32_t * v6 = v4; // 0x100003b8c
    int32_t v7 = v2; // 0x100003b8c
    if (v2 != v5 && v2 >= v5) {
        // 0x100003b94
        *v4 = v2;
        uint32_t v8 = *(int32_t *)&g3;
        v6 = (int32_t *)(4 * (int64_t)v8 + (int64_t)&g1);
        v7 = *(int32_t *)&g2;
    }
    // 0x100003bc0
    int64_t v9; // 0x100003b34
    int32_t v10 = v9; // 0x100003b54
    int32_t v11 = v9; // 0x100003bc0
    uint32_t v12; // 0x100003b34
    int64_t v13; // 0x100003bc8
    char v14; // 0x100003bcc
    while (true) {
      lab_0x100003bc4:
        // 0x100003bc4
        v12 = v11;
        v13 = v12;
        v14 = *(char *)(v9 + v13);
        if (v12 == (int32_t)v14) {
            goto lab_0x100003c20;
        } else {
            if (v14 == -1) {
                if ((1 << v12 & v10) == 0) {
                    goto lab_0x100003c20;
                } else {
                    goto lab_0x100003c84;
                }
            } else {
                goto lab_0x100003c84;
            }
        }
    }
  lab_0x100003cf0:
    // 0x100003cf0
    *(int32_t *)&g2 = v7 + 1;
    if (v12 == 0 != v12 != 0) {
        int32_t v15 = 2; // 0x100003b34
        while (true) {
          lab_0x100003d3c:;
            int32_t v16 = v15;
            char v17 = *(char *)v9; // 0x100003d44
            if (v17 == 0) {
                // 0x100003df8
                function_100003b34();
                // 0x100003e14
                v15 = 2 * v16;
                goto lab_0x100003d3c;
            } else {
                if ((v16 & v10) == 0 == v17 == -1) {
                    // 0x100003df8
                    function_100003b34();
                    // 0x100003e14
                    v15 = 2 * v16;
                    goto lab_0x100003d3c;
                } else {
                    // 0x100003e14
                    v15 = 2 * v16;
                    goto lab_0x100003d3c;
                }
            }
        }
    }
    // 0x100003e30
    *(int32_t *)&g2 = v7;
  lab_0x100003e48_2:;
    // 0x100003e48
    int64_t result; // 0x100003b34
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003e68
        result = ___stack_chk_fail();
    }
    // 0x100003e6c
    return result;
  lab_0x100003c20:;
    int32_t v18 = *(int32_t *)(4 * v13 + (int64_t)&g1); // 0x100003c3c
    if (v14 == -1 | v18 + v7 >= *v6) {
        // break -> 0x100003cf0
        goto lab_0x100003cf0;
    }
    goto lab_0x100003c84;
  lab_0x100003c84:;
    uint32_t v19 = *(int32_t *)(4 * v13 + (int64_t)&g1) + v7; // 0x100003ca4
    uint32_t v20 = *v6; // 0x100003cb4
    if (v19 >= v20 != v19 != v20) {
        goto lab_0x100003e48_2;
    }
    // 0x100003ccc
    v11 = v12 - 1;
    if (v11 == 0) {
        goto lab_0x100003e48_2;
    }
    goto lab_0x100003bc4;
}

// Address range: 0x100003e78 - 0x100003f84
int64_t entry_point(void) {
    // 0x100003e78
    *(int32_t *)&g3 = 1;
    function_100003b34();
    _printf("%2d: %d\n", 1, (int64_t)0);
    int32_t v1 = *(int32_t *)&g3 + 1; // 0x100003f44
    *(int32_t *)&g3 = v1;
    while (v1 < 13) {
        // 0x100003ed8
        function_100003b34();
        _printf("%2d: %d\n", 1, (int64_t)(v1 - 1));
        v1 = *(int32_t *)&g3 + 1;
        *(int32_t *)&g3 = v1;
    }
    int64_t v2 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003f5c
    if (v2 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003f70
        ___stack_chk_fail();
    }
    // 0x100003f74
    return 0;
}

// Address range: 0x100003f84 - 0x100003f90
int64_t function_100003f84(void) {
    // 0x100003f84
    return ___stack_chk_fail();
}

// Address range: 0x100003f90 - 0x100003f9c
int32_t function_100003f90(char * format, ...) {
    // 0x100003f90
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4
