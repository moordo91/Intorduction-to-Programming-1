# include <stdio.h>

void main() {
	int i, a, sum = 0;
	for (i = 1; i <= 5; i++) {
		puts("���� �Է��ϼ���");
		scanf_s("%d", &a);
		sum += a;
	}
	printf("5���� ������ ��=%d", sum);
}