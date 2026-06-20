#include <stdio.h>
int main(){
	int arr[13]={15,10,18,25,12,15,25,10,15,20,25,18,10};
	int a;
	int count;
	char con = 'y';
	do{
			count = 0;
			printf("Check Repitition of : ");
			scanf("%d", &a);

				for(int i=0;i<=12;i++){
					if(arr[i]==a){
						count++;
		}
		//printf("Total Repitition : %d", count);
	}
		printf("Total Repitition : %d \n", count);
		printf("Do you want to continue yes/no ");
		scanf(" %c", &con);

	}
	 while (con=='y');
}


	