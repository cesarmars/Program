#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

// 64 bit machine, little-endian

typedef struct coords{
	int x;
	int y;
}Coord;

int main(){
	Coord *first = malloc(sizeof(Coord));
	(*first).x = 10;
	(*first).y = 20;

	printf("%d\n", first->x);
					
	return 0;
}

