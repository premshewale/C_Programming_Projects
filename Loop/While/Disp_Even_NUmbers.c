#include<stdio.h>
int main()
{
    int num=1,user=0;
    printf("Enter a Number=");
    scanf("%d",&user);
   
while(num<=user)
{            
    if(num%2==0)
    printf("Display Even NUmbers=%d\n",num);
   num++;
}
return 0;
}
