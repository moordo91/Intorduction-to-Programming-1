# include <stdio.h>

void main() {
	int i, sum = 0;
	for (i = 1; i <= 50; i++) {
		if (i % 2 != 0)
			continue;
		sum += i;
	}
	printf("1-----50±îÁö Â¦¼öÇÕ=%d\n", sum);
}