#include <stdio.h>
int main(){
	int arr[]={23,98,76,56,83,56};
	int max = arr[0];
	for (int i=1; i<6 ; i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	printf("Max Value : %d", max);
}