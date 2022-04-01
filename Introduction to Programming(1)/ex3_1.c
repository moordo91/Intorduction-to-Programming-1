# include <stdio.h>

void main() {
	int a = 'A';
	short b = 32760;
	printf("결과=%d\n", a + b);

	printf("a의 메모리 크기=%d바이트\n", sizeof(a));
	printf("b의 메모리 크기=%d바이트\n", sizeof(b));
	printf("a+b의 메모리 크기=%d바이트\n", sizeof(a + b));
}