// (I) If a four-digit number is input through the keyboard, 
//     write a program to obtain the sum of the 
//     first and last digit of this number.

#include<stdio.h>

int main(){
    int num,first,last,temp;

    printf("Enter the number to get the \nSum of first and last digit: \n");
    scanf("%d",&num);
    temp=num;

    while (temp >= 10)  //extrecting the first number
    {
        first = temp/10;
        temp = temp/10;
    }
    printf("The first number is: %d\n",first);
    
    last = num%10;  //extrecting the last munber
    printf("The last number is: %d",last);

    printf("The sum of the first and last digit is: %d",temp+last);
    return 0;
}
