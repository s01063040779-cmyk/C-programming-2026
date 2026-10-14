#include <stdio.h>

#define READ  0x01
#define WRITE 0x02
#define EXEC  0x04

int main(void) {
    unsigned int perm = READ | WRITE;  // 현재 권한: READ + WRITE

    printf("변경 전 권한: 0x%02X\n", perm);

    // READ와 WRITE 권한이 모두 있으면 EXEC 권한 추가
    if ((perm & READ) && (perm & WRITE)) {
        perm |= EXEC;
    }

    printf("변경 후 권한: 0x%02X\n", perm);

    return 0;
}