# include <stdio.h>

void main() {
	int h, w;
	double hm, bmi;
	printf("당신의 키를 입력하세요\n");
	scanf_s("%d", &h);
	printf("당신의 몸무게를 입력하세요\n");
	scanf_s("%d", &w);
	hm = (double)h / 100;
	bmi = w / (hm * hm);
	printf("당신의 체질량 지수는 %.2f입니다\n", bmi);
	if (bmi < 18.5)
		printf("당신은 저체중입니다\n");
	else if (bmi >= 18.5 && bmi <= 24.9)
		printf("당신은 정상체중입니다\n");
	else if (bmi >= 25.0 && bmi <= 29.9)
		printf("당신은 과체중입니다 관리를 하십시오\n");
}