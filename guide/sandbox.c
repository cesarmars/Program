#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
	char *name;
	char *whoami;
	int pin;
}Emails;

Emails *make_email(char *self_name, char *self_whoami, int self_pin) {
	Emails *make = (Emails *) malloc(sizeof(Emails));
	strcpy(make->name, self_name);
	strcpy(make->whoami, self_whoami);
	make->pin = self_pin;
	return make;
}

int main() {
	typedef int number;
	number x = 10;
	printf("using typedef to create an alias name for an exisitng type, integer, number: %d\n", x);

	Emails *user = make_email("bina", "binaHerron", 303);
	printf("name is %s, prompt is %s@linux, and your pin is %d\n",
			user->name, user->whoami, user->pin);
	

	return 0;

}
