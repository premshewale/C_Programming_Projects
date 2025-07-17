#include<stdio.h>
void area (int, int);
int main(){

int breadth, length;
 printf("Enter breadth =");
  scanf("%d", &breadth); 
  printf("Enter length ="); 
  scanf("%d", &length);
   area(breadth, length); 
   return 0;

}

void area(int breadth, int length)
{
int a;
a=length *breadth;
printf("Area Of Rectangle=%d\n",a);
}