# include <stdio.h>

void main() {
	int a;
re:
	puts("값을 입력하세요");
	scanf_s("%d", &a);
	if (a >= 10)
		puts("10보다 크거나 같은 값입니다.");
	else
	{
		puts("10보다 작은 값입니다.");
		goto re;
	}
}