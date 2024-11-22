//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000038f4(void);
int64_t function_10000396c(int64_t a1, int64_t a2);
int64_t function_1000039b8(void);
int64_t function_100003a6c(int64_t a1, int64_t a2);
int64_t function_100003aa8(void);
int64_t function_100003bb4(void);
int64_t function_100003bdc(void);
int64_t function_100003da0(int64_t a1);
void function_100003dac(int32_t status);
int32_t function_100003db8(char * format, ...);
int32_t function_100003dc4(int32_t th);
int32_t function_100003dd0(int64_t * cond);
int32_t function_100003ddc(int64_t * cond, int64_t * mutex);
int32_t function_100003de8(int32_t * newthread, int64_t * attr, int64_t * (*start_routine)(int64_t *), int64_t * arg);
int32_t function_100003df4(int32_t th, int64_t ** thread_return);
int32_t function_100003e00(int64_t * mutex);
int32_t function_100003e0c(int64_t * mutex);
int32_t function_100003e18(int32_t c);

// --------------------- Global Variables ---------------------

int64_t g1 = 0x20726568746f4d00; // 0x100003ec5
int64_t g2 = 0x32aaaba7; // 0x100008000
int64_t g3 = 0x32aaaba7; // 0x1000080f8
int64_t g4 = 0x10000000003ec6; // 0x100008220

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _printf(char * a1, ...);
int32_t _pthread_cancel(int32_t a1);
int32_t _pthread_cond_signal(int64_t * a1);
int32_t _pthread_cond_wait(int64_t * a1, int64_t * a2);
int32_t _pthread_create(int32_t * a1, int64_t * a2, int64_t * (*a3)(int64_t *), int64_t * a4);
int32_t _pthread_join(int32_t a1, int64_t ** a2);
int32_t _pthread_mutex_lock(int64_t * a1);
int32_t _pthread_mutex_unlock(int64_t * a1);
int32_t _putchar(int32_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x1000038f4 - 0x10000396c
int64_t function_1000038f4(void) {
    // 0x1000038f4
    int64_t result; // 0x1000038f4
    int64_t * v1 = (int64_t *)result; // 0x10000390c
    _pthread_mutex_lock(v1);
    int32_t * v2 = (int32_t *)(result + 216); // 0x100003914
    *v2 = *v2 + 1;
    _pthread_cond_signal((int64_t *)(result + 64));
    if (*(int32_t *)(result + 220) != 0) {
        // 0x10000395c
        return result;
    }
    _pthread_cond_wait((int64_t *)(result + 112), v1);
    // 0x100003948
    while (*(int32_t *)(result + 220) == 0) {
        // 0x100003948
        _pthread_cond_wait((int64_t *)(result + 112), v1);
    }
    // 0x10000395c
    return result;
}

// Address range: 0x10000396c - 0x1000039b8
int64_t function_10000396c(int64_t a1, int64_t a2) {
    // 0x10000396c
    int64_t v1; // 0x10000396c
    int64_t * v2 = (int64_t *)(v1 - 8); // 0x100003970
    *(int32_t *)(*v2 + 224) = 1;
    _pthread_cond_signal((int64_t *)(*v2 + 160));
    int32_t * v3 = (int32_t *)(*v2 + 216); // 0x10000398c
    *v3 = *v3 - 1;
    *(int32_t *)(*v2 + 220) = 0;
    _pthread_mutex_unlock((int64_t *)*v2);
    return v1 & 0xffffffff;
}

// Address range: 0x1000039b8 - 0x100003a6c
int64_t function_1000039b8(void) {
    // 0x1000039b8
    int64_t v1; // 0x1000039b8
    int64_t * v2 = (int64_t *)v1; // 0x1000039cc
    _pthread_mutex_lock(v2);
    int32_t * v3 = (int32_t *)(v1 + 220); // 0x1000039d8
    *v3 = 1;
    int32_t * v4 = (int32_t *)(v1 + 216); // 0x1000039e4
    if (*v4 == 0) {
        _pthread_cond_wait((int64_t *)(v1 + 64), v2);
        // 0x1000039f8
        while (*v4 == 0) {
            // 0x1000039f8
            _pthread_cond_wait((int64_t *)(v1 + 64), v2);
        }
    }
    // 0x100003a0c
    _pthread_cond_signal((int64_t *)(v1 + 112));
    int32_t * v5 = (int32_t *)(v1 + 224); // 0x100003a20
    if (*v5 != 0) {
        // 0x100003a48
        *v5 = 0;
        *v3 = 0;
        return _pthread_mutex_unlock(v2);
    }
    _pthread_cond_wait((int64_t *)(v1 + 160), v2);
    // 0x100003a34
    while (*v5 == 0) {
        // 0x100003a34
        _pthread_cond_wait((int64_t *)(v1 + 160), v2);
    }
    // 0x100003a48
    *v5 = 0;
    *v3 = 0;
    return _pthread_mutex_unlock(v2);
}

// Address range: 0x100003a6c - 0x100003aa8
int64_t function_100003a6c(int64_t a1, int64_t a2) {
    // 0x100003a6c
    return function_1000038f4();
}

// Address range: 0x100003aa8 - 0x100003bb4
int64_t function_100003aa8(void) {
    // 0x100003aa8
    int64_t v1; // 0x100003aa8
    int64_t v2 = *(int64_t *)(v1 + 8); // 0x100003ad0
    int32_t * v3 = (int32_t *)(v1 + 244); // 0x100003adc
    if (*v3 == 0) {
        int64_t v4 = *(int64_t *)(v1 + 232); // 0x100003b6c
        int64_t result = 0xffffffff; // 0x100003b78
        if (v4 != 0) {
            // 0x100003b80
            result = function_100003a6c(v4, v2) & 0xffffffff;
        }
        // 0x100003ba4
        return result;
    }
    // 0x100003af0
    _printf("%d: ", v1);
    char v5 = *(char *)v2; // 0x100003b18
    int64_t v6 = v2; // 0x100003b24
    if (v5 != 0) {
        v6++;
        _putchar((int32_t)v5);
        char v7 = *(char *)v6; // 0x100003b18
        while (v7 != 0) {
            // 0x100003b2c
            v6++;
            _putchar((int32_t)v7);
            v7 = *(char *)v6;
        }
    }
    // 0x100003b44
    _putchar(10);
    *v3 = *v3 - 1;
    // 0x100003ba4
    return 1;
}

// Address range: 0x100003bb4 - 0x100003bdc
int64_t function_100003bb4(void) {
    while (true) {
        // 0x100003bd0
        function_1000039b8();
    }
}

// Address range: 0x100003bdc - 0x100003ca0
int64_t function_100003bdc(void) {
    // 0x100003bdc
    int64_t v1; // 0x100003bdc
    int64_t v2 = v1 + 8; // 0x100003c00
    int64_t v3 = *(int64_t *)v2; // 0x100003c08
    if (v3 == (int64_t)&g1) {
        // 0x100003c90
        return 0;
    }
    int32_t v4 = 0; // 0x100003c1c
    int64_t v5 = v3;
    while ((int32_t)function_100003a6c((int64_t)&g3, v5) >= 0) {
        // 0x100003bfc
        v4++;
        int64_t v6 = *(int64_t *)(8 * (int64_t)v4 + v2); // 0x100003c08
        if (v6 == (int64_t)&g1) {
            // 0x100003c90
            return 0;
        }
        v5 = v6;
    }
    // 0x100003c58
    _printf("      %s out of ink!\n", (char *)v5);
    _exit(1);
    // UNREACHABLE
}

// Address range: 0x100003ca0 - 0x100003da0
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003cb4
    int32_t v2; // bp-56, 0x100003ca0
    int64_t v3 = &v2; // 0x100003cc4
    _pthread_create(&v2, NULL, (int64_t * (*)(int64_t *))0x100003bdc, (int64_t *)")>");
    _pthread_create((int32_t *)(v3 + 8), NULL, (int64_t * (*)(int64_t *))0x100003bdc, &g4);
    _pthread_create((int32_t *)(v3 + 16), NULL, (int64_t * (*)(int64_t *))0x100003bb4, &g3);
    _pthread_create((int32_t *)(v3 + 24), NULL, (int64_t * (*)(int64_t *))0x100003bb4, &g2);
    _pthread_join(v2, NULL);
    int32_t v4; // 0x100003ca0
    _pthread_join(v4, NULL);
    _pthread_cancel(v4);
    int32_t v5 = _pthread_cancel(v4); // 0x100003d68
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003d8c
        ___stack_chk_fail((int64_t)v5);
    }
    // 0x100003d90
    return 0;
}

// Address range: 0x100003da0 - 0x100003dac
int64_t function_100003da0(int64_t a1) {
    // 0x100003da0
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003dac - 0x100003db8
void function_100003dac(int32_t status) {
    // 0x100003dac
    _exit(status);
}

// Address range: 0x100003db8 - 0x100003dc4
int32_t function_100003db8(char * format, ...) {
    // 0x100003db8
    return _printf(format);
}

// Address range: 0x100003dc4 - 0x100003dd0
int32_t function_100003dc4(int32_t th) {
    // 0x100003dc4
    return _pthread_cancel(th);
}

// Address range: 0x100003dd0 - 0x100003ddc
int32_t function_100003dd0(int64_t * cond) {
    // 0x100003dd0
    return _pthread_cond_signal(cond);
}

// Address range: 0x100003ddc - 0x100003de8
int32_t function_100003ddc(int64_t * cond, int64_t * mutex) {
    // 0x100003ddc
    return _pthread_cond_wait(cond, mutex);
}

// Address range: 0x100003de8 - 0x100003df4
int32_t function_100003de8(int32_t * newthread, int64_t * attr, int64_t * (*start_routine)(int64_t *), int64_t * arg) {
    // 0x100003de8
    return _pthread_create(newthread, attr, start_routine, arg);
}

// Address range: 0x100003df4 - 0x100003e00
int32_t function_100003df4(int32_t th, int64_t ** thread_return) {
    // 0x100003df4
    return _pthread_join(th, thread_return);
}

// Address range: 0x100003e00 - 0x100003e0c
int32_t function_100003e00(int64_t * mutex) {
    // 0x100003e00
    return _pthread_mutex_lock(mutex);
}

// Address range: 0x100003e0c - 0x100003e18
int32_t function_100003e0c(int64_t * mutex) {
    // 0x100003e0c
    return _pthread_mutex_unlock(mutex);
}

// Address range: 0x100003e18 - 0x100003e24
int32_t function_100003e18(int32_t c) {
    // 0x100003e18
    return _putchar(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 19

