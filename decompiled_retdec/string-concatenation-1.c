//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e34(void);
int64_t function_100003f30(int64_t a1, int64_t a2, int64_t a3);
int64_t function_100003f3c(int64_t a1, int64_t a2);
void function_100003f48(int64_t * ptr);
int64_t * function_100003f54(int32_t size);
int32_t function_100003f60(char * format, ...);
int32_t function_100003f6c(char * s);
int32_t function_100003f78(char * s);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___strcat_chk(int64_t a1, int64_t a2, int64_t a3);
int64_t ___strcpy_chk(int64_t a1, int64_t a2);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003e34 - 0x100003ea8
int64_t function_100003e34(void) {
    // 0x100003e34
    int64_t v1; // 0x100003e34
    int32_t v2 = _strlen((char *)v1); // 0x100003e4c
    int64_t result = (int64_t)_malloc(v2 + 1 + _strlen((char *)v1)); // 0x100003e6c
    ___strcpy_chk(result, v1);
    ___strcat_chk(result, v1, -1);
    return result;
}

// Address range: 0x100003ea8 - 0x100003f30
int64_t entry_point(void) {
    // 0x100003ea8
    int64_t v1; // 0x100003ea8
    char * v2 = (char *)v1; // 0x100003ed4
    _printf("%s literal\n", v2);
    _printf("%s%s\n", v2, (char *)v1);
    int64_t v3 = function_100003e34(); // 0x100003f08
    _puts((char *)v3);
    _free((int64_t *)v3);
    return 0;
}

// Address range: 0x100003f30 - 0x100003f3c
int64_t function_100003f30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x100003f30
    return ___strcat_chk(a1, a2, a3);
}

// Address range: 0x100003f3c - 0x100003f48
int64_t function_100003f3c(int64_t a1, int64_t a2) {
    // 0x100003f3c
    return ___strcpy_chk(a1, a2);
}

// Address range: 0x100003f48 - 0x100003f54
void function_100003f48(int64_t * ptr) {
    // 0x100003f48
    _free(ptr);
}

// Address range: 0x100003f54 - 0x100003f60
int64_t * function_100003f54(int32_t size) {
    // 0x100003f54
    return _malloc(size);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(char * format, ...) {
    // 0x100003f60
    return _printf(format);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(char * s) {
    // 0x100003f6c
    return _puts(s);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(char * s) {
    // 0x100003f78
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9
