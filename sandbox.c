#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
/*
	general use, for creative thinking (sandbox)
*/
int mystrlen(char *str) {
	int count = 0;
	for(int i = 0; str[i] != 0; i++) 
		count ++;
	return count;
}

int main() {
	char word[] = "hello";
	printf("%d\n", mystrlen(word));
	return 0;	

}
