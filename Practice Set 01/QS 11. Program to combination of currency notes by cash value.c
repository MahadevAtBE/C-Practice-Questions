// (K) A cashier has currency notes of denominations 10, 50 and 100. 
//     If the amount to be withdrawn is input through the keyboard in hundreds, 
//     find the total number of currency notes of each denomination 
//     the cashier will have to give to the withdrawer.

#include<stdio.h>

int main(){
    int money,hun=0,fif=0,ten=0;

    printf("Enter total ammount: \n");
    scanf("%d",&money);

    printf("Cashier will have to give to the withdrawer the note of\n");
    hun = money/100;
    if (hun != 0)
    {
        printf("100 is: %d\n",hun);
    }
    money = money%100;
    fif = money/50;
    if (fif != 0)
    {
        printf("50 is: %d\n",fif);
    }
    money = money%50;
    ten = money/10;
    if (ten != 0)
    {
        printf("10 is: %d\n",ten);
    }
    money = money%10;
    if (money != 0)
    {
        printf("Remainder is: %d\n", money);
    }
    
    
    return 0;
}
