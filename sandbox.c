#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
/*
	general use, for creative thinking (sandbox)
*/
int main(int argc, char *argv[]) {
	int x[5] = {1,2,4,8};
	char *len = (char *)x;
	printf("%p\n", len);

	return 0;	

}
