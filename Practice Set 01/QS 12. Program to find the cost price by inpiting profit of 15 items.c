// (L) If the total selling price of 15 items and the total 
//     profit earned on them is input through the keyboard, 
//     write a program to find the cost price of one item.

#include<stdio.h>

int main(){
    float cell,profit;
    float cp;

    printf("Enter sealling price: \n");
    scanf("%f",&cell);
    printf("Enter Profit: \n");
    scanf("%f",&profit);

    cp = (cell-profit)/15;
    printf("The cost price of one item is: %.2f",cp);


    return 0;
}


