#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mystery(short *ptr, int len) {
	printf("%d\n", len);
	printf("size of the pointer variable is %lu bytes\n", sizeof(ptr));
}

int main() {
	short nums[] = {1,2,20,100,105};
	printf("size of nums array is %lu bytes\n", sizeof(nums));
	mystery(nums, sizeof(nums)/sizeof(*nums));
	return 0;

}
