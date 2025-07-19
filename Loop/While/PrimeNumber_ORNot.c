#include<stdio.h>
int main(){
int num,a,flag;

printf("Enter a Number=");
scanf("%d", &num);

flag=0; 
a=2;

while(a<num)
{
if(num%a==0)
{
flag=1;
}
a++;
}
if(flag==0)
printf("enter number is prime number\n");
else{
printf("enter number is not prime number\n");}

 return 0;
}