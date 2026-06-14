#include<stdio.h>
int main(){
	float a,b,c;
	float average;
	printf("Enter first number:");
	scanf("%f", &a);
	printf("Enter second number:");
	scanf("%f", &b);
	printf("Enter third number :");
	scanf("%f", &c);
	average= (a+b+c)/3;
	printf("Average is%f:",average);
	return 0;
}