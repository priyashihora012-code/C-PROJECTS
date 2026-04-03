#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter first angle: ");
    scanf("%d", &a);

    printf("Enter second angle: ");
    scanf("%d", &b);

    c = 180 - (a + b);

    printf("Third angle = %d", c);
}
/* output:
1. Enter first angle: 65
   Enter second angle: 45
   Third angle = 70

2. Enter first angle: 45
   Enter second angle: 80
   Third angle = 55

*/

