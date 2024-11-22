//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
void function_100003f1c(int32_t status, char * format, ...);
int32_t function_100003f28(void);
int32_t function_100003f34(char * format, ...);
int32_t function_100003f40(int32_t useconds);
int32_t function_100003f4c(int64_t stat_loc);

// ------- Dynamically Linked Functions Without Header --------

void _err(int32_t a1, char * a2, ...);
int32_t _fork(void);
int32_t _printf(char * a1, ...);
int32_t _usleep(int32_t a1);
int32_t _wait(int64_t a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003e64 - 0x100003f1c
int64_t entry_point(void) {
    int32_t v1 = _fork(); // 0x100003e74
    if (v1 == 0) {
        // 0x100003e8c
        _usleep(0x2710);
        _printf("\tchild process: done\n");
        // 0x100003f0c
        return 0;
    }
    int64_t v2; // 0x100003e64
    if (v1 < 0) {
        // 0x100003eb8
        _err(1, "fork error");
        v2 = (int64_t)"fork error";
    }
    // 0x100003ec8
    _printf("waiting for child %d...\n", v2);
    _wait(0);
    _printf("child %d finished\n", v2);
    // 0x100003f0c
    return 0;
}

// Address range: 0x100003f1c - 0x100003f28
void function_100003f1c(int32_t status, char * format, ...) {
    // 0x100003f1c
    _err(status, format);
}

// Address range: 0x100003f28 - 0x100003f34
int32_t function_100003f28(void) {
    // 0x100003f28
    return _fork();
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _printf(format);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(int32_t useconds) {
    // 0x100003f40
    return _usleep(useconds);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(int64_t stat_loc) {
    // 0x100003f4c
    return _wait(stat_loc);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

