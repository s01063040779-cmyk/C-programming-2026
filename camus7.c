#include <stdio.h>

void exerc1(void) {
    int n, r;
    double x;

    x = 1.0;                              
    printf("input n, r : ");
    scanf("%d%d", &n, &r);               

    for (int i = 0; i < r; i++) {        
        x *= n;                          
    }

    printf("%d의 %d승은 %lf 입니다.", n, r, x);   
}

int main() {
    exerc1();
    return 0;
}