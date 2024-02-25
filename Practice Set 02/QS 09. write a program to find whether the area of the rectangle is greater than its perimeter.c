// (I) Given the length and breadth of a rectangle, 
//     write a program to find whether the area of the rectangle is 
//     greater than its perimeter. For example, the area of the rectangle 
//     with length - 5 and breadth 4 is greater than its perimeter.

#include<stdio.h>

int main(){
    int length,breadth,area,perimeter;

    printf("Enter the length of a rectangle: \n");
    scanf("%d",&length);
    printf("Enter the breadth of a rectangle: \n");
    scanf("%d",&breadth);

    area = length*breadth;
    printf("The area of the rectangle is: %d\n",area);

    perimeter = 2*(length+breadth);
    printf("The perimeter of the rectangle is: %d\n",perimeter);

    if (area > perimeter)
    {
        printf("The area of the rectangle is greater than its perimeter");
    }
    else
    {
        printf("The area of the rectangle is smaler than its perimeter");
    }
    
    
    return 0;
}
