//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003e74(void);
int32_t function_100003f84(struct _IO_FILE * stream);
int32_t function_100003f90(int32_t c);
int32_t function_100003f9c(int32_t c, struct _IO_FILE * stream);

// ------- Dynamically Linked Functions Without Header --------

int32_t _getc(struct _IO_FILE * a1);
int32_t _ispunct(int32_t a1);
int32_t _putc(int32_t a1, struct _IO_FILE * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003dd0 - 0x100003e74
int64_t entry_point(void) {
    while (true) {
      lab_0x100003df4_2:;
        int32_t v1 = function_100003e74(); // 0x100003e08
        switch (v1) {
            case -1: {
                return 0;
            }
            case 0: {
                goto lab_0x100003df4_2;
            }
            default: {
                // 0x100003e30
                _putc(v1, (struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004008);
                if (v1 == 46) {
                    // break -> 0x100003e64
                    break;
                }
                goto lab_0x100003df4_2;
            }
        }
    }
    // 0x100003e64
    return 0;
}

// Address range: 0x100003e74 - 0x100003f84
int64_t function_100003e74(void) {
    int32_t v1 = _getc((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004000); // 0x100003e90
    int32_t result; // 0x100003e74
    int64_t v2; // 0x100003e74
    if ((int32_t)v2 != 0) {
        int32_t v3 = _ispunct(v1); // 0x100003f28
        result = v1;
        if (v3 == 0) {
            int64_t v4 = function_100003e74(); // 0x100003f4c
            _putc(v1, (struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004008);
            result = v4;
        }
        // 0x100003f74
        return result;
    }
    // 0x100003eac
    _putc(v1, (struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004008);
    switch (v1) {
        case -1: {
        }
        case 46: {
            // 0x100003f74
            return -1;
        }
    }
    // 0x100003ef4
    result = 0;
    if (_ispunct(v1) == 0) {
        // 0x100003f14
        function_100003e74();
        result = 0;
    }
    // 0x100003f74
    return result;
}

// Address range: 0x100003f84 - 0x100003f90
int32_t function_100003f84(struct _IO_FILE * stream) {
    // 0x100003f84
    return _getc(stream);
}

// Address range: 0x100003f90 - 0x100003f9c
int32_t function_100003f90(int32_t c) {
    // 0x100003f90
    return _ispunct(c);
}

// Address range: 0x100003f9c - 0x100003fa8
int32_t function_100003f9c(int32_t c, struct _IO_FILE * stream) {
    // 0x100003f9c
    return _putc(c, stream);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5
