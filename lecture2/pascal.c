#include "screen.h"
#include<stdio.h>
void setFGcolor(int color) {
	printf("\x1B[%dm", color);
	fflush(stdout);
}

void clearScreen(void) {
	printf("\x1B[2J");
	fflush(stdout);
}