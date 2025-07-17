#include<stdio.h>
int power(int, int);
int main(){
int num1, num2, a;
printf("Enter number=");
scanf("%d", &num1);
 printf("Enter Power of number=");
scanf("%d", &num2); 

a=power (num1, num2);
printf("Showing Answer From Function=%d\n",a);
return 0;

}

int power(int num1, int num2)
{
int pw=1;
 while (num2>0)
 {
pw=pw*num1;
num2--;
 }
printf("The Power of Number=%d\n", pw);
return pw;
}