# include <stdio.h>

void main() {
	int a, b, c;
	for (int i = 0; i < 3; i++) {
		printf("두 값을 입력하세요\n");
		scanf_s("%d %d", &a, &b);
		if (a > b) {
			c = a - b;
			printf("a - b = %d\n", c);
		}
		else if (a < b)
		{
			c = b - a;
			printf("a - b = %d\n", c);
		}
		else
			printf("a와 b의 값이 같다\n");
	}
}