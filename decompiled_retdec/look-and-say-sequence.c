//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003f70(int64_t a1, int32_t a2, int64_t a3, int64_t a4);
int64_t * function_100003f7c(int32_t size);
int32_t function_100003f88(char * s);
int64_t * function_100003f94(int64_t * ptr, int32_t size);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___sprintf_chk(int64_t a1, int32_t a2, int64_t a3, int64_t a4);
int64_t * _malloc(int32_t a1);
int32_t _puts(char * a1);
int64_t * _realloc(int64_t * a1, int32_t a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003dec - 0x100003f70
int64_t entry_point(void) {
    int64_t * v1 = _malloc(2); // 0x100003e08
    ___sprintf_chk((int64_t)v1, 0, -1, 0x100003fa0);
    int64_t * v2 = _realloc(NULL, 3); // 0x100003e50
    if (v2 == NULL) {
        // 0x100003f60
        return 0;
    }
    int64_t * v3 = v2;
    _puts((char *)v1);
    char v4 = *(char *)v1; // 0x100003e8c
    int32_t v5 = 0; // 0x100003e9c
    char * v6; // 0x100003dec
    char v7; // 0x100003dec
    char v8; // 0x100003e8c
    int32_t v9; // 0x100003dec
    int32_t v10; // 0x100003dec
    int32_t v11; // 0x100003dec
    int64_t v12; // 0x100003dec
    char * v13; // 0x100003eb0
    int64_t v14; // 0x100003f24
    if (v4 != 0) {
        // 0x100003ea4
        v12 = (int64_t)v3;
        v9 = 0;
        v13 = (char *)((int64_t)(char *)v1 + 1);
        v7 = v4;
        v10 = v9;
        if (v4 != *v13) {
            // 0x100003eec
            v14 = ___sprintf_chk((int64_t)v9 + v12, 0, -1, (int64_t)"%d%c");
            v7 = *v13;
            v10 = v9 + (int32_t)v14;
        }
        // 0x100003f44
        v11 = v10;
        v8 = v7;
        v6 = v13;
        v5 = v11;
        while (v8 != 0) {
            // 0x100003ea4
            v9 = v11;
            v13 = (char *)((int64_t)v6 + 1);
            v7 = v8;
            v10 = v9;
            if (v8 != *v13) {
                // 0x100003eec
                v14 = ___sprintf_chk((int64_t)v9 + v12, 0, -1, (int64_t)"%d%c");
                v7 = *v13;
                v10 = v9 + (int32_t)v14;
            }
            // 0x100003f44
            v11 = v10;
            v8 = v7;
            v6 = v13;
            v5 = v11;
        }
    }
    int64_t * v15 = _realloc(v1, 2 * v5 | 1); // 0x100003e50
    while (v15 != NULL) {
        int64_t * v16 = v3;
        v3 = v15;
        _puts((char *)v16);
        v4 = *(char *)v16;
        v5 = 0;
        if (v4 != 0) {
            // 0x100003ea4
            v12 = (int64_t)v3;
            v9 = 0;
            v13 = (char *)((int64_t)(char *)v16 + 1);
            v7 = v4;
            v10 = v9;
            if (v4 != *v13) {
                // 0x100003eec
                v14 = ___sprintf_chk((int64_t)v9 + v12, 0, -1, (int64_t)"%d%c");
                v7 = *v13;
                v10 = v9 + (int32_t)v14;
            }
            // 0x100003f44
            v11 = v10;
            v8 = v7;
            v6 = v13;
            v5 = v11;
            while (v8 != 0) {
                // 0x100003ea4
                v9 = v11;
                v13 = (char *)((int64_t)v6 + 1);
                v7 = v8;
                v10 = v9;
                if (v8 != *v13) {
                    // 0x100003eec
                    v14 = ___sprintf_chk((int64_t)v9 + v12, 0, -1, (int64_t)"%d%c");
                    v7 = *v13;
                    v10 = v9 + (int32_t)v14;
                }
                // 0x100003f44
                v11 = v10;
                v8 = v7;
                v6 = v13;
                v5 = v11;
            }
        }
        // 0x100003f4c
        v15 = _realloc(v16, 2 * v5 | 1);
    }
    // 0x100003f60
    return 0;
}

// Address range: 0x100003f70 - 0x100003f7c
int64_t function_100003f70(int64_t a1, int32_t a2, int64_t a3, int64_t a4) {
    // 0x100003f70
    return ___sprintf_chk(a1, a2, a3, a4);
}

// Address range: 0x100003f7c - 0x100003f88
int64_t * function_100003f7c(int32_t size) {
    // 0x100003f7c
    return _malloc(size);
}

// Address range: 0x100003f88 - 0x100003f94
int32_t function_100003f88(char * s) {
    // 0x100003f88
    return _puts(s);
}

// Address range: 0x100003f94 - 0x100003fa0
int64_t * function_100003f94(int64_t * ptr, int32_t size) {
    // 0x100003f94
    return _realloc(ptr, size);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 5
