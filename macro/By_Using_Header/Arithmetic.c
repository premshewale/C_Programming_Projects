#include<stdio.h> 
#include "C:\Users\prems\Header Files\Arithmetic.h"
int main(){

int num1, num2;

 printf("Enter Two Numbers For Oprations="); 
 scanf("%d %d", &num1, &num2);

int a=addition (num1,num2);
 printf("Showing Answer From Function_macro=%d\n", a); 

 int b=substraction (num1, num2);
printf("Showing Answer From Function macro=%d\n",b);

 int c=multiplication (num1, num2); 
 printf("Showing Answer From Function macro=%d\n",c); 

 int d=division (num1, num2); 
 printf("Showing Answer From Function macro=%d\n",d);

  return 0;
  }