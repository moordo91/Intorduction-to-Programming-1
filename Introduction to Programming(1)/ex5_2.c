# include <stdio.h>

void main() {
	// int re;
	// scanf_s("%d", &re);
	char re;
	re = getchar();
	switch (re) {
	case 'a':
		puts("����� a�� �Է��߱���\n");
		break;
	case 'b':
		puts("����� b�� �Է��߱���\n");
		break;
	case 'c':
		puts("����� c�� �Է��߱���\n");
		break;
	case 'd':
		puts("����� d�� �Է��߱���\n");
		break;
	default:
		puts("����� a~d �̿��� ���� �Է��߱���\n")
	}
}