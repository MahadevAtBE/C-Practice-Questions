// (C) If the marks obtained by a student in 
//     five different subjects are input through the keyboard, 
//     find out the aggregate marks and percentage marks obtained by the student. 
//     Assume that the maximum marks that can be obtained by a student in each subject is 100.

#include<stdio.h>

int main(){
    int math,phy,cha,ban,eng,aggregate;
    float per;

    printf("Enter Math marks: \n");
    scanf("%d",&math);
    printf("Enter Physics marks: \n");
    scanf("%d",&phy);
    printf("Enter Chamistry marks: \n");
    scanf("%d",&cha);
    printf("Enter Bangla marks: \n");
    scanf("%d",&ban);
    printf("Enter Englist marks: \n");
    scanf("%d",&eng);

    aggregate = math+phy+cha+ban+eng;
    // per = aggregate/5;
    per = aggregate*100/500;

    printf("The aggregate of subjects is: %d\n",aggregate);
    printf("The percentage of subjects is: %.2f\n",per);


    return 0;
}
