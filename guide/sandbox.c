#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
	const char *user_name;
	const char *key_word;
	int pin; 
}Login;

Login *show_login(char *name, char *password, int pin) {
	Login *maker = (Login *) malloc(sizeof(Login));
	maker->user_name = name;
	maker->key_word = password;
	maker->pin = pin;
	return maker;
}

bool check(char **x) {
	if(strcmp(*x, "cesar") == 0) {
		Login *user = show_login("cesar", "mthes90", 12);
		printf("name is %s, keyword is %s and your pin is %d\n",
				user->user_name, user->key_word, user->pin);
		return true;
	}
	else {
		printf("incorrect name\n");
		return false;
	}
}

int main(int count, char *value[]) {
	if(count == 1)
		printf("remember to input a name\n");
	if(count > 2)
		printf("exceeds argument size\n");
	else
		for(int i = 1; i < count; i ++)
			check(value + i); 
	
	return 0;
}
