//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f40(struct _IO_FILE * stream);
int32_t function_100003f4c(char * format, ...);
int32_t function_100003f58(int32_t seconds);

// --------------------- Global Variables ---------------------

char * g1 = "\x1b[?1049h\x1b[H"; // 0x100003f64
char * g2 = "\x1b[?1049l"; // 0x100003f9e

// ------- Dynamically Linked Functions Without Header --------

int32_t _fflush(struct _IO_FILE * a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e94 - 0x100003f40
int64_t entry_point(void) {
    // 0x100003e94
    _printf((char *)&g1);
    _printf("Alternate screen buffer\n");
    for (int32_t i = 5; i > 0; i--) {
        // 0x100003edc
        int64_t v1; // 0x100003e94
        _printf("\rgoing back in %d...", v1);
        _fflush((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004000);
        _sleep(1);
    }
    // 0x100003f24
    _printf((char *)&g2);
    return 0;
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(struct _IO_FILE * stream) {
    // 0x100003f40
    return _fflush(stream);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(char * format, ...) {
    // 0x100003f4c
    return _printf(format);
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(int32_t seconds) {
    // 0x100003f58
    return _sleep(seconds);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4
