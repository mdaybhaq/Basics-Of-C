#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *string_append(char *s1, char *s2);

int main(){
	char first[20]= "abc";
	char second[10]= "wxyz";

	strcat (first,second);
	printf("first : %s \n", first);
	
	return 0;
}

//s1 - "abc"
//a  b  c  \0  <-data
//0  1  2  3   <-Indexes
//
//s2 - "wxyz"
//w  x  y  z  \0  <-Data
//0  1  2  3   4
//
//s
//
//0  1  2  3  4  5  6  7
//
//
char *string_append(char *s1, char *s2){

	int s1_length = strlen(s1);
	int s2_length = strlen(s2);
	int size = s1_length + s2_length + 1;

	char *s = calloc(size, sizeof(char));

}
