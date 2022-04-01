# include <stdio.h>

void main() {
	int a, b, c, d;
	a = 0x9;
	b = 0x12;
	c = 03;
	d = 07;
	printf("결과(16진수)=%x\n", a + b);
	printf("결과(8진수)=%o\n", c + d);
}