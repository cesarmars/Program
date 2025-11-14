#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char *str = malloc(6 * sizeof(char));
	memcpy(str, "hello", 6 *sizeof(char));
	printf("str is %s\n", str);
	return 0;
}
