//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------------ Structures ------------------------

struct tm {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    char * e10;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003784(void);
int64_t function_100003c1c(void);
int64_t function_100003e74(int64_t a1, int64_t a2, int64_t a3, char * a4);
int64_t function_100003e80(void);
int32_t function_100003e8c(char * nptr);
void function_100003e98(int64_t * ptr);
struct tm * function_100003ea4(int32_t * timer);
int64_t * function_100003eb0(int32_t size);
int64_t * function_100003ebc(int64_t * dest, int64_t * src, int32_t n);
int32_t function_100003ec8(char * s);
int32_t function_100003ed4(int32_t * timer);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x1c0000001f; // 0x100003f78

// ------- Dynamically Linked Functions Without Header --------

int64_t ___sprintf_chk(int64_t a1, int64_t a2, int64_t a3, char * a4);
int64_t ___stack_chk_fail(void);
int32_t _atoi(char * a1);
void _free(int64_t * a1);
struct tm * _localtime(int32_t * a1);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int32_t _puts(char * a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003784 - 0x100003c1c
int64_t function_100003784(void) {
    // 0x100003784
    int64_t v1; // 0x100003784
    int32_t v2 = v1; // 0x100003790
    int32_t v3 = v1; // 0x100003794
    int64_t result = (int64_t)_malloc(100); // 0x1000037a8
    if (v2 % 400 == 0) {
        if (v3 == 60) {
            // 0x100003830
            ___sprintf_chk(result, 0, -1, "St. Tib's Day, YOLD %d");
            // 0x100003c0c
            return result;
        }
    } else {
        if (v3 == 60 == v2 % 100 != 0 == 4 * v2 / 4 == v2) {
            // 0x100003830
            ___sprintf_chk(result, 0, -1, "St. Tib's Day, YOLD %d");
            // 0x100003c0c
            return result;
        }
    }
    // 0x100003890
    ___sprintf_chk(result, 0, -1, "%s, %s %d, YOLD %d");
    // 0x100003c0c
    return result;
}

// Address range: 0x100003c1c - 0x100003d6c
int64_t function_100003c1c(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003c30
    int64_t v2; // 0x100003c1c
    int32_t v3 = v2; // 0x100003c3c
    int32_t v4 = v2; // 0x100003c40
    int64_t v5; // bp-72, 0x100003c1c
    _memcpy(&v5, &g1, 48);
    int32_t v6 = v3 - 1; // 0x100003c60
    int32_t result = v4; // 0x100003c68
    if (v6 != 0 && v6 < 0 == (v3 & -v3) < 0) {
        int32_t v7 = v2; // 0x100003c38
        int64_t v8 = &v5; // 0x100003c78
        bool v9 = v7 % 400 == 0 | v7 % 100 != 0 == 4 * v7 / 4 == v7;
        int64_t v10 = v6; // 0x100003c1c
        int32_t v11 = v4;
        int32_t v12 = *(int32_t *)((int64_t)(4 * v3 - 8) + v8); // 0x100003c7c
        v11 = v12 + v11 + (int32_t)(v9 == v3 == 3);
        int32_t v13 = v10;
        int32_t v14 = v13 - 1; // 0x100003c60
        v10--;
        result = v11;
        while (v14 != 0 && v14 < 0 == (v13 & -v13) < 0) {
            // 0x100003c70
            v12 = *(int32_t *)((int64_t)(4 * v13 - 8) + v8);
            v11 = v12 + v11 + (int32_t)(v9 == v13 == 3);
            v13 = v10;
            v14 = v13 - 1;
            v10--;
            result = v11;
        }
    }
    // 0x100003d30
    if (*(int64_t *)*(int64_t *)0x100004010 != v1) {
        // 0x100003d58
        ___stack_chk_fail();
    }
    // 0x100003d5c
    return result;
}

// Address range: 0x100003d6c - 0x100003e74
int64_t entry_point(void) {
    // 0x100003d6c
    int64_t v1; // 0x100003d6c
    switch ((int32_t)v1) {
        case 1: {
            int64_t v2 = _time(NULL); // bp-40, 0x100003da8
            _localtime((int32_t *)&v2);
            // break -> 0x100003e44
            break;
        }
        case 4: {
            // 0x100003dec
            int64_t v3; // 0x100003d6c
            int64_t * v4 = (int64_t *)(v3 + 8); // 0x100003df0
            _atoi((char *)*v4);
            _atoi((char *)*v4);
            _atoi((char *)*(int64_t *)(v3 + 16));
            _atoi((char *)*(int64_t *)(v3 + 24));
            function_100003c1c();
            // break -> 0x100003e44
            break;
        }
    }
    int64_t v5 = function_100003784(); // 0x100003e4c
    _puts((char *)v5);
    _free((int64_t *)v5);
    return 0;
}

// Address range: 0x100003e74 - 0x100003e80
int64_t function_100003e74(int64_t a1, int64_t a2, int64_t a3, char * a4) {
    // 0x100003e74
    return ___sprintf_chk(a1, a2, a3, a4);
}

// Address range: 0x100003e80 - 0x100003e8c
int64_t function_100003e80(void) {
    // 0x100003e80
    return ___stack_chk_fail();
}

// Address range: 0x100003e8c - 0x100003e98
int32_t function_100003e8c(char * nptr) {
    // 0x100003e8c
    return _atoi(nptr);
}

// Address range: 0x100003e98 - 0x100003ea4
void function_100003e98(int64_t * ptr) {
    // 0x100003e98
    _free(ptr);
}

// Address range: 0x100003ea4 - 0x100003eb0
struct tm * function_100003ea4(int32_t * timer) {
    // 0x100003ea4
    return _localtime(timer);
}

// Address range: 0x100003eb0 - 0x100003ebc
int64_t * function_100003eb0(int32_t size) {
    // 0x100003eb0
    return _malloc(size);
}

// Address range: 0x100003ebc - 0x100003ec8
int64_t * function_100003ebc(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003ebc
    return _memcpy(dest, src, n);
}

// Address range: 0x100003ec8 - 0x100003ed4
int32_t function_100003ec8(char * s) {
    // 0x100003ec8
    return _puts(s);
}

// Address range: 0x100003ed4 - 0x100003ee0
int32_t function_100003ed4(int32_t * timer) {
    // 0x100003ed4
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12
