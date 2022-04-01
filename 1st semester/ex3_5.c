# include <stdio.h>

void main() {
	int a, b, c;
	printf("밑변을 입력하세요\n");
	scanf_s("%d", &a);
	printf("높이를 입력하세요\n");
	scanf_s("%d", &b);
	c = a * b;
	printf("밑변이 %d이고, 높이가 %d인 사각형의 넓이는 %d", a, b, c);

}