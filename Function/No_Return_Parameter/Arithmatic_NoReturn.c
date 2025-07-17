#include<stdio.h> 
void addition (int, int);
void substraction(int, int);
void multiplication (int, int) ;
void division (int, int);
int main()
{
int num1,num2;

printf("Enter Two Numbers For Addition="); 
scanf("%d %d", &num1, &num2);
 addition (num1, num2);
  substraction (num1, num2); 
  multiplication (num1,num2);
   division (num1,num2);
    return 0;

} void addition (int num1, int num2)

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