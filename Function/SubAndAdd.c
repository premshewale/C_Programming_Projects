#include<stdio.h>
void addition();
 void substraction();
int main()
{
addition();
 substraction();
return 0;

}

void addition()

{ int num1, num2, ans; 
printf("Enter Two Numbers For Addition=");
 scanf("%d %d", &num1, &num2); 
 ans=num1+num2; 
 printf("Addition Of Numbers=%d\n", ans);

} void substraction()

{ int num1, num2, ans; 
printf("Enter Two Numbers For Substaction="); 
scanf("%d %d", &num1, &num2); 
ans=num1-num2; 
printf("Substraction Of Numbers=%d\n", ans);

}