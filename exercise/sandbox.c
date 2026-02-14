#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int *ptr;
	*ptr = 10;
	free(ptr);
	return 0;
}
