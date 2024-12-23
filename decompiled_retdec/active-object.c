//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef double float64_t;

// ------------------------ Structures ------------------------

struct timeval {
    int64_t e0;
    int64_t e1;
};

struct timezone {
    int32_t e0;
    int32_t e1;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003c50(void);
int64_t function_100003d4c(void);
int64_t function_100003d80(void);
int64_t function_100003e00(void);
int64_t function_100003e84(void);
float64_t function_100003f38(float64_t a1, float64_t a2);
int32_t function_100003f44(struct timeval * tv, struct timezone * tz);
int64_t * function_100003f50(int32_t size);
int32_t function_100003f5c(char * format, ...);
int32_t function_100003f68(int32_t * newthread, int64_t * attr, int64_t * (*start_routine)(int64_t *), int64_t * arg);
float64_t function_100003f74(float64_t a1);
int32_t function_100003f80(int32_t seconds);
int32_t function_100003f8c(int32_t useconds);

// --------------------- Global Variables ---------------------

float64_t g1 = 9.9999999e-7; // 0x100003f98

// ------- Dynamically Linked Functions Without Header --------

float64_t _atan2(float64_t a1, float64_t a2);
int32_t _gettimeofday(struct timeval * a1, struct timezone * a2);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);
int32_t _pthread_create(int32_t * a1, int64_t * a2, int64_t * (*a3)(int64_t *), int64_t * a4);
float64_t _sin(float64_t a1);
int32_t _usleep(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003c50 - 0x100003d4c
int64_t function_100003c50(void) {
    // 0x100003c50
    int64_t v1; // bp-40, 0x100003c50
    int64_t result = _gettimeofday((struct timeval *)&v1, NULL); // 0x100003c74
    int64_t v2; // 0x100003c50
    if (v2 != 0) {
        // 0x100003cd0
        return result;
    }
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x100003c80
    int32_t v4 = *(int32_t *)(v2 + 16); // 0x100003ca0
    int32_t v5; // 0x100003c50
    float64_t v6 = g1 * (float64_t)(0xf4240 * (v1 - v3) + (int64_t)v5 - (int64_t)v4); // 0x100003cb4
    float64_t v7 = *(float64_t *)40; // 0x100003d10
    float64_t v8 = *(float64_t *)24; // 0x100003d28
    *(float64_t *)24 = v8 + 0.5 * *(float64_t *)32 * (v6 - v7);
    *(int64_t *)40 = (int64_t)v6;
    return result;
}

// Address range: 0x100003d4c - 0x100003d80
int64_t function_100003d4c(void) {
    while (true) {
        // 0x100003d68
        _usleep(0x186a0);
        function_100003c50();
    }
}

// Address range: 0x100003d80 - 0x100003e00
int64_t function_100003d80(void) {
    int64_t result = function_100003c50(); // 0x100003d98
    int64_t v1; // 0x100003d80
    *(float64_t *)(v1 + 40) = 0.0;
    if (v1 != 0) {
        // 0x100003dc8
        return result;
    }
    // 0x100003ddc
    *(int64_t *)(v1 + 32) = 0;
    return result;
}

// Address range: 0x100003e00 - 0x100003e84
int64_t function_100003e00(void) {
    int64_t * v1 = _malloc(56); // 0x100003e14
    int64_t result = (int64_t)v1; // 0x100003e14
    *(float64_t *)(result + 32) = 0.0;
    *(float64_t *)(result + 24) = 0.0;
    *v1 = 0;
    _gettimeofday((struct timeval *)(result + 8), NULL);
    function_100003d80();
    _pthread_create((int32_t *)(result + 48), NULL, (int64_t * (*)(int64_t *))0x100003d4c, v1);
    return result;
}

// Address range: 0x100003e84 - 0x100003ec4
int64_t function_100003e84(void) {
    // 0x100003e84
    int128_t v1; // 0x100003e84
    float64_t v2 = _atan2((float64_t)(int64_t)v1, (float64_t)(int64_t)v1); // 0x100003e9c
    return _sin(v2);
}

// Address range: 0x100003ec4 - 0x100003f38
int64_t entry_point(void) {
    // 0x100003ec4
    function_100003e00();
    _sleep(2);
    function_100003d80();
    _usleep(0x7a120);
    int128_t v1; // 0x100003ec4
    _printf("%g\n", (float64_t)(int64_t)v1);
    return 0;
}

// Address range: 0x100003f38 - 0x100003f44
float64_t function_100003f38(float64_t a1, float64_t a2) {
    // 0x100003f38
    return _atan2(a1, a2);
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(struct timeval * tv, struct timezone * tz) {
    // 0x100003f44
    return _gettimeofday(tv, tz);
}

// Address range: 0x100003f50 - 0x100003f5c
int64_t * function_100003f50(int32_t size) {
    // 0x100003f50
    return _malloc(size);
}

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(char * format, ...) {
    // 0x100003f5c
    return _printf(format);
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(int32_t * newthread, int64_t * attr, int64_t * (*start_routine)(int64_t *), int64_t * arg) {
    // 0x100003f68
    return _pthread_create(newthread, attr, start_routine, arg);
}

// Address range: 0x100003f74 - 0x100003f80
float64_t function_100003f74(float64_t a1) {
    // 0x100003f74
    return _sin(a1);
}

// Address range: 0x100003f80 - 0x100003f8c
int32_t function_100003f80(int32_t seconds) {
    // 0x100003f80
    return _sleep(seconds);
}

// Address range: 0x100003f8c - 0x100003f98
int32_t function_100003f8c(int32_t useconds) {
    // 0x100003f8c
    return _usleep(useconds);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 14

