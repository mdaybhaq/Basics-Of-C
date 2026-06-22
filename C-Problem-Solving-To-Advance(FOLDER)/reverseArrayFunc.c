#include <stdio.h>

void reverse(int array[], int length);

int main(){
	int arr1[]={1,2,3,4,5,6,7,8,9};
	int arr2[]={11,12,13,14,15,16};
	
	reverse(arr1, 9);
	reverse(arr2, 6);

	for(int i=0 ; i<9 ; i++){
		printf("Array 1 [%d] = %d \n", i , arr1[i]);
	}
	
	printf("\n");


	for(int i=0 ; i<6 ; i++){
		printf("Array 2 [%d] = %d \n", i , arr2[i]);
	}
	

	return 0;

} 

void reverse(int array[], int length){
	int temp=0;

	for (int i=0 ; i < (length/2); i++){
		temp = array[i];
		array[i] = array[length-i-1];
		array[length-i-1] = temp ;
	}

}
