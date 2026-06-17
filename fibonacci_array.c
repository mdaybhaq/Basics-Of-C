#include <stdio.h>
int main(){
	int n;
	printf("Enter a No.(n>2) : ");
	scanf("%d", &n);

	int fib[n];
	fib[0]=0;
	fib[1]=1;

	for(int i=2;i<n;i++){ //1,2,3,5,8,13.....
		fib[i]=fib[i-1]+fib[i-2]; //Important
		printf("%d \t", fib[i]);
	}
	printf("\n");
	return 0;
}