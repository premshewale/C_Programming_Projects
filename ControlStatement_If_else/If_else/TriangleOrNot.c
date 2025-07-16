#include<stdio.h>
int main()
{
    int angle1,angle2,angle3,total;
    printf("Enter Angle 1=");
    scanf("%d",&angle1);
    printf("Enter Angle 2=");
    scanf("%d",&angle2);
    printf("Enter Angle 3=");
    scanf("%d",&angle3);
    total=angle1+angle2+angle3;
    if(total==180)
    {
        printf("It is Triangle");

    }
    else{
        printf("It is Not a Triangle");

    }
    return 0;
}