# include <stdio.h>

void main() {
	int a = 0, sum = 0;
	while (a <= 100)
	{
		sum += a;
		printf("1���� %d������ ¦���� �� = %d\n", a, sum);
		//a++
		a += 2;
	}
	//printf("1---100���� ��=%d", sum);
}