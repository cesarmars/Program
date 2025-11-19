#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/* creates space for the word "hello" */
	int cap = strlen("hello") + 1; // number of characters for the word "hello" plus the null terminator character '\0'  
	printf("cap: %d\n", cap);
	char *str = malloc(cap * sizeof(*str)); // or malloc(cap * sizeof(char));
	*str = 'h';
	*(str + 1) = 'e';
	*(str + 2) = 'l';
	*(str + 3) = 'l';
	*(str + 4) = 'o';
	*(str + 5) = '\0';
	
	/* gets the number of char's of the word "hello" before the null terminator, should be 5, strlen is a runtime function*/
	int len = strlen(str);
	printf("strlen: %d\n", len);

	/* prints the string from the heap */
	printf("%s\n", str);

	/* sizeof str should be a pointer size because malloc returns a pointer */
	printf("sizeof(str): %zu bytes\n", sizeof(str));

	/* print each elements address, grows upwards */	
	for(int i = 0; i < cap; i ++)
		printf("%p\n", str + i);
	
	/* using realloc() to reallocate str */
	const char *hey = "hey"; // string literal, string lives in static memory, pointer variable lives in the stack	
	char *temp = realloc(str, 4); // realloc(dest, size);
	
	if(temp == NULL) {
		free(temp);
		return 1;
	}

	str = temp; // str size is now 4, ['h', 'e', 'l', '\0']
	strcpy(str, hey); // strcpy(dest, source); now becomes ['h', 'e', 'y', '\0']
	printf("reallocated str via temp, str: %s, temp: %s\n", str, temp);
	free(str); // also frees temp, because, str = temp;
	
	/* using calloc(), create an integer array of length 2 */	
	int *nums = calloc(2, sizeof(*nums));
	printf("[%d, %d]\n", *nums, *(nums + 1));
	int option[] = {10,20,30,50,90,200};
	memcpy(nums, option + 4, 2 * sizeof(*nums));
	printf("[%d, %d]\n", *nums, *(nums + 1));
	nums = realloc(nums, 0);			   
	
		
			   
	

	return 0;
	

}
