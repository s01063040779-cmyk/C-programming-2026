#include <stdio.h>

int isleafyear(int year) {
	int isleaf = 0;

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				isleaf = 1;
			}
		}
		else {
			isleaf = 1;
		}
	}
	return isleaf;
}
void  exerc() {
	int month;
	int days;
	printf("월 입력(1~12) : ");
	scanf("%d", &month);
	if (month >= 1 && month <= 12) {
		int year;
		int isleaf = 0;
		switch (month) {
		case 2:
			printf("input year : ");
			scanf("%d", &year);
			isleaf = isleafyear(year);
			if (isleaf == 1) days = 29;
			else days = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			days = 30;
			break;
		default:
			days = 31;
			break;
		}
		printf("%d월은 %d일까지 있습니다.\n", month, days);
		if (month == 2) {
			if (isleaf == 1) printf("%d년은 윤년입니다.\n", year);
			else printf("%d년은 평년입니다.\n", year);
		}
	}
	else {
		printf("1부터 12사이의 값을 입력하세요.\n");
	}
}
int main() {
	exerc();
	return 0;
}