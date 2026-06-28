#include <stdio.h>

int main(){

	int a= 1025;
	int *p ;
	p = &a;
	printf("Size of integer is %d bytes \n", sizeof(int));
	printf("Address = %d , value = %d \n ", p0, *p0);

	char *p0;
	p0 = (char*)p; //typecasting

	printf("Size of char is %d bytes \n ", sizeof(char));
	printf("Address = %d , Value = %d \n",p0 ,*p0);
}