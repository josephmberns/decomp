//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------------ Structures ------------------------

struct _TYPEDEF___sigset_t {
    int32_t e0[1];
};

struct _TYPEDEF_sigset_t {
    int32_t e0[1];
};

struct __jmp_buf_tag {
    int32_t e0[8];
    int32_t e1;
    struct _TYPEDEF___sigset_t e2;
};

struct sigaction {
    void (*e0)(int32_t);
    int32_t e1;
    void (*e2)();
    struct _TYPEDEF_sigset_t e3;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ca0(void);
int64_t function_100003e6c(void);
void function_100003f00(int32_t status);
void function_100003f0c(char * s);
int32_t function_100003f18(char * format, ...);
int32_t function_100003f24(int32_t sig, struct sigaction * act, struct sigaction * oact);
void function_100003f30(struct __jmp_buf_tag env[1], int32_t val);
int64_t function_100003f3c(int64_t a1, int64_t a2);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // 0x100008000
int32_t g2;

// ------- Dynamically Linked Functions Without Header --------

void _perror(char * a1);
int32_t _printf(char * a1, ...);
int32_t _sigaction(int32_t a1, struct sigaction * a2, struct sigaction * a3);
void _siglongjmp(struct __jmp_buf_tag a1[1], int32_t a2);
int64_t _sigsetjmp(int64_t a1, int64_t a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003ca0 - 0x100003e6c
int64_t function_100003ca0(void) {
    int32_t v1 = _sigsetjmp((int64_t)&g1, 1); // 0x100003cc4
    int64_t v2; // bp-56, 0x100003ca0
    if (v1 == 0) {
        int64_t v3 = 0x100003e6c; // bp-40, 0x100003ce8
        if (_sigaction(8, (struct sigaction *)&v3, (struct sigaction *)&v2) < 0) {
            // 0x100003d14
            _perror("sigaction");
            _exit(1);
            // UNREACHABLE
        }
        // 0x100003d28
        if (_sigaction(8, (struct sigaction *)&v2, NULL) >= 0) {
            // 0x100003e60
            int64_t v4; // 0x100003ca0
            return _printf("%d / %d is %d\n", (int64_t)&v2, 0, v4);
        }
        // 0x100003d58
        _perror("sigaction");
        _exit(1);
        // UNREACHABLE
    }
    // 0x100003da4
    if (_sigaction(8, (struct sigaction *)&v2, NULL) < 0) {
        // 0x100003dc4
        _perror("sigaction");
        _exit(1);
        // UNREACHABLE
    }
    int64_t v5 = &v2; // 0x100003da8
    int32_t result; // 0x100003ca0
    switch (v1) {
        case 7: {
        }
        case 1: {
            // 0x100003e04
            result = _printf("%d / %d: caught division by zero!\n", v5, 0);
            // break -> 0x100003e60
            break;
        }
        default: {
            // 0x100003e30
            result = _printf("%d / %d: caught mysterious error!\n", v5, 0);
            // break -> 0x100003e60
            break;
        }
    }
    // 0x100003e60
    return result;
}

// Address range: 0x100003e6c - 0x100003e98
int64_t function_100003e6c(void) {
    // 0x100003e6c
    int64_t v1; // 0x100003e6c
    int32_t v2 = *(int32_t *)(v1 + 8); // 0x100003e88
    _siglongjmp({(struct {int32_t e0[8]; int32_t e1; struct _TYPEDEF___sigset_t e2;}){.e0 = {(int32_t)&g1, 0, 0, 0, 0, 0, 0, 0}, .e1 = 0, .e2 = (struct {int32_t e0[1];}){.e0 = {0}}}}, v2);
    return &g2;
}

// Address range: 0x100003e98 - 0x100003f00
int64_t entry_point(void) {
    // 0x100003e98
    function_100003ca0();
    function_100003ca0();
    function_100003ca0();
    function_100003ca0();
    function_100003ca0();
    return 0;
}

// Address range: 0x100003f00 - 0x100003f0c
void function_100003f00(int32_t status) {
    // 0x100003f00
    _exit(status);
}

// Address range: 0x100003f0c - 0x100003f18
void function_100003f0c(char * s) {
    // 0x100003f0c
    _perror(s);
}

// Address range: 0x100003f18 - 0x100003f24
int32_t function_100003f18(char * format, ...) {
    // 0x100003f18
    return _printf(format);
}

// Address range: 0x100003f24 - 0x100003f30
int32_t function_100003f24(int32_t sig, struct sigaction * act, struct sigaction * oact) {
    // 0x100003f24
    return _sigaction(sig, act, oact);
}

// Address range: 0x100003f30 - 0x100003f3c
void function_100003f30(struct __jmp_buf_tag env[1], int32_t val) {
    // 0x100003f30
    _siglongjmp(env, val);
}

// Address range: 0x100003f3c - 0x100003f48
int64_t function_100003f3c(int64_t a1, int64_t a2) {
    // 0x100003f3c
    return _sigsetjmp(a1, a2);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9

