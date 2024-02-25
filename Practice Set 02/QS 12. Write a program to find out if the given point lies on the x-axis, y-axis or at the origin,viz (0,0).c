// (1L) Given a point (x,y). write a program to find out 
//     if it lies on the x-axis, y-axis or at the origin,viz.(0,0).

#include<stdio.h>

int main(){
    int x,y;
    printf("Enter the 'X' point: \n");
    scanf("%d",&x);
    printf("Enter the 'Y' point: \n");
    scanf("%d",&y);

    if ((x==0)&&(y==0))
    {
        printf("The point lies on the origin");
    }
    else if (x>y)
    {
        printf("The point lies on the 'X' axis");
    }
    if (y>x)
    {
        printf("The point lies on the 'Y' axis");
    }
    
    return 0;
}