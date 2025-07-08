#include<stdio.h>
#include<conio.h>

int main(){

int a[5]={44,55,66,77,88};

int high, i; 

printf("Even Numbers Are=\n");

for(i=0;i<5;i++)

if(a[i]%2==0)
{
printf("%d\n",a[i]);
}
_getch();
return 0;
}