#include<stdio.h>
int main()
{
    int a[100], i, n, count=0;

    printf("Enter the array's size: ");
    scanf("%d",&n);
    
    printf("\nEnter array's elements:\n");

    for(i=0; i<n; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d",&a[i]);
    }

    printf("\nNegative elements from an Array: ");

    for(i=0; i<n; i++)
    {
        if(a[i] < 0)
        {
            if(count > 0)
                printf(", ");

            printf("%d", a[i]);
            count++;
        }
    }

}

/*
Enter the array's size: 5

Enter array's elements:
a[0] = 5
a[1] = -4
a[2] = 6
a[3] = 0
a[4] = -1

Negative elements from an Array: -4, -1
*/
