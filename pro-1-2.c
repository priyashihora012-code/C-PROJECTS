#include <stdio.h>

int main()
{
	 int salary, hra, da, ta, total;

    printf("Enter Base Salary: ");
    scanf("%d", &salary);

    printf("Enter HRA percentage: ");
    scanf("%d", &hra);

    printf("Enter DA percentage: ");
    scanf("%d", &da);

    printf("Enter TA percentage: ");
    scanf("%d", &ta);

    hra = (hra * salary) / 100;
    da = (da * salary) / 100;
    ta = (ta * salary) / 100;

    total = salary + hra + da + ta;
    
    printf("Gross Salary: %d", total);
}
	
/*  output: 
    
1.  Enter Base Salary: 100
    Enter HRA percentage: 10
    Enter DA percentage: 5
    Enter TA percentage: 8
    Gross Salary: 123
    
2.  Enter Base Salary: 250
    Enter HRA percentage: 4
    Enter DA percentage: 3
    Enter TA percentage: 7
    Gross Salary: 284    
*/
