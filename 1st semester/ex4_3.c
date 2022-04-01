# include <stdio.h>

void main() {
	int a, b, c, d;
	a = 10, b = 5, c = 7;
	a += 5;
	b -= 2;
	c *= 6;
	d = a % b;
	printf("a=%d b=%d c=%d d=%d", a, b, c, d);
}