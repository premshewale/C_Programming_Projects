#include<stdio.h>
void addition();         //declaration of function

int main()
{
addition();         //calling of function
addition();
addition();
 return 0;
}
void addition()         //defination of function
{int num1,num2, ans;
printf("Enter Two Numbers="); 
scanf("%d", &num1, &num2);

ans= num1+num2;

printf("Addition of Numbers%d\n", ans);
}