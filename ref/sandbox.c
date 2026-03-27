#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
/*
	general use, for creative thinking (sandbox)
*/

int main(int argc, char *argv[]) {
	int arr[]={1,2,4};

	int s = 0;
	for(int i=0; i < sizeof(arr)/sizeof(int); i++) s=s+*(arr+i);

	printf("%d\n", s);
		
	return 0;	

}
