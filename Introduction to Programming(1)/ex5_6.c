# include <stdio.h>

void main() {
	int a = 0, sum = 0;
	do
	{
		a += 2;
		sum += a;
	} while (a < 100);
	printf("1---100���� ¦���� ��=%d", sum);
}