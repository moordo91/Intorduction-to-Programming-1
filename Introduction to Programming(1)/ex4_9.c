# include <stdio.h>

void main() {
	int a, b, c;
	for (int i = 0; i < 3; i++) {
		printf("�� ���� �Է��ϼ���\n");
		scanf_s("%d %d", &a, &b);
		if (a > b) {
			c = a - b;
			printf("a - b = %d\n", c);
		}
		else if (a < b)
		{
			c = b - a;
			printf("a - b = %d\n", c);
		}
		else
			printf("a�� b�� ���� ����\n");
	}
}