#include<stdio.h>

int main()
{
    char str[100];
    int start=0, end=0;
    
    printf("enter any string: ");
    scanf("%s", str);
    
    while(str[end] != '\0')
        end++;
    end--;
        
    while(start < end)
    {
        if(str[start] != str[end])
        {
            printf("the given string is not palindrome");
            return 0;   // ? sirf mismatch pe
        }
        start++;
        end--;
    }

    printf("the given string is palindrome");
    return 0;
}

/*
enter any string: nayan
the given string is palindrome

enter any string: hello
the given string is not palindrome
*/
