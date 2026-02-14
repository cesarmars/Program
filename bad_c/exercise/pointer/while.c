#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	const char *name = "lucca";

	int x = 0;
	while(x < strlen(name)) {
		printf("index[%d] = %c\n", x, *(name + x));
		x++;
	}
	return 0;
}
