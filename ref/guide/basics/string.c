#include <stdio.h>

int str_len(char *ptr){
	int count = 0;
	while(*ptr++ != '\0'){
		count ++;
	}
	return count;
}

int main(){
	char *str = "I live in static memory";
	printf("%d\n", str_len(str));	
	return 0;
}
