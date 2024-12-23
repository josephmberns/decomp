//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

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
int64_t function_100003d2c(void);
int64_t function_100003f34(int64_t a1);
struct tm * function_100003f40(int32_t * timer);
int32_t function_100003f4c(char * format, ...);
int32_t function_100003f58(char * s, int32_t maxsize, char * format, struct tm * tp);
int32_t function_100003f64(char * s);
int32_t function_100003f70(int32_t * timer);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
struct tm * _gmtime(int32_t * a1);
int32_t _printf(char * a1, ...);
int32_t _strftime(char * a1, int32_t a2, char * a3, struct tm * a4);
int32_t _strlen(char * a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003d2c - 0x100003df4
int64_t function_100003d2c(void) {
    // 0x100003d2c
    int64_t v1; // 0x100003d2c
    int64_t v2 = v1;
    int64_t v3 = _strlen((char *)v2); // 0x100003d4c
    int64_t v4 = 0;
    int64_t v5 = v4 + 1; // 0x100003d54
    int64_t result = 1; // 0x100003d64
    while (v5 < v3) {
        // 0x100003d6c
        v3--;
        result = 0;
        if (*(char *)(v4 + v2) != *(char *)(v3 + v2)) {
            // break -> 0x100003de0
            break;
        }
        v4 = v5;
        v5 = v4 + 1;
        result = 1;
    }
    // 0x100003de0
    return result;
}

// Address range: 0x100003df4 - 0x100003f34
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003e08
    int64_t v2 = _time(NULL); // bp-72, 0x100003e1c
    int64_t v3; // 0x100003df4
    _printf("Next %d palindrome dates:\n", v3);
    int32_t v4 = 15;
    struct tm * v5 = _gmtime((int32_t *)&v2); // 0x100003e6c
    int64_t v6; // bp-56, 0x100003df4
    _strftime((char *)&v6, 32, "%Y%m%d", v5);
    int64_t v7 = function_100003d2c(); // 0x100003e94
    int32_t v8 = v4; // 0x100003e98
    int64_t v9 = v7; // 0x100003e98
    if (v7 % 2 != 0) {
        // 0x100003ea0
        _strftime((char *)&v6, 32, "%F", v5);
        v8 = v4 - 1;
        v9 = _printf("%s\n", (char *)32);
    }
    // 0x100003ee8
    v2 += 0x15180;
    while (v8 >= 1) {
        // 0x100003e68
        v4 = v8;
        v5 = _gmtime((int32_t *)&v2);
        _strftime((char *)&v6, 32, "%Y%m%d", v5);
        v7 = function_100003d2c();
        v8 = v4;
        v9 = v7;
        if (v7 % 2 != 0) {
            // 0x100003ea0
            _strftime((char *)&v6, 32, "%F", v5);
            v8 = v4 - 1;
            v9 = _printf("%s\n", (char *)32);
        }
        // 0x100003ee8
        v2 += 0x15180;
    }
    // 0x100003f00
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003f20
        ___stack_chk_fail(v9);
    }
    // 0x100003f24
    return 0;
}

// Address range: 0x100003f34 - 0x100003f40
int64_t function_100003f34(int64_t a1) {
    // 0x100003f34
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003f40 - 0x100003f4c
struct tm * function_100003f40(int32_t * timer) {
    // 0x100003f40
    return _gmtime(timer);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(char * format, ...) {
    // 0x100003f4c
    return _printf(format);
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(char * s, int32_t maxsize, char * format, struct tm * tp) {
    // 0x100003f58
    return _strftime(s, maxsize, format, tp);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(char * s) {
    // 0x100003f64
    return _strlen(s);
}

// Address range: 0x100003f70 - 0x100003f7c
int32_t function_100003f70(int32_t * timer) {
    // 0x100003f70
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

