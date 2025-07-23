#include<stdio.h>
int main()
{

int num1;

printf("Enter 3 Numbers=");
scanf("%d", &num1);

if (num1>0)
printf("number is positive\n");

else if (num1==0)
printf("number is zero \n");

else
printf("number is Negative\n");

return 0;
}