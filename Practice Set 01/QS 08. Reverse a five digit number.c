// (H) If a five-digit number is input through the keyboard, 
//     write a program to reverse the number.

 #include<stdio.h>
 
 int main(){
    int num,a=0,rev=0;

    printf("Enter a five-digit number: \n");
    scanf("%d",&num);

    while (num != 0)
    {
        a = num % 10;
        // printf("a = %d\n",a); \\ to check a
        num = num/10;
        // printf("num = %d\n",num);  \\ to check num
        rev = rev*10+a;
        // printf("rev = %d\n",rev);  \\ to check rev
    }
    printf("%d",rev);
    
    return 0;
 }
