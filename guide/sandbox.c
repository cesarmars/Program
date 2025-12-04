#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void addone(int **x){
	**x += 1;
}

int main() {
	int a = 8;
	int *ptr_one = &a;
	addone(&ptr_one);
	
	return 0;
}
