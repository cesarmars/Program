#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef double temperature;
int main() {
	temperature fahrenheit;
	temperature celsius;  
	char letter;

	printf("type f for fahrenheit or c for celsius here: ");
	scanf(" %c", &letter);

	if(letter == 'f') {
		printf("input temperature level here: ");
		scanf("%lf", &fahrenheit);
		printf("temperature is %f fahrenheit\n", fahrenheit);
	}
	else if(letter == 'c') {
		printf("input temperature level here: ");
		scanf("%lf", &celsius);	
		printf("temperature is %f celsius\n", celsius);
	}
	else 
		printf("Error\n");

	return 0;

}
