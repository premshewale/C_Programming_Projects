#include<stdio.h>
void area(int, int);
int main(){

int breadth, height; 

printf("Enter breadth =");
scanf("%d", &breadth); 

printf("Enter height ="); 
scanf("%d", &height); 

area(breadth, height); 

return 0;
 }
void area (int breadth, int height)
{
int a;

a=0.5*height *breadth;

printf("Area Of Triangle=%d\n", a);
}