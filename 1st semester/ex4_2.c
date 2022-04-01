# include <stdio.h>

void main() {
	int a, b, c, d;
	a = 10, b = 5;
	c = a % b;
	printf("나머지=%d\n", c);
	++a;
	printf("a=%d b=%d\n", a, b++);
	d = a % b;
	printf("나머지=%d, b결과=%d\n", d, --b);
}