#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	const char *name = "ceddar";
	printf("name: %s\n", name);
	
	for(int i = 0; i < strlen(name); i++) {
		for(int j = i + 1 ; j < strlen(name); j++) {
			if (*(name + i) == *(name + j)) {
				printf("same letter at index %d = '%c' and at index %d = '%c' \n", i, *(name + i), j, *(name + j));
			}
		} 
	}

	return 0;

}
