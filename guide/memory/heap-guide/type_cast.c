#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/* explicit typecasting heap */
	int cap = strlen("cesar") + 1;
	char *name = (char *) calloc(cap, sizeof(*name));
	name = realloc(name, 100 * sizeof(*name));

	if (name == NULL) {
		printf("error\n");
		name = realloc(name, 0);
		return 1;
	}


	return 0;
}

