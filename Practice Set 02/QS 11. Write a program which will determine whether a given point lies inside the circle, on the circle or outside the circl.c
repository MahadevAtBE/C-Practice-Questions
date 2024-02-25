// (K) Given the coordinates (x,y) of a center of a circle and it's radius, 
//     write a program which will determine whether a point lies inside the circle, 
//     on the circle or outside the circle.

//     (Hint: Use sqrt() and pow() functions)

#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int x1,y1,x2,y2,radius;
    float pc; //distance between pounter and centure of circule

    printf("Enter x1,y1: \n");
    scanf("%d %d",&x1,&y1);
    
    printf("Enter x2,y2: \n");
    scanf("%d %d",&x2,&y2);

    printf("Enter radious: \n");
    scanf("%d",&radius);

    // now we will get the pc with this formula: https:www.easterscience.com/q11-given-the-coordinates-x-y-
    //                                                 of-center-of-a-circle-and-its-radius-write-a-program-which-
    //                                                 will-determine-whether-a-point-lies-inside-the-circle-on-the-
    //                                                 circle-or-outside-the-circle-hint-use-sqrt/
    pc = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));


    if (pc>radius)
    {
        printf("The point lies outside the circule");
    }
    else if (pc<radius)
    {
        printf("The point lies inside the circule");
    }
    if (pc==radius)
    {
        printf("The point lies on the  border of the circule");
    }
    

    return 0;
}