#include<stdio.h>
int main()
{
    float pi=3.14f,radius,area;
    printf("Enter A radius=");
    scanf("%f",&radius);
    area=pi*radius*radius;
    printf("Area of Circle=%.2f",area);
    return 0;

}