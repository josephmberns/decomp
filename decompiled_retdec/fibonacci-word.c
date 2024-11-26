//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003a6c(void);
int64_t function_100003b00(void);
int64_t function_100003c28(void);
int64_t function_100003d10(void);
int64_t function_100003f04(int64_t a1, int64_t a2, int64_t a3);
int64_t function_100003f10(int64_t a1, int64_t a2, int64_t a3);
void function_100003f1c(int64_t * ptr);
float64_t function_100003f28(float64_t a1);
int64_t * function_100003f34(int32_t size);
int32_t function_100003f40(char * format, ...);
int32_t function_100003f4c(char * s);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___strcat_chk(int64_t a1, int64_t a2, int64_t a3);
int64_t ___strcpy_chk(int64_t a1, int64_t a2, int64_t a3);
void _free(int64_t * a1);
float64_t _log2(float64_t a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003a6c - 0x100003b00
int64_t function_100003a6c(void) {
    // 0x100003a6c
    int64_t v1; // 0x100003a6c
    char * v2 = (char *)v1; // 0x100003a90
    _printf("%2s", v2);
    _printf(" %10s", v2);
    _printf(" %-20s", v2);
    _printf(" %-40s", v2);
    return _printf("\n");
}

// Address range: 0x100003b00 - 0x100003c28
int64_t function_100003b00(void) {
    // 0x100003b00
    __asm_sshll(0.0f, 0);
    __asm_sshll(0.0f, 0);
    int128_t v1 = __asm_sshll(0.0f, 0); // 0x100003b5c
    __asm_sshll(0.0f, 0);
    _log2((float64_t)(int64_t)v1);
    __asm_sshll(0.0f, 0);
    __asm_sshll(0.0f, 0);
    int128_t v2 = __asm_sshll(0.0f, 0); // 0x100003bc0
    __asm_sshll(0.0f, 0);
    return _log2((float64_t)(int64_t)v2);
}

// Address range: 0x100003c28 - 0x100003d10
int64_t function_100003c28(void) {
    int32_t v1 = 0; // 0x100003c44
    int64_t v2; // 0x100003c28
    while (*(char *)(v2 + (int64_t)v1) != 0) {
        // 0x100003c48
        v1++;
    }
    // 0x100003cdc
    function_100003b00();
    int128_t v3; // 0x100003c28
    return _printf(" %-20.18f", (float64_t)(int64_t)v3);
}

// Address range: 0x100003d10 - 0x100003dcc
int64_t function_100003d10(void) {
    // 0x100003d10
    int64_t v1; // 0x100003d10
    _printf("%2d", v1);
    char * v2 = (char *)v1; // 0x100003d44
    _strlen(v2);
    _printf(" %10ld", (int32_t)v1);
    function_100003c28();
    _printf(" %-40s", v2);
    return _printf("\n");
}

// Address range: 0x100003dcc - 0x100003f04
int64_t entry_point(void) {
    // 0x100003dcc
    function_100003a6c();
    int64_t * v1 = _malloc(2); // 0x100003df0
    ___strcpy_chk((int64_t)v1, 0x100003fa1, -1);
    int64_t * v2 = _malloc(2); // 0x100003e14
    ___strcpy_chk((int64_t)v2, 0x100003fa3, -1);
    function_100003d10();
    int32_t v3 = 2;
    int64_t * v4 = v2;
    function_100003d10();
    int64_t * v5 = _malloc(_strlen((char *)v4) + 1 + _strlen((char *)v1)); // 0x100003e8c
    int64_t v6 = (int64_t)v5; // 0x100003e8c
    ___strcpy_chk(v6, (int64_t)v4, -1);
    ___strcat_chk(v6, (int64_t)v1, -1);
    _free(v1);
    int32_t v7 = v3 + 1; // 0x100003ed8
    while (v3 == 36 || v3 < 36 != (35 - v3 & v7) < 0) {
        // 0x100003e5c
        v3 = v7;
        int64_t * v8 = v4;
        v4 = v5;
        function_100003d10();
        v5 = _malloc(_strlen((char *)v4) + 1 + _strlen((char *)v8));
        v6 = (int64_t)v5;
        ___strcpy_chk(v6, (int64_t)v4, -1);
        ___strcat_chk(v6, (int64_t)v8, -1);
        _free(v8);
        v7 = v3 + 1;
    }
    // 0x100003ee4
    _free(v4);
    _free(v5);
    return 0;
}

// Address range: 0x100003f04 - 0x100003f10
int64_t function_100003f04(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003f04
    return ___strcat_chk(a1, a2, a3);
}

// Address range: 0x100003f10 - 0x100003f1c
int64_t function_100003f10(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003f10
    return ___strcpy_chk(a1, a2, a3);
}

// Address range: 0x100003f1c - 0x100003f28
void function_100003f1c(int64_t * ptr) {
    // 0x100003f1c
    _free(ptr);
}

// Address range: 0x100003f28 - 0x100003f34
float64_t function_100003f28(float64_t a1) {
    // 0x100003f28
    return _log2(a1);
}

// Address range: 0x100003f34 - 0x100003f40
int64_t * function_100003f34(int32_t size) {
    // 0x100003f34
    return _malloc(size);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(char * format, ...) {
    // 0x100003f40
    return _printf(format);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(char * s) {
    // 0x100003f4c
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12
