//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_1000039c8(void);
int64_t function_100003a20(void);
int64_t function_100003ae4(void);
int64_t function_100003ca0(int64_t a1);
int64_t function_100003ce4(void);
int64_t function_100003d08(void);
int64_t function_100003d54(void);
int64_t function_100003da8(void);
void function_100003f2c(int64_t * ptr);
int64_t * function_100003f38(int32_t size);
int32_t function_100003f44(char * format, ...);
char * function_100003f50(char * s);

// ------- Dynamically Linked Functions Without Header --------

void _free(int64_t * a1);
int64_t * _malloc(int32_t a1);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x1000039c8 - 0x100003a20
int64_t function_1000039c8(void) {
    int64_t * v1 = _malloc(24); // 0x1000039d8
    int64_t result = (int64_t)v1; // 0x1000039d8
    if (v1 != NULL) {
        // 0x1000039f4
        *v1 = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 8) = 0;
    }
    // 0x100003a10
    return result;
}

// Address range: 0x100003a20 - 0x100003ae4
int64_t function_100003a20(void) {
    int64_t * v1 = _malloc(24); // 0x100003a38
    if (v1 == NULL) {
        // 0x100003ac8
        return v1 != NULL;
    }
    int64_t v2 = (int64_t)v1; // 0x100003a38
    int64_t v3; // 0x100003a20
    *v1 = (int64_t)_strdup((char *)v3);
    int64_t * v4 = (int64_t *)(v3 + 16); // 0x100003a68
    int64_t * v5 = (int64_t *)(v2 + 16); // 0x100003a70
    *v5 = *v4;
    *(int64_t *)(v2 + 8) = 0;
    int64_t v6 = *v5; // 0x100003a80
    if (v6 == 0) {
        // 0x100003aa8
        *(int64_t *)(v3 + 8) = v2;
    } else {
        // 0x100003a94
        *(int64_t *)(v6 + 8) = v2;
    }
    // 0x100003ab8
    *v4 = v2;
    // 0x100003ac8
    return v1 != NULL;
}

// Address range: 0x100003ae4 - 0x100003ca0
int64_t function_100003ae4(void) {
    // 0x100003ae4
    int64_t v1; // 0x100003ae4
    int64_t v2 = v1;
    int64_t * v3 = _malloc(24); // 0x100003b08
    if (v3 == NULL) {
        // 0x100003c84
        return v3 != NULL;
    }
    int64_t v4 = (int64_t)v3; // 0x100003b08
    *v3 = (int64_t)_strdup((char *)v1);
    int64_t * v5 = (int64_t *)(v2 + 8); // 0x100003b3c
    int64_t v6 = *v5; // 0x100003b3c
    if (v2 == v6) {
        // 0x100003b50
        *(int64_t *)(v4 + 16) = 0;
        int64_t * v7 = (int64_t *)(v4 + 8); // 0x100003b64
        *v7 = *v5;
        *v5 = v4;
        int64_t v8 = *v7; // 0x100003b78
        if (v8 == 0) {
            // 0x100003ba0
            *(int64_t *)(v2 + 16) = v4;
        } else {
            // 0x100003b8c
            *(int64_t *)(v8 + 16) = v4;
        }
        // 0x100003c84
        return v3 != NULL;
    }
    int64_t * v9 = (int64_t *)(v4 + 16); // 0x100003bf4
    *v9 = *(int64_t *)((v2 == 0 ? v6 : v2) + 16);
    int64_t v10 = *v9; // 0x100003c08
    if (v10 == 0) {
        // 0x100003c30
        *(int64_t *)(*v5 + 8) = v4;
    } else {
        // 0x100003c1c
        *(int64_t *)(v10 + 8) = v4;
    }
    if (v2 == 0) {
        // 0x100003c68
        *(int64_t *)(*v5 + 16) = v4;
    } else {
        // 0x100003c58
        *(int64_t *)(v2 + 16) = v4;
    }
    // 0x100003c84
    return v3 != NULL;
}

// Address range: 0x100003ca0 - 0x100003ce4
int64_t function_100003ca0(int64_t a1) {
    int64_t * v1 = _malloc(16); // 0x100003cb4
    int64_t result = (int64_t)v1; // 0x100003cb4
    *(int64_t *)(result + 8) = a1;
    *v1 = a1;
    return result;
}

// Address range: 0x100003ce4 - 0x100003d08
int64_t function_100003ce4(void) {
    // 0x100003ce4
    int64_t v1; // 0x100003ce4
    return v1 == 0;
}

// Address range: 0x100003d08 - 0x100003d54
int64_t function_100003d08(void) {
    // 0x100003d08
    int64_t result; // 0x100003d08
    return result;
}

// Address range: 0x100003d54 - 0x100003da8
int64_t function_100003d54(void) {
    // 0x100003d54
    int64_t v1; // 0x100003d54
    int64_t v2 = v1;
    if (v2 != 0) {
        // 0x100003d74
        *(int64_t *)v2 = *(int64_t *)(v2 + 8);
    }
    // 0x100003d8c
    return v2 != 0;
}

// Address range: 0x100003da8 - 0x100003dfc
int64_t function_100003da8(void) {
    // 0x100003da8
    int64_t v1; // 0x100003da8
    int64_t v2 = v1;
    if (v2 != 0) {
        // 0x100003dc8
        *(int64_t *)v2 = *(int64_t *)(v2 + 16);
    }
    // 0x100003de0
    return v2 != 0;
}

// Address range: 0x100003dfc - 0x100003f2c
int64_t entry_point(void) {
    int64_t v1 = function_1000039c8(); // 0x100003e0c
    int64_t v2; // 0x100003e40
    for (int64_t i = 0; i < 6; i++) {
        // 0x100003e30
        v2 = *(int64_t *)(8 * i + (int64_t)"\\?");
        function_100003a20();
    }
    int64_t v3 = function_100003ca0(v1); // 0x100003e60
    _printf("forward\n");
    if ((int32_t)function_100003d54() != 0) {
        function_100003d08();
        _printf("value=%s\n", (char *)v2);
        // 0x100003e90
        while ((int32_t)function_100003d54() != 0) {
            // 0x100003e90
            function_100003d08();
            _printf("value=%s\n", (char *)v2);
        }
    }
    // 0x100003eb0
    _free((int64_t *)v3);
    _printf("\nreverse\n");
    int64_t v4 = function_100003ca0(v1); // 0x100003ecc
    if ((int32_t)function_100003da8() == 0) {
        // 0x100003f10
        _free((int64_t *)v4);
        return 0;
    }
    function_100003d08();
    _printf("value=%s\n", (char *)v2);
    // 0x100003ef0
    while ((int32_t)function_100003da8() != 0) {
        // 0x100003ef0
        function_100003d08();
        _printf("value=%s\n", (char *)v2);
    }
    // 0x100003f10
    _free((int64_t *)v4);
    return 0;
}

// Address range: 0x100003f2c - 0x100003f38
void function_100003f2c(int64_t * ptr) {
    // 0x100003f2c
    _free(ptr);
}

// Address range: 0x100003f38 - 0x100003f44
int64_t * function_100003f38(int32_t size) {
    // 0x100003f38
    return _malloc(size);
}

// Address range: 0x100003f44 - 0x100003f50
int32_t function_100003f44(char * format, ...) {
    // 0x100003f44
    return _printf(format);
}

// Address range: 0x100003f50 - 0x100003f5c
char * function_100003f50(char * s) {
    // 0x100003f50
    return _strdup(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 13

