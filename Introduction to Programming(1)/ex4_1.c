# include <stdio.h>

void main() {
	int a, b, c, d, e, f;
	printf("ù��° �� �Է�\n");
	scanf_s("%d", &a);
	printf("�ι�° �� �Է�\n");
	scanf_s("%d", &b);
	c = a + b;
	d = -a + b;
	e = a - b;
	f = a * b;
	printf("�ᱣ�� %d %d %d %d %d", c, d, e, f, a / b);
}