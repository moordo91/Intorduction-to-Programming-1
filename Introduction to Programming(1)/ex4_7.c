# include <stdio.h>

void main() {
	int a, b;
	printf("���� �Է��ϼ���\n");
	scanf_s("%d", &a);
	if (a > 10) {
		a += 10;
		printf("���� ��� = %d\n", a);
	}
	printf("��� = %d\n", a);
}