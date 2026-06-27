#include <stdio.h>

int main(void){

	int a[] = {1,2,3,4,5};
	int *b;
	b = a;
	a[0] = 10;
	printf("b[0] = %d\n", b[0]);
	printf("b : %p\na : %p\n", b , a);

	return 0;
}