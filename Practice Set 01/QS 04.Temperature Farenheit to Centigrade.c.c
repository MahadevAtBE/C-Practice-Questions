// (D) Temperature of a city in Fahrenheit degrees is input through the keyboard. 
//     Write a program to convert this temperature into Centigrade degrees.

#include<stdio.h>

int main(){
    int far;
    float cen;

    printf("Enter Temperature of a city in Fahrenheit degrees: \n");
    scanf("%d",&far);

    cen = (far-32)*5/9;
    printf("The Temperature of city in Centigrade degrees is: %f\n",cen);
    return 0;
}

