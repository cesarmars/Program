#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct temperature {
	char **locations; // 8 bytes
	float num; // 8 bytes
}temp_t;

int main() {
	size_t temp_size = sizeof(temp_t);	
	printf("%d\n", temp_size);
	return 0;

}
