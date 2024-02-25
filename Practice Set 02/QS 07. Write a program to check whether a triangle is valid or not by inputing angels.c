// (G) Write a program to check whether a triangle is valid or not, 
//     when the three angles of the triangle are entered through the keyboard. 
//     A triangle is valid if the sum of all the three angles is equal to 180 degrees.

#include<stdio.h>

int main(){
    int ang1,ang2,ang3,tang;

    printf("Enter the first angle: \n");
    scanf("%d",&ang1);
    printf("Enter the second angle: \n");
    scanf("%d",&ang2);
    printf("Enter the third angle: \n");
    scanf("%d",&ang3);

    tang = ang1+ang2+ang3;

    if (tang == 180)
    {
       printf("Its a triangle");
    }
    else
    {
        printf("Its not a triangle");
    }
    
    


    return 0;
}
