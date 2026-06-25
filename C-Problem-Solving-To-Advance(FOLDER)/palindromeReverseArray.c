#include <stdio.h>
#include <string.h>
char checkPalindrome(char string2[], int len);
void reverse(int array[], int length);


int main(){

    char command;

    printf("Enter (P) for palindrome and (R) for reverse function");
    scanf("%c", &command);

    switch (command) {



    case 'P':
        // Code block 1
         char string1[] ="Malayalam";

    int length = 9;

    char temp = checkPalindrome(string1,length);

    if (temp == 'y'){
          printf("Word is palindorme"); 
    } else {
          printf("Word is not a palindorme");   
    }
        break;




    case 'R':
        // Code block 2
        int arr1[]={1,2,3,4,5,6,7,8,9};
    
    reverse(arr1, 9);

    for(int i=0 ; i<9 ; i++){
        printf("Array 1 [%d] = %d \n", i , arr1[i]);
    }
    
    printf("\n");

    
        break;

   
return 0;
}
}

    




void reverse(int array[], int length){
    int temp=0;

    for (int i=0 ; i < (length/2); i++){
        temp = array[i];
        array[i] = array[length-i-1];
        array[length-i-1] = temp ;
    }

}

    char checkPalindrome(char string2[],int len){
        char isPalindrome = 'y';
                for  (int i=0; i<(len/2) ; i++){
                        if(string2[i] != string2[len-i-1]){
                                    isPalindrome = 'n';
                      break;
               }
        }
        return isPalindrome;
        
    }
