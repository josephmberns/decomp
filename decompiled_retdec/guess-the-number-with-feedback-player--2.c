//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <ctype.h>
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003bec(void);
int64_t function_100003cf0(void);
int64_t * function_100003e14(int64_t * key, int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
void function_100003e20(int32_t status);
int32_t function_100003e2c(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003e38(char * format, ...);
int32_t function_100003e44(char * format, ...);
int32_t function_100003e50(int32_t c);

// --------------------- Global Variables ---------------------

int64_t g1; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t * _bsearch(int64_t * a1, int64_t * a2, int32_t a3, int32_t a4, int32_t (*a5)(int64_t *, int64_t *));
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _printf(char * a1, ...);
int32_t _scanf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003bec - 0x100003cf0
int64_t function_100003bec(void) {
    int64_t result = 0; // 0x100003c08
    int64_t v1; // 0x100003bec
    if ((int32_t)v1 == -1) {
        // 0x100003ce0
        return result;
    }
    // 0x100003c18
    _printf("My guess is: %d. Is it too high, too low, or correct? (H/L/C) ", v1);
    _scanf("%1s", (char **)v1);
    result = 0xffffffff;
    switch (_tolower(32)) {
        case 99: {
            // 0x100003cb8
            result = 0;
        }
        case 108: {
            // 0x100003ce0
            return result;
        }
        case 104: {
            // 0x100003cac
            result = 1;
            return result;
        }
        default: {
            // 0x100003cc0
            _fprintf((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004000, "Invalid input\n");
            _exit(1);
            // UNREACHABLE
        }
    }
}

// Address range: 0x100003cf0 - 0x100003d50
int64_t function_100003cf0(void) {
    int64_t v1 = function_100003bec(); // 0x100003d1c
    return v1 - function_100003bec() & 0xffffffff;
}

// Address range: 0x100003d50 - 0x100003e14
int64_t entry_point(void) {
    // 0x100003d50
    int64_t v1; // 0x100003d50
    _printf("Instructions:\nThink of integer number from %d (inclusive) to %d (exclusive) and\nI will guess it. After each guess, you respond with L, H, or C depending\non if my guess was too low, too high, or correct.\n", v1, v1);
    int64_t * v2 = _bsearch((int64_t *)((int64_t)&g1 - 1), &g1, 100, 1, (int32_t (*)(int64_t *, int64_t *))0x100003cf0); // 0x100003da8
    if (v2 == NULL) {
        // 0x100003dc4
        _fprintf((struct _IO_FILE *)*(int64_t *)*(int64_t *)0x100004000, "That is impossible.\n");
    } else {
        // 0x100003de0
        _printf("Your number is %d.\n", (int64_t)&g1);
    }
    // 0x100003e04
    return 0;
}

// Address range: 0x100003e14 - 0x100003e20
int64_t * function_100003e14(int64_t * key, int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003e14
    return _bsearch(key, base, nmemb, size, compar);
}

// Address range: 0x100003e20 - 0x100003e2c
void function_100003e20(int32_t status) {
    // 0x100003e20
    _exit(status);
}

// Address range: 0x100003e2c - 0x100003e38
int32_t function_100003e2c(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003e2c
    return _fprintf(stream, format);
}

// Address range: 0x100003e38 - 0x100003e44
int32_t function_100003e38(char * format, ...) {
    // 0x100003e38
    return _printf(format);
}

// Address range: 0x100003e44 - 0x100003e50
int32_t function_100003e44(char * format, ...) {
    // 0x100003e44
    return _scanf(format);
}

// Address range: 0x100003e50 - 0x100003e5c
int32_t function_100003e50(int32_t c) {
    // 0x100003e50
    return _tolower(c);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9

