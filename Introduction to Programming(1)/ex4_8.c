# include <stdio.h>

void main() {
	int a, i;
	for (i = 0; i < 5; i++) {
		printf("���� �Է��ϼ���\n");
		scanf_s("%d", &a);
		if (a % 2 == 0)
			printf("%d�� ¦���Դϴ�.\n", a);
		else
			printf("%d�� ¦���� �ƴմϴ�.\n", a);
	}
}