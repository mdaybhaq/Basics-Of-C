#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main () {
	char s1[]= "Its a beautiful Day";

	int count =0;

	 for(int i=0 ; i < strlen(s1); i++){

	 	switch (toupper(s1[i])){

	 	case 'A' :
	 	case 'E' :
	 	case 'I' :
	 	case 'O' :
	 	case 'U' :
	 		count++;

	 	}

	 }

	 printf("Vowel Count : %d \n", count);

	return 0;
}