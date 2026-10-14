#include <stdio.h>

int maind()
{
	int ts, h, m, s;
	printf("초를 입력하세요:");
	scanf("%d", &ts);
	h = ts / 3600;

	int ts2 = ts % 3600;
	m = ts2 / 60;
	s = ts2 % 60;

	printf("%d초는 %d시간 %d분 %d초입니다.\n", ts, h, m, s);

	return 0;
}