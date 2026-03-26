#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct info{
	int x;
	int y;
}Array;

int main(){
	/* dot notation*/
	Array holder; // Array holder = {20,40};
	holder.x=20;
	holder.y=40;
	printf("[%d, %d]\n", holder.x, holder.y);
	return 0;

}
