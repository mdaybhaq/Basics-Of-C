#include <stdio.h>
int main(){
	int n,c;
	int a=0,b=1;
	printf("%d %d", a, b);
	printf("Enter a number (n>2)");
	scanf("%d", &n);
	int b=1;
	while (b<=n){
		c=a+b;
		a=b;
		b=c;
		b++;

	}
}