#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/* explicit typecasting heap */
	int cap = strlen("cesar") + 1;
	char *name = (char *) malloc(cap * sizeof(*name));

	if (name == NULL) {
		printf("error\n");
		name = realloc(name, 0); // another way of saying free(name);
		return 1;
	}

	for(int i = 0; i < cap; i++)
		printf("index[%d] = %c\n", i, *(name + i));

	free(name);

	return 0;
}

