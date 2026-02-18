#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const int h;
const int m;
const int s;

int main(int argc, char **argv) {
	if(argc == 1)
		printf("type 'clock'\n");
	if(argc > 2)
		printf("error\n");

	return 0;
		
}
