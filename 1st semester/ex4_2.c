# include <stdio.h>

void main() {
	int a, b, c, d;
	a = 10, b = 5;
	c = a % b;
	printf("������=%d\n", c);
	++a;
	printf("a=%d b=%d\n", a, b++);
	d = a % b;
	printf("������=%d, b���=%d\n", d, --b);
}