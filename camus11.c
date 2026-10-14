#include <stdio.h>

void exerc5(void) {
    char star = '*';
    int line;
    printf("input line : ");
    scanf("%d", &line);
    for (int i = 0; i < line; i++) {
        int star_count = i * 2 + 1;

        for (int j = 0; j < star_count; j++) printf("%c", star);
        printf("\n");
    }
}

int main() {
    exerc5();
    return 0;
}