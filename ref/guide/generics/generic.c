#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void swap(void *a, void *b, size_t c) {
	*(int *)a += 1;
	void *temp =  malloc(c);
	memcpy(temp, a, c);
	memcpy(a, b, c);
	memcpy(b, temp, c);
	free(temp);
}

int main() {
	int x = 10, y = 20; 	
	swap(&x, &y, sizeof(int));
	printf("%d, %d\n", x, y);
	return 0;
}
