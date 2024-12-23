//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003a60(void);
int64_t function_100003b10(int64_t a1);
int64_t function_100003b4c(void);
int64_t function_100003da4(int64_t a1);
void function_100003db0(int32_t status);
char * function_100003dbc(char * s, int32_t n, struct _IO_FILE * stream);
int32_t function_100003dc8(char * format, ...);
int32_t function_100003dd4(int32_t c);
int32_t function_100003de0(char * s);
int32_t function_100003dec(void);
void function_100003df8(int32_t seed);
int32_t function_100003e04(char * s, char * format, ...);
int32_t function_100003e10(int32_t * timer);

// --------------------- Global Variables ---------------------

int32_t g1 = 0; // 0x100008190

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
char * _fgets(char * a1, int32_t a2, struct _IO_FILE * a3);
int32_t _printf(char * a1, ...);
int32_t _putchar(int32_t a1);
int32_t _puts(char * a1);
int32_t _rand(void);
void _srand(int32_t a1);
int32_t _sscanf(char * a1, char * a2, ...);
int32_t _time(int32_t * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003a60 - 0x100003b10
int64_t function_100003a60(void) {
    // 0x100003a60
    int64_t v1; // 0x100003a60
    char * v2 = (char *)v1; // 0x100003abc
    int32_t v3 = g1 + (int32_t)v1; // 0x100003acc
    g1 = v3;
    int32_t result = _printf("%8s:  %d = %d + %d\n\n", v2, v1, v1, v1); // 0x100003ae0
    if (v3 == 21) {
        // 0x100003ae8
        result = _printf("The winner is %s.\n\n", v2);
    }
    // 0x100003b04
    return result;
}

// Address range: 0x100003b10 - 0x100003b4c
int64_t function_100003b10(int64_t a1) {
    // 0x100003b10
    function_100003a60();
    int32_t v1; // 0x100003b10
    return (uint32_t)v1;
}

// Address range: 0x100003b4c - 0x100003cdc
int64_t function_100003b4c(void) {
    // 0x100003b4c
    int32_t v1; // 0x100003b4c
    int32_t v2 = v1;
    int64_t v3 = *(int64_t *)*(int64_t *)0x100004008; // 0x100003b64
    int32_t v4 = v2 - 3;
    while (true) {
        // 0x100003b70
        _printf("enter your move to play (or enter 0 to exit game): ");
        int64_t v5 = *(int64_t *)*(int64_t *)0x100004010; // 0x100003b84
        int64_t v6; // bp-296, 0x100003b4c
        _fgets((char *)&v6, 256, (struct _IO_FILE *)v5);
        if (_sscanf((char *)&v6, "%d", (int64_t *)v5) == 1) {
            if (v2 == 0) {
                // break -> 0x100003c90
                break;
            }
            if (!((v2 < 1 != (v2 & -v2) < 0 | v4 != 0 == v4 < 0 == (2 - v2 & v2) < 0))) {
                int32_t v7 = g1 + v2; // 0x100003c2c
                int32_t v8 = v7 - 21; // 0x100003c30
                if (v8 == 0 || v8 < 0 != (20 - v7 & v7) < 0) {
                    // 0x100003c98
                    _putchar(10);
                    int64_t result = function_100003a60(); // 0x100003ca4
                    if (*(int64_t *)*(int64_t *)0x100004008 == v3) {
                        // 0x100003ccc
                        return result;
                    }
                    // 0x100003ccc
                    return ___stack_chk_fail(result);
                }
            }
        }
        // 0x100003c64
        _puts("\nYour answer is not a valid choice.\n");
    }
    // 0x100003c90
    _putchar(10);
    _exit(0);
    // UNREACHABLE
}

// Address range: 0x100003cdc - 0x100003da4
int64_t entry_point(void) {
    // 0x100003cdc
    _srand(_time(NULL));
    _puts("21 Game                                                          \n                                                                 \n21 is a two player game, the game is played by choosing a number \n(1, 2, or 3) to be added to the running total. The game is won by\nthe player whose chosen number causes the running total to reach \nexactly 21. The running total starts at zero.                    \n\n");
    while (true) {
        // 0x100003d10
        _puts("\n---- NEW GAME ----\n");
        _puts("\nThe running total is currently zero.\n");
        g1 = 0;
        int32_t v1 = _rand(); // 0x100003d30
        if (v1 == 2 * v1 / 2) {
            // 0x100003d68
            _puts("The first move is human move.\n");
        } else {
            // 0x100003d54
            function_100003b10((int64_t)_puts("The first move is AI move.\n"));
        }
        int32_t v2 = g1; // 0x100003d80
        if (v2 < 21 != (20 - v2 & v2) < 0) {
            function_100003b10(function_100003b4c());
            while (g1 < 21 != (20 - g1 & g1) < 0) {
                // 0x100003d94
                function_100003b10(function_100003b4c());
            }
        }
    }
}

// Address range: 0x100003da4 - 0x100003db0
int64_t function_100003da4(int64_t a1) {
    // 0x100003da4
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003db0 - 0x100003dbc
void function_100003db0(int32_t status) {
    // 0x100003db0
    _exit(status);
}

// Address range: 0x100003dbc - 0x100003dc8
char * function_100003dbc(char * s, int32_t n, struct _IO_FILE * stream) {
    // 0x100003dbc
    return _fgets(s, n, stream);
}

// Address range: 0x100003dc8 - 0x100003dd4
int32_t function_100003dc8(char * format, ...) {
    // 0x100003dc8
    return _printf(format);
}

// Address range: 0x100003dd4 - 0x100003de0
int32_t function_100003dd4(int32_t c) {
    // 0x100003dd4
    return _putchar(c);
}

// Address range: 0x100003de0 - 0x100003dec
int32_t function_100003de0(char * s) {
    // 0x100003de0
    return _puts(s);
}

// Address range: 0x100003dec - 0x100003df8
int32_t function_100003dec(void) {
    // 0x100003dec
    return _rand();
}

// Address range: 0x100003df8 - 0x100003e04
void function_100003df8(int32_t seed) {
    // 0x100003df8
    _srand(seed);
}

// Address range: 0x100003e04 - 0x100003e10
int32_t function_100003e04(char * s, char * format, ...) {
    // 0x100003e04
    return _sscanf(s, format);
}

// Address range: 0x100003e10 - 0x100003e1c
int32_t function_100003e10(int32_t * timer) {
    // 0x100003e10
    return _time(timer);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 14

