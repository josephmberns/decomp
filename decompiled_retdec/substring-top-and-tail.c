//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003f40(int64_t a1, char * a2);
int64_t function_100003f4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
void function_100003f58(int64_t * ptr);
int64_t * function_100003f64(int32_t size);
int32_t function_100003f70(char * format, ...);
int32_t function_100003f7c(char * s);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___strcpy_chk(int64_t a1, char * a2);
int64_t ___strncpy_chk(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003df4 - 0x100003f40
int64_t entry_point(void) {
    int64_t * v1 = _malloc(_strlen("knight") - 1); // 0x100003e44
    int64_t * v2 = _malloc(_strlen("socks") - 1); // 0x100003e58
    int64_t * v3 = _malloc(_strlen("brooms") - 2); // 0x100003e6c
    ___strcpy_chk((int64_t)v1, "night");
    ___strncpy_chk((int64_t)v2, (int64_t)"socks", (int64_t)_strlen("socks") - 1, -1);
    int64_t v4 = (int64_t)_strlen("brooms") - 2; // 0x100003ee4
    ___strncpy_chk((int64_t)v3, (int64_t)"rooms", v4, -1);
    _printf("%s\n%s\n%s\n", "rooms", (char *)v4, (char *)-1);
    _free(v1);
    _free(v2);
    _free(v3);
    return 0;
}

// Address range: 0x100003f40 - 0x100003f4c
int64_t function_100003f40(int64_t a1, char * a2) {
    // 0x100003f40
    return ___strcpy_chk(a1, a2);
}

// Address range: 0x100003f4c - 0x100003f58
int64_t function_100003f4c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003f4c
    return ___strncpy_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f58 - 0x100003f64
void function_100003f58(int64_t * ptr) {
    // 0x100003f58
    _free(ptr);
}

// Address range: 0x100003f64 - 0x100003f70
int64_t * function_100003f64(int32_t size) {
    // 0x100003f64
    return _malloc(size);
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(char * format, ...) {
    // 0x100003f70
    return _printf(format);
}

// Address range: 0x100003f7c - 0x100003f88
int32_t function_100003f7c(char * s) {
    // 0x100003f7c
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

