#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char string[] = "hello world";
	size_t n = strlen(string) + 1;
	memmove(string + 6, string, 5);
	printf("%s\n", string);
	return 0;
}
