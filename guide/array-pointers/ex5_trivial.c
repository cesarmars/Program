#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int *p, *q, x;
	int a[4];
	p = &x;
	q = a + 1;

	*p = 1; // int x = 1;
	
	/* pointer variable p (p = &x;) points to the address of integer variable x (int x;), dereferencing the pointer (*p = 1;) accesses the value stored at that address (int x;). 
	 * when you call p, you call the address of variable x (int x;).
	 * when you call &p, you call the address of the pointer variable (int *p;)
	 * */

	printf("*p:%d , p:%x, &p:%x\n", *p, p, &p);

	*q = 2; // [0,2,0,0]

	/* pointer variable q (q = a + 1) points to the address of variable a integer  array of length 4 (int a[4];), where q = a + 1 points the the 1 index of the array.
	 * when you call q, you call the address of variable a at index 1
	 * when you call &q, you call the address of the pointer variable
	 * */

	printf("*q:%d, q: %x, &q: %x\n", *q, q, &q);

	*a = 3;
	printf("*a:%d, a:%x, &a:%x\n", *a, a, &a);

	return 0;



}
