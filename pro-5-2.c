#include <stdio.h>

int main() {
    int rows, cols, i, j, max;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    
    printf("\nEnter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    max = a[0][0]; //  first element is the largest

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", max);

}

/*
Enter the array's row size: 4
Enter the array's column size: 4

Enter array's elements:
a[0][0] = 1
a[0][1] = 2
a[0][2] = 3
a[0][3] = 4
a[1][0] = 1
a[1][1] = 2
a[1][2] = 3
a[1][3] = 4
a[2][0] = 1
a[2][1] = 2
a[2][2] = 3
a[2][3] = 4
a[3][0] = 1
a[3][1] = 2
a[3][2] = 3
a[3][3] = 4
The largest element is: 4
*/

