# include <stdio.h>

void main() {
	int a, i;
	for (i = 0; i < 5; i++) {
		printf("값을 입력하세요\n");
		scanf_s("%d", &a);
		if (a % 2 == 0)
			printf("%d는 짝수입니다.\n", a);
		else
			printf("%d는 짝수가 아닙니다.\n", a);
	}
}