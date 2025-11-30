#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
typedef int temperature;
int main() {
	temperature *fahrenheit;
	temperature *celsius;  
	char letter;

	printf("type f for fahrenheit or c for celsius here: ");
	scanf("%c", &letter);

	if(letter == 'f')
		printf("hello this is fahrenheit\n");
	else if(letter == 'c')
		printf("hello this is celsius\n");
	else 
		printf("Error\n");

	return 0;





}
