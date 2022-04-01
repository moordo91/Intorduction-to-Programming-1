# include <stdio.h>

void main() {
	int a, b;
	printf("값을 입력하세요\n");
	scanf_s("%d", &a);
	if (a > 10) {
		a += 10;
		printf("덧셈 결과 = %d\n", a);
	}
	printf("결과 = %d\n", a);
}