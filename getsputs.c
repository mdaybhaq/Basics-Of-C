#include <stdio.h>
int main(){
	char str[100];
	gets(str); //inputs char with spaces ,fgets is new modified safe keyword.
	puts(str); //prints char with spaces ,fputs is new modified safe keyword.
	return 0;
}