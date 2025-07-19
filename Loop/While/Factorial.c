#include<stdio.h> 
int main(){

int num,a,fac;

printf("Enter a Number=");
scanf("%d", &num);

a=1; 
fac=1;

while (num>=a)
{
fac=fac*a;
a++;
}
printf("Factorial of Number=%d=%d\n", num, fac);

return 0;
}