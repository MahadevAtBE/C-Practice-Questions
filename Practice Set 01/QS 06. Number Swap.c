// (F) Two numbers are input through the keyboard 
//     into two locations C and D. Write a program 
//     to interchange the contents of C and D.

#include<stdio.h>

int main(){
    int c,d,temp;

    printf("Enter the first number as C: \n");
    scanf("%d",&c),
    printf("Enter the first number as D: \n");
    scanf("%d",&d),

    printf("Before interchange the contents of C and D: \n C = %d\n D = %d\n",c,d);

    temp = c;
    c = d;
    d = temp;

    printf("After interchange the contents of C and D: \n C = %d\n D = %d\n",c,d);
    return 0;
}
