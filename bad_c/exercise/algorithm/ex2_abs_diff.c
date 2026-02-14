#include <stdio.h>
#include <stdlib.h>

int diff_abs_51(int x) {
	if(x > 51) return 3 * (x - 51);
	else return abs(x - 51);
}

int main() {
	printf("Answer %d\n", diff_abs_51(51));
	return 0;
}
