// (E) A five-digit number is entered through the keyboard. 
//     Write a program to obtain the reversed number and to determine 
//     whether the original and reversed numbers are equal or not.

 #include<stdio.h>
 
 int main(){
    int num,temp,rnum=0,reversed=0;

    printf("Enter the number: \n");
    scanf("%d",&num);
    temp = num;

    while (temp > 0)
    {
        rnum = temp%10;
        temp = temp/10;
        // printf("rnum = %d\n",rnum);
        reversed = (reversed*10)+rnum;
    }
        // printf("reversed = %d\n",reversed);

        if (num == reversed)
        {
           printf("The original and reversed numbers are equal");
        }
        else
        {
            printf("The original and reversed numbers are not equal");
        }
            
    return 0;
 }