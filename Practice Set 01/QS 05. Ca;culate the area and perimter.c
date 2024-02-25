// (E) The length & breadth of a rectangle and radius of a circle are input through the keyboard. 
//     Write a program to calculate the area & perimeter of the rectangle, 
//     and the area & circumference of the circle.

#include<stdio.h>

int main(){
    int length,breadth,area,perimeter;

    printf("Enter the length & breadth of a rectangle: \n");
    scanf("%d%d",&length,&breadth);

    area = length*breadth;
    perimeter = (length+breadth)*2;

    printf("The AREA of the given rectangle is: %d\n",area);
    printf("The PERIMETER of the given rectangle is: %d\n",perimeter);
    return 0;
}
