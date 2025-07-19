#include<stdio.h>
int main(){

int num, i,table=0; 
printf("Enter a Number=");
scanf("%d",&num); 

i=1;

printf("table of given Number=%d\n", num); 
while (i<=10)
{
table=num*i;
i++;
printf("%d\n", table);
}
return 0;
}