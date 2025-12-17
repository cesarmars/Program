#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef double temperature;
int main(int num, char *val[]) {
	temperature fahrenheit;
	temperature celsius;  
	char *letter;

	if(num == 1 || num > 2) {
		printf("error\n");
	}
	else {
		letter = *(val + 1);
	}

	if(strcmp(letter, "f") == 0)
		printf("fahren\n");
	if(strcmp(letter, "c") == 0)
		printf("c\n"); 
	else
		printf("not valid\n");

	return 0;

}
