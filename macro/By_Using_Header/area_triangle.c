#include<stdio.h>
#include"C:\Users\prems\Header Files\myHeader.h"
int main()
{
int num1,num2, ar;

printf("Enter A Base=");
scanf("%d", &num1);

printf("Enter A Height=");
scanf("%d", &num2);

ar=AREAT(num1, num2);

printf("area of Triangle =%d\n",ar); 
return 0;

}