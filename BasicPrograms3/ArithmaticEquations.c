#include<stdio.h>
int main()
{
    int num1,num2,add,sub,mult,div;
    printf("Enter First Number=");
    scanf("%d",&num1);
    printf("Enter Second Number=");
    scanf("%d",&num2);
    add=num1+num2;
    sub=num1-num2;
    mult=num1*num2;
    div=num1/num2;

    printf("Addition=%d\n",add);
    printf("Substraction=%d\n",sub);
    printf("Multiplication=%d\n",mult);
    printf("Division=%d\n",div);
    return 0;

}