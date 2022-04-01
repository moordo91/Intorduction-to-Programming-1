# include <stdio.h>

void main() {
	int a = 0;
	while (1)
	//int a;
	//for (;;)
	{
		puts("값을 입력하세요");
		scanf_s("%d", &a);
		if (a == 999)
			break;
	}
}