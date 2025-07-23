#include<stdio.h>
int main(){
int num;

 printf("Enter a Number="); 
scanf("%d", &num);

if (num>=10)
{
printf("yes.. entered number if greater than 10\n"); 

if (num>=15)
 printf("yes.. entered number if greater than 15\n");

else
 printf("No.. entered number if Less than 15\n");
}

else{

printf("No.. entered number if not greater than 10\n"); 
if(num<5) 
printf("number is less than 5\n");

}

return 0;

}