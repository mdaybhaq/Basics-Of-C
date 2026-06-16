#include <stdio.h>
int main(){
	int aadhar[5];
	int *ptr = &aadhar[0];

	//input
	for(int i=0;i<5;i++){
		printf("%d Index : ", i);
		scanf("%d", (ptr+i));

	}

	//output
	for(int i=0;i<5;i++){
		printf("%d Index : %d \n", i, *(ptr+i));
	}
	return 0;
}