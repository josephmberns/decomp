//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------------ Structures ------------------------

struct stat {
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
    int32_t e10;
    int32_t e11;
    int32_t e12;
    int32_t e13;
    int32_t e14;
    int32_t e15;
    int32_t e16;
    int32_t e17;
    int32_t e18;
    int32_t e19;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003d08(void);
int64_t function_100003d68(void);
int32_t function_100003ef0(char * format, ...);
int32_t function_100003efc(char * file, struct stat * buf);

// ------- Dynamically Linked Functions Without Header --------

int32_t _printf(char * a1, ...);
int32_t _stat(char * a1, struct stat * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003d08 - 0x100003d68
int64_t function_100003d08(void) {
    // 0x100003d08
    int64_t v1; // bp-168, 0x100003d08
    int64_t v2; // 0x100003d08
    int32_t v3 = _stat((char *)v2, (struct stat *)&v1); // 0x100003d20
    int32_t v4; // 0x100003d08
    return (v4 & 0xf000) == 0x8000 == v3 == 0;
}

// Address range: 0x100003d68 - 0x100003dc8
int64_t function_100003d68(void) {
    // 0x100003d68
    int64_t v1; // bp-168, 0x100003d68
    int64_t v2; // 0x100003d68
    int32_t v3 = _stat((char *)v2, (struct stat *)&v1); // 0x100003d80
    int32_t v4; // 0x100003d68
    return (v4 & 0xf000) == 0x4000 == v3 == 0;
}

// Address range: 0x100003dc8 - 0x100003ef0
int64_t entry_point(void) {
    // 0x100003dc8
    function_100003d08();
    int64_t v1; // 0x100003dc8
    char * v2 = (char *)v1; // 0x100003e28
    _printf("input.txt is a regular file? %s\n", v2);
    function_100003d68();
    _printf("docs is a directory? %s\n", v2);
    function_100003d08();
    _printf("/input.txt is a regular file? %s\n", v2);
    function_100003d68();
    _printf("/docs is a directory? %s\n", v2);
    return 0;
}

// Address range: 0x100003ef0 - 0x100003efc
int32_t function_100003ef0(char * format, ...) {
    // 0x100003ef0
    return _printf(format);
}

// Address range: 0x100003efc - 0x100003f08
int32_t function_100003efc(char * file, struct stat * buf) {
    // 0x100003efc
    return _stat(file, buf);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5
