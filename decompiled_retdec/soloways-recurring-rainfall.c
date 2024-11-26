//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>

// ---------------- Integer Types Definitions -----------------

typedef int64_t int128_t;

// ----------------- Float Types Definitions ------------------

typedef float float32_t;
typedef double float64_t;

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f24(void);
int32_t function_100003f30(char * format, ...);
int32_t function_100003f3c(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _getchar(void);
int32_t _printf(char * a1, ...);
int32_t _scanf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003dec - 0x100003f24
int64_t entry_point(void) {
    // 0x100003dec
    while (true) {
        // 0x100003e14
        _printf("Enter rainfall int, 99999 to quit: ");
        int64_t v1; // 0x100003dec
        if (_scanf("%d", (int64_t *)v1) == 0) {
            // 0x100003ee4
            _printf("Invalid input\n");
            while (_getchar() != 10) {
                // continue -> 0x100003ef4
            }
        } else {
            float32_t v2; // 0x100003dec
            if ((int32_t)(int64_t)(float64_t)v2 == 0x1869f) {
                // break -> 0x100003e6c
                break;
            }
            // 0x100003e7c
            int128_t v3; // 0x100003dec
            _printf("New Average: %f\n", (float64_t)(int64_t)v3);
        }
    }
    // 0x100003e6c
    _printf("User requested quit.\n");
    return 0;
}

// Address range: 0x100003f24 - 0x100003f30
int32_t function_100003f24(void) {
    // 0x100003f24
    return _getchar();
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(char * format, ...) {
    // 0x100003f30
    return _printf(format);
}

// Address range: 0x100003f3c - 0x100003f48
int32_t function_100003f3c(char * format, ...) {
    // 0x100003f3c
    return _scanf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 4
