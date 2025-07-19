#include<stdio.h>
int main()
{
    int num=0,i=0;
    printf("Enter a Number=");
    scanf("%d",&num);
    for (i=1;i<=num;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}