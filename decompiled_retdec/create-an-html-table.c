//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003ef4(char * format, ...);
int32_t function_100003f00(void);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _rand(void);

// ------------------------ Functions -------------------------

// Address range: 0x100003e00 - 0x100003ef4
int64_t entry_point(void) {
    // 0x100003e00
    _printf("<table style=\"text-align:center; border: 1px solid\"><th></th><th>X</th><th>Y</th><th>Z</th>");
    for (int32_t i = 0; i < 4; i++) {
        // 0x100003e38
        _rand();
        _rand();
        _rand();
        int64_t v1; // 0x100003e00
        _printf("<tr><th>%d</th><td>%d</td><td>%d</td><td>%d</td></tr>", v1, v1, v1, v1);
    }
    // 0x100003ed8
    _printf("</table>");
    return 0;
}

// Address range: 0x100003ef4 - 0x100003f00
int32_t function_100003ef4(char * format, ...) {
    // 0x100003ef4
    return _printf(format);
}

// Address range: 0x100003f00 - 0x100003f0c
int32_t function_100003f00(void) {
    // 0x100003f00
    return _rand();
}

// --------------------- Meta-Information ---------------------

// Detected functions: 3

