#include<stdio.h>
#include "C:\Users\prems\Header Files\myHeader.h"

int main(){
int num1,num2, num3, ar;

printf("Enter A side 1=");
scanf("%d",&num1);

printf("Enter A side 2=");
scanf("%d", &num2);

printf("Enter A side 3=");
 scanf("%d", &num3);

ar=PERIMETERT(num1,num2,num3); 
printf("Perimeter of Triangle =%d\n",ar);

return 0;

}