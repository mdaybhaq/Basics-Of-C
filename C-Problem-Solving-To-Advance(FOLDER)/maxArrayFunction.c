#include <stdio.h>

int find_max(int arr[], int length);

int main(){


	int arr1[]={23,42,65,23,97,87,78};
	int arr2[]={45,87,95,82,123,98,75};

	int max1 = find_max(arr1,7);
	int max2 = find_max(arr2,7);

	printf("Max 1 : %d \n", max1);
	printf("Max 2 : %d \n", max2);

	return 0;
}

	int find_max(int arr[], int length){
		int max = arr[0];
		for(int i=1 ; i < length ; i++){
			if (arr[i] > max){
				max = arr[i];
			}
		}
		return max;
	}
	
