# include <stdio.h>

void main() {
	int i = 1, j;
	do {
		printf("%d ´Ü\n", i);
		j = 1;
		do {
			printf("%d * %d = %d\n", i, j, i * j);
			j++;
		} while (j <= 9);
		i++;
	} while (i <= 9);
}