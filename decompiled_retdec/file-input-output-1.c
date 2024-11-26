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
int32_t function_100003f04(struct _IO_FILE * stream);
int32_t function_100003f10(struct _IO_FILE * stream);
struct _IO_FILE * function_100003f1c(char * filename, char * modes);
int32_t function_100003f28(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003f34(int32_t c, struct _IO_FILE * stream);

// ------- Dynamically Linked Functions Without Header --------

int32_t _fclose(struct _IO_FILE * a1);
int32_t _fgetc(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _fputc(int32_t a1, struct _IO_FILE * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003dec - 0x100003f04
int64_t entry_point(void) {
    struct _IO_FILE * v1 = _fopen("input.txt", "r"); // 0x100003e14
    if (v1 == NULL) {
        int64_t v2 = *(int64_t *)*(int64_t *)0x100004000; // 0x100003e38
        _fprintf((struct _IO_FILE *)v2, "Error opening input.txt for reading.\n");
        // 0x100003ef4
        return 1;
    }
    struct _IO_FILE * v3 = _fopen("output.txt", "w"); // 0x100003e64
    if (v3 == NULL) {
        int64_t v4 = *(int64_t *)*(int64_t *)0x100004000; // 0x100003e88
        _fprintf((struct _IO_FILE *)v4, "Error opening output.txt for writing.\n");
        _fclose(v1);
        // 0x100003ef4
        return 1;
    }
    int32_t v5 = _fgetc(v1); // 0x100003eb4
    if (v5 != -1) {
        _fputc(v5, v3);
        int32_t v6 = _fgetc(v1); // 0x100003eb4
        while (v6 != -1) {
            // 0x100003ecc
            _fputc(v6, v3);
            v6 = _fgetc(v1);
        }
    }
    // 0x100003edc
    _fclose(v3);
    _fclose(v1);
    // 0x100003ef4
    return 0;
}

// Address range: 0x100003f04 - 0x100003f10
int32_t function_100003f04(struct _IO_FILE * stream) {
    // 0x100003f04
    return _fclose(stream);
}

// Address range: 0x100003f10 - 0x100003f1c
int32_t function_100003f10(struct _IO_FILE * stream) {
    // 0x100003f10
    return _fgetc(stream);
}

// Address range: 0x100003f1c - 0x100003f28
struct _IO_FILE * function_100003f1c(char * filename, char * modes) {
    // 0x100003f1c
    return _fopen(filename, modes);
}

// Address range: 0x100003f28 - 0x100003f34
int32_t function_100003f28(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003f28
    return _fprintf(stream, format);
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(int32_t c, struct _IO_FILE * stream) {
    // 0x100003f34
    return _fputc(c, stream);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6
