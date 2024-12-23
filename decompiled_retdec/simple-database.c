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

int64_t entry_point(int64_t a1);
int64_t function_10000335c(void);
int64_t function_1000033a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7);
int64_t function_100003a18(void);
int64_t function_100003a4c(void);
int64_t function_100003ac4(void);
int64_t function_100003b00(void);
int64_t function_100003b4c(int64_t a1);
void function_100003b58(int32_t status);
int32_t function_100003b64(struct _IO_FILE * stream);
int32_t function_100003b70(struct _IO_FILE * stream);
struct _IO_FILE * function_100003b7c(char * filename, char * modes);
int32_t function_100003b88(struct _IO_FILE * stream, char * format, ...);
void function_100003b94(int64_t * ptr);
int32_t function_100003ba0(struct _IO_FILE * stream, char * format, ...);
int32_t function_100003bac(void);
struct tm * function_100003bb8(int32_t * timer);
int64_t * function_100003bc4(int32_t size);
int64_t * function_100003bd0(int64_t * dest, int64_t * src, int32_t n);
int64_t * function_100003bdc(int64_t * s, int32_t c, int32_t n);
int32_t function_100003be8(struct tm * tp);
void function_100003bf4(char * s);
int32_t function_100003c00(char * format, ...);
int32_t function_100003c0c(char * s);
void function_100003c18(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *));
int32_t function_100003c24(char * format, ...);
int32_t function_100003c30(char * s1, char * s2);
int32_t function_100003c3c(char * s, int32_t maxsize, char * format, struct tm * tp);
int32_t function_100003c48(char * s);
char * function_100003c54(char * s, char * fmt, struct tm * tp);

// --------------------- Global Variables ---------------------

char * g1; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int64_t ___stack_chk_fail(int64_t a1);
int32_t _fclose(struct _IO_FILE * a1);
int32_t _feof(struct _IO_FILE * a1);
struct _IO_FILE * _fopen(char * a1, char * a2);
int32_t _fprintf(struct _IO_FILE * a1, char * a2, ...);
void _free(int64_t * a1);
int32_t _fscanf(struct _IO_FILE * a1, char * a2, ...);
int32_t _getchar(void);
struct tm * _localtime(int32_t * a1);
int64_t * _malloc(int32_t a1);
int64_t * _memcpy(int64_t * a1, int64_t * a2, int32_t a3);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _mktime(struct tm * a1);
void _perror(char * a1);
int32_t _printf(char * a1, ...);
int32_t _puts(char * a1);
void _qsort(int64_t * a1, int32_t a2, int32_t a3, int32_t (*a4)(int64_t *, int64_t *));
int32_t _scanf(char * a1, ...);
int32_t _strcmp(char * a1, char * a2);
int32_t _strftime(char * a1, int32_t a2, char * a3, struct tm * a4);
int32_t _strlen(char * a1);
char * _strptime(char * a1, char * a2, struct tm * a3);

// ------------------------ Functions -------------------------

// Address range: 0x100002e30 - 0x100003348
int64_t entry_point(int64_t a1) {
    int64_t v1 = *(int64_t *)*(int64_t *)0x100004008; // 0x100002e48
    int64_t v2; // bp-192, 0x100002e30
    _memcpy(&v2, (int64_t *)"`<", 48);
    struct _IO_FILE * v3 = _fopen("database.csv", "a+"); // 0x100002e84
    if (v3 == NULL) {
        // 0x100002ea0
        _perror("f=fopen(DB,\"a+\")");
        _exit(1);
        // UNREACHABLE
    }
    // 0x100002eb4
    int64_t v4; // 0x100002e30
    int32_t v5 = v4; // 0x100002e54
    int64_t v6 = (int64_t)"a+"; // 0x100002ec0
    int32_t v7; // 0x100002e30
    int64_t * v8; // 0x100002e30
    int64_t result; // 0x100002e30
    int64_t v9; // 0x100002e30
    if (v5 < 2 == (1 - v5 & v5) < 0) {
        // 0x100002f00
        v8 = (int64_t *)(v4 + 8);
        int32_t v10 = 0; // 0x100002f1c
        v7 = 0;
        v9 = (int64_t)"a+";
        result = (int64_t)v3;
        if (v2 != 0) {
            int64_t v11 = v2;
            int32_t v12 = _strcmp((char *)*v8, (char *)v11); // 0x100002f38
            v7 = v10;
            v9 = v11;
            result = 0;
            while (v12 != 0) {
                int32_t v13 = v10 + 1; // 0x100002f60
                int64_t v14 = *(int64_t *)(8 * (int64_t)v13 + (int64_t)&v2); // 0x100002f08
                v10 = v13;
                if (v14 == 0) {
                    // 0x100002f00
                    v7 = v13;
                    v9 = v11;
                    result = v12;
                    goto lab_0x100002f6c;
                }
                v11 = v14;
                v12 = _strcmp((char *)*v8, (char *)v11);
                v7 = v10;
                v9 = v11;
                result = 0;
            }
        }
        goto lab_0x100002f6c;
    } else {
        goto lab_0x100002ecc;
    }
  lab_0x100002ecc:
    // 0x100002ecc
    _printf("Usage: %s [commands]\n-c  Create new entry.\n-p  Print the latest entry.\n-t  Print all entries sorted by title.\n-d  Print all entries sorted by date.\n-a  Print all entries sorted by author.\n", (char *)v6);
    int32_t v15 = _fclose(v3); // 0x100002eec
    if (*(int64_t *)*(int64_t *)0x100004008 != v1) {
        // 0x100003330
        ___stack_chk_fail((int64_t)v15);
    }
    // 0x100002f88
    return 0;
  lab_0x100002f6c:;
    uint32_t v16 = v7;
    if (v16 >= 4 != v16 != 4) {
        // 0x100002f88
        return result;
    }
    // 0x1000032a0
    v6 = v9;
    _strlen((char *)*v8);
    _printf("Unknown command: %s.\n", (char *)v6);
    goto lab_0x100002ecc;
}

// Address range: 0x10000335c - 0x1000033a8
int64_t function_10000335c(void) {
    // 0x10000335c
    int64_t v1; // bp-80, 0x10000335c
    _memset(&v1, 0, 56);
    int64_t v2; // 0x10000335c
    _strptime((char *)v2, "%m-%d-%Y", (struct tm *)&v1);
    return _mktime((struct tm *)&v1);
}

// Address range: 0x1000033a8 - 0x1000039f4
int64_t function_1000033a8(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7) {
    // 0x1000033a8
    int64_t v1; // 0x1000033a8
    uint64_t v2 = v1 & 0xffffffff; // 0x1000033f0
    return v2 >= 8 == (v2 != 8) ? 0 : v1;
}

// Address range: 0x100003a18 - 0x100003a4c
int64_t function_100003a18(void) {
    // 0x100003a18
    int64_t v1; // 0x100003a18
    return _strcmp((char *)v1, (char *)v1);
}

// Address range: 0x100003a4c - 0x100003ac4
int64_t function_100003a4c(void) {
    // 0x100003a4c
    int64_t v1; // 0x100003a4c
    int64_t v2 = *(int64_t *)(v1 + 80); // 0x100003a60
    int64_t v3 = *(int64_t *)(v1 + 80); // 0x100003a6c
    int64_t v4 = v2 - v3; // 0x100003a70
    return v4 < 0 == ((v4 ^ v2) & (v3 ^ v2)) < 0 ? (int64_t)(v4 != 0) : 0xffffffff;
}

// Address range: 0x100003ac4 - 0x100003b00
int64_t function_100003ac4(void) {
    // 0x100003ac4
    int64_t v1; // 0x100003ac4
    return _strcmp((char *)(v1 + 52), (char *)(v1 + 52));
}

// Address range: 0x100003b00 - 0x100003b4c
int64_t function_100003b00(void) {
    // 0x100003b00
    int64_t v1; // 0x100003b00
    _strftime((char *)&g1, 255, "%m-%d-%Y", _localtime((int32_t *)v1));
    return (int64_t)&g1;
}

// Address range: 0x100003b4c - 0x100003b58
int64_t function_100003b4c(int64_t a1) {
    // 0x100003b4c
    return ___stack_chk_fail(a1);
}

// Address range: 0x100003b58 - 0x100003b64
void function_100003b58(int32_t status) {
    // 0x100003b58
    _exit(status);
}

// Address range: 0x100003b64 - 0x100003b70
int32_t function_100003b64(struct _IO_FILE * stream) {
    // 0x100003b64
    return _fclose(stream);
}

// Address range: 0x100003b70 - 0x100003b7c
int32_t function_100003b70(struct _IO_FILE * stream) {
    // 0x100003b70
    return _feof(stream);
}

// Address range: 0x100003b7c - 0x100003b88
struct _IO_FILE * function_100003b7c(char * filename, char * modes) {
    // 0x100003b7c
    return _fopen(filename, modes);
}

// Address range: 0x100003b88 - 0x100003b94
int32_t function_100003b88(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003b88
    return _fprintf(stream, format);
}

// Address range: 0x100003b94 - 0x100003ba0
void function_100003b94(int64_t * ptr) {
    // 0x100003b94
    _free(ptr);
}

// Address range: 0x100003ba0 - 0x100003bac
int32_t function_100003ba0(struct _IO_FILE * stream, char * format, ...) {
    // 0x100003ba0
    return _fscanf(stream, format);
}

// Address range: 0x100003bac - 0x100003bb8
int32_t function_100003bac(void) {
    // 0x100003bac
    return _getchar();
}

// Address range: 0x100003bb8 - 0x100003bc4
struct tm * function_100003bb8(int32_t * timer) {
    // 0x100003bb8
    return _localtime(timer);
}

// Address range: 0x100003bc4 - 0x100003bd0
int64_t * function_100003bc4(int32_t size) {
    // 0x100003bc4
    return _malloc(size);
}

// Address range: 0x100003bd0 - 0x100003bdc
int64_t * function_100003bd0(int64_t * dest, int64_t * src, int32_t n) {
    // 0x100003bd0
    return _memcpy(dest, src, n);
}

// Address range: 0x100003bdc - 0x100003be8
int64_t * function_100003bdc(int64_t * s, int32_t c, int32_t n) {
    // 0x100003bdc
    return _memset(s, c, n);
}

// Address range: 0x100003be8 - 0x100003bf4
int32_t function_100003be8(struct tm * tp) {
    // 0x100003be8
    return _mktime(tp);
}

// Address range: 0x100003bf4 - 0x100003c00
void function_100003bf4(char * s) {
    // 0x100003bf4
    _perror(s);
}

// Address range: 0x100003c00 - 0x100003c0c
int32_t function_100003c00(char * format, ...) {
    // 0x100003c00
    return _printf(format);
}

// Address range: 0x100003c0c - 0x100003c18
int32_t function_100003c0c(char * s) {
    // 0x100003c0c
    return _puts(s);
}

// Address range: 0x100003c18 - 0x100003c24
void function_100003c18(int64_t * base, int32_t nmemb, int32_t size, int32_t (*compar)(int64_t *, int64_t *)) {
    // 0x100003c18
    _qsort(base, nmemb, size, compar);
}

// Address range: 0x100003c24 - 0x100003c30
int32_t function_100003c24(char * format, ...) {
    // 0x100003c24
    return _scanf(format);
}

// Address range: 0x100003c30 - 0x100003c3c
int32_t function_100003c30(char * s1, char * s2) {
    // 0x100003c30
    return _strcmp(s1, s2);
}

// Address range: 0x100003c3c - 0x100003c48
int32_t function_100003c3c(char * s, int32_t maxsize, char * format, struct tm * tp) {
    // 0x100003c3c
    return _strftime(s, maxsize, format, tp);
}

// Address range: 0x100003c48 - 0x100003c54
int32_t function_100003c48(char * s) {
    // 0x100003c48
    return _strlen(s);
}

// Address range: 0x100003c54 - 0x100003c60
char * function_100003c54(char * s, char * fmt, struct tm * tp) {
    // 0x100003c54
    return _strptime(s, fmt, tp);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 30

