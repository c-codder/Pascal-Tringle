#include<stdio.h>

int main(void) {
	printf("Hiii!! \n");
	int n_rows;
	printf("Enter the number of years");
	scanf_s("%d", &n_rows);
	pascal_triangle(n_rows);
	return 0;
}