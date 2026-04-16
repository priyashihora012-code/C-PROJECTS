#include<stdio.h>
int main()
{
    int i,j,sp;
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",j);
        }
        for(sp=5; sp>i; sp--)
        {
            printf("    ");
        }
        for(j=i; j>=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}

/*
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/
