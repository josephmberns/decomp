//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// ------------------------ Structures ------------------------

struct _IO_FILE {
    int32_t e0;
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100002970(void);
int64_t function_1000029dc(void);
int64_t function_100002a04(int32_t a1, int64_t a2, int64_t a3);
int64_t function_100002a60(void);
int64_t function_100002ab0(void);
int64_t function_100002b68(void);
int64_t function_100002bcc(int64_t a1);
int64_t function_100002bfc(void);
int64_t function_100002c2c(void);
int64_t function_100002d64(void);
int64_t function_100002e9c(void);
int64_t function_1000031ec(int64_t a1);
int64_t function_100003204(int64_t a1, int64_t a2);
int64_t function_100003748(void);
int64_t function_1000037ec(void);
int64_t function_1000038a8(void);
int64_t function_100003a10(void);
int64_t function_100003ab8(void);
int64_t function_100003ce4(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int32_t function_100003cf0(char * nptr);
int64_t * function_100003cfc(int32_t nmemb, int32_t size);
void function_100003d08(int32_t status);
int32_t function_100003d14(struct _IO_FILE * stream);
struct _IO_FILE * function_100003d20(char * filename, char * modes);
int32_t function_100003d2c(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003d38(int32_t c);
int32_t function_100003d44(char * format, ...);
int64_t * function_100003d50(int64_t * ptr, int32_t size);
int32_t function_100003d5c(char * s1, char * s2);
char * function_100003d68(char * s);
int32_t function_100003d74(char * s);
char * function_100003d80(char * s, char * delim);

// --------------------- Global Variables ---------------------

int32_t * g1 = (int32_t *)0x20000000003d8c; // 0x100008000
int64_t g2 = 0x100000cfeedfacf; // 0x100008190
int32_t g3 = 0; // 0x100008198
int32_t g4 = 2; // 0x10000819c
int64_t g5 = 0x55800000012; // 0x1000081a0
int32_t g6 = 0x200085; // 0x1000081a8
int32_t g7 = 0; // 0x1000081ac
int64_t g8 = 0x4800000019; // 0x1000081b0
char g9[11] = "__PAGEZERO"; // 0x1000081b8
char g10[7] = "GEZERO"; // 0x1000081bc
struct _IO_FILE * g11 = NULL; // 0x1000081c8
int32_t g12 = 0; // 0x1000081d0
int64_t g13 = 0; // 0x1000081d8
int32_t g14 = 0; // 0x1000081e0
int32_t g15;

// ------- Dynamically Linked Functions Without Header --------

int64_t ___vsprintf_chk(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int32_t _atoi(char * a1);
int64_t * _calloc(int32_t a1, int32_t a2);
int32_t _fgetc(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
int32_t _isspace(int32_t a1);
int32_t _printf(char * a1, ...);
int64_t * _realloc(int64_t * a1, int32_t a2);
int32_t _strcmp(char * a1, char * a2);
int32_t _strlen(char * a1);
char * _strtok(char * a1, char * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100002970 - 0x1000029dc
int64_t function_100002970(void) {
    // 0x100002970
    int64_t v1; // 0x100002970
    int64_t v2; // bp-1032, 0x100002970
    int64_t v3; // 0x100002970
    ___vsprintf_chk(&v2, 0, 1000, v3, (int64_t)&v1);
    _printf("error: %s\n", NULL);
    _exit(1);
    // UNREACHABLE
}

// Address range: 0x1000029dc - 0x100002a04
int64_t function_1000029dc(void) {
    // 0x1000029dc
    int64_t v1; // 0x1000029dc
    uint32_t result = *(int32_t *)((16 * v1 & 0xffffffff0) + (int64_t)&g1 + 12); // 0x1000029f8
    return result;
}

// Address range: 0x100002a04 - 0x100002a60
int64_t function_100002a04(int32_t a1, int64_t a2, int64_t a3) {
    int64_t * v1 = _calloc(32, 1); // 0x100002a24
    *(int32_t *)v1 = a1;
    int64_t result = (int64_t)v1; // 0x100002a3c
    *(int64_t *)(result + 8) = a2;
    *(int64_t *)(result + 16) = a3;
    return result;
}

// Address range: 0x100002a60 - 0x100002ab0
int64_t function_100002a60(void) {
    int64_t * v1 = _calloc(32, 1); // 0x100002a7c
    int64_t result = (int64_t)v1; // 0x100002a7c
    int64_t v2; // 0x100002a60
    *(int32_t *)v1 = (int32_t)v2;
    *(int64_t *)(result + 24) = (int64_t)_strdup((char *)v2);
    return result;
}

// Address range: 0x100002ab0 - 0x100002b68
int64_t function_100002ab0(void) {
    int32_t v1 = g3; // 0x100002acc
    int32_t v2 = v1 - g4; // 0x100002ad8
    int32_t v3 = v1; // 0x100002ae0
    int64_t v4 = g2; // 0x100002ae0
    int64_t result; // 0x100002ab0
    if (v2 < 0 == ((v2 ^ v1) & (g4 ^ v1)) < 0) {
        int32_t v5 = g4 + 32; // 0x100002afc
        g4 = v5;
        v4 = (int64_t)_realloc((int64_t *)g2, v5);
        g2 = v4;
        v3 = g3;
        result = v4;
    }
    // 0x100002b24
    g3 = v3 + 1;
    int64_t v6; // 0x100002ab0
    *(char *)(v4 + (int64_t)v3) = (char)v6;
    g12++;
    return result;
}

// Address range: 0x100002b68 - 0x100002bcc
int64_t function_100002b68(void) {
    int64_t result; // 0x100002ba8
    for (int64_t i = 0; i < 4; i++) {
        // 0x100002b9c
        result = function_100002ab0();
    }
    // 0x100002bc0
    return result;
}

// Address range: 0x100002bcc - 0x100002bfc
int64_t function_100002bcc(int64_t a1) {
    // 0x100002bcc
    function_100002b68();
    return (uint32_t)g12;
}

// Address range: 0x100002bfc - 0x100002c2c
int64_t function_100002bfc(void) {
    // 0x100002bfc
    int64_t v1; // 0x100002bfc
    int64_t result = v1;
    *(int32_t *)((0x100000000 * result >> 32) + g2) = (int32_t)v1 - (int32_t)result;
    return result;
}

// Address range: 0x100002c2c - 0x100002d64
int64_t function_100002c2c(void) {
    // 0x100002c2c
    int64_t v1; // 0x100002c2c
    char * v2 = (char *)v1; // 0x100002c38
    int32_t v3 = -g6; // 0x100002c50
    int32_t v4 = 0; // 0x100002c58
    if (v3 < 0 != (g6 & v3) < 0) {
        int64_t v5 = *(int64_t *)(8 * (int64_t)v4 + g5); // 0x100002c70
        int32_t result = v4; // 0x100002c80
        while (_strcmp(v2, (char *)v5) != 0) {
            // 0x100002c98
            v4++;
            int32_t v6 = v4 - g6; // 0x100002c50
            if (v6 < 0 == ((v6 ^ v4) & (g6 ^ v4)) < 0) {
                goto lab_0x100002cb0;
            }
            v5 = *(int64_t *)(8 * (int64_t)v4 + g5);
            result = v4;
        }
        // 0x100002d54
        return result;
    }
  lab_0x100002cb0:;
    int32_t v7 = g6;
    int32_t v8 = v7 - g7; // 0x100002cc0
    int32_t result2 = v7; // 0x100002cc8
    if (v8 < 0 == ((v8 ^ v7) & (g7 ^ v7)) < 0) {
        int32_t v9 = g7 + 32; // 0x100002ce4
        g7 = v9;
        g5 = (int64_t)_realloc((int64_t *)g5, 8 * v9);
        result2 = g6;
    }
    // 0x100002d0c
    g6 = result2 + 1;
    char * v10 = _strdup(v2); // 0x100002d34
    *(int64_t *)(g5 + 8 * (int64_t)result2) = (int64_t)v10;
    // 0x100002d54
    return result2;
}

// Address range: 0x100002d64 - 0x100002e9c
int64_t function_100002d64(void) {
    // 0x100002d64
    int64_t v1; // 0x100002d64
    char * v2 = (char *)v1; // 0x100002d70
    int32_t v3 = *(int32_t *)&g9; // 0x100002d84
    int32_t v4 = -v3; // 0x100002d88
    int32_t v5 = 0; // 0x100002d90
    int32_t v6 = v3; // 0x100002d90
    if (v4 < 0 != (v3 & v4) < 0) {
        int64_t v7 = *(int64_t *)(8 * (int64_t)v5 + g8); // 0x100002da8
        int32_t result = v5; // 0x100002db8
        while (_strcmp(v2, (char *)v7) != 0) {
            // 0x100002dd0
            v5++;
            int32_t v8 = *(int32_t *)&g9; // 0x100002d84
            int32_t v9 = v5 - v8; // 0x100002d88
            v6 = v8;
            if (v9 < 0 == ((v9 ^ v5) & (v8 ^ v5)) < 0) {
                goto lab_0x100002de8;
            }
            v7 = *(int64_t *)(8 * (int64_t)v5 + g8);
            result = v5;
        }
        // 0x100002e8c
        return result;
    }
  lab_0x100002de8:;
    int32_t v10 = v6;
    int32_t v11 = *(int32_t *)&g10; // 0x100002df4
    int32_t v12 = v10 - v11; // 0x100002df8
    int32_t result2 = v10; // 0x100002e00
    if (v12 < 0 == ((v12 ^ v10) & (v11 ^ v10)) < 0) {
        int32_t v13 = v11 + 32; // 0x100002e1c
        *(int32_t *)&g10 = v13;
        g8 = (int64_t)_realloc((int64_t *)g8, 8 * v13);
        result2 = *(int32_t *)&g9;
    }
    // 0x100002e44
    *(int32_t *)&g9 = result2 + 1;
    char * v14 = _strdup(v2); // 0x100002e6c
    *(int64_t *)(g8 + 8 * (int64_t)result2) = (int64_t)v14;
    // 0x100002e8c
    return result2;
}

// Address range: 0x100002e9c - 0x100003188
int64_t function_100002e9c(void) {
    // 0x100002e9c
    int64_t result; // 0x100002e9c
    if (result == 0) {
        // 0x100002ee4
        return result;
    }
    uint32_t v1 = (int32_t)result;
    if (v1 >= 24 != v1 != 24) {
        // 0x100002ee4
        return result;
    }
    // 0x100003158
    function_100002970();
    // UNREACHABLE
}

// Address range: 0x1000031ec - 0x100003204
int64_t function_1000031ec(int64_t a1) {
    // 0x1000031ec
    return function_100002ab0();
}

// Address range: 0x100003204 - 0x1000036e8
int64_t function_100003204(int64_t a1, int64_t a2) {
    // 0x100003204
    _fprintf((struct _IO_FILE *)0x4f52, "Datasize: %d Strings: %d\n");
    int32_t v1 = *(int32_t *)&g9; // 0x10000325c
    int32_t v2 = -v1; // 0x100003260
    int32_t v3 = 0; // 0x100003268
    if (v2 < 0 != (v1 & v2) < 0) {
        _fprintf((struct _IO_FILE *)0x4f52, "%s\n");
        v3++;
        int32_t v4 = *(int32_t *)&g9; // 0x10000325c
        while (v3 - v4 < 0 != ((v3 - v4 ^ v3) & (v4 ^ v3)) < 0) {
            // 0x100003270
            _fprintf((struct _IO_FILE *)0x4f52, "%s\n");
            v3++;
            v4 = *(int32_t *)&g9;
        }
    }
    int32_t result = _fprintf((struct _IO_FILE *)0x4f52, "%5d "); // 0x1000032f0
    unsigned char v5 = *(char *)g2; // 0x100003300
    if (v5 >= 23 != v5 != 23) {
        // 0x10000331c
        return result;
    }
    // 0x1000036b8
    function_100002970();
    // UNREACHABLE
}

// Address range: 0x100003748 - 0x1000037ec
int64_t function_100003748(void) {
    // 0x100003748
    int64_t v1; // 0x100003748
    if ((char)v1 == 0) {
        // 0x1000037e0
        int64_t result; // 0x100003748
        return result;
    }
    struct _IO_FILE * v2 = _fopen((char *)v1, (char *)v1); // 0x100003794
    int64_t result2 = (int64_t)v2; // 0x100003794
    *(int64_t *)v1 = result2;
    if (v2 != NULL) {
        // 0x1000037e0
        return result2;
    }
    // 0x1000037b4
    function_100002970();
    // UNREACHABLE
}

// Address range: 0x1000037ec - 0x1000038a8
int64_t function_1000037ec(void) {
    int64_t v1 = 0; // 0x100003868
    int64_t v2 = 16 * v1; // 0x10000381c
    int64_t v3 = *(int64_t *)(v2 + (int64_t)&g1); // 0x100003828
    int64_t v4; // 0x1000037ec
    while (_strcmp((char *)v3, (char *)v4) != 0) {
        // 0x100003804
        v1++;
        if (v1 >= 25) {
            // 0x100003874
            function_100002970();
            // UNREACHABLE
        }
        v2 = 16 * v1;
        v3 = *(int64_t *)(v2 + (int64_t)&g1);
    }
    // 0x100003844
    return (int64_t)*(int32_t *)(v2 + (int64_t)&g1 + 8);
}

// Address range: 0x1000038a8 - 0x100003a10
int64_t function_1000038a8(void) {
    int32_t v1 = 0; // 0x1000038c0
    int64_t result; // 0x1000039f4
    int32_t v2; // 0x1000038a8
    while (true) {
        // 0x1000038c4
        int64_t v3; // 0x1000038a8
        *(int32_t *)v3 = v1;
        int32_t v4 = _fgetc(g11); // 0x1000038d0
        int64_t v5; // 0x1000038a8
        v2 = *(int32_t *)&v5;
        switch (v4) {
            case -1: {
            }
            case 10: {
                // 0x100003900
                result = 0;
                if (v2 != 0) {
                    // 0x1000039dc
                    *(char *)(g13 + (int64_t)v2) = 0;
                    result = g13;
                }
                // 0x100003a00
                return result;
            }
        }
        int32_t v6 = v2 + 1; // 0x10000392c
        int32_t v7 = *(int32_t *)((int64_t)&g1 + 480); // 0x100003934
        int32_t v8 = v6 - v7; // 0x100003938
        int64_t v9; // 0x1000038a8
        if (v8 < 0 == ((v8 ^ v6) & (v7 ^ v6)) < 0) {
            int32_t v10 = g14; // 0x10000394c
            int32_t v11 = v10 == 0 ? 128 : 2 * v10;
            g14 = v11;
            int64_t v12 = (int64_t)_realloc((int64_t *)g13, v11); // 0x10000399c
            g13 = v12;
            v9 = v12;
        } else {
            // 0x100003924
            v9 = g13;
        }
        // 0x1000039ac
        *(char *)(v9 + (int64_t)v2) = (char)v4;
        v1 = *(int32_t *)&v5 + 1;
    }
    // 0x100003900
    result = 0;
    if (v2 != 0) {
        // 0x1000039dc
        *(char *)(g13 + (int64_t)v2) = 0;
        result = g13;
    }
    // 0x100003a00
    return result;
}

// Address range: 0x100003a10 - 0x100003ab8
int64_t function_100003a10(void) {
    // 0x100003a10
    int64_t result; // 0x100003a10
    int32_t v1 = result;
    if (v1 < 1) {
        // 0x100003a94
        *(char *)(result + (int64_t)v1) = 0;
        return result;
    }
    uint32_t v2 = v1 - 1; // 0x100003a54
    char v3 = *(char *)(result + (int64_t)v2); // 0x100003a58
    int32_t v4 = v1; // 0x100003a74
    while (_isspace((int32_t)v3) != 0) {
        // 0x100003a80
        *(int32_t *)result = v2;
        int64_t v5; // 0x100003a10
        int32_t v6 = *(int32_t *)&v5; // 0x100003a2c
        v4 = v6;
        if (v6 < 1) {
            // break -> 0x100003a94
            break;
        }
        v2 = v6 - 1;
        v3 = *(char *)(result + (int64_t)v2);
        v4 = v6;
    }
    // 0x100003a94
    *(char *)(result + (int64_t)v4) = 0;
    return result;
}

// Address range: 0x100003ab8 - 0x100003bec
int64_t function_100003ab8(void) {
    // 0x100003ab8
    function_1000038a8();
    int64_t v1 = function_100003a10(); // 0x100003adc
    char * v2 = _strtok((char *)v1, " "); // 0x100003af0
    if (*v2 == 59) {
        // 0x100003bdc
        return 0;
    }
    int64_t v3 = function_1000037ec(); // 0x100003b1c
    int64_t v4 = (int64_t)_strlen(v2) + (int64_t)v2; // 0x100003b38
    int32_t v5; // 0x100003ab8
    if (v4 == v1 + (int64_t)v5) {
        int64_t v6 = function_100003ab8(); // 0x100003bb4
        // 0x100003bdc
        return function_100002a04((int32_t)v3, v6, function_100003ab8());
    }
    char * v7 = (char *)v4; // 0x100003b6c
    while (_isspace((int32_t)*(char *)((int64_t)v7 + 1)) != 0) {
        // 0x100003b70
        v7 = (char *)((int64_t)v7 + 1);
    }
    // 0x100003bdc
    return function_100002a60();
}

// Address range: 0x100003bec - 0x100003ce4
int64_t entry_point(void) {
    // 0x100003bec
    function_100003748();
    function_100003748();
    function_100003ab8();
    function_100002e9c();
    function_1000031ec((int64_t)&g15);
    function_100003204((int64_t)&g15, (int64_t)&g15);
    return 0;
}

// Address range: 0x100003ce4 - 0x100003cf0
int64_t function_100003ce4(int64_t * a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x100003ce4
    return ___vsprintf_chk(a1, a2, a3, a4, a5);
}

// Address range: 0x100003cf0 - 0x100003cfc
int32_t function_100003cf0(char * nptr) {
    // 0x100003cf0
    return _atoi(nptr);
}

// Address range: 0x100003cfc - 0x100003d08
int64_t * function_100003cfc(int32_t nmemb, int32_t size) {
    // 0x100003cfc
    return _calloc(nmemb, size);
}

// Address range: 0x100003d08 - 0x100003d14
void function_100003d08(int32_t status) {
    // 0x100003d08
    _exit(status);
}

// Address range: 0x100003d14 - 0x100003d20
int32_t function_100003d14(struct _IO_FILE * stream) {
    // 0x100003d14
    return _fgetc(stream);
}

// Address range: 0x100003d20 - 0x100003d2c
struct _IO_FILE * function_100003d20(char * filename, char * modes) {
    // 0x100003d20
    return _fopen(filename, modes);
}

// Address range: 0x100003d2c - 0x100003d38
int32_t function_100003d2c(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003d2c
    return _fprintf(stream, format);
}

// Address range: 0x100003d38 - 0x100003d44
int32_t function_100003d38(int32_t c) {
    // 0x100003d38
    return _isspace(c);
}

// Address range: 0x100003d44 - 0x100003d50
int32_t function_100003d44(char * format, ...) {
    // 0x100003d44
    return _printf(format);
}

// Address range: 0x100003d50 - 0x100003d5c
int64_t * function_100003d50(int64_t * ptr, int32_t size) {
    // 0x100003d50
    return _realloc(ptr, size);
}

// Address range: 0x100003d5c - 0x100003d68
int32_t function_100003d5c(char * s1, char * s2) {
    // 0x100003d5c
    return _strcmp(s1, s2);
}

// Address range: 0x100003d68 - 0x100003d74
char * function_100003d68(char * s) {
    // 0x100003d68
    return _strdup(s);
}

// Address range: 0x100003d74 - 0x100003d80
int32_t function_100003d74(char * s) {
    // 0x100003d74
    return _strlen(s);
}

// Address range: 0x100003d80 - 0x100003d8c
char * function_100003d80(char * s, char * delim) {
    // 0x100003d80
    return _strtok(s, delim);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 33

