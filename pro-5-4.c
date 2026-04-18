#include<stdio.h>
int main()
{
    int a[10][10];
    int i, j, r, c;
    int row, col;
    int sum;

    printf("Enter the array's row size: ");
    scanf("%d",&r);

    printf("Enter the array's column size: ");
    scanf("%d",&c);

    printf("\nEnter array's elements:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d",&a[i][j]);
        }
    }

    // ROW 
    printf("\nEnter row number: ");
    scanf("%d",&row);

    sum = 0;
    printf("Elements of row %d: ", row);

    for(j=0; j<c; j++)
    {
        if(j > 0)
            printf(", ");
        printf("%d", a[row][j]);
        sum = sum + a[row][j];
    }

    printf("\nThe sum of a row %d: %d\n", row, sum);

    // COLUMN 
    printf("\nEnter column number: ");
    scanf("%d",&col);

    sum = 0;
    printf("Elements of column %d: ", col);

    for(i=0; i<r; i++)
    {
        if(i > 0)
            printf(", ");
        printf("%d", a[i][col]);
        sum = sum + a[i][col];
    }
    printf("\nThe sum of column %d: %d", col, sum);

}

/*
Enter the array's row size: 3
Enter the array's column size: 3

Enter array's elements:
a[0][0]=1
a[0][1]=3
a[0][2]=5
a[1][0]=7
a[1][1]=9
a[1][2]=8
a[2][0]=6
a[2][1]=4
a[2][2]=2

Enter row number: 0
Elements of row 0: 1, 3, 5
The sum of a row 0: 9

Enter column number: 1
Elements of column 1: 3, 9, 4
The sum of column 1: 16
*/
