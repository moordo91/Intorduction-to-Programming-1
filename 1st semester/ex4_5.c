# include <stdio.h>

void main() {
	int a = 3, b = 2, c, d, e;
	c = a == ++b;
	printf("c��� = %d\n", c);
	d = (a == b) && (a > c);
	e = (a == c) || (--a < b);
	printf("d�ᱣ��=%d e�ᱣ��=%d\n", d, e);
}