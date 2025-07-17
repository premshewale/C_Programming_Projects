#include<stdio.h>
void addition (int, int);
void substraction(int, int); 
void multiplication(int, int);
void division (int, int);
int main()
{
int num1, num2;
char choice;
printf("Enter Two Numbers ="); 
scanf("%d %d", &num1, &num2);
fflush(stdin);
printf("Enter Symbol\n +Addition\n-Substraction\n*Multiplication\n/Division");
scanf("%c", &choice, 1);

switch(choice)
{
case '+': addition (num1,num2);
    break;
case '-':substraction (num1, num2);
    break;
case '*' :multiplication (num1, num2);
    break;
case '/':division (num1, num2);
    break;

default:
printf("Enter A Vaild Data=");
break;
}
return 0;
}


 void addition (int num1, int num2)

{ int ans;
ans=num1+num2;
printf("Addition Of Numbers=%d\n", ans);
}

 void substraction(int num1, int num2)
{
int ans;
ans=num1-num2; 
printf("Substraction of Numbers=%d\n", ans);
}

void multiplication (int num1, int num2)
{
int ans; 
ans=num1*num2;
printf("multiplication of Numbers=%d\n", ans);
}

void division (int num1, int num2)
{
    int ans;
    ans=num1/num2;
 printf("division of Numbers=%d\n", ans);
}