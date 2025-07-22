#include<stdio.h>
#define AREA(n1,n2) (0.5)*(n1)*(n2)
int main()
{
int num1,num2, ar;

printf("Enter A Base=");
scanf("%d", &num1);

printf("Enter A Height=");
scanf("%d", &num2);

ar=AREA(num1, num2);

printf("area of Triangle =%d\n",ar); 
return 0;

}