// (H) Find the absolute value of a number entered through the keyboard.
#include<stdio.h>

int main(){
    int num;

    printf("Enter the number: \n");
    scanf("%d",&num);

    if (num<0)
    {
        printf("Its absolute value is: %d",num*-1);
    }
    else
    {
        printf("Its absolute value is: %d",num);
    }
    
    
    return 0;
}