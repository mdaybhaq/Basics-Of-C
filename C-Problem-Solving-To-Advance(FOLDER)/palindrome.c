#include <stdio.h>
#include <string.h>
char checkPalindrome(char string2[], int len);

int main(){

    char string1[] ="Malayalam";

    int length = 9;

    char temp = checkPalindrome(string1,length);

    if (temp == 'y'){
          printf("Word is palindorme"); 
    } else {
          printf("Word is not a palindorme");   
    }
    return 0;
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