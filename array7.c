//Here is a program that prints out the memory locations in which the elements of this array are stored. 
#include <stdio.h>
int main(){
	int num[]= {24,34,12,44,56,17};
	int i;
	for (i=0;i<=5;i++){
		printf("Element no. %d \n", i);
		printf("Address = %u \n", &num[i]);
	}

}
