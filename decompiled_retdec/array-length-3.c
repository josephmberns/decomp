//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003b98(void);
int64_t function_100003c2c(void);
int64_t function_100003d14(void);
int64_t function_100003ebc(char * a1, char * a2, int64_t a3, char * a4);
int64_t * function_100003ec8(int32_t nmemb, int32_t size);
void function_100003ed4(int64_t * ptr);
int32_t function_100003ee0(char * format, ...);
char * function_100003eec(char * s);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___assert_rtn(char * a1, char * a2, int64_t a3, char * a4);
int64_t * _calloc(int32_t a1, int32_t a2);
void _free(int64_t * a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003b98 - 0x100003c2c
int64_t function_100003b98(void) {
    int64_t * v1 = _calloc(1, 24); // 0x100003bb0
    int64_t result = (int64_t)v1; // 0x100003bb0
    if (v1 == NULL) {
        // 0x100003c1c
        return result;
    }
    // 0x100003bcc
    int64_t v2; // 0x100003b98
    int64_t * v3 = _calloc((int32_t)v2, 4); // 0x100003bd4
    *(int64_t *)(result + 16) = (int64_t)v3;
    int64_t result2; // 0x100003b98
    if (v3 == NULL) {
        // 0x100003c08
        _free(v1);
        result2 = 0;
    } else {
        // 0x100003bf8
        *v1 = 0x100000000 * v2 >> 32;
        result2 = result;
    }
    // 0x100003c1c
    return result2;
}

// Address range: 0x100003c2c - 0x100003d14
int64_t function_100003c2c(void) {
    // 0x100003c2c
    int64_t v1; // 0x100003c2c
    int64_t v2; // 0x100003c2c
    if (v1 == 0) {
        // 0x100003c5c
        v2 = ___assert_rtn("StringArray_delete", "array-length-3.c", 38, "ptr_to_this != NULL");
    }
    // 0x100003c80
    if (v2 == 0) {
        // 0x100003d08
        return 0;
    }
    int64_t * v3 = (int64_t *)(v2 + 16);
    int64_t v4 = 0; // 0x100003ce0
    _free((int64_t *)*(int64_t *)(8 * v4 + *v3));
    v4++;
    int64_t v5 = *v3;
    while (v4 < (int64_t)&g1) {
        // 0x100003cc4
        _free((int64_t *)*(int64_t *)(8 * v4 + v5));
        v4++;
        v5 = *v3;
    }
    // 0x100003cec
    _free((int64_t *)v5);
    _free((int64_t *)v2);
    // 0x100003d08
    return &g1;
}

// Address range: 0x100003d14 - 0x100003dcc
int64_t function_100003d14(void) {
    // 0x100003d14
    int64_t v1; // 0x100003d14
    uint64_t v2 = v1;
    int64_t * v3 = (int64_t *)(v2 + 8); // 0x100003d38
    int64_t result; // 0x100003d14
    if (*v3 >= v2) {
        // 0x100003dc0
        return result;
    }
    if (v1 == 0) {
        // 0x100003dc0
        return result;
    }
    // 0x100003d98
    int64_t v4; // 0x100003d14
    int64_t v5 = &v4; // 0x100003d64
    int64_t v6; // 0x100003d14
    int64_t result2 = (int64_t)_strdup((char *)v6);
    int64_t v7 = *v3; // 0x100003dac
    *v3 = v7 + 1;
    *(int64_t *)(8 * v7 + *(int64_t *)(v2 + 16)) = result2;
    while (*v3 < result2) {
        // 0x100003d8c
        v5 += 8;
        int64_t v8 = *(int64_t *)v5; // 0x100003d60
        if (v8 == 0) {
            // break -> 0x100003dc0
            break;
        }
        result2 = (int64_t)_strdup((char *)v8);
        v7 = *v3;
        *v3 = v7 + 1;
        *(int64_t *)(8 * v7 + *(int64_t *)(v2 + 16)) = result2;
    }
    // 0x100003dc0
    return result2;
}

// Address range: 0x100003dcc - 0x100003ebc
int64_t entry_point(void) {
    int64_t v1 = function_100003b98(); // 0x100003de8
    function_100003d14();
    int64_t v2; // 0x100003dcc
    _printf("There are %d elements in an array with a capacity of %d elements:\n\n", v2, v2);
    for (int64_t i = 0; i < *(int64_t *)(v1 + 8); i++) {
        // 0x100003e64
        _printf("    the element %d is the string \"%s\"\n", v2, (char *)v2);
    }
    // 0x100003ea4
    function_100003c2c();
    return 0;
}

// Address range: 0x100003ebc - 0x100003ec8
int64_t function_100003ebc(char * a1, char * a2, int64_t a3, char * a4) {
    // 0x100003ebc
    return ___assert_rtn(a1, a2, a3, a4);
}

// Address range: 0x100003ec8 - 0x100003ed4
int64_t * function_100003ec8(int32_t nmemb, int32_t size) {
    // 0x100003ec8
    return _calloc(nmemb, size);
}

// Address range: 0x100003ed4 - 0x100003ee0
void function_100003ed4(int64_t * ptr) {
    // 0x100003ed4
    _free(ptr);
}

// Address range: 0x100003ee0 - 0x100003eec
int32_t function_100003ee0(char * format, ...) {
    // 0x100003ee0
    return _printf(format);
}

// Address range: 0x100003eec - 0x100003ef8
char * function_100003eec(char * s) {
    // 0x100003eec
    return _strdup(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9
