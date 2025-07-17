#include<stdio.h>
void square (int);
 void cube(int);
int main(){
int num;
printf("Enter number for Square and Cube=");
 scanf("%d", &num);
square (num);
cube (num);
return 0;

}

void square (int num)
{
int sq;
sq=num*num;
printf("Square of Number=%d\n", sq);
}

void cube (int num)
{
int cb;
cb=num*num*num; 
printf("Cube Of Number=%d\n", cb);
}