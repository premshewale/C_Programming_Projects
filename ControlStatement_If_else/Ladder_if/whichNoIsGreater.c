#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 3 Numbers=");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2&&num1>num3)
    printf("first Number Is greater\n");
    else if(num2>num1&&num2>num3)
    printf("Second Number is Greater\n");
    else
    printf("Third Number Is Greater\n");
    return 0;
}