# include <stdio.h>

void main() {
	int a, b, c;
	printf("두 값을 입력하세요\n");
	scanf_s("%d %d", &a, &b);
	c = a!= b;
	printf("c결과=%d\n", c);
	printf("비교결과=%d", a > b);
}