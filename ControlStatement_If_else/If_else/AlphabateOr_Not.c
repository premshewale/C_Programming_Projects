#include<stdio.h>
int main()
{
    char num;
    printf("Enter A character=");
    scanf("%c",&num);
    if((num>=97&&num<=122)||(num>=65&&num<=90))
    {
        printf("Enter Character is a Alphabate");
    }
    else{
        printf("Enter Character is not a Alphabate");
    }
    return 0;
}
