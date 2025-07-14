#include<stdio.h>
int main()
{
    int num1,num2;
    float ans;
    printf("enter two numbers=");
    scanf("%d%d",&num1,&num2);
    ans=(float)num1/num2;
    printf("Answer=%f\n",ans);
    return 0;
}