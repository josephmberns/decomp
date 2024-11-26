//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>

// ------------------------ Structures ------------------------

struct addrinfo {
    int32_t e0;
    int32_t e1;
    int32_t e2;
    int32_t e3;
    int32_t e4;
    struct sockaddr * e5;
    char * e6;
    struct addrinfo * e7;
};

struct sockaddr {
    int64_t e0;
    char e1[14];
};

// ------------------- Function Prototypes --------------------

int64_t entry_point(void);
int32_t function_100003f24(int32_t fd);
int32_t function_100003f30(int32_t fd, struct sockaddr * addr, int32_t len);
void function_100003f3c(struct addrinfo * ai);
int32_t function_100003f48(char * name, char * service, struct addrinfo * req, struct addrinfo ** pai);
int64_t * function_100003f54(int64_t * s, int32_t c, int32_t n);
int32_t function_100003f60(int32_t fd, int64_t * buf, int32_t n, int32_t flags);
int32_t function_100003f6c(int32_t domain, int32_t type, int32_t protocol);
int32_t function_100003f78(char * s);

// --------------------- Global Variables ---------------------

char * g1 = "\x84?"; // 0x100008000

// ------- Dynamically Linked Functions Without Header --------

int32_t _close(int32_t a1);
int32_t _connect(int32_t a1, struct sockaddr * a2, int32_t a3);
void _freeaddrinfo(struct addrinfo * a1);
int32_t _getaddrinfo(char * a1, char * a2, struct addrinfo * a3, struct addrinfo ** a4);
int64_t * _memset(int64_t * a1, int32_t a2, int32_t a3);
int32_t _send(int32_t a1, int64_t * a2, int32_t a3, int32_t a4);
int32_t _socket(int32_t a1, int32_t a2, int32_t a3);
int32_t _strlen(char * a1);

// ------------------------ Functions -------------------------

// Address range: 0x100003da4 - 0x100003f24
int64_t entry_point(void) {
    // 0x100003da4
    int64_t v1; // bp-88, 0x100003da4
    _memset(&v1, 0, 48);
    struct addrinfo * v2; // bp-96, 0x100003da4
    if (_getaddrinfo("localhost", "256", (struct addrinfo *)&v1, &v2) != 0) {
        // 0x100003f14
        return 0;
    }
    int64_t v3 = (int64_t)v2; // 0x100003e08
    int32_t v4 = *(int32_t *)(v3 + 12); // 0x100003e1c
    int32_t v5 = _socket(*(int32_t *)(v3 + 4), *(int32_t *)(v3 + 8), v4); // 0x100003e20
    if (v5 < 0) {
        // 0x100003f08
        _freeaddrinfo(v2);
        // 0x100003f14
        return 0;
    }
    int64_t v6 = (int64_t)v2; // 0x100003e40
    int32_t v7 = *(int32_t *)(v6 + 16); // 0x100003e4c
    if (_connect(v5, (struct sockaddr *)*(int64_t *)(v6 + 32), v7) < 0) {
        // 0x100003efc
        _close(v5);
        // 0x100003f08
        _freeaddrinfo(v2);
        // 0x100003f14
        return 0;
    }
    int64_t v8 = (int64_t)g1; // 0x100003e70
    int32_t v9 = _strlen((char *)v8); // 0x100003e78
    int32_t v10 = _send(v5, (int64_t *)v8, v9, 0); // 0x100003e94
    while (v10 == 0 || -v10 < 0 != (v10 & -v10) < 0) {
        int32_t v11 = v10 - v9; // 0x100003edc
        v8 += (int64_t)v10;
        if (v11 < 0 == ((v11 ^ v10) & (v10 ^ v9)) < 0) {
            // break -> 0x100003efc
            break;
        }
        v9 = _strlen((char *)v8);
        v10 = _send(v5, (int64_t *)v8, v9, 0);
    }
    // 0x100003efc
    _close(v5);
    // 0x100003f08
    _freeaddrinfo(v2);
    // 0x100003f14
    return 0;
}

// Address range: 0x100003f24 - 0x100003f30
int32_t function_100003f24(int32_t fd) {
    // 0x100003f24
    return _close(fd);
}

// Address range: 0x100003f30 - 0x100003f3c
int32_t function_100003f30(int32_t fd, struct sockaddr * addr, int32_t len) {
    // 0x100003f30
    return _connect(fd, addr, len);
}

// Address range: 0x100003f3c - 0x100003f48
void function_100003f3c(struct addrinfo * ai) {
    // 0x100003f3c
    _freeaddrinfo(ai);
}

// Address range: 0x100003f48 - 0x100003f54
int32_t function_100003f48(char * name, char * service, struct addrinfo * req, struct addrinfo ** pai) {
    // 0x100003f48
    return _getaddrinfo(name, service, req, pai);
}

// Address range: 0x100003f54 - 0x100003f60
int64_t * function_100003f54(int64_t * s, int32_t c, int32_t n) {
    // 0x100003f54
    return _memset(s, c, n);
}

// Address range: 0x100003f60 - 0x100003f6c
int32_t function_100003f60(int32_t fd, int64_t * buf, int32_t n, int32_t flags) {
    // 0x100003f60
    return _send(fd, buf, n, flags);
}

// Address range: 0x100003f6c - 0x100003f78
int32_t function_100003f6c(int32_t domain, int32_t type, int32_t protocol) {
    // 0x100003f6c
    return _socket(domain, type, protocol);
}

// Address range: 0x100003f78 - 0x100003f84
int32_t function_100003f78(char * s) {
    // 0x100003f78
    return _strlen(s);
}

// --------------------- Meta-Information ---------------------

// Detected functions: 9
