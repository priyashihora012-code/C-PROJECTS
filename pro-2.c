#include<stdio.h>
int main()
{
	int score;
	char grade;
					
	printf("enter your score: ");
	scanf("%d",&score);
	
grade=	(score>=90) ? 'A':
	    (score>=80) ? 'B':
	    (score>=70) ? 'C':
	    (score>=60) ? 'D': 'F';
		          
		printf("Your grade is %c. ", grade);
		          
/* output:
   1.  enter your score: 92                 
       your grade is A.
    
   2.  enter your score: 55
       your grade is F.
*/

switch(grade)
{
    case 'A':
        printf("Excellent work!");
        break;

    case 'B':
        printf("Well done.");
        break;

    case 'C':
        printf("Good job.");
        break;

    case 'D':
        printf("You passed, but you could do better.");
        break;
        
    case 'F':
        printf("Sorry, you failed.");
        break;    
}

/* output:
   1.  enter your score: 92                 
       your grade is A.  Excellent work!
    
   2.  enter your score: 55
       your grade is F.  Sorry, you failed.
*/

      if(grade >= 'A' && grade <= 'D') {
        printf("Congratulations! You are eligible for the next level.");
    } else {
        printf("Please try again next time.");
    }
    
/* output:
   1.  enter your score: 92                 
       your grade is A.  Excellent work!Congratulations! You are eligible for the next level.
    
   2.  enter your score: 55
       your grade is F.  Sorry, you failed.Please try again next time.
*/    
}
