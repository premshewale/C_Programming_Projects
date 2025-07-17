#include<stdio.h>
int rectangle (int, int); 
int triangle (int, int);
float circle(float);
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

int a=rectangle(breadth, length);
printf("Showing Answer From Function=%d\n",a);
 int b=triangle (base, height);
printf("Showing Answer From Function= %d\n",b); 
float c=circle(r);
printf("Showing Answer From Function=%f\n",c);

return 0; 

}

int rectangle(int breadth, int length)
{
int a;
a=length *breadth;
printf("Area Of Rectangle=%d\n",a);
return a;
}
int triangle(int breadth, int height)
{
int a;
a=0.5*height*breadth;
printf("Area of Triangle=%d\n", a);
return a;
}
float circle(float r) //defination of function 
{
float a,pi=3.14f;
 a=pi*r*r; printf("Area Of Circle=%f\n",a);
  return a;

}
