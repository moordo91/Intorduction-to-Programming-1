# include <stdio.h>

void main() {
	int a, b, c, d, e, f;
	printf("첫번째 값 입력\n");
	scanf_s("%d", &a);
	printf("두번째 값 입력\n");
	scanf_s("%d", &b);
	c = a + b;
	d = -a + b;
	e = a - b;
	f = a * b;
	printf("결괏값 %d %d %d %d %d", c, d, e, f, a / b);
}