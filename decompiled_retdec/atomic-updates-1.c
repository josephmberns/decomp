//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_10000395c(void);
int64_t function_100003b80(void);
int64_t function_100003cb4(void);
int64_t function_100003d74(void);
int32_t function_100003f48(char * format, ...);
int32_t function_100003f54(int32_t * newthread, int64_t * attr, int64_t * (*start_routine)(int64_t *), int64_t * arg);
int32_t function_100003f60(int64_t * mutex, int64_t * mutexattr);
int32_t function_100003f6c(int64_t * mutex);
int32_t function_100003f78(int64_t * mutex);
int32_t function_100003f84(void);
int32_t function_100003f90(int32_t seconds);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x100000cfeedfacf; // 0x100008000
int32_t * g2 = NULL; // 0x1000083c0
int32_t * g3 = (int32_t *)100; // 0x100008408

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _pthread_create(int32_t * a1, int64_t * a2, int64_t * (*a3)(int64_t *), int64_t * a4);
int32_t _pthread_mutex_init(int64_t * a1, int64_t * a2);
int32_t _pthread_mutex_lock(int64_t * a1);
int32_t _pthread_mutex_unlock(int64_t * a1);
int32_t _rand(void);

// ------------------------ Functions -------------------------

// Address range: 0x10000395c - 0x100003b80
int64_t function_10000395c(void) {
    // 0x10000395c
    int64_t v1; // 0x10000395c
    int32_t v2 = v1; // 0x100003968
    int32_t v3 = v1; // 0x10000396c
    int32_t v4 = v1; // 0x100003970
    int64_t result; // 0x10000395c
    if (v3 < 0 || v2 < 0 || v4 < 0 || v2 == v3) {
        // 0x100003b74
        return result;
    }
    if (v2 < 15 == (14 - v2 & v2) < 0) {
        // 0x100003b74
        return result;
    }
    if (v3 < 15 != (14 - v3 & v3) < 0) {
        int32_t v5 = v2 - v3; // 0x100003a00
        bool v6 = v5 == 0 | v5 < 0 != ((v5 ^ v2) & (int32_t)(v1 ^ v1)) < 0; // 0x100003a04
        int32_t v7 = v6 ? v4 : -v4;
        int64_t v8 = 0x100000000 * (v6 ? v1 : v1);
        int64_t * v9 = (int64_t *)((v8 >> 26) + (int64_t)&g1); // 0x100003a58
        _pthread_mutex_lock(v9);
        int64_t v10 = 0x100000000 * (v6 ? v1 : v1);
        int64_t * v11 = (int64_t *)((v10 >> 26) + (int64_t)&g1); // 0x100003a68
        _pthread_mutex_lock(v11);
        int32_t * v12 = (int32_t *)((v8 >> 30) + (int64_t)&g2); // 0x100003a7c
        int32_t v13 = *v12; // 0x100003a7c
        int32_t v14 = v7 - v13; // 0x100003a80
        int32_t v15 = v6 == v14 != 0 == v14 < 0 == ((v14 ^ v7) & (v13 ^ v7)) < 0 ? v13 : v7;
        int32_t v16 = -v15; // 0x100003abc
        int32_t * v17 = (int32_t *)((v10 >> 30) + (int64_t)&g2); // 0x100003acc
        int32_t v18 = *v17; // 0x100003acc
        int32_t v19 = v16 - v18; // 0x100003ad0
        int32_t v20 = v6 | v19 == 0 | v19 < 0 != ((v19 ^ v16) & (v18 ^ v16)) < 0 ? v15 : -v18;
        *v12 = v13 - v20;
        *v17 = v20 + *v17;
        _pthread_mutex_unlock(v9);
        result = _pthread_mutex_unlock(v11);
    }
    // 0x100003b74
    return result;
}

// Address range: 0x100003b80 - 0x100003cb4
int64_t function_100003b80(void) {
    int64_t v1 = 0;
    _pthread_mutex_lock((int64_t *)(64 * v1 + (int64_t)&g1));
    v1++;
    int32_t v2 = 0; // 0x100003ba4
    while (v1 != 15) {
        // 0x100003bac
        _pthread_mutex_lock((int64_t *)(64 * v1 + (int64_t)&g1));
        v1++;
        v2 = 0;
    }
    int64_t v3; // 0x100003b80
    _printf("%3d ", v3);
    int32_t v4 = v2 + 1; // 0x100003c3c
    v2 = v4;
    while (v4 != 15) {
        // 0x100003bf0
        _printf("%3d ", v3);
        v4 = v2 + 1;
        v2 = v4;
    }
    // 0x100003c48
    _printf("= %d\n", v3);
    int32_t result; // 0x100003c90
    for (int64_t i = 0; i < 15; i++) {
        // 0x100003c80
        result = _pthread_mutex_unlock((int64_t *)(64 * i + (int64_t)&g1));
    }
    // 0x100003ca8
    return result;
}

// Address range: 0x100003cb4 - 0x100003d74
int64_t function_100003cb4(void) {
    while (true) {
        // 0x100003cc8
        _rand();
        _rand();
        function_10000395c();
    }
}

// Address range: 0x100003d74 - 0x100003df8
int64_t function_100003d74(void) {
    while (true) {
        // 0x100003d88
        _rand();
        _rand();
        _rand();
        function_10000395c();
    }
}

// Address range: 0x100003df8 - 0x100003f48
int64_t entry_point(void) {
    int64_t v1 = 0;
    _pthread_mutex_init((int64_t *)(64 * v1 + (int64_t)&g1), NULL);
    v1++;
    int64_t v2 = 0; // 0x100003e20
    while (v1 != 15) {
        // 0x100003e28
        _pthread_mutex_init((int64_t *)(64 * v1 + (int64_t)&g1), NULL);
        v1++;
        v2 = 0;
    }
    *(int32_t *)(4 * v2 + (int64_t)&g2) = _rand() % 100;
    _printf("%3d ", 0);
    int64_t v3 = v2 + 1;
    v2 = v3;
    while (v3 != 15) {
        // 0x100003e70
        *(int32_t *)(4 * v2 + (int64_t)&g2) = _rand() % 100;
        _printf("%3d ", 0);
        v3 = v2 + 1;
        v2 = v3;
    }
    // 0x100003edc
    _printf("= %d\n", 0);
    _pthread_create((int32_t *)"/lib/dyld", NULL, (int64_t * (*)(int64_t *))0x100003cb4, NULL);
    _pthread_create((int32_t *)&g3, NULL, (int64_t * (*)(int64_t *))0x100003d74, NULL);
    while (true) {
        // 0x100003f38
        _sleep(1);
        function_100003b80();
    }
}

// Address range: 0x100003f48 - 0x100003f54
int32_t function_100003f48(char * format, ...) {
    // 0x100003f48
    return _printf(format);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(int32_t * newthread, int64_t * attr, int64_t * (*start_routine)(int64_t *), int64_t * arg) {
    // 0x100003f54
    return _pthread_create(newthread, attr, start_routine, arg);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(int64_t * mutex, int64_t * mutexattr) {
    // 0x100003f60
    return _pthread_mutex_init(mutex, mutexattr);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(int64_t * mutex) {
    // 0x100003f6c
    return _pthread_mutex_lock(mutex);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(int64_t * mutex) {
    // 0x100003f78
    return _pthread_mutex_unlock(mutex);
}

// Address range: 0x100003f84 - 0x100003f90
int32_t function_100003f84(void) {
    // 0x100003f84
    return _rand();
}

// Address range: 0x100003f90 - 0x100003f9c
int32_t function_100003f90(int32_t seconds) {
    // 0x100003f90
    return _sleep(seconds);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12

