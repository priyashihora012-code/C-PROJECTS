#include <stdio.h>

// TNRN
void add() { 
    int a, b;
    printf("Enter the first number: "); 
	scanf("%d", &a);
    printf("Enter the second number: "); 
	scanf("%d", &b);
    printf("Addition of %d and %d is %d\n", a, b, a + b);
}

// TSRN
void sub(int a, int b) { 
    printf("Subtraction of %d and %d is %d\n", a, b, a - b);
}

// TNRS
int mul() { 
    int a, b;
    printf("Enter the first number: "); 
	scanf("%d", &a);
    printf("Enter the second number: "); 
	scanf("%d", &b);
	
    return a * b;
}

// TSRS
int div(int a, int b) { 
    return a / b;
}


// TNRN
void mod() {  
    int a, b;
    printf("Enter the first number: "); 
	scanf("%d", &a);
    printf("Enter the second number: "); 
	scanf("%d", &b);
    printf("Modulo of %d and %d is %d\n", a, b, a % b);
}

int main() {
    int choice, x, y;

    while(1) { 
        
        printf("\nPress 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 0) break;

        switch(choice) {
            case 1: 
                add(); 
                break;
                
            case 2: 
                printf("Enter the first number: "); 
				scanf("%d", &x);
                printf("Enter the second number: "); 
				scanf("%d", &y);
                sub(x, y); 
                break;
                
            case 3: 
                printf("Multiplication is %d\n", mul()); 
                break;
                
            case 4: 
                printf("Enter the first number: "); 
				scanf("%d", &x);
                printf("Enter the second number: "); 
				scanf("%d", &y);
                printf("Division of %d and %d is %d\n", x, y, div(x, y)); 
                break;
                
            case 5:
                mod();
                break;
                
            default: 
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

/*
Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 1
Enter the first number: 5
Enter the second number: 3
Addition of 5 and 3 is 8

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 4
Enter the first number: 10
Enter the second number: 5
Division of 10 and 5 is 2

Press 1 for +
Press 2 for -
Press 3 for *
Press 4 for /
Press 5 for %
Press 0 for the exit

Enter your choice: 0
*/
