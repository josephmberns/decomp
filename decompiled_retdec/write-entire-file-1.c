//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f58(char * s, struct _IO_FILE * stream);
struct _IO_FILE * function_100003f64(char * filename, char * modes, struct _IO_FILE * stream);

// ------- Dynamically Linked Functions Without Header --------

int32_t _fputs(char * a1, struct _IO_FILE * a2);
struct _IO_FILE * _freopen(char * a1, char * a2, struct _IO_FILE * a3);

// ------------------------ Functions -------------------------

// Address range: 0x100003ef4 - 0x100003f58
int64_t entry_point(void) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004000; // 0x100003f14
    int32_t v2 = _fputs("ANY STRING TO WRITE TO A FILE AT ONCE.", _freopen("sample.txt", "wb", (struct _IO_FILE *)v1)); // 0x100003f38
    int32_t v3 = -v2; // 0x100003f40
    return v3 < 0 == (v2 & v3) < 0;
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(char * s, struct _IO_FILE * stream) {
    // 0x100003f58
    return _fputs(s, stream);
}

// Address range: 0x100003f64 - 0x100003f70
struct _IO_FILE * function_100003f64(char * filename, char * modes, struct _IO_FILE * stream) {
    // 0x100003f64
    return _freopen(filename, modes, stream);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

