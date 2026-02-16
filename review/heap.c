#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 
	reference for dynamic memory allocation
*/

void malloc_ex() {
	/* single value request using malloc */
	int *x = malloc(sizeof(int));
	*x = 10; 
	printf("%d\n", *x);
	free(x);
}

void calloc_ex() {
	/* calloc intializes with all zeros*/
	int *arr = calloc(4, sizeof(int));
	for(int i = 0; i < 4; i++) {
		*(arr + i) = i + 1; // not anymore
		printf("index[%d] = %d\n", i, *(arr + i));
	}
	free(arr);	
}

void realloc_ex() {
	char *str = malloc(6 * sizeof(char));
	strcpy(str, "hello");
	printf("%s\n", str);
	char *new_str = realloc(str, 12 * sizeof(char));
	strcpy(new_str, "hello world");
	printf("%s\n", new_str);
	free(str);
}

int main() {
	malloc_ex();
	calloc_ex();
	realloc_ex();
	return 0;
}
