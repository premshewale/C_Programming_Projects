#include<stdio.h>
#define AREA(n1,n2) (n1)* (n2)
int main()
{
int num1, num2, ar;

printf("Enter A Length=");
scanf("%d", &num1);

printf("Enter A Breadth=");
scanf("%d", &num2);

ar=AREA(num1, num2);

printf("area of rectangle =%d\n", ar); 

return 0;
}