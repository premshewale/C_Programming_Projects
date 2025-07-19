#include<stdio.h>
int main(){
int num, rem, add=0;

printf("Enter number=");
scanf("%d", &num);

while (num>0)
{
rem=num%10;
num=num/10;
add=add+rem;
}
printf("addition of digit=%d\n", add); 
return 0;
}