// c program on finding the area of a rectangle
#include <stdio.h>

int main() 
{
    int length, width, area;
    printf("Enter the first number");
    scanf("%d",&length);
    
    printf("Enter the second number");
    scanf("%d",&width);
    
    area=length*width;
    printf("The area of the rectangle is %d",area);

    return 0;
}
