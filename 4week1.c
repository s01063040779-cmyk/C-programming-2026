#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int midterm, final_exam, homework;   
    double weighted_score;               

    scanf("%d %d %d", &midterm, &final_exam, &homework);

    weighted_score = midterm * 0.3 + final_exam * 0.4 + homework * 0.3;

    printf("weighted_score=%.2f\n", weighted_score);
    return 0;
}