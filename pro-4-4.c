#include<stdio.h>
int main()
{
	int i, j, sp;
	
	for(i=1; i<=5; i++){
		for(sp=1; sp<i; sp++){
			printf("  ");
		}
		for(j=5; j>=i; j--){
			printf("%d ",j%2);
		}
		printf("\n");
	}
}
/*
1 0 1 0 1
  1 0 1 0
    1 0 1
      1 0
        1
*/        


