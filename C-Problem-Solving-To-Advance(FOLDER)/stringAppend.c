#include <stdio.h>
#include <string.h>
int main(){

	char first[25]= "Ayubul "; //String Max limit [25] should be greater or equal to first+second string length so that second can fit inside first 
	char second[10]= "Haque";

	//strcat(first,second);

	printf("Final Word : %s", strcat(first,second));

	return 0;

}