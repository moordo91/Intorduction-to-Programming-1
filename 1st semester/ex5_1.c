# include <stdio.h>

void main() {
	int h, w;
	double hm, bmi;
	printf("����� Ű�� �Է��ϼ���\n");
	scanf_s("%d", &h);
	printf("����� �����Ը� �Է��ϼ���\n");
	scanf_s("%d", &w);
	hm = (double)h / 100;
	bmi = w / (hm * hm);
	printf("����� ü���� ������ %.2f�Դϴ�\n", bmi);
	if (bmi < 18.5)
		printf("����� ��ü���Դϴ�\n");
	else if (bmi >= 18.5 && bmi <= 24.9)
		printf("����� ����ü���Դϴ�\n");
	else if (bmi >= 25.0 && bmi <= 29.9)
		printf("����� ��ü���Դϴ� ������ �Ͻʽÿ�\n");
}