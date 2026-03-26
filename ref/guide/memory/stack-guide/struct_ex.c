#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* using struct to create a new type struct Class, not a function, a declaration */
typedef struct infor{
	char *course;
	char *id;
	char *prof;
}Class;

/* function that returns a fully-initialzed struct Class arguments */
Class make_course(char *ptr_1, char *ptr_2, char *ptr_3) {
	Class holder = {ptr_1, ptr_2, ptr_3}; // local variable that lives in make_course()'s stack frame 
	return holder;
}

/* */
int main() {
	Class cs61c = make_course("Computer Science", "61c", "Dan Garcia"); // local variable that lives in main()'s stack frame
	printf("Course is %s %s taught by %s\n", cs61c.course, cs61c.id, cs61c.prof);
	printf("sizeof struct Class: %lu bytes\n", sizeof(cs61c));

	return 0;
}
