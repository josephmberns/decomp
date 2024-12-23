//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
void function_100003f48(int32_t status);
int32_t function_100003f54(struct _IO_FILE * stream);
struct _IO_FILE * function_100003f60(char * filename, char * modes);
void function_100003f6c(int64_t * ptr);
int32_t function_100003f78(char ** lineptr, int32_t * n, struct _IO_FILE * stream);
int32_t function_100003f84(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _fclose(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
void _free(int64_t * a1);
int32_t _getline(char ** a1, int32_t * a2, struct _IO_FILE * a3);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003ddc - 0x100003f48
int64_t entry_point(void) {
    int64_t v1 = 0; // bp-32, 0x100003de8
    int64_t v2 = 0; // bp-40, 0x100003dec
    struct _IO_FILE * v3 = _fopen("fasta.txt", "r"); // 0x100003e00
    if (v3 == NULL) {
        // 0x100003e1c
        _exit(1);
        // UNREACHABLE
    }
    int32_t v4 = _getline((char **)&v1, (int32_t *)&v2, v3); // 0x100003e38
    if (v4 != -1) {
        int32_t v5 = 0;
        char * v6 = (char *)((int64_t)v4 - 1 + v1); // 0x100003e5c
        if (*v6 == 10) {
            // 0x100003e70
            *v6 = 0;
        }
        // 0x100003e88
        int32_t v7; // 0x100003ddc
        if (*(char *)v1 == 62) {
            if (v5 == 1) {
                // 0x100003eb4
                _printf("\n");
            }
            // 0x100003ec4
            _printf("%s: ", &v2);
            v7 = 1;
        } else {
            // 0x100003eec
            _printf("%s", &v2);
            v7 = v5;
        }
        int32_t v8 = _getline((char **)&v1, (int32_t *)&v2, v3); // 0x100003e38
        while (v8 != -1) {
            // 0x100003e50
            v5 = v7;
            v6 = (char *)((int64_t)v8 - 1 + v1);
            if (*v6 == 10) {
                // 0x100003e70
                *v6 = 0;
            }
            // 0x100003e88
            if (*(char *)v1 == 62) {
                if (v5 == 1) {
                    // 0x100003eb4
                    _printf("\n");
                }
                // 0x100003ec4
                _printf("%s: ", &v2);
                v7 = 1;
            } else {
                // 0x100003eec
                _printf("%s", &v2);
                v7 = v5;
            }
            // 0x100003f08
            v8 = _getline((char **)&v1, (int32_t *)&v2, v3);
        }
    }
    // 0x100003f0c
    _printf("\n");
    _fclose(v3);
    if (v1 != 0) {
        // 0x100003f34
        _free((int64_t *)v1);
    }
    // 0x100003f40
    return 0;
}

// Address range: 0x100003f48 - 0x100003f54
void function_100003f48(int32_t status) {
    // 0x100003f48
    _exit(status);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(struct _IO_FILE * stream) {
    // 0x100003f54
    return _fclose(stream);
}

// Address range: 0x100003f60 - 0x100003f6c
struct _IO_FILE * function_100003f60(char * filename, char * modes) {
    // 0x100003f60
    return _fopen(filename, modes);
}

// Address range: 0x100003f6c - 0x100003f78
void function_100003f6c(int64_t * ptr) {
    // 0x100003f6c
    _free(ptr);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(char ** lineptr, int32_t * n, struct _IO_FILE * stream) {
    // 0x100003f78
    return _getline(lineptr, n, stream);
}

// Address range: 0x100003f84 - 0x100003f90
int32_t function_100003f84(char * format, ...) {
    // 0x100003f84
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 7

