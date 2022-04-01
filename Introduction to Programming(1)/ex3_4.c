# include <stdio.h>

void main() {
	int i = 5;
	double w, d;
	w = i * i * 3.14;
	d = i * 2 * 3.14;
	printf("원의 넓이는 %f\n", w);
	printf("반지름이 %d인 원의 둘레는 %f\n", i, d);
}