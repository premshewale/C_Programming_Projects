#include<stdio.h>
int main()
{
    int num=0;
    do
    {
        printf("hello\n");
        printf("Do you Want to Continue press Key 1=");
        scanf("%d",&num);
    } while (num==1);
   return 0;
}