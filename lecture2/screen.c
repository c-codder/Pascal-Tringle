#include "screen.h"
#include<stdio.h>
void pascal_triangle(int rows) {
	int n, k;
	clearScreen();
	for (n = 0; n < rows; n++) {
		setFGcolor(RED + n % 7);
		for (k = 0; k <= n; k++) {
			printf("%d ", nchoosek(n, k));
		}
		printf("\n");
	}
}

int nchoosek(int n, int k) {
	return factor(n) / factor(k) / factor(n - k);
}

int factor(int number) {
	if (number == 0) return 1;
	else return number * factor(number - 1);
}
void gotoXY(int row, int col) {
	print
}