#include <stdio.h>

int add_values(int *a, int *b) {
	return *a + *b;
}

int main() {
	int x, y;
	x = 10;
	y = 20;

	printf("Addition via pointer: %d\n", add_values(&x, &y));
	printf("value of x: %d\n", x);
	printf("value of y: %d\n", y);
	
	return 0;


}
