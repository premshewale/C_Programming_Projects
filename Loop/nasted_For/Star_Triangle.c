#include<stdio.h>
int main(){

int num,i,j;
for (i=1;i<=5; i++) 
{
for(j=1;j<=i;j++)
{
printf("*",j);
} 

printf("\n");

} 
return 0; 
}