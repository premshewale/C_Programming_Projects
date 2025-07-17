#include<stdio.h>
void rectangle(int, int);
void triangle(int, int); 
void circle(float);
int main(){
int breadth, length, base, height;
float r;
printf("Enter breadth for rectangle =");
scanf("%d", &breadth);
printf("Enter length for rectangle =");
scanf("%d", &length); 
printf("Enter Base for triangle=");
scanf("%d", &base);
printf("Enter Height for triangle=");
scanf("%d", &height); 
printf("Enter Radius for Circle=");
scanf("%f",&r);

rectangle (breadth, length) ;
triangle (base, height);
circle(r);
return 0;
}

void rectangle(int breadth, int length)
{
int a;
a=length *breadth;
 printf("Area Of Rectangle=%d\n",a);
}
 
 void triangle(int base, int height) 
{
int a;
a=base*height;
printf("Area Of Rectangle=%d\n",a);
}
void circle(float r)
{

float a,pi=3.14f;

a=pi*r*r;
 printf("Area Of Circle=%f\n",a);
}
