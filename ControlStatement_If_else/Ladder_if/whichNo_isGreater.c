#include<stdio.h>
int main()
{
    int num1,num2,num3,num4;
    printf("Enter 4 Numbers=");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

    if(num1>num2&&num1>num3&&num1>num4)
    printf("first Number Is greater\n");
    else if(num2>num1&&num2>num3&&num2>num4)
    printf("Second Number is Greater\n");
    else if(num3>num1&&num3>num2&&num3>num4)
    printf("Second Number is Greater\n");
    else
    printf("Forth Number Is Greater\n");
    return 0;
}