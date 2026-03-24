#include <stdio.h>
#include <stdlib.h>

typedef struct names{
	char **one;
}Name;

int main(){
	char *temp[] = {"hello", "there"};
	Name user;
	user.one = temp;

	printf("%s\n", *(user.one+1));
	return 0;
}
