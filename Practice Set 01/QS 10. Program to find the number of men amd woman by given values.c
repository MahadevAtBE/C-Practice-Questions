// (J) In a town, the percentage of men is 52. 
//     The percentage of total literacy is 48. 
//     If total percentage of literate men is 35 of the total population, 
//     write a program to find the total number
//     of illiterate men and women if the population of the town is 80,000.

#include<stdio.h>

int main(){
    int lm,lw;

    // the total population is 80000 and the percentage of literate men is 35
    lm = (32*80000)/100;
    printf("The number of illiterate MEN is: %d\n",lm);
    
    // the total population is 80000 and the percentage of literate women is 48-35=13
    lw = (13*80000)/100;
    printf("The number of illiterate WOMEN is: %d\n",lw);

    return 0;
}
