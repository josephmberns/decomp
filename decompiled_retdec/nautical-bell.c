//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

// ------------------------ Structures ------------------------

struct tm {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    int32_t e5;
    int32_t e6;
    int32_t e7;
    int32_t e8;
    int32_t e9;
    char * e10;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
struct tm * function_100003f3c(int32_t * timer);
int32_t function_100003f48(char * format, ...);
int32_t function_100003f54(int32_t seconds);
int32_t function_100003f60(int32_t * timer);

// ------- Dynamically Linked Functions Without Header --------

struct tm * _localtime(int32_t * a1);
int32_t _printf(char * a1, ...);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003cdc - 0x100003f3c
int64_t entry_point(void) {
    // 0x100003cdc
    while (true) {
      lab_0x100003cf0:;
        // 0x100003cf0
        int64_t v1; // bp-56, 0x100003cdc
        _time((int32_t *)&v1);
        _localtime((int32_t *)&v1);
        int64_t v2; // 0x100003cdc
        _printf("\nIt is now %d:%d%d %s. Sounding the bell %d times.", v2, v2, v2, (char *)v2, v2);
        int32_t v3 = 1; // 0x100003f28
        while (true) {
          lab_0x100003ed8:;
            int32_t v4 = v3;
            _printf((char *)0x100003fa5);
            if (v4 == 2 * v4 / 2) {
                // 0x100003f08
                _sleep(2000);
            } else {
                // 0x100003f14
                _sleep(1000);
            }
            // 0x100003f24
            v3 = v4 + 1;
            int32_t v5 = v4 - 7; // 0x100003ec8
            if (v5 == 0 || v5 < 0 != (v4 + 0x7ffffff9 & v3) < 0) {
                goto lab_0x100003ed8;
            } else {
                goto lab_0x100003cf0;
            }
        }
    }
}

// Address range: 0x100003f3c - 0x100003f48
struct tm * function_100003f3c(int32_t * timer) {
    // 0x100003f3c
    return _localtime(timer);
}

// Address range: 0x100003f48 - 0x100003f54
int32_t function_100003f48(char * format, ...) {
    // 0x100003f48
    return _printf(format);
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(int32_t seconds) {
    // 0x100003f54
    return _sleep(seconds);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(int32_t * timer) {
    // 0x100003f60
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5

