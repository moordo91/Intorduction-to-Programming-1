# include <stdio.h>

void main() {
	int a = 'A';
	short b = 32760;
	printf("���=%d\n", a + b);

	printf("a�� �޸� ũ��=%d����Ʈ\n", sizeof(a));
	printf("b�� �޸� ũ��=%d����Ʈ\n", sizeof(b));
	printf("a+b�� �޸� ũ��=%d����Ʈ\n", sizeof(a + b));
}