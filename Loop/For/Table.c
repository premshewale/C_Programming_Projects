#include<stdio.h>
int main()
{

int num,i,ans;

printf("Enter a Number=");
scanf("%d", &num);

ans=num;
printf("table of given Number=%d\n", num);

for (i=1;i<=10; i++)
{
ans=num*i;
printf("%d*%d=%d\n",num,i,ans);
}
return 0;

}