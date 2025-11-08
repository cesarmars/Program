#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* pointer functions 
 	a function that returns a pointer
 */

char *sayHi() {
	char *str = malloc(6 * sizeof(char));
	strcpy(str, "hello");
	return str;
}


int *printArray() {
	int *arr = malloc(2 * sizeof(*arr));
	*arr = 1;
	*(arr + 1) = 2;
	return arr;
}

int main() {
	/* pointer function char */
	char *x = sayHi();
	printf("char array is %s\n", x);
	for(int i = 0; i < strlen(x); i++)
		printf("index[%d] = %c\n", i, *(x + i));
	
	/* pointer function int */	
	int *y = printArray();
	printf("int array is [%d, %d]\n", *y, *(y + 1));
	for(int i = 0; i < 2; i++)
		printf("index[%d] = %d\n", i, *(y + i));
	
	return 0;
}
