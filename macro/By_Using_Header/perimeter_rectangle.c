#include<stdio.h> 
#include "C:\Users\prems\Header Files\myHeader.h"

int main(){

int num1,num2,ar;

 printf("Enter A Length");
scanf("%d",&num1);

printf("Enter A Breadth");
scanf("%d",&num2);

ar=PERIMETERR(num1,num2);

printf("perimeter of rectangle =%d\n",ar);

return 0;

}
