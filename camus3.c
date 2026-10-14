#include <stdio.h>

int main(void) {
    int score;
    double attendance;

    printf("점수를 입력하세요: ");
    scanf("%d", &score);

    printf("출석률(%%)을 입력하세요: ");
    scanf("%lf", &attendance);

    if (score >= 60 && attendance >= 80) {
        printf("합격\n");
    }
    else {
        printf("불합격\n");
    }

    return 0;
}