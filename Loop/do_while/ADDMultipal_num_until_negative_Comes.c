#include<stdio.h>
int main()
{
    int num1=0,num2=0,ans=0;
    do{
        printf("Multiplication of Program\n");
        printf("Enter a First Number=");
        scanf("%d",&num1);
        printf("Enter a Second NUmber=");
        scanf("%d",&num2);
        ans=num1*num2;
        printf("Multiplication is=%d\n",ans);
    }
    while(ans>=0);
    printf("If answer is Negative then Program Stops\n");
    return 0;
}