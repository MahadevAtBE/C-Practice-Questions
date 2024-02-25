// (A) Ramesh's basic salary is input through the keyboard. 
//     His dearness allowance is 40% of basic salary, 
//     and house rent allowance is 20\% of basic salary. 
//     Write a program to calculate his gross salary.

#include<stdio.h>

int main(){
    int salary;
    float da,hra,gross;

    printf("Enter the basic salary: \n");
    scanf("%d",&salary);

    da = salary*40/100;
    printf("The DA is: %.2f\n",da);

    hra = salary*20/100;
    printf("The HRA is: %.2f\n",hra);

    gross = salary+da+hra;
    printf("The gross is : %.2f\n",gross);

    return 0;
}
