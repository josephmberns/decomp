//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

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
char * function_100003f80(struct tm * tp);
struct tm * function_100003f8c(int32_t * timer);
int32_t function_100003f98(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

char * _asctime(struct tm * a1);
struct tm * _gmtime(int32_t * a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003f34 - 0x100003f80
int64_t entry_point(void) {
    int64_t v1 = 0; // bp-32, 0x100003f50
    _asctime(_gmtime((int32_t *)&v1));
    int64_t v2; // 0x100003f34
    _printf("%s", (char *)v2);
    return 0;
}

// Address range: 0x100003f80 - 0x100003f8c
char * function_100003f80(struct tm * tp) {
    // 0x100003f80
    return _asctime(tp);
}

// Address range: 0x100003f8c - 0x100003f98
struct tm * function_100003f8c(int32_t * timer) {
    // 0x100003f8c
    return _gmtime(timer);
}

// Address range: 0x100003f98 - 0x100003fa4
int32_t function_100003f98(char * format, ...) {
    // 0x100003f98
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4

