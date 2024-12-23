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
int64_t function_100003e44(void);
int32_t function_100003f40(void);
int32_t function_100003f4c(char * format, ...);
void (*function_100003f58(int32_t sig, void (*handler)(int32_t)))(int32_t);
int32_t function_100003f64(int32_t useconds);

// --------------------- Global Variables ---------------------

void (*g1)(int32_t) = (void (*)(int32_t))0x52800028b0000029; // 0x100003e44
int32_t g2 = -0x1120531; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int32_t _clock(void);
int32_t _printf(char * a1, ...);
void (*_signal(int32_t a1, void (*a2)(int32_t)))(int32_t);
int32_t _usleep(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003e44 - 0x100003e54
int64_t function_100003e44(void) {
    // 0x100003e44
    g2 = 1;
    int64_t result; // 0x100003e44
    return result;
}

// Address range: 0x100003e54 - 0x100003f40
int64_t entry_point(void) {
    // 0x100003e54
    _clock();
    _signal(2, (void (*)(int32_t))&g1);
    int128_t v1; // 0x100003e54
    if (g2 != 0) {
        // 0x100003ef0
        _clock();
        _printf("Program has run for %5.3f seconds\n", (float64_t)(int64_t)v1);
        return 0;
    }
    _usleep(0x7a120);
    while (g2 == 0) {
        // 0x100003ec8
        _printf("%d\n", (int64_t)&g1);
        if (g2 != 0) {
            // break -> 0x100003ef0
            break;
        }
        _usleep(0x7a120);
    }
    // 0x100003ef0
    _clock();
    _printf("Program has run for %5.3f seconds\n", (float64_t)(int64_t)v1);
    return 0;
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(void) {
    // 0x100003f40
    return _clock();
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(char * format, ...) {
    // 0x100003f4c
    return _printf(format);
}

// Address range: 0x100003f58 - 0x100003f64
void (*function_100003f58(int32_t sig, void (*handler)(int32_t)))(int32_t) {
    // 0x100003f58
    return _signal(sig, handler);
}

// Address range: 0x100003f64 - 0x100003f70
int32_t function_100003f64(int32_t useconds) {
    // 0x100003f64
    return _usleep(useconds);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

