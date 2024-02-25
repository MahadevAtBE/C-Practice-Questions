// (D) According to the Gregorian calendar, it was Monday on the date 01/01/1900. 
//     If any year is input through the keyboard write a program to find out 
//     what is the day on 1 January of this year.

#include<stdio.h>

int main(){
    int yer,yer1,allyer,lip,nonlip,allday,day;
    yer1 = 1900;

    printf("Enter the year: \n");
    scanf("%d",&yer);

    allyer = yer-yer1;
    printf("all yers = %d\n",allyer);
    lip = allyer/4;
    printf("lip = %d\n",lip);
    nonlip = allyer-lip;
    printf("non lip %d\n",nonlip);
    allday = (lip*366)+(nonlip*365);
    printf("allday = %d\n",allday);
    day = allday%7;

    printf("day %d\n",day);

    if (day==0)
    {
        printf("MONDAY");
    }
    if (day==1)
    {
        printf("TUESDAY");
    }
    if (day==2)
    {
        printf("WEDNASDAY");
    }
    if (day==3)
    {
        printf("THURSDAY");
    }
    if (day==4)
    {
        printf("FRYDAY");
    }
    if (day==5)
    {
        printf("SATERDAY");
    }
    if (day==6)
    {
        printf("SUNDAY");
    }
    
    return 0;
}
