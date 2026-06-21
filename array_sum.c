#include <stdio.h>
int main(){
	int sum=0;
	int arr[]={23,54,10,76,56,98,26,83,64};
	for(int i=0;i<=8;i++){
		sum+=arr[i];
	}
	printf("Sum of Array : %d", sum);
	return 0;
}