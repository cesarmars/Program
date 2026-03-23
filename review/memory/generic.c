#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void swap(int *x, int *y) {
	int temp = *x;	
	*x = *y;
	*y = temp;
}

void swap_generic(void *x, void *y, size_t n) {
	// memcpy(dest, source, size_t)
	void *temp = malloc(n);
	memcpy(temp, x, n);
	memcpy(x, y, n);
	memcpy(y, temp, n);
}

void addOne(void *ptr) {
	*(int *) ptr += 1;
}

int main() {
	int a = 10, b = 11;
	swap(&a, &b);
	//printf("%d and %d now\n", a, b);


	int c = 20, d = 30;
	swap_generic(&c, &d, sizeof(int));
	printf("%d %d\n", c, d);
	
	int e = 32;
	addOne(&e);
	printf("%d\n", e);
	return 0;

}
