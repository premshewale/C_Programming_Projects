#include<stdio.h>
int area(int, int); 
int main(){
int breadth, height; 
printf("Enter breadth=");
scanf("%d", &breadth); 
printf("Enter height ="); 
scanf("%d", &height); 
int b=area(breadth, height); 
printf("Showing Answer From Function=%d\n",b); 
return 0;

}

int area(int breadth, int height)
{
int a;
a=0.5*height*breadth;
printf("Area of Triangle=%d\n", a);
return a;
}