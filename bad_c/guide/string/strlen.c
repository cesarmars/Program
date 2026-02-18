#include <stdio.h>

int strlength(char *ptr) {
	int lens = 0;
	while(*ptr++ != '\0') {
		lens ++;
	}
	return lens;
}

int main() {
	char str[] = "hello";
	printf("length of the strings is %d\n", strlength(str));

	int true_lens = sizeof(str)/sizeof(int);
	printf("the true length of the string is %d\n", true_lens);
	return 0;

}
