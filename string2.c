#include <stdio.h>
int main(){
	char firstName[50];
	scanf("%s",firstName); //%s print directly a word without 
	//loop but doesnt print two names with space.
	printf("Your name is : %s", firstName);
	return 0;
}