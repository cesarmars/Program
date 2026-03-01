#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char global_name[100];
char *un = "Jared";

typedef struct {
	char name[100]; 
	int age;
	char user_name[100];
	char pass[100]; 
	double balance;
	char address[200];
}Credential;

Credential makeUser(char n[100], int a, char email[100], char p[100], double b, char add[200]) {
	Credential user;
	strcpy(user.name, n);
	user.age = a;
	strcpy(user.user_name, email);
	strcpy(user.pass, p);
	user.balance = b;
	strcpy(user.address, add);
	return user;
}

int main() {
	Credential person = makeUser("Jake", 18, "jake_cedar", "demo", 400.3, "2425 Ridge Road");

	printf("type your name here: ");
	scanf("%s", global_name);

	if(strcmp(global_name, person.name) == 0) printf("Hello %s!\n", person.name);
	else printf("Fuck off %s!\n", global_name);

	return  0;

}
