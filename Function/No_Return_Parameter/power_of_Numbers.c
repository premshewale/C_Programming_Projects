#include<stdio.h>

void power(int, int);
 int main(){

int num1,num2; 
printf("Enter number=");
 scanf("%d", &num1); 
 printf("Enter Power of number="); 
 scanf("%d", &num2); 
 power (num1, num2); 
 return 0; }

void power (int num1, int num2)
{
int pw=1;
 while (num2>0)
{
pw=pw*num1; 
num2--;
 }

printf("The Power of Number=%d\n", pw);
}