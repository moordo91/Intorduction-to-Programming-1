# include <stdio.h>

void main() {
	char grade;
	int pg;
	scanf_s("%d", &pg);
	switch (pg)
	{
	case 1:
	case 2:
	case 3:
		grade = 'a';
		break;
	case 4:
	case 5:
	case 6:
		grade = 'b';
		break;
	default:
		grade = 'c';
	}
	printf("����� ��������� %c�Դϴ�.", grade);
}