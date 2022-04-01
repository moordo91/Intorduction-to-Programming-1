# include <stdio.h>

void main() {
	int h, w;
	double hm, bmi;
	printf("당신의 키를 입력하세요(cm)...\n");
	scanf_s("%d", &h);
	printf("당신의 체중을 입력하세요...\n");
	scanf_s("%d", &w);
	hm = (double)h / 100;
	bmi = w / (hm * hm);
	printf("당신의 체질량 지수는 %0.2f입니다.", bmi);
}