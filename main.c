#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

void exerc1(void) {
	double inch, cm;
	scanf("%lf", &inch);
	cm = inch * 2.54;
	printf("%lf inch는 %lf cm입니다.\n", inch, cm);
}

void exerc2(void) {
	double F, C;
	scanf("%lf", &C);
	F = (C * 1.8) + 32;
	printf("섭씨 %lf도는 화씨 %lf도 입니다.\n", C, F);
}

void exerc3(void) {
	double r, area;
	const double PI = 3.141592;
	scanf("%lf", &r);
	area = PI * r * r;
	printf("반지름 %lf인 원의 넓이는 %lf입니다.\n", r, area);
}

int main(void) {
	SetConsoleOutputCP(CP_UTF8);
	exerc1();
	exerc2();
	exerc3();
	return 0;
}