#include <stdio.h>
int main(){
	int n;
	int fib[n];
	fib[0]=0;
	fib[1]=1;
	int i=2;
	printf("Enter a Number (n>2) : ");
	scanf("%d", &n);
	while(i<=n){
		fib[i]=fib[i-1]+fib[i-2];
		i++;
	}
	int j=0;
	while(j<=n){
		printf("%d \t", fib[j]);
		j++;
	}
	}