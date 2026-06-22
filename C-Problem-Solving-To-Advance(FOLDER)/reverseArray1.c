#include <stdio.h>
int main(){
	int arr[]={1,2,3,4,5,6,7,8,9};
	int length = 9;
	int temp;

	for (int i=0 ; i < (length/2); i++){
		temp = arr[i];
		arr[i] = arr[length-i-1];
		arr[length-i-1] = temp ;
	}
	for(int i=0 ; i<length ; i++){
		printf("Array[%d] = %d \n", i , arr[i]);
	}
} 
