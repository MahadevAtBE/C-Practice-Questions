// (B) The distance between two cities (in km.) is input through the keyboard. 
//     Write a program to convert and print this distance in 
//     meters, feet, inches and centimeters.
//     1 km = 1000 meters
//     1 km = 3280.84 feets
//     1 km = 39370.079 inches
//     1 km = 100000 centimeters


#include<stdio.h>

int main(){
    int km,m,cm;
    float feet,inch;

    printf("Enter distance between two cities (in km.): \n");
    scanf("%d",&km);

    m = km*1000;
    feet = km*3280.84;
    inch = km*39370.079;
    cm = km*100000;

    printf("The distance in METERS is: %d\n",m);
    printf("The distance in FEETS is: %.2f\n",feet);
    printf("The distance in INCHES is: %.2f\n",inch);
    printf("The distance in CENTIMETERS is: %d\n",cm);

    return 0;
}
