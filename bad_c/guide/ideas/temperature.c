#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef int temperature;

int main(int num, char *val[]) {
	temperature fahrenheit;
	temperature celsius;  
	char *letter;
	char *number;
	long x;

	if(num == 1) 
		printf("not enough arguments\n");
	if(num > 3)
		printf("exceeds number of arguments\n");
	else {
		letter = *(val + 1);
		x = strtol(*(val + 2), &number, 10);
	}
	printf("%d\n", *number);

	if(strcmp(letter, "f") == 0)
		printf("fahren\n");
	if(strcmp(letter, "c") == 0)
		printf("c\n"); 

	return 0;

}
