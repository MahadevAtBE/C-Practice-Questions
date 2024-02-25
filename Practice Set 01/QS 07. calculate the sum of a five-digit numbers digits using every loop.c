// (G) If a five-digit number is input through the keyboard, write a
//     program to calculate the sum of its digits.
//     (Hint: Use the modulus operator '%')

#include<stdio.h>

int main(){
    int a,b,c=0;

    printf("Enter a five-digit number: \n");
    scanf("%d",&a);

    // if (
    //     for (int i = 1; i <= 5; i++)
    //     {
    //         /* code */
    //     }
        
    // )
    // {
    //     /* code */
    // }
    

// // by using for loop
//     for (int i = 1; i <= 5; i++)
//     {
//        b = a%10;
//        c =c+b;
//        a = a/10;
//     }
//     //    printf("c = %d\n a = %d\n",c,a);  //to sea the calculation
//     printf("The sum of its digits is: %d",c);


    // }
    // if (a == 0)  //if else statment to check invalid input
    // {
    //     printf("The sum of its digits is: %d",c);
    // }
    // else
    // {
    //     printf("Invalid input");
    // }

    // using while loop
    while (a != 0)
    {
       b = a%10;
       a = a/10;
       c =c+b;
    }
    printf("The sum of its digits is: %d",c);
    
    
    

    return 0;
}
