//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------------ Structures ------------------------

struct timespec {
    int64_t e0;
    int32_t e1;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003dd4(void);
int64_t function_100003de8(void);
int64_t function_100003e44(int64_t a1, int64_t a2);
int64_t function_100003e74(int32_t a1);
int32_t function_100003f3c(int32_t clock_id, struct timespec * tp);
float64_t function_100003f48(int32_t time1, int32_t time0);
int32_t function_100003f54(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _clock_gettime(int32_t a1, struct timespec * a2);
float64_t _difftime(int32_t a1, int32_t a2);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003dd4 - 0x100003de8
int64_t function_100003dd4(void) {
    // 0x100003dd4
    int64_t v1; // 0x100003dd4
    return v1 & 0xffffffff;
}

// Address range: 0x100003de8 - 0x100003e44
int64_t function_100003de8(void) {
    // 0x100003de8
    int64_t v1; // 0x100003de8
    int32_t result = v1; // 0x100003e1c
    int32_t v2 = 0;
    result += v2;
    int32_t v3 = v2 + 1; // 0x100003e2c
    while (v2 < 0xf423f != (0xf423e - v2 & v3) < 0) {
        // 0x100003e14
        v2 = v3;
        result += v2;
        v3 = v2 + 1;
    }
    // 0x100003e38
    return result;
}

// Address range: 0x100003e44 - 0x100003e74
int64_t function_100003e44(int64_t a1, int64_t a2) {
    // 0x100003e44
    int64_t v1; // bp-48, 0x100003e44
    _clock_gettime(12, (struct timespec *)&v1);
    return a2 & 0xffffffff;
}

// Address range: 0x100003e74 - 0x100003ec8
int64_t function_100003e74(int32_t a1) {
    // 0x100003e74
    int32_t v1; // bp+32, 0x100003e74
    _clock_gettime(a1, (struct timespec *)&v1);
    int64_t v2; // 0x100003e74
    return _difftime(v1, (int32_t)*(int64_t *)(v2 - 32));
}

// Address range: 0x100003ec8 - 0x100003f3c
int64_t entry_point(void) {
    // 0x100003ec8
    function_100003e44(0x100003dd4, 4);
    int128_t v1; // 0x100003ec8
    _printf("identity (4) takes %lf s\n", (float64_t)(int64_t)v1);
    function_100003e44(0x100003de8, 4);
    _printf("sum      (4) takes %lf s\n", (float64_t)(int64_t)v1);
    return 0;
}

// Address range: 0x100003f3c - 0x100003f48
int32_t function_100003f3c(int32_t clock_id, struct timespec * tp) {
    // 0x100003f3c
    return _clock_gettime(clock_id, tp);
}

// Address range: 0x100003f48 - 0x100003f54
float64_t function_100003f48(int32_t time1, int32_t time0) {
    // 0x100003f48
    return _difftime(time1, time0);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(char * format, ...) {
    // 0x100003f54
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 8

