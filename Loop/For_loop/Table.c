#include<stdio.h>
int main()
{
    int num,i,ans;
    printf("Enter a NUmber=");
    scanf("%d",&num);
    ans=num;
    printf("Table of Given Number =%d\n",num);
    for (i=1;i<=10;i++)
    {
        ans=num*i;
        printf("%d*%d=%d\n",i,num,ans);

    }
    return 0;
    
    }