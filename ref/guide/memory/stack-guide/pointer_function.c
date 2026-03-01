#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* pointer functions 
 	a function that returns a pointer
 */

char *sayHi() {
	char *str = (char *) malloc(6 * sizeof(char));
	strcpy(str, "hello"); // includes the null-terminator
	return str;
}


int *printArray() {
	int *arr = (int *) calloc(2, sizeof(int));
	return arr;
}

int main() {
	/* pointer function char, sayHi() */
	char *x = sayHi();
	printf("char array is %s\n", x);
	for(int i = 0; i < strlen(x); i++)
		printf("index[%d] = %c\n", i, *(x + i));
	
	/* pointer function int, printArray() */	
	int *y = printArray();
	printf("int array is [%d, %d]\n", *y, *(y + 1));
	for(int i = 0; i < 2; i++)
		printf("index[%d] = %d\n", i, *(y + i));
	
	return 0;
}
