//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ----------------- Float Types Definitions ------------------

typedef long double float128_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003cc0(int64_t a1);
int64_t function_100003cec(int64_t a1);
int64_t function_100003d18(void);
int64_t function_100003eec(int64_t a1);
int32_t function_100003ef8(char * format, ...);
int32_t function_100003f04(int32_t * newthread, int64_t * attr, int64_t * (*start_routine)(int64_t *), int64_t * arg);
int32_t function_100003f10(int32_t th, int64_t ** thread_return);
int32_t function_100003f1c(void);
int32_t function_100003f28(int64_t * sem);
int32_t function_100003f34(int64_t * sem, int32_t pshared, int32_t value);
int32_t function_100003f40(int64_t * sem);
int32_t function_100003f4c(int64_t * sem);
int32_t function_100003f58(int32_t useconds);

// --------------------- Global Variables ---------------------

float128_t g1 = 4.24399158242461027606401097390298646e-314L; // 0x100003f90
int32_t g2 = 3; // 0x100008000
int64_t g3; // 0x100008004
int32_t g4;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
int32_t _pthread_create(int32_t * a1, int64_t * a2, int64_t * (*a3)(int64_t *), int64_t * a4);
int32_t _pthread_join(int32_t a1, int64_t ** a2);
int32_t _rand(void);
int32_t _sem_destroy(int64_t * a1);
int32_t _sem_init(int64_t * a1, int32_t a2, int32_t a3);
int32_t _sem_post(int64_t * a1);
int32_t _sem_wait(int64_t * a1);
int32_t _usleep(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003cc0 - 0x100003cec
int64_t function_100003cc0(int64_t a1) {
    // 0x100003cc0
    g2--;
    return _sem_wait((int64_t *)0x100008004);
}

// Address range: 0x100003cec - 0x100003d18
int64_t function_100003cec(int64_t a1) {
    // 0x100003cec
    g2++;
    return _sem_post(&g3);
}

// Address range: 0x100003d18 - 0x100003dc0
int64_t function_100003d18(void) {
    for (int64_t i = 9; i > -1; i--) {
        // 0x100003d50
        function_100003cc0(i);
        int64_t v1; // 0x100003d18
        _printf("#%d acquired sema at %d\n", v1, v1);
        _usleep(_rand() % 0x3d0900);
        function_100003cec((int64_t)&g4);
        _usleep(0);
    }
    // 0x100003db0
    return 0;
}

// Address range: 0x100003dc0 - 0x100003eec
int64_t entry_point(void) {
    float128_t v1 = g1; // bp-80, 0x100003df0
    _sem_init(&g3, 0, g2);
    int64_t v2; // bp-56, 0x100003dc0
    int64_t v3 = &v2;
    int64_t v4 = &v1; // 0x100003e40
    int64_t v5 = 3;
    _pthread_create((int32_t *)(8 * v5 + v3), NULL, (int64_t * (*)(int64_t *))0x100003d18, (int64_t *)(4 * v5 + v4));
    int64_t v6 = v5 - 1; // 0x100003e28
    while (v5 != 0) {
        // 0x100003e30
        v5 = v6;
        _pthread_create((int32_t *)(8 * v5 + v3), NULL, (int64_t * (*)(int64_t *))0x100003d18, (int64_t *)(4 * v5 + v4));
        v6 = v5 - 1;
    }
    int64_t v7 = 3;
    _pthread_join((int32_t)*(int64_t *)(8 * v7 + v3), NULL);
    int64_t v8 = v7 - 1; // 0x100003e7c
    while (v7 != 0) {
        // 0x100003e84
        v7 = v8;
        _pthread_join((int32_t)*(int64_t *)(8 * v7 + v3), NULL);
        v8 = v7 - 1;
    }
    // 0x100003e9c
    _printf("all workers done\n");
    int32_t result = _sem_destroy(&g3); // 0x100003eb0
    int64_t v9 = *(int64_t *)0x100004008; // 0x100003ec0
    if (*(int64_t *)v9 != *(int64_t *)*(int64_t *)0x100004008) {
        // 0x100003ed8
        ___stack_chk_fail((int64_t)result);
    }
    // 0x100003edc
    return result;
}

// Address range: 0x100003eec - 0x100003ef8
int64_t function_100003eec(int64_t a1) {
    // 0x100003eec
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003ef8 - 0x100003f04
int32_t function_100003ef8(char * format, ...) {
    // 0x100003ef8
    return _printf(format);
}

// Address range: 0x100003f04 - 0x100003f10
int32_t function_100003f04(int32_t * newthread, int64_t * attr, int64_t * (*start_routine)(int64_t *), int64_t * arg) {
    // 0x100003f04
    return _pthread_create(newthread, attr, start_routine, arg);
}

// Address range: 0x100003f10 - 0x100003f1c
int32_t function_100003f10(int32_t th, int64_t ** thread_return) {
    // 0x100003f10
    return _pthread_join(th, thread_return);
}

// Address range: 0x100003f1c - 0x100003f28
int32_t function_100003f1c(void) {
    // 0x100003f1c
    return _rand();
}

// Address range: 0x100003f28 - 0x100003f34
int32_t function_100003f28(int64_t * sem) {
    // 0x100003f28
    return _sem_destroy(sem);
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(int64_t * sem, int32_t pshared, int32_t value) {
    // 0x100003f34
    return _sem_init(sem, pshared, value);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(int64_t * sem) {
    // 0x100003f40
    return _sem_post(sem);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(int64_t * sem) {
    // 0x100003f4c
    return _sem_wait(sem);
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(int32_t useconds) {
    // 0x100003f58
    return _usleep(useconds);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 14
