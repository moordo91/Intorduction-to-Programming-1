# include <stdio.h>

void main() {
	int i, a, sum = 0;
	for (i = 1; i <= 5; i++) {
		puts("값을 입력하세요");
		scanf_s("%d", &a);
		sum += a;
	}
	printf("5개의 숫자의 합=%d", sum);
}