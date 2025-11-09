#include <stdio.h>
void increment(int **ptr_increment) {
	*ptr_increment += 1;
}

int main() {
	int x[] = {10, 20, 30};
	int *ptr = x;
	increment(&ptr);
	printf("%d and %p\n", *ptr, ptr);

	// trivial example 
	
	int y = 20;
	int *ptr_one = &y;
	printf("size of pointer %lu bytes\n", sizeof(ptr_one)); // size of int *
	int **ptr_two = &ptr_one;
	printf("size of another pointer %lu bytes\n", sizeof(ptr_two)); // size of int **  
	return 0;

}
