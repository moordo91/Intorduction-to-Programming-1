# include <stdio.h>
# include <limits.h>
# include <float.h>

void main() {
	printf("int���� �ּڰ�=%d�Դϴ�.\n", INT_MIN);
	printf("int���� �ִ�=%d�Դϴ�.\n", INT_MAX);
	printf("float���� �ּڰ�=%f�Դϴ�.\n", FLT_MIN);
	printf("float���� �ִ�=%f�Դϴ�.\n", FLT_MAX);
	printf("double���� �ִ�=%f�Դϴ�.\n", DBL_MAX);
	printf("intŸ���� �޸� ũ��� %d����Ʈ\n", sizeof(int));
	printf("longŸ���� �޸� ũ��� %d����Ʈ\n", sizeof(long));
	printf("doubleŸ���� �޸� ũ��� %d����Ʈ\n", sizeof(double));
}