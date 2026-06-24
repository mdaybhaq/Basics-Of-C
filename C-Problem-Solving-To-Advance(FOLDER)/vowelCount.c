#include <stdio.h>
int main(){
char a[]= "What a beautiful day!";
char *ptr=a;
int count=0;

for( int i=0 ; a[i] != '\0'  ; i++){
	if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
    *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U')
{
		count++;
		
	}
	ptr++;
}

printf("Total Vowel in Sentence : %d", count);

}