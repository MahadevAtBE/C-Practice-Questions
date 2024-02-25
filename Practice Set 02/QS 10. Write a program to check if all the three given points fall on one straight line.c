// (J) Given three points (x1,y1), (x2,y2) and (x3, y3), 
//     write a program to check if all the three points fall on one straight line.

#include<stdio.h>

int main(){
    int x1,y1,x2,y2,x3,y3;

    printf("Enter x1 value: \n");
    scanf("%d",&x1);
    printf("Enter y1 value: \n");
    scanf("%d",&y1);
    printf("Enter x2 value: \n");
    scanf("%d",&x2);
    printf("Enter y2 value: \n");
    scanf("%d",&y2);
    printf("Enter x3 value: \n");
    scanf("%d",&x3);
    printf("Enter y3 value: \n");
    scanf("%d",&y3);

    if ((x1==x2)&&(x1==x3))
    {
       printf("All the three points fall on one straight line");
    }
    else if ((y1==y2)&&(y1==y3))
    {
        printf("All the three points fall on one straight line");
    }
    else
    {
        printf("All the three points dosen't fall on one straight line");
    }
    
    
    


    return 0;
}