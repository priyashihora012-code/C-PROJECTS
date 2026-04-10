#include<stdio.h>
int main()
{
	int i;
	
	printf("enter the number: ");
	scanf("%d",&i );
	
	int a = 0;
	
	while(i>0)
	{
		i = i / 10;
		a++;
	}
	printf("Total number of digits: %d",a);
	
}

/* output:

1. enter the number: 752
   Total number of digits: 3
   
2. enter the number: 5634780
   Total number of digits: 7
*/
