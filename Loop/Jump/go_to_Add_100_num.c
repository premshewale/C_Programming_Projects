#include<stdio.h>
int main()
{
int num,sum=0,i;

 for (i=0;i<100; i++)
{
printf("enter a number=");
scanf("%d", &num);
if (num<0)
    goto display;
sum=sum+num;

} 
printf("after for loop ");

display:
printf("Total Numbers Entered=%d\n", i); 
printf("Total=%d\n", sum); 
return 0;
}