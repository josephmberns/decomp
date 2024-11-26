//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <windows.h>

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f38(int32_t fd);
void function_100003f44(int32_t status, char * format, ...);
int32_t function_100003f50(int32_t fd, int32_t request, ...);
int32_t function_100003f5c(char * file, int32_t oflag, ...);
int32_t function_100003f68(char * format, ...);

// ------- Dynamically Linked Functions Without Header --------

int32_t _close(int32_t a1);
void _err(int32_t a1, char * a2, ...);
int32_t _ioctl(int32_t a1, int32_t a2, ...);
int32_t _printf(char * a1, ...);

// ------------------------ Functions -------------------------

// Address range: 0x100003e4c - 0x100003f38
int64_t entry_point(void) {
    int32_t v1 = _open("/dev/tty", 2); // 0x100003e68
    if (v1 < 0) {
        // 0x100003e84
        _err(1, "/dev/tty");
    }
    int64_t v2 = 0x40087468; // 0x100003eb8
    if (_ioctl(v1, 0x40087468) < 0) {
        // 0x100003ec0
        _err(1, "/dev/tty");
        v2 = (int64_t)"/dev/tty";
    }
    // 0x100003ed0
    int64_t v3; // 0x100003e4c
    _printf("%d rows by %d columns\n", v2, v3);
    _printf("(%d by %d pixels)\n", v2, v3);
    _close(v1);
    return 0;
}

// Address range: 0x100003f38 - 0x100003f44
int32_t function_100003f38(int32_t fd) {
    // 0x100003f38
    return _close(fd);
}

// Address range: 0x100003f44 - 0x100003f50
void function_100003f44(int32_t status, char * format, ...) {
    // 0x100003f44
    _err(status, format);
}

// Address range: 0x100003f50 - 0x100003f5c
int32_t function_100003f50(int32_t fd, int32_t request, ...) {
    // 0x100003f50
    return _ioctl(fd, request);
}

// Address range: 0x100003f5c - 0x100003f68
int32_t function_100003f5c(char * file, int32_t oflag, ...) {
    // 0x100003f5c
    return _open(file, oflag);
}

// Address range: 0x100003f68 - 0x100003f74
int32_t function_100003f68(char * format, ...) {
    // 0x100003f68
    return _printf(format);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 6
