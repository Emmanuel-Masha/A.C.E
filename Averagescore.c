//i.prompt the user to enter the marks of 3 subjects 
#include <stdio.h>

int main() 
{
int mark1, mark2, mark3, average;
    printf("Enter marks for subject1:");
    scanf("%d",&mark1);
    
    printf("Enter marks for subject2:");
    scanf("%d",&mark2);
    
     printf("Enter marks for subject3:");
    scanf("%d",&mark3);
    
    //average score
    average=(mark1+mark2+mark3)/3;
    
    printf("The average score is: %d\n",average);
    
    if(average >=70 &average<=100){
       printf("your grade is: A\n"); 
        }
    
    else if(average >=60 &average<=69)
    {
       printf("your grade is: B\n");
    }
    
     else if(average >=50 &average<=59)
    {
       printf("your grade is: C\n");
    }
    
    else if(average >=50 &average<=59)
    {
       printf("your grade is: C\n");
    }
    
    else if(average >=40 &average<=49)
    {
       printf("your grade is: D\n");
    }
    
    else{
       printf("your grade is: E(Fail)\n");
    }

    return 0;
}