#include <stdio.h>

void ptr(int *arr) {
	*(arr + 1) += 1; // adding one to the element at index 1
}

int main() {
	int arr[] = {1,2,3};
	ptr(arr); //variable arr decays to a pointer to its first element 
	size_t len_arr = sizeof(arr)/sizeof(int);			  
	/* should print out [1,3,3] */
	for(int i = 0; i < len_arr; i++) printf("index[%d] = %d\n", i, *(arr + i));			  
	return 0;
}
