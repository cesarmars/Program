#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int target;
	int arr[2];
}Array;

int main() {
	/* pointer notation */
	int i[] = {2,0};
	Array x;
	Array *ptr = &x;
	ptr->target = 10; // or (*ptr).target
	memcpy(ptr->arr, i, sizeof(ptr->arr)); // or (*ptr).arr
	printf("%lu\n", sizeof(ptr->arr));

	/* dot notation*/
	int j[] = {1,2};
	Array y;
	y.target = 20;
	memcpy(y.arr, j, sizeof(y.arr));
	printf("%lu\n", sizeof(y.arr));

	return 0;

}
