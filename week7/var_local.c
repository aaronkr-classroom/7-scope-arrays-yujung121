// var_local.c
#include <stdio.h>

int Sum(int x, int y) {
	return x + y; // 0, null
}

int main(void) {
	int a = 3,
		b = 5;
	
	printf("%d + %d = %d", a, b, Sum(a, b));

	getch();

	return 0;
}