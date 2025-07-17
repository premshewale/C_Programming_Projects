#include<stdio.h>
int square(int); 
int cube(int);
int main(){
int num, a,b;
printf("Enter number for Square and Cube=");
scanf("%d", &num);

a=square(num); 
printf("Showing Answer From Function-%d\n",a);

b=cube (num);
printf("Showing Answer From Function = %d\n",b);
return 0;
}

int square(int num) //defination of function
{
int sq;
sq=num*num; printf("Square Of Number=%d\n", sq); 
return sq;
}

int cube (int num)      //defination of function
{
int cb;
cb=num*num *num;
printf("Cube Of Number-%d\n", cb); 
return cb;
}