//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

struct timespec {
    int64_t e0;
    int32_t e1;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
float64_t function_100003f48(int32_t time1, int32_t time0);
int32_t function_100003f54(struct _IO_FILE * stream);
int32_t function_100003f60(struct timespec * requested_time, struct timespec * remaining);
int32_t function_100003f6c(char * format, ...);
int32_t function_100003f78(int32_t * timer);

// --------------------- Global Variables ---------------------

char * g1 = "\x1b[?25l"; // 0x100003f89
char * g2 = "\x1b[2J"; // 0x100003f90
char * g3 = "\x1b[0;0H"; // 0x100003f95

// ------- Dynamically Linked Functions Without Header --------

float64_t _difftime(int32_t a1, int32_t a2);
int32_t _fflush(struct _IO_FILE * a1);
int32_t _nanosleep(struct timespec * a1, struct timespec * a2);
int32_t _printf(char * a1, ...);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003df0 - 0x100003f48
int64_t entry_point(void) {
    // 0x100003df0
    float64_t v1; // 0x100003df0
    float64_t v2 = v1;
    int64_t v3 = 0; // bp-72, 0x100003e14
    _printf((char *)&g1);
    int32_t v4; // bp-48, 0x100003df0
    _time(&v4);
    int32_t v5 = 0; // 0x100003ef0
    _printf((char *)&g2);
    _printf((char *)&g3);
    for (int32_t i = 0; i < 80; i++) {
        // 0x100003e94
        int64_t v6; // 0x100003df0
        _printf("%c", (char)v6);
    }
    // 0x100003ecc
    _fflush((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004000);
    _nanosleep((struct timespec *)&v3, NULL);
    v5++;
    int64_t v7 = 0; // 0x100003e58
    while (v5 != 4) {
        // 0x100003e60
        _printf((char *)&g2);
        _printf((char *)&g3);
        for (int32_t i = 0; i < 80; i++) {
            // 0x100003e94
            _printf("%c", (char)v7);
        }
        // 0x100003ecc
        _fflush((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004000);
        _nanosleep((struct timespec *)&v3, NULL);
        v5++;
        v7 = 0;
    }
    // 0x100003efc
    int32_t v8; // bp-56, 0x100003df0
    _time(&v8);
    _difftime(v8, v4);
    while (v2 != 20.0) {
        // 0x100003e44
        if (v2 > 20.0 == v2 >= 20.0 == v2 <= 20.0) {
            // break -> 0x100003f2c
            break;
        }
        v5 = 0;
        _printf((char *)&g2);
        _printf((char *)&g3);
        for (int32_t i = 0; i < 80; i++) {
            // 0x100003e94
            _printf("%c", (char)(int64_t)v4);
        }
        // 0x100003ecc
        _fflush((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004000);
        _nanosleep((struct timespec *)&v3, NULL);
        v5++;
        v7 = 0;
        while (v5 != 4) {
            // 0x100003e60
            _printf((char *)&g2);
            _printf((char *)&g3);
            for (int32_t i = 0; i < 80; i++) {
                // 0x100003e94
                _printf("%c", (char)v7);
            }
            // 0x100003ecc
            _fflush((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004000);
            _nanosleep((struct timespec *)&v3, NULL);
            v5++;
            v7 = 0;
        }
        // 0x100003efc
        _time(&v8);
        _difftime(v8, v4);
    }
    // 0x100003f2c
    _printf((char *)0x100003f9f);
    return 0;
}

// Address range: 0x100003f48 - 0x100003f54
float64_t function_100003f48(int32_t time1, int32_t time0) {
    // 0x100003f48
    return _difftime(time1, time0);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(struct _IO_FILE * stream) {
    // 0x100003f54
    return _fflush(stream);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(struct timespec * requested_time, struct timespec * remaining) {
    // 0x100003f60
    return _nanosleep(requested_time, remaining);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(char * format, ...) {
    // 0x100003f6c
    return _printf(format);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(int32_t * timer) {
    // 0x100003f78
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6
