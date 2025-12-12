#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	const char *string = "HEllo";
	const char *word = "Hello";

	int result = strcmp(string, word); // argv1 > argv2 ()
	printf("%d\n", result);
	return 0;
}
