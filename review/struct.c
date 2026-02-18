#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

typedef struct Points{
	int x;
	int y;
}Points;

void change(Points *ptr) {
	ptr->x;
}

int main(int argc, char **argv){
	Points *my_pt = malloc(sizeof(Points));
	change(my_pt);
	printf("%d\n", my_pt->x);
	return 0;

}
