# include <stdio.h>

void main() {
	int a, b, c;
	printf("�� ���� �Է��ϼ���\n");
	scanf_s("%d %d", &a, &b);
	printf("�� �� �� ū ���� %d�Դϴ�.\n", (a > b) ? a : b);
	c = (a < b) ? a : b;
	printf("�� �� �� ���� ���� %d�Դϴ�.\n", c);
}