#include <stdio.h>

int main()
{
    float cel, fer;

    printf("The temperature in Celsius: ");
    scanf("%f", &cel);

    fer = (9.0 * cel / 5.0) + 32;

    printf("The temperature in Fahrenheit: %f", fer);
 
}
/* output:

 1. The temperature in Celsius: 38
    The temperature in Fahrenheit: 100.400002

 2. The temperature in Celsius: 50
    The temperature in Fahrenheit: 122.000000
*/


