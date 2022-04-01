# include <stdio.h>
# include <limits.h>
# include <float.h>

void main() {
	printf("int형의 최솟값=%d입니다.\n", INT_MIN);
	printf("int형의 최댓값=%d입니다.\n", INT_MAX);
	printf("float형의 최솟값=%f입니다.\n", FLT_MIN);
	printf("float형의 최댓값=%f입니다.\n", FLT_MAX);
	printf("double형의 최댓값=%f입니다.\n", DBL_MAX);
	printf("int타입의 메모리 크기는 %d바이트\n", sizeof(int));
	printf("long타입의 메모리 크기는 %d바이트\n", sizeof(long));
	printf("double타입의 메모리 크기는 %d바이트\n", sizeof(double));
}