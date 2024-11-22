//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <windows.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

struct _TYPEDEF_sigset_t {
    int32_t e0[1];
};

struct sigaction {
    void (*e0)(int32_t);
    int32_t e1;
    void (*e2)();
    struct _TYPEDEF_sigset_t e3;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e10(void);
void function_100003f0c(int32_t status);
int32_t function_100003f18(int32_t fd);
void function_100003f24(int32_t status);
int32_t function_100003f30(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003f3c(char * file, int32_t oflag, ...);
int32_t function_100003f48(int32_t sig, struct sigaction * act, struct sigaction * oact);
int32_t function_100003f54(int32_t seconds);
int32_t function_100003f60(char * name);

// --------------------- Global Variables ---------------------

int32_t g1;

// ------- Dynamically Linked Functions Without Header --------

void __exit(int32_t a1);
int32_t _close(int32_t a1);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _sigaction(int32_t a1, struct sigaction * a2, struct sigaction * a3);
int32_t _unlink(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003e10 - 0x100003e5c
int64_t function_100003e10(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004000; // 0x100003e28
    int64_t v2; // 0x100003e10
    _fprintf((struct _IO_FILE *)v1, "Caught signal %d.\n", v2);
    _unlink("/tmp/MyUniqueName");
    __exit(1);
    return &g1;
}

// Address range: 0x100003e5c - 0x100003f0c
int64_t entry_point(void) {
    int32_t v1 = _open("/tmp/MyUniqueName", 2560); // 0x100003e78
    if (v1 < 0) {
        int64_t v2 = *(int64_t *)*(int64_t *)0x100004000; // 0x100003e9c
        _fprintf((struct _IO_FILE *)v2, "I am already running!\n");
        _exit(1);
        // UNREACHABLE
    }
    int64_t v3 = 0x100003e10; // bp-40, 0x100003ec0
    _sigaction(2, (struct sigaction *)&v3, NULL);
    _sleep(20);
    _unlink("/tmp/MyUniqueName");
    _close(v1);
    return 0;
}

// Address range: 0x100003f0c - 0x100003f18
void function_100003f0c(int32_t status) {
    // 0x100003f0c
    __exit(status);
}

// Address range: 0x100003f18 - 0x100003f24
int32_t function_100003f18(int32_t fd) {
    // 0x100003f18
    return _close(fd);
}

// Address range: 0x100003f24 - 0x100003f30
void function_100003f24(int32_t status) {
    // 0x100003f24
    _exit(status);
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f30
    return _fprintf(stream, format);
}

// Address range: 0x100003f3c - 0x100003f48
int32_t function_100003f3c(char * file, int32_t oflag, ...) {
    // 0x100003f3c
    return _open(file, oflag);
}

// Address range: 0x100003f48 - 0x100003f54
int32_t function_100003f48(int32_t sig, struct sigaction * act, struct sigaction * oact) {
    // 0x100003f48
    return _sigaction(sig, act, oact);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(int32_t seconds) {
    // 0x100003f54
    return _sleep(seconds);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(char * name) {
    // 0x100003f60
    return _unlink(name);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 10

