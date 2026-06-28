#include <stdio.h>

int main(){

	int a;
	int *p;
	a = 10;
	p = &a; // &a= address of a
	
	printf("%d \n", p);
	printf("%d m\n", *p); /* *p - value at adress pointed 
	by p */
	printf("%d \n ", &a);

	*p = 12; //dereferencing
	printf("a = %d \n", a);

	
 	return 0;
}