//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
#include <stdint.h>
#include <windows.h>

// ------------------------ Structures ------------------------

struct sockaddr {
    int64_t e0;
    char e1[14];
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int64_t function_100003ec8(void);
int32_t function_100003eec(int32_t fd, struct sockaddr * addr, int32_t * addr_len);
int32_t function_100003ef8(int32_t fd, struct sockaddr * addr, int32_t len);
int32_t function_100003f04(int32_t fd);
void function_100003f10(int32_t status, char * format, ...);
int32_t function_100003f1c(int32_t fd, int32_t n);
void function_100003f28(char * s);
int32_t function_100003f34(char * format, ...);
int32_t function_100003f40(int32_t fd, int32_t level, int32_t optname, int64_t * optval, int32_t optlen);
int32_t function_100003f4c(int32_t domain, int32_t type, int32_t protocol);
int32_t function_100003f58(int32_t fd, int64_t * buf, int32_t n);

// ------- Dynamically Linked Functions Without Header --------

int32_t _accept(int32_t a1, struct sockaddr * a2, int32_t * a3);
int32_t _bind(int32_t a1, struct sockaddr * a2, int32_t a3);
int32_t _close(int32_t a1);
void _err(int32_t a1, char * a2, ...);
int32_t _listen(int32_t a1, int32_t a2);
void _perror(char * a1);
int32_t _printf(char * a1, ...);
int32_t _setsockopt(int32_t a1, int32_t a2, int32_t a3, int64_t * a4, int32_t a5);
int32_t _socket(int32_t a1, int32_t a2, int32_t a3);

// ------------------------ Functions -------------------------

// Address range: 0x100003d68 - 0x100003ec8
int64_t entry_point(void) {
    int32_t v1 = 1; // bp-64, 0x100003d90
    int32_t v2 = 16; // bp-72, 0x100003d98
    int32_t v3 = _socket(2, 1, 0); // 0x100003da0
    if (v3 < 0) {
        // 0x100003dbc
        _err(1, "can't open socket");
    }
    // 0x100003dcc
    _setsockopt(v3, 0xffff, 4, (int64_t *)&v1, 4);
    function_100003ec8();
    int64_t v4; // bp-40, 0x100003d68
    if (_bind(v3, (struct sockaddr *)&v4, 16) == -1) {
        // 0x100003e3c
        _close(v3);
        _err(1, "Can't bind");
    }
    // 0x100003e54
    _listen(v3, 5);
    while (true) {
        // 0x100003e64
        int64_t v5; // bp-56, 0x100003d68
        int32_t v6 = _accept(v3, (struct sockaddr *)&v5, &v2); // 0x100003e70
        _printf("got connection\n");
        if (v6 == -1) {
            // 0x100003e98
            _perror("Can't accept");
        } else {
            // 0x100003ea8
            _write(v6, (int64_t *)"HTTP/1.1 200 OK\r\nContent-Type: text/html; charset=UTF-8\r\n\r\n<!DOCTYPE html><html><head><title>Bye-bye baby bye-bye</title><style>body { background-color: #111 }h1 { font-size:4cm; text-align: center; color: black; text-shadow: 0 0 2mm red}</style></head><body><h1>Goodbye, world!</h1></body></html>\r\n", 299);
            _close(v6);
        }
    }
}

// Address range: 0x100003ec8 - 0x100003eec
int64_t function_100003ec8(void) {
    // 0x100003ec8
    int64_t v1; // 0x100003ec8
    uint64_t v2 = v1;
    return v2 / 256 % 256 | 256 * v2 & 0xff00;
}

// Address range: 0x100003eec - 0x100003ef8
int32_t function_100003eec(int32_t fd, struct sockaddr * addr, int32_t * addr_len) {
    // 0x100003eec
    return _accept(fd, addr, addr_len);
}

// Address range: 0x100003ef8 - 0x100003f04
int32_t function_100003ef8(int32_t fd, struct sockaddr * addr, int32_t len) {
    // 0x100003ef8
    return _bind(fd, addr, len);
}

// Address range: 0x100003f04 - 0x100003f10
int32_t function_100003f04(int32_t fd) {
    // 0x100003f04
    return _close(fd);
}

// Address range: 0x100003f10 - 0x100003f1c
void function_100003f10(int32_t status, char * format, ...) {
    // 0x100003f10
    _err(status, format);
}

// Address range: 0x100003f1c - 0x100003f28
int32_t function_100003f1c(int32_t fd, int32_t n) {
    // 0x100003f1c
    return _listen(fd, n);
}

// Address range: 0x100003f28 - 0x100003f34
void function_100003f28(char * s) {
    // 0x100003f28
    _perror(s);
}

// Address range: 0x100003f34 - 0x100003f40
int32_t function_100003f34(char * format, ...) {
    // 0x100003f34
    return _printf(format);
}

// Address range: 0x100003f40 - 0x100003f4c
int32_t function_100003f40(int32_t fd, int32_t level, int32_t optname, int64_t * optval, int32_t optlen) {
    // 0x100003f40
    return _setsockopt(fd, level, optname, optval, optlen);
}

// Address range: 0x100003f4c - 0x100003f58
int32_t function_100003f4c(int32_t domain, int32_t type, int32_t protocol) {
    // 0x100003f4c
    return _socket(domain, type, protocol);
}

// Address range: 0x100003f58 - 0x100003f64
int32_t function_100003f58(int32_t fd, int64_t * buf, int32_t n) {
    // 0x100003f58
    return _write(fd, buf, n);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 12

