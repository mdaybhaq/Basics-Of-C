#include <stdio.h>
int main(){
	int arr[]={12,16,78,75,98,15,56,72,45};
	//int *ptr=arr[];
	for(int i=8;i>=0;i--){
		printf("\t %d", *(arr+i));
	}
}