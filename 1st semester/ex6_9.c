# include <stdio.h>

void main() {
	int i, a;
	while (1) {
		printf("���� ���� ���� �Է��ϼ���");
		scanf_s("%d", &a);
		if (a == 0)
			break;
		for (i = 1; i <= 9; i++)
			printf("%d * %d = %d\n", a, i, a * i);
	}
}