# include <stdio.h>

void main() {
	int h, w;
	double hm, bmi;
	printf("����� Ű�� �Է��ϼ���(cm)...\n");
	scanf_s("%d", &h);
	printf("����� ü���� �Է��ϼ���...\n");
	scanf_s("%d", &w);
	hm = (double)h / 100;
	bmi = w / (hm * hm);
	printf("����� ü���� ������ %0.2f�Դϴ�.", bmi);
}