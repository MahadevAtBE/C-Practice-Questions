// (A) If cost price and selling price of an item is input through the keyboard, 
//     write a program to determine whether the seller has made profit or incurred loss. 
//     Also determine how much profit he made or loss he incurred.

#include<stdio.h>

int main(){
    int cp,sp;

    printf("Enter cost price: \n");
    scanf("%d",&cp);
    printf("Enter selling price: \n");
    scanf("%d",&sp);

    if (cp < sp)
    {
        printf("Seller has made profit\nThe profit of: %d",sp-cp);
    }
    
    if (sp < cp)
    {
        printf("Seller has incurred loss\nThe loss of: %d",cp-sp);
    }
    
    return 0;
}
