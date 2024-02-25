// (B) Any integer is input through the keyboard. 
//     Write a program to find out whether it is an 
//     odd number or even number.

#include<stdio.h>
int main(){

    int num;

    printf("Enter any integer to check it is an odd number or even number: \n");
    scanf("%d",&num);

    if(num == 0){
        printf("The number is: 0");
    }

    else if(num%2 == 0){
        printf("The number is: EVEN");
    }
    else{
        printf("The number is: ODD");    
    }


    return 0;
}