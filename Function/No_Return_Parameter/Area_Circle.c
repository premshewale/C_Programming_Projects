#include<stdio.h>
void area(float);
int main(){
float r;
printf("Enter Radius=");
scanf("%f",&r);

area(r);
return 0;

}

void area(float r)
{

float a,pi=3.14f;

a=pi*r*r;
 printf("Area Of Circle=%f\n",a);
}