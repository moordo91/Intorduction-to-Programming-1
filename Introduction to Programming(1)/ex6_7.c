# include <stdio.h>

void main() {
	int i = 1, j = 1, a, sum;
	while (i <= 3) {
		sum = 0;
		printf("���ڸ� �Է��ϼ���");
		scanf_s("%d", &a);
		while (j <= a) {
			sum += j;
			j++;
		}
		printf("1-----%d������ �հ� = %d\n", a, sum);
		i++;
		j = 1;
	}
}