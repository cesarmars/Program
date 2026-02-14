#include <stdio.h>
#include <stdbool.h>

bool check_30(int a, int b) {
	int sum = a + b;

	if(sum == 30) return true;
	else if(a == 30 | b == 30) return true;
	else return false;
}

int main() {
	printf("Check %d\n", check_30(20,10));
	return 0;
}
