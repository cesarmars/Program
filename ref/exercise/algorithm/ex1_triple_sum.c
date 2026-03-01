#include <stdio.h>

int sum_or_triple_sum(int x, int y) {
	if (x != y) return (x + y);
	else return (3 * (x + y));
}

int main() {
	printf("Answer: %d\n", sum_or_triple_sum(3,3));
	return 0;
}
