#include <stdio.h>

int main() {
    int n, first, last;
    
    printf("enter the number:");
    scanf("%d", &n); 

    last = n % 10;   // remove last digit

    first = n;
    while (first >= 10) {
        first = first / 10; 
    }
    printf("%d", first + last); 
}

/* output:
1. enter the number:384 
    7
    
2. enter the number:347567
   10
*/

