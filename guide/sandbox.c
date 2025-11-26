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
	make->name = self_name;
	make->whoami = self_whoami;
	make->pin = self_pin;
	return make;
}

int main() {
	Emails *user = make_email("bina", "binaHerron", 303);
	printf("name is %s, prompt is %s@linux, and your pin is %d\n",
			user->name, user->whoami, user->pin);
	

	return 0;

}
