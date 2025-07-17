#include<stdio.h>
 float area(float);
int main(){
float r;
printf("Enter Radius="); 
scanf("%f",&r);  

float b=area(r);
printf("Showing Answer From Function=%f\n",b);
return 0;

}

float area(float r) //defination of function 
{
float a,pi=3.14f;
 a=pi*r*r; printf("Area Of Circle=%f\n",a);
  return a;

}