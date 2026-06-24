#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    char *start = str;
    char *end =  str + strlen(str) - 1;

    int palindrome = 1;

    while (start < end)
    {
        if (*start != *end)
        {
            palindrome = 0;
            break;
        }

        start++;
        end--;
    }

    if (palindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}