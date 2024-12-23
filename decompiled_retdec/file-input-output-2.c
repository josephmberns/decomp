//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <windows.h>

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
int64_t function_100003d5c(char * a1, char * a2);
int64_t function_100003d78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_100003f48(void);
int32_t function_100003f54(int32_t fd);
int32_t function_100003f60(int32_t fd, struct stat * buf);
int32_t function_100003f6c(char * file, int32_t oflag, ...);
int32_t function_100003f78(int32_t fd, int64_t * buf, int32_t nbytes);
int32_t function_100003f84(int32_t fd, int64_t * buf, int32_t n);

// ------- Dynamically Linked Functions Without Header --------

int64_t ___chkstk_darwin(void);
int64_t ___stack_chk_fail(void);
int32_t _close(int32_t a1);
int32_t _fstat(int32_t a1, struct stat * a2);

// ------------------------ Functions -------------------------

// Address range: 0x100003d5c - 0x100003d78
int64_t function_100003d5c(char * a1, char * a2) {
    // 0x100003d5c
    return ___chkstk_darwin();
}

// Address range: 0x100003d78 - 0x100003f0c
int64_t function_100003d78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x100003d78
    int64_t v1; // 0x100003d78
    int64_t * v2 = (int64_t *)(v1 - 24); // 0x100003d8c
    *v2 = *(int64_t *)*(int64_t *)0x100004010;
    int32_t v3 = _open((char *)v1, 0); // 0x100003da4
    int64_t v4 = 0; // 0x100003db4
    int64_t v5; // 0x100003d78
    int32_t v6; // 0x100003d78
    if (v3 == -1) {
        goto lab_0x100003ec8;
    } else {
        // 0x100003dc4
        int64_t v7; // bp-32968, 0x100003d78
        int32_t v8 = _fstat(v3, (struct stat *)&v7); // 0x100003dcc
        v5 = 0;
        if (v8 == 0) {
            int32_t v9 = _open((char *)v1, 1537); // 0x100003e00
            if (v9 == -1) {
                // 0x100003e9c
                _close(v3);
                v4 = 0;
                goto lab_0x100003ec8;
            } else {
                // 0x100003e24
                int64_t v10; // bp-32776, 0x100003d78
                int32_t v11 = _read(v3, &v10, 0x1000); // 0x100003e30
                int32_t v12 = v11; // 0x100003e40
                if (v11 >= 1) {
                    _write(v9, &v10, v11);
                    int32_t v13 = _read(v3, &v10, 0x1000); // 0x100003e30
                    int32_t v14 = v13; // 0x100003e40
                    v12 = v13;
                    while (v13 >= 1) {
                        // 0x100003e48
                        _write(v9, &v10, v14);
                        v13 = _read(v3, &v10, 0x1000);
                        v14 = v13;
                        v12 = v13;
                    }
                }
                // 0x100003e5c
                v6 = v9;
                v5 = v12 == 0;
                goto lab_0x100003e9c;
            }
        } else {
            goto lab_0x100003e9c;
        }
    }
  lab_0x100003ec8:
    // 0x100003ec8
    if (*(int64_t *)*(int64_t *)0x100004010 != *v2) {
        // 0x100003ef0
        ___stack_chk_fail();
    }
    // 0x100003ef4
    return v4 & 0xffffffff;
  lab_0x100003e9c:
    // 0x100003e9c
    _close(v3);
    v4 = v5;
    if (v6 != -1) {
        // 0x100003eb0
        _close(v6);
        v4 = v5;
    }
    goto lab_0x100003ec8;
}

// Address range: 0x100003f0c - 0x100003f48
int64_t entry_point(void) {
    // 0x100003f0c
    function_100003d5c("infile", "outfile");
    return 0;
}

// Address range: 0x100003f48 - 0x100003f54
int64_t function_100003f48(void) {
    // 0x100003f48
    return ___stack_chk_fail();
}

// Address range: 0x100003f54 - 0x100003f60
int32_t function_100003f54(int32_t fd) {
    // 0x100003f54
    return _close(fd);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(int32_t fd, struct stat * buf) {
    // 0x100003f60
    return _fstat(fd, buf);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(char * file, int32_t oflag, ...) {
    // 0x100003f6c
    return _open(file, oflag);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(int32_t fd, int64_t * buf, int32_t nbytes) {
    // 0x100003f78
    return _read(fd, buf, nbytes);
}

// Address range: 0x100003f84 - 0x100003f90
int32_t function_100003f84(int32_t fd, int64_t * buf, int32_t n) {
    // 0x100003f84
    return _write(fd, buf, n);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9

