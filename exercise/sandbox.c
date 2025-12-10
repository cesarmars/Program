#include <stdio.h>

int main() {
	int arr = 9;
	int *ptr = &arr;
	int **ptr_two = &ptr; 
	printf("%d\n", **ptr_two);
	return 0;
}
