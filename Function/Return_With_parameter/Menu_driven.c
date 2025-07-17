#include<stdio.h>
int addition (int, int); //declarat on of function
int substraction (int, int);
int multiplication (int, int);
int division (int, int); 
int main(){
int num1, num2, a,b,c,d;
char choice;

printf("Enter Two Numbers =");
 scanf("%d %d", &num1, &num2);

printf("Enter Symbol\n +Addition\n-Substraction\n*Multiplication\n/Divsion\n-");
fflush(stdin);
scanf("%c", &choice, 1);
switch(choice)
{
case'+': a=addition (num1,num2);
printf("Showing Answer From Function=%d\n",a); 
    break;

case '-':b=substraction (num1,num2); 
printf("Showing Answer From Function=%d\n",b);
    break;

case '*':c=multiplication(num1, num2);
 printf("Showing Answer From Function=%d\n",c);
    break;

case '/':d=division (num1,num2);
printf("Showing Answer From Function=%3d\n",d);
    break;

default:
printf("Enter A Vaild Data=");
}
 return 0;
}

int addition (int num1, int num2)
{ int ans;
ans=num1+num2;
printf("Addition of Numbers=%d\n", ans);
return ans;
}


int substraction(int num1, int num2)
{
int ans;
 ans=num1-num2; printf("Substraction of Numbers=%d\n",ans);
return ans;
}

int multiplication(int num1, int num2)
{
int ans;
 ans=num1*num2; printf("multiplication of Numbers=%d\n",ans);
return ans;
}

int division(int num1, int num2)
{
int ans;
 ans=num1/num2; printf("division of Numbers=%d\n",ans);
return ans;
}
