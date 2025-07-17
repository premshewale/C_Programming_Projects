#include<stdio.h>
int area(int, int); 
int main(){
int breadth, length;
printf("Enter breadth =");
scanf("%d", &breadth);

printf("Enter length =");
 scanf("%d", &length);
int b=area (breadth, length);
 printf("Showing Answer From Function=%d\n",b);
return 0;

}

int area(int breadth, int length)   //defination of function
{
int a;
a=length*breadth;
return a;
printf("Area Of Rectangle=%d\n",a);
}