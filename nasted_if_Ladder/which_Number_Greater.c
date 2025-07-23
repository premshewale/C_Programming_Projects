#include<stdio.h>
int main(){

int num1, num2, num3;
 printf("Enter 3 Numbers");

scanf("%d %d %d", &num1, &num2, &num3); 

if (num1>num2 && num1>num3)
printf("First number is greater\n"); 

else if (num2>num3 && num2>num1)
printf("Second number is greater\n");

else
printf("Third number is greater \n");

return 0;
}