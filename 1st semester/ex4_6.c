# include <stdio.h>

void main() {
	int a, b, c;
	printf("두 값을 입력하세요\n");
	scanf_s("%d %d", &a, &b);
	printf("두 값 중 큰 값은 %d입니다.\n", (a > b) ? a : b);
	c = (a < b) ? a : b;
	printf("두 값 중 작은 값은 %d입니다.\n", c);
}