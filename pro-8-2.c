#include <stdio.h>

int a[2][2];

void findCubes() {
    int i, j;
    int *ptr;

    printf("\noutput:\ncubes of all elements:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            ptr = &a[i][j]; 
            printf("%-5d", (*ptr) * (*ptr) * (*ptr)); 
        }
        printf("\n");
    }
}

int main() {
    int i, j;

    printf("enter array elements:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    findCubes();

    return 0;
}
/*
output:

enter array elements:
a[0][0] = 2
a[0][1] = 3
a[1][0] = 4
a[1][1] = 5

output:
cubes of all elements:
8    27
64   125
*/

