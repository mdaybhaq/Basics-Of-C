#include <stdio.h>
int main(){
	int a;
	int sum=0;
	printf("Enter your No. ");
	scanf("%d", &a);
	for (int i=0;i<=a;i++){
		sum=sum+i;
	}
	printf("The Sum is : %d",sum);
	return 0;
}
