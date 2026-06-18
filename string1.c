#include <stdio.h>
//void printString(char arr[]); //(This decalaration required if function is called before making of function. but if function is made under int main and outside it the function is called then pre decalartion of function before int main isnt required.)
int main(){
	char firstName[]= "Ayubul";
	char lastName[]="Haque";


void printString(char arr[]){
	for(int i=0;arr[i] != '\0';i++){
		printf("%c", arr[i]);
	
}
	
	}
	printString(firstName);
	printString(lastName);
	return 0;

}