#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
/*
	general use, for creative thinking (sandbox)
*/
int main(int argc, char *argv[]) {
	int32_t arr[] = {0x0000000A, 0x00000014};
	int len = strlen((char *)arr);
	printf("%d\n", len);
	return 0;	

}
