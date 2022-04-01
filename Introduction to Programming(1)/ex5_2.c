# include <stdio.h>

void main() {
	// int re;
	// scanf_s("%d", &re);
	char re;
	re = getchar();
	switch (re) {
	case 'a':
		puts("당신은 a을 입력했군요\n");
		break;
	case 'b':
		puts("당신은 b를 입력했군요\n");
		break;
	case 'c':
		puts("당신은 c을 입력했군요\n");
		break;
	case 'd':
		puts("당신은 d를 입력했군요\n");
		break;
	default:
		puts("당신은 a~d 이외의 값을 입력했군요\n")
	}
}