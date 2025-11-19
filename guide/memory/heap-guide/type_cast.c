#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	/* explicit typecasting heap */
	int cap = strlen("cesar") + 1;
	char *name = (char *) malloc(cap * sizeof(*name));
	strcpy(name, "cesar");
	printf("my name is %s\n", name);
	free(name);
	return 0;
}

