#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	for(int i = 1; i < argc; i++) {
		if(strcmp(*(argv + i), "hello") == 0)
			printf("success\n");
		else
			printf("failed\n");
	}
	
	int arr = 9;
	int *ptr = &arr;
	int **ptr_two = &ptr; 
	return 0;
}
