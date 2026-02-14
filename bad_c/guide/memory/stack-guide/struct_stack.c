#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* using struct to create a new type struct Class, not a function, a declaration */
struct Class {
	char course[50];
	char id[50];
	char prof[50];
};

/* function that returns a fully-initialzed struct Class arguments */
struct Class make_course(const char *course, const char *id, const char *prof) {
	struct Class one; // local variable that lives in make_course()'s stack frame 
	strcpy(one.course, course);
	strcpy(one.id, id);
	strcpy(one.prof, prof);
	return one;
}

/* */
int main() {
	struct Class cs61c = make_course("Computer Science", "61c", "Dan Garcia"); // local variable that lives in main()'s stack frame
	printf("Course is %s %s taught by %s\n", cs61c.course, cs61c.id, cs61c.prof);
	printf("sizeof struct Class: %lu bytes\n", sizeof(cs61c));

	return 0;
}
