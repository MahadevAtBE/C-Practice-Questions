// (M) If a five-digit number is input through the keyboard, 
//     write a program to print a new number by adding one to each of its digits. 
//     For example if the number that is input is 12391 
//     then the output should be displayed as 23402.

 #include<stdio.h>
 
 int main(){
    int num,a=0,rev=0,rev1=0;

    printf("Enter a five-digit number: \n");
    scanf("%d",&num);

    while (num != 0)  //to reverce the number
    {
        a = num % 10;
        // printf("a = %d\n",a); // to check a
        num = num/10;
        // printf("num = %d\n",num);  // to check num
        // rev = rev*10+a;
        rev = rev*10+a+1;  //adding 1 to each number
        // printf("rev = %d\n",rev);  // to check rev
    }
    // printf("The reverce of given number is: %d\n",rev);
    
    while (rev != 0)    // to reverce it again
    {
        a = rev % 10;
        // printf("a = %d\n",a); // to check a
        rev = rev/10;
        // printf("num = %d\n",num);  // to check num
        rev1 = rev1*10+a;
        // printf("rev = %d\n",rev1);  // to check rev
    }
    printf("The new number by adding one to each of its digits is: %d\n",rev1);
    
    return 0;
 }