#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char *name;
	char *whoami;
	int pin;
}Emails;

int main() {
	Emails *x = (Emails *) malloc(sizeof(Emails));
	x->name = "cedar";
	x->whoami = "cesar";
	x->pin = 4;
	free(x);

	return 0;
}
