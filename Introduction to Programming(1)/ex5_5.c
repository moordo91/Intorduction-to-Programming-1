# include <stdio.h>

void main() {
	int a = 0, sum = 0;
	while (a <= 100)
	{
		sum += a;
		printf("1부터 %d까지의 짝수의 합 = %d\n", a, sum);
		//a++
		a += 2;
	}
	//printf("1---100까지 합=%d", sum);
}