#include <stdio.h>

int cubed(int *x) {
	return *x * *x * *x;
}

int main() {
	int arr[] = {1,2,3};
	
	for(int i = 0; i < 3; i++) {
		printf("x[%d] = %d, %d\n", i,  *(arr + i), cubed(arr + i));
	}
	return 0;

}
