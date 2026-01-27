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
		Login *user = show_login("cesar", "insert_keyword", 12);
		printf("token is %s\n", user->key_word);
		return true;
	}
	else {
		printf("name not found\n");
		return false;
	}
}

int main(int argc, char *argv[]) {
	if(argc == 1)
		printf("remember to input a name\n");
	if(argc > 2)
		printf("exceeds argument size\n");
	else
		for(int i = 1; i < argc; i ++)
			check(argv + i); 
	
	return 0;
}
