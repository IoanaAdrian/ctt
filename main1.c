#include "stdio.h"
#include "stdlib.h"
#include "string.h"
typedef void(f_pointer)(char*);

void test(char* s,f_pointer f){
	f(s);
	printf("string is %s\n",s);
}

void mod(char* s){
	s[1]='p';
}

int main(){
	char* s = malloc(sizeof(char)*10);
	strcpy(s,"carte");
	test(s,mod);
	return 0;	
}
