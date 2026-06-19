#include <stdio.h>
int main(){
	char *canChange = "hellow World";
	puts(canChange);
	canChange = "hellow";
	puts(canChange);

	char cannotChange[]= "hellow World";
	puts(cannotChange);
	//cannotChange="hello" // new character cant be assinged now but in above it can be..
	return 0;
}