#include<stdio.h>
int main()
{
int num1,num2;

printf("cost price=");
scanf("%d", &num1);

printf("selling price=");
scanf("%d", &num2);

if (num1<num2)
{ printf("user is in Profit\n");
}

else{
printf("user is in Loss\n");
}

return 0;
}