#include <stdio.h>

// memory alignment

typedef struct noPadding {
	int x; // 4 bytes (0-3)
	int y; // 4 bytes (4-7)
	char *str; // 8 bytes (8-15)
}rand1;

typedef struct padding {
	int x; // 4 bytes (0-3)
	char *str; // 8 bytes (4-11)
	int y; // 4 bytes (12-15)
}rand2;


int main() {
	printf("rand1 = %d, rand2 = %d\n", sizeof(rand1), sizeof(rand2));
	return 0;
}
