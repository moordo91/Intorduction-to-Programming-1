# include <stdio.h>

void main() {
	int a;
re:
	puts("���� �Է��ϼ���");
	scanf_s("%d", &a);
	if (a >= 10)
		puts("10���� ũ�ų� ���� ���Դϴ�.");
	else
	{
		puts("10���� ���� ���Դϴ�.");
		goto re;
	}
}