# include <stdio.h>

void main() {
	int a = 3, b = 2, c, d, e;
	c = a == ++b;
	printf("c°á°ú = %d\n", c);
	d = (a == b) && (a > c);
	e = (a == c) || (--a < b);
	printf("d°á±£°ª=%d e°á±£°ª=%d\n", d, e);
}