# include <stdio.h>

void main() {
	int a, sum = 0;
	for (a = 1; a <= 100; a++)
		sum += a;
	printf("1---100까지의 합=%d", sum);
}