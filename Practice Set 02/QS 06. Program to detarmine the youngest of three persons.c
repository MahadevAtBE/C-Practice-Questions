// (F) If the ages of Ram, Shyam and Ajay are input through the keyboard, 
//     write a program to determine the youngest of the three.

#include<stdio.h>

int main(){
    int ager,ages,agea;

    printf("Enter the age of RAM: \n");
    scanf("%d",&ager);
    printf("Enter the age of SHYAM: \n");
    scanf("%d",&ages);
    printf("Enter the age of AJAY: \n");
    scanf("%d",&agea);

    if (ager==ages)
    {
      if (ages==agea)
      {
       printf("All ages are same");
      }
        
    }


    if (ager<ages)
    {
        if (ager<agea)
        {
            printf("RAM is youngest");
        }
        
    }
    if (ages<ager)
    {
        if (ages<agea)
        {
            printf("SHYAM is youngest");
        }
        
    }
    if (agea<ager)
    {
        if (agea<ages)
        {
            printf("AJAY is youngest");
        }
        
    }    
    return 0;
}
