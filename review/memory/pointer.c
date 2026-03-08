#include <stdio.h>
#include <stdint.h>

/*
	reference for pointers and double pointers
*/

void single_value() {
	int x = 10;
	int *ptr_x = &x; // & gives us the location of x 
	printf("*ptr_x = x = %d\n", *ptr_x);
}

void string_ptr() {
	char *strs[] = {"hello", "good", "bye"};
	int length = sizeof(strs)/sizeof(char *);

	for(int i = 0; i < length; i++) {
		printf("string index[%d] = %s\n", i, *(strs + i));
	}
}

void double_pointer() {
	int nums[] = {1,2,4,8};
	int *ptr1 = nums;
	int **ptr2 = &ptr1;

	for(int i = 0; i < sizeof(nums)/sizeof(int); i++)
		printf("index[%d] = %d (%p)\n",
				i, *(*ptr2 + i), *ptr2 + i);
}

int main() {
	int arr[] = {1,2,3,4};		 
	int *ptr_arr = arr; // arr decays to a pointer
	int length = sizeof(arr)/sizeof(int);

	//for(int i = 0; i < length; i++)
		//printf("index[%d] = %d\n", i, *(ptr_arr + i));

	//single_value();
	//string_ptr();
	double_pointer();

	return 0;

} 
