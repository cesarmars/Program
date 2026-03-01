#include <stdio.h>
void increment(int **ptr_increment) {
	*ptr_increment[0] += 1;
}
int length_of_string(char **str){
	int i = 0;
	while(*str[0]++ != '\0') {
		i ++;
	}
	return i;
}

int main() {
	char *str = "hello";
	int len = length_of_string(&str);
	printf("length is %d\n", len);

	int nums[] = {1,2};
	int *ptr = nums;
	increment(&ptr);
	printf("[%d, %d]\n", *ptr, *(ptr + 1));

	// trivial example 
	
	int y = 20;
	int *ptr_one = &y;
	printf("size of pointer %lu bytes\n", sizeof(ptr_one)); // size of int *
	int **ptr_two = &ptr_one;
	printf("size of another pointer %lu bytes\n", sizeof(ptr_two)); // size of int **  
	return 0;

}
