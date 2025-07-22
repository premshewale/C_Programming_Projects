#include<stdio.h>
#define AREA(n) (3.14)*(n)*(n)

int main()
{

float num, ar;

printf("Enter A Radius=");
scanf("%f",&num);

ar=AREA(num);

printf("area of circle =%f\n", ar); 

return 0;
}