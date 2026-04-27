#include <stdio.h>

int main() {
    char str[100]; 
    char *ptr;     
    int length = 0;

    printf("enter any string: ");
    gets(str);     

    ptr = str;     

    while (*ptr != '\0') {
        length++;  
        ptr++;     
    }

    printf("the length of a string is %d\n", length);

    return 0;
}

/*
output:

1. enter any string: hello world
   the length of a string is 11

2. enter any string: ****
   the length of a string is 4
  
*/
