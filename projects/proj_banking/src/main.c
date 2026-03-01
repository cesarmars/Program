#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef struct data {
	char *name;
	int age;
	int balance;
	int savings;
}data_t;

data_t *makeClient(char *name, int x, double y, long z) {
	data_t *client = malloc(sizeof(data_t));
	client->name = name;
	client->age = x;
	user->balance = y;
	user->savings = z;
	return client;
}


int main() {
	data_t *mask = makeClient("Jared", 20, 200.0, 5000); 
	displayClient(one);
	return 0;
	



}
