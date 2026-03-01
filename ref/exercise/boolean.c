#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef double temperature;
int main(int num, char *val[]) {
	temperature fahrenheit;
	temperature celsius;  
	char *letter;

	for(int i = 0; i < num; i++)
		printf("index[%d] = %s\n", i, *(val + i));

	if(num == 1 || num > 2) {
		printf("no input\n");
	}
	else {
		letter = *(val + 1);
	}

	if(letter == "f")
		printf("fahren\n");
	if(letter == "c")
		printf("c\n");


	
	

	return 0;

}
