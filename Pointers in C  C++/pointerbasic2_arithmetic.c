#include <stdio.h>

int main (){

	int a=10;
	int *p;
	p = &a;

	//Pointer arithmetic

	printf("Address p is %d \n", p); // p is 2002
	printf("Value at address p is %d \n", *p);
	printf("Size of integer is %d bytes \n", sizeof(int));
	printf("Address of p+1 %d \n", p+1); //p+1 is 2006; bcz size of int is 4 byte
	printf("value at address p+1 is %d \n", *(p+1));
}