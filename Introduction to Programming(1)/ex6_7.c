# include <stdio.h>

void main() {
	int i = 1, j = 1, a, sum;
	while (i <= 3) {
		sum = 0;
		printf("숫자를 입력하세요");
		scanf_s("%d", &a);
		while (j <= a) {
			sum += j;
			j++;
		}
		printf("1-----%d까지의 합계 = %d\n", a, sum);
		i++;
		j = 1;
	}
}