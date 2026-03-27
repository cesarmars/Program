#include <stdio.h>

int main(){
	char *str = "Hello World";
	char *ptr_1 = str;
	char **ptr_2 =  &ptr_1;
	printf("%c\n", *(*ptr_2+1)); // prints out the letter e
	
	int arr[] = {1,2,4,8};	
	int *ptr_arr = arr;
	printf("%d\n", *(ptr_arr+1));
	return 0;
}
