// (E) Any year is input through the keyboard. 
//     Write a program to determine whether the year is a leap year or not.
//     (Hint: Use the % (modulus) operator)

#include<stdio.h>

int main(){
    int yer;

    printf("Enter the year to determine whether the year is a leap year or not: \n");
    scanf("%d",&yer);

    if (yer%2 == 0)
    {
        printf("This year is leap year");
    }
    else{
       printf("This year is not a leap year"); 
    }
    
    return 0;
}
