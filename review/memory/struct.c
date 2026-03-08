#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

// 64 bit machine, little-endian

typedef struct points_padding{
	int x; // 4 bytes (offset 0-3)
		   // 4 bytes padding (offset 4-7)
	char *string; // 8 bytes (offset 8-15)
	int y; // 4 bytes (offset 16-19)
		   // 4 bytes padding (offset 20-23)
}point;


int main(int argc, char *argv[]){
	point my_pt = {1,"hello",2};
	point *ptr = &my_pt;
	printf("%d\n", ptr->y);
	printf("%d\n", sizeof(point));
	return 0;
}

