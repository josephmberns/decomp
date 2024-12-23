//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003ef8(char * s);
int32_t function_100003f04(void);
int32_t function_100003f10(char * format, ...);
void function_100003f1c(int32_t seed);
int32_t function_100003f28(int32_t * timer);

// ------- Dynamically Linked Functions Without Header --------

int32_t _puts(char * a1);
int32_t _rand(void);
int32_t _scanf(char * a1, ...);
void _srand(int32_t a1);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003e1c - 0x100003ef8
int64_t entry_point(void) {
    // 0x100003e1c
    _srand(_time(NULL));
    int32_t v1 = _rand(); // 0x100003e38
    _puts("I'm thinking of a number between 1 and 10.");
    _puts("Try to guess it:");
    while (true) {
        // 0x100003e70
        int64_t v2; // 0x100003e1c
        if (_scanf("%d", (int64_t *)v2) == 1) {
            int32_t v3; // 0x100003e1c
            if (v3 == v1 % 10 + 1) {
                // break -> 0x100003ecc
                break;
            }
            // 0x100003ee8
            _puts("That's not my number. Try another guess:");
        } else {
            // 0x100003e98
            _scanf("%c", (char *)v2);
        }
    }
    // 0x100003ecc
    _puts("Correct!");
    return 0;
}

// Address range: 0x100003ef8 - 0x100003f04
int32_t function_100003ef8(char * s) {
    // 0x100003ef8
    return _puts(s);
}

// Address range: 0x100003f04 - 0x100003f10
int32_t function_100003f04(void) {
    // 0x100003f04
    return _rand();
}

// Address range: 0x100003f10 - 0x100003f1c
int32_t function_100003f10(char * format, ...) {
    // 0x100003f10
    return _scanf(format);
}

// Address range: 0x100003f1c - 0x100003f28
void function_100003f1c(int32_t seed) {
    // 0x100003f1c
    _srand(seed);
}

// Address range: 0x100003f28 - 0x100003f34
int32_t function_100003f28(int32_t * timer) {
    // 0x100003f28
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6

