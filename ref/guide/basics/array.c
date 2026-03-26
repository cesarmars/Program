#include <stdio.h>

void print_idx_8(int *ptr){
	printf("%d @ %p\n", *(ptr+2), ptr+2);
}

int main(){
	int nums[8] = {1,2,3,4};
	print_idx_8(nums);
	return 0;
}
